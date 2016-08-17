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
#include <aws/ec2/model/InstanceStateName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace InstanceStateNameMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int running_HASH = HashingUtils::HashString("running");
        static const int shutting_down_HASH = HashingUtils::HashString("shutting-down");
        static const int terminated_HASH = HashingUtils::HashString("terminated");
        static const int stopping_HASH = HashingUtils::HashString("stopping");
        static const int stopped_HASH = HashingUtils::HashString("stopped");


        InstanceStateName GetInstanceStateNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return InstanceStateName::pending;
          }
          else if (hashCode == running_HASH)
          {
            return InstanceStateName::running;
          }
          else if (hashCode == shutting_down_HASH)
          {
            return InstanceStateName::shutting_down;
          }
          else if (hashCode == terminated_HASH)
          {
            return InstanceStateName::terminated;
          }
          else if (hashCode == stopping_HASH)
          {
            return InstanceStateName::stopping;
          }
          else if (hashCode == stopped_HASH)
          {
            return InstanceStateName::stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceStateName>(hashCode);
          }

          return InstanceStateName::NOT_SET;
        }

        Aws::String GetNameForInstanceStateName(InstanceStateName enumValue)
        {
          switch(enumValue)
          {
          case InstanceStateName::pending:
            return "pending";
          case InstanceStateName::running:
            return "running";
          case InstanceStateName::shutting_down:
            return "shutting-down";
          case InstanceStateName::terminated:
            return "terminated";
          case InstanceStateName::stopping:
            return "stopping";
          case InstanceStateName::stopped:
            return "stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InstanceStateNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
