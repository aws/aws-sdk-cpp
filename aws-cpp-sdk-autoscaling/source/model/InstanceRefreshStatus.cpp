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

#include <aws/autoscaling/model/InstanceRefreshStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace InstanceRefreshStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Successful_HASH = HashingUtils::HashString("Successful");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Cancelling_HASH = HashingUtils::HashString("Cancelling");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");


        InstanceRefreshStatus GetInstanceRefreshStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return InstanceRefreshStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return InstanceRefreshStatus::InProgress;
          }
          else if (hashCode == Successful_HASH)
          {
            return InstanceRefreshStatus::Successful;
          }
          else if (hashCode == Failed_HASH)
          {
            return InstanceRefreshStatus::Failed;
          }
          else if (hashCode == Cancelling_HASH)
          {
            return InstanceRefreshStatus::Cancelling;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return InstanceRefreshStatus::Cancelled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceRefreshStatus>(hashCode);
          }

          return InstanceRefreshStatus::NOT_SET;
        }

        Aws::String GetNameForInstanceRefreshStatus(InstanceRefreshStatus enumValue)
        {
          switch(enumValue)
          {
          case InstanceRefreshStatus::Pending:
            return "Pending";
          case InstanceRefreshStatus::InProgress:
            return "InProgress";
          case InstanceRefreshStatus::Successful:
            return "Successful";
          case InstanceRefreshStatus::Failed:
            return "Failed";
          case InstanceRefreshStatus::Cancelling:
            return "Cancelling";
          case InstanceRefreshStatus::Cancelled:
            return "Cancelled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceRefreshStatusMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
