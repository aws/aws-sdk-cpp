/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/HasLogicalRedundancy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace HasLogicalRedundancyMapper
      {

        static const int unknown_HASH = HashingUtils::HashString("unknown");
        static const int yes_HASH = HashingUtils::HashString("yes");
        static const int no_HASH = HashingUtils::HashString("no");


        HasLogicalRedundancy GetHasLogicalRedundancyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unknown_HASH)
          {
            return HasLogicalRedundancy::unknown;
          }
          else if (hashCode == yes_HASH)
          {
            return HasLogicalRedundancy::yes;
          }
          else if (hashCode == no_HASH)
          {
            return HasLogicalRedundancy::no;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HasLogicalRedundancy>(hashCode);
          }

          return HasLogicalRedundancy::NOT_SET;
        }

        Aws::String GetNameForHasLogicalRedundancy(HasLogicalRedundancy enumValue)
        {
          switch(enumValue)
          {
          case HasLogicalRedundancy::unknown:
            return "unknown";
          case HasLogicalRedundancy::yes:
            return "yes";
          case HasLogicalRedundancy::no:
            return "no";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HasLogicalRedundancyMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
