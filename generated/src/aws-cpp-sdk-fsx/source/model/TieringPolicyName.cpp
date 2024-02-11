/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/TieringPolicyName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace TieringPolicyNameMapper
      {

        static const int SNAPSHOT_ONLY_HASH = HashingUtils::HashString("SNAPSHOT_ONLY");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        TieringPolicyName GetTieringPolicyNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SNAPSHOT_ONLY_HASH)
          {
            return TieringPolicyName::SNAPSHOT_ONLY;
          }
          else if (hashCode == AUTO_HASH)
          {
            return TieringPolicyName::AUTO;
          }
          else if (hashCode == ALL_HASH)
          {
            return TieringPolicyName::ALL;
          }
          else if (hashCode == NONE_HASH)
          {
            return TieringPolicyName::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TieringPolicyName>(hashCode);
          }

          return TieringPolicyName::NOT_SET;
        }

        Aws::String GetNameForTieringPolicyName(TieringPolicyName enumValue)
        {
          switch(enumValue)
          {
          case TieringPolicyName::NOT_SET:
            return {};
          case TieringPolicyName::SNAPSHOT_ONLY:
            return "SNAPSHOT_ONLY";
          case TieringPolicyName::AUTO:
            return "AUTO";
          case TieringPolicyName::ALL:
            return "ALL";
          case TieringPolicyName::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TieringPolicyNameMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
