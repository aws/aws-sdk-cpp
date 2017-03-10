/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/InstanceFleetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace InstanceFleetTypeMapper
      {

        static const int MASTER_HASH = HashingUtils::HashString("MASTER");
        static const int CORE_HASH = HashingUtils::HashString("CORE");
        static const int TASK_HASH = HashingUtils::HashString("TASK");


        InstanceFleetType GetInstanceFleetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MASTER_HASH)
          {
            return InstanceFleetType::MASTER;
          }
          else if (hashCode == CORE_HASH)
          {
            return InstanceFleetType::CORE;
          }
          else if (hashCode == TASK_HASH)
          {
            return InstanceFleetType::TASK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceFleetType>(hashCode);
          }

          return InstanceFleetType::NOT_SET;
        }

        Aws::String GetNameForInstanceFleetType(InstanceFleetType enumValue)
        {
          switch(enumValue)
          {
          case InstanceFleetType::MASTER:
            return "MASTER";
          case InstanceFleetType::CORE:
            return "CORE";
          case InstanceFleetType::TASK:
            return "TASK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InstanceFleetTypeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
