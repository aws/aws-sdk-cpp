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

#include <aws/ecs/model/ContainerInstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace ContainerInstanceStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DRAINING_HASH = HashingUtils::HashString("DRAINING");
        static const int REGISTERING_HASH = HashingUtils::HashString("REGISTERING");
        static const int DEREGISTERING_HASH = HashingUtils::HashString("DEREGISTERING");
        static const int REGISTRATION_FAILED_HASH = HashingUtils::HashString("REGISTRATION_FAILED");


        ContainerInstanceStatus GetContainerInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ContainerInstanceStatus::ACTIVE;
          }
          else if (hashCode == DRAINING_HASH)
          {
            return ContainerInstanceStatus::DRAINING;
          }
          else if (hashCode == REGISTERING_HASH)
          {
            return ContainerInstanceStatus::REGISTERING;
          }
          else if (hashCode == DEREGISTERING_HASH)
          {
            return ContainerInstanceStatus::DEREGISTERING;
          }
          else if (hashCode == REGISTRATION_FAILED_HASH)
          {
            return ContainerInstanceStatus::REGISTRATION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerInstanceStatus>(hashCode);
          }

          return ContainerInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForContainerInstanceStatus(ContainerInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case ContainerInstanceStatus::ACTIVE:
            return "ACTIVE";
          case ContainerInstanceStatus::DRAINING:
            return "DRAINING";
          case ContainerInstanceStatus::REGISTERING:
            return "REGISTERING";
          case ContainerInstanceStatus::DEREGISTERING:
            return "DEREGISTERING";
          case ContainerInstanceStatus::REGISTRATION_FAILED:
            return "REGISTRATION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerInstanceStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
