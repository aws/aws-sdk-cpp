/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Budgets
  {
    namespace Model
    {
      namespace ActionTypeMapper
      {

        static const int APPLY_IAM_POLICY_HASH = HashingUtils::HashString("APPLY_IAM_POLICY");
        static const int APPLY_SCP_POLICY_HASH = HashingUtils::HashString("APPLY_SCP_POLICY");
        static const int RUN_SSM_DOCUMENTS_HASH = HashingUtils::HashString("RUN_SSM_DOCUMENTS");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLY_IAM_POLICY_HASH)
          {
            return ActionType::APPLY_IAM_POLICY;
          }
          else if (hashCode == APPLY_SCP_POLICY_HASH)
          {
            return ActionType::APPLY_SCP_POLICY;
          }
          else if (hashCode == RUN_SSM_DOCUMENTS_HASH)
          {
            return ActionType::RUN_SSM_DOCUMENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionType>(hashCode);
          }

          return ActionType::NOT_SET;
        }

        Aws::String GetNameForActionType(ActionType enumValue)
        {
          switch(enumValue)
          {
          case ActionType::APPLY_IAM_POLICY:
            return "APPLY_IAM_POLICY";
          case ActionType::APPLY_SCP_POLICY:
            return "APPLY_SCP_POLICY";
          case ActionType::RUN_SSM_DOCUMENTS:
            return "RUN_SSM_DOCUMENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionTypeMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
