/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/OrganizationRuleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace OrganizationRuleStatusMapper
      {

        static constexpr uint32_t CREATE_SUCCESSFUL_HASH = ConstExprHashingUtils::HashString("CREATE_SUCCESSFUL");
        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t DELETE_SUCCESSFUL_HASH = ConstExprHashingUtils::HashString("DELETE_SUCCESSFUL");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t UPDATE_SUCCESSFUL_HASH = ConstExprHashingUtils::HashString("UPDATE_SUCCESSFUL");
        static constexpr uint32_t UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_IN_PROGRESS");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        OrganizationRuleStatus GetOrganizationRuleStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_SUCCESSFUL_HASH)
          {
            return OrganizationRuleStatus::CREATE_SUCCESSFUL;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return OrganizationRuleStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return OrganizationRuleStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_SUCCESSFUL_HASH)
          {
            return OrganizationRuleStatus::DELETE_SUCCESSFUL;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return OrganizationRuleStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return OrganizationRuleStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_SUCCESSFUL_HASH)
          {
            return OrganizationRuleStatus::UPDATE_SUCCESSFUL;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return OrganizationRuleStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return OrganizationRuleStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationRuleStatus>(hashCode);
          }

          return OrganizationRuleStatus::NOT_SET;
        }

        Aws::String GetNameForOrganizationRuleStatus(OrganizationRuleStatus enumValue)
        {
          switch(enumValue)
          {
          case OrganizationRuleStatus::NOT_SET:
            return {};
          case OrganizationRuleStatus::CREATE_SUCCESSFUL:
            return "CREATE_SUCCESSFUL";
          case OrganizationRuleStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case OrganizationRuleStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case OrganizationRuleStatus::DELETE_SUCCESSFUL:
            return "DELETE_SUCCESSFUL";
          case OrganizationRuleStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case OrganizationRuleStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case OrganizationRuleStatus::UPDATE_SUCCESSFUL:
            return "UPDATE_SUCCESSFUL";
          case OrganizationRuleStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case OrganizationRuleStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationRuleStatusMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
