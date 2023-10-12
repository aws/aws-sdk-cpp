/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/AccountGateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace AccountGateStatusMapper
      {

        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SKIPPED_HASH = ConstExprHashingUtils::HashString("SKIPPED");


        AccountGateStatus GetAccountGateStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return AccountGateStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AccountGateStatus::FAILED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return AccountGateStatus::SKIPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountGateStatus>(hashCode);
          }

          return AccountGateStatus::NOT_SET;
        }

        Aws::String GetNameForAccountGateStatus(AccountGateStatus enumValue)
        {
          switch(enumValue)
          {
          case AccountGateStatus::NOT_SET:
            return {};
          case AccountGateStatus::SUCCEEDED:
            return "SUCCEEDED";
          case AccountGateStatus::FAILED:
            return "FAILED";
          case AccountGateStatus::SKIPPED:
            return "SKIPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountGateStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
