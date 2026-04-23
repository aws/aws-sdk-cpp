/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/AuditTaskType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace AuditTaskTypeMapper
      {

        static const int ON_DEMAND_AUDIT_TASK_HASH = HashingUtils::HashString("ON_DEMAND_AUDIT_TASK");
        static const int SCHEDULED_AUDIT_TASK_HASH = HashingUtils::HashString("SCHEDULED_AUDIT_TASK");


        AuditTaskType GetAuditTaskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_DEMAND_AUDIT_TASK_HASH)
          {
            return AuditTaskType::ON_DEMAND_AUDIT_TASK;
          }
          else if (hashCode == SCHEDULED_AUDIT_TASK_HASH)
          {
            return AuditTaskType::SCHEDULED_AUDIT_TASK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditTaskType>(hashCode);
          }

          return AuditTaskType::NOT_SET;
        }

        Aws::String GetNameForAuditTaskType(AuditTaskType enumValue)
        {
          switch(enumValue)
          {
          case AuditTaskType::ON_DEMAND_AUDIT_TASK:
            return "ON_DEMAND_AUDIT_TASK";
          case AuditTaskType::SCHEDULED_AUDIT_TASK:
            return "SCHEDULED_AUDIT_TASK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuditTaskTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
