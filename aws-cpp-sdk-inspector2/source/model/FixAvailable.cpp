/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FixAvailable.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace FixAvailableMapper
      {

        static const int YES_HASH = HashingUtils::HashString("YES");
        static const int NO_HASH = HashingUtils::HashString("NO");
        static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");


        FixAvailable GetFixAvailableForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == YES_HASH)
          {
            return FixAvailable::YES;
          }
          else if (hashCode == NO_HASH)
          {
            return FixAvailable::NO;
          }
          else if (hashCode == PARTIAL_HASH)
          {
            return FixAvailable::PARTIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FixAvailable>(hashCode);
          }

          return FixAvailable::NOT_SET;
        }

        Aws::String GetNameForFixAvailable(FixAvailable enumValue)
        {
          switch(enumValue)
          {
          case FixAvailable::YES:
            return "YES";
          case FixAvailable::NO:
            return "NO";
          case FixAvailable::PARTIAL:
            return "PARTIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FixAvailableMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
