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

#include <aws/ssm/model/AssociationExecutionFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AssociationExecutionFilterKeyMapper
      {

        static const int ExecutionId_HASH = HashingUtils::HashString("ExecutionId");
        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int CreatedTime_HASH = HashingUtils::HashString("CreatedTime");


        AssociationExecutionFilterKey GetAssociationExecutionFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ExecutionId_HASH)
          {
            return AssociationExecutionFilterKey::ExecutionId;
          }
          else if (hashCode == Status_HASH)
          {
            return AssociationExecutionFilterKey::Status;
          }
          else if (hashCode == CreatedTime_HASH)
          {
            return AssociationExecutionFilterKey::CreatedTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationExecutionFilterKey>(hashCode);
          }

          return AssociationExecutionFilterKey::NOT_SET;
        }

        Aws::String GetNameForAssociationExecutionFilterKey(AssociationExecutionFilterKey enumValue)
        {
          switch(enumValue)
          {
          case AssociationExecutionFilterKey::ExecutionId:
            return "ExecutionId";
          case AssociationExecutionFilterKey::Status:
            return "Status";
          case AssociationExecutionFilterKey::CreatedTime:
            return "CreatedTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationExecutionFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
