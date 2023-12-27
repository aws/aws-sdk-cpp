/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/OverwriteExisting.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace OverwriteExistingMapper
      {

        static const int TRUE_HASH = HashingUtils::HashString("TRUE");
        static const int FALSE_HASH = HashingUtils::HashString("FALSE");


        OverwriteExisting GetOverwriteExistingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUE_HASH)
          {
            return OverwriteExisting::TRUE;
          }
          else if (hashCode == FALSE_HASH)
          {
            return OverwriteExisting::FALSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OverwriteExisting>(hashCode);
          }

          return OverwriteExisting::NOT_SET;
        }

        Aws::String GetNameForOverwriteExisting(OverwriteExisting enumValue)
        {
          switch(enumValue)
          {
          case OverwriteExisting::NOT_SET:
            return {};
          case OverwriteExisting::TRUE:
            return "TRUE";
          case OverwriteExisting::FALSE:
            return "FALSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OverwriteExistingMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
