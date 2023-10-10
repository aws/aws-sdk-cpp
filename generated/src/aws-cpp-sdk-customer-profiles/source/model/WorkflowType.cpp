/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/WorkflowType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace WorkflowTypeMapper
      {

        static const int APPFLOW_INTEGRATION_HASH = HashingUtils::HashString("APPFLOW_INTEGRATION");


        WorkflowType GetWorkflowTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPFLOW_INTEGRATION_HASH)
          {
            return WorkflowType::APPFLOW_INTEGRATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowType>(hashCode);
          }

          return WorkflowType::NOT_SET;
        }

        Aws::String GetNameForWorkflowType(WorkflowType enumValue)
        {
          switch(enumValue)
          {
          case WorkflowType::NOT_SET:
            return {};
          case WorkflowType::APPFLOW_INTEGRATION:
            return "APPFLOW_INTEGRATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
