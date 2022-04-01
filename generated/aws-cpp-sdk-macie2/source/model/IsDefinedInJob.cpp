/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/IsDefinedInJob.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace IsDefinedInJobMapper
      {

        static const int TRUE_HASH = HashingUtils::HashString("TRUE");
        static const int FALSE_HASH = HashingUtils::HashString("FALSE");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        IsDefinedInJob GetIsDefinedInJobForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUE_HASH)
          {
            return IsDefinedInJob::TRUE;
          }
          else if (hashCode == FALSE_HASH)
          {
            return IsDefinedInJob::FALSE;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return IsDefinedInJob::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsDefinedInJob>(hashCode);
          }

          return IsDefinedInJob::NOT_SET;
        }

        Aws::String GetNameForIsDefinedInJob(IsDefinedInJob enumValue)
        {
          switch(enumValue)
          {
          case IsDefinedInJob::TRUE:
            return "TRUE";
          case IsDefinedInJob::FALSE:
            return "FALSE";
          case IsDefinedInJob::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IsDefinedInJobMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
