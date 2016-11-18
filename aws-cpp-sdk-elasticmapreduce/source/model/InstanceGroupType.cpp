﻿/*
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
#include <aws/elasticmapreduce/model/InstanceGroupType.h>
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
      namespace InstanceGroupTypeMapper
      {

        static const int MASTER_HASH = HashingUtils::HashString("MASTER");
        static const int CORE_HASH = HashingUtils::HashString("CORE");
        static const int TASK_HASH = HashingUtils::HashString("TASK");


        InstanceGroupType GetInstanceGroupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MASTER_HASH)
          {
            return InstanceGroupType::MASTER;
          }
          else if (hashCode == CORE_HASH)
          {
            return InstanceGroupType::CORE;
          }
          else if (hashCode == TASK_HASH)
          {
            return InstanceGroupType::TASK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceGroupType>(hashCode);
          }

          return InstanceGroupType::NOT_SET;
        }

        Aws::String GetNameForInstanceGroupType(InstanceGroupType enumValue)
        {
          switch(enumValue)
          {
          case InstanceGroupType::MASTER:
            return "MASTER";
          case InstanceGroupType::CORE:
            return "CORE";
          case InstanceGroupType::TASK:
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

      } // namespace InstanceGroupTypeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
