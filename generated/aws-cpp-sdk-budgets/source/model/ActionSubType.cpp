/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ActionSubType.h>
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
      namespace ActionSubTypeMapper
      {

        static const int STOP_EC2_INSTANCES_HASH = HashingUtils::HashString("STOP_EC2_INSTANCES");
        static const int STOP_RDS_INSTANCES_HASH = HashingUtils::HashString("STOP_RDS_INSTANCES");


        ActionSubType GetActionSubTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOP_EC2_INSTANCES_HASH)
          {
            return ActionSubType::STOP_EC2_INSTANCES;
          }
          else if (hashCode == STOP_RDS_INSTANCES_HASH)
          {
            return ActionSubType::STOP_RDS_INSTANCES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionSubType>(hashCode);
          }

          return ActionSubType::NOT_SET;
        }

        Aws::String GetNameForActionSubType(ActionSubType enumValue)
        {
          switch(enumValue)
          {
          case ActionSubType::STOP_EC2_INSTANCES:
            return "STOP_EC2_INSTANCES";
          case ActionSubType::STOP_RDS_INSTANCES:
            return "STOP_RDS_INSTANCES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionSubTypeMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
