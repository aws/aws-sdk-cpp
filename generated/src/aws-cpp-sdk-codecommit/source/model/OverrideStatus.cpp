/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/OverrideStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace OverrideStatusMapper
      {

        static const int OVERRIDE_HASH = HashingUtils::HashString("OVERRIDE");
        static const int REVOKE_HASH = HashingUtils::HashString("REVOKE");


        OverrideStatus GetOverrideStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OVERRIDE_HASH)
          {
            return OverrideStatus::OVERRIDE;
          }
          else if (hashCode == REVOKE_HASH)
          {
            return OverrideStatus::REVOKE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OverrideStatus>(hashCode);
          }

          return OverrideStatus::NOT_SET;
        }

        Aws::String GetNameForOverrideStatus(OverrideStatus enumValue)
        {
          switch(enumValue)
          {
          case OverrideStatus::OVERRIDE:
            return "OVERRIDE";
          case OverrideStatus::REVOKE:
            return "REVOKE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OverrideStatusMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
