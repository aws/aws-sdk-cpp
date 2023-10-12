/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/RuleGroupsNamespaceStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrometheusService
  {
    namespace Model
    {
      namespace RuleGroupsNamespaceStatusCodeMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("CREATION_FAILED");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        RuleGroupsNamespaceStatusCode GetRuleGroupsNamespaceStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return RuleGroupsNamespaceStatusCode::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return RuleGroupsNamespaceStatusCode::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return RuleGroupsNamespaceStatusCode::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return RuleGroupsNamespaceStatusCode::DELETING;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return RuleGroupsNamespaceStatusCode::CREATION_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return RuleGroupsNamespaceStatusCode::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleGroupsNamespaceStatusCode>(hashCode);
          }

          return RuleGroupsNamespaceStatusCode::NOT_SET;
        }

        Aws::String GetNameForRuleGroupsNamespaceStatusCode(RuleGroupsNamespaceStatusCode enumValue)
        {
          switch(enumValue)
          {
          case RuleGroupsNamespaceStatusCode::NOT_SET:
            return {};
          case RuleGroupsNamespaceStatusCode::CREATING:
            return "CREATING";
          case RuleGroupsNamespaceStatusCode::ACTIVE:
            return "ACTIVE";
          case RuleGroupsNamespaceStatusCode::UPDATING:
            return "UPDATING";
          case RuleGroupsNamespaceStatusCode::DELETING:
            return "DELETING";
          case RuleGroupsNamespaceStatusCode::CREATION_FAILED:
            return "CREATION_FAILED";
          case RuleGroupsNamespaceStatusCode::UPDATE_FAILED:
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

      } // namespace RuleGroupsNamespaceStatusCodeMapper
    } // namespace Model
  } // namespace PrometheusService
} // namespace Aws
