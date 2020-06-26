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

#include <aws/cloudformation/model/StackInstanceDetailedStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace StackInstanceDetailedStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int INOPERABLE_HASH = HashingUtils::HashString("INOPERABLE");


        StackInstanceDetailedStatus GetStackInstanceDetailedStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return StackInstanceDetailedStatus::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return StackInstanceDetailedStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return StackInstanceDetailedStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StackInstanceDetailedStatus::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return StackInstanceDetailedStatus::CANCELLED;
          }
          else if (hashCode == INOPERABLE_HASH)
          {
            return StackInstanceDetailedStatus::INOPERABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackInstanceDetailedStatus>(hashCode);
          }

          return StackInstanceDetailedStatus::NOT_SET;
        }

        Aws::String GetNameForStackInstanceDetailedStatus(StackInstanceDetailedStatus enumValue)
        {
          switch(enumValue)
          {
          case StackInstanceDetailedStatus::PENDING:
            return "PENDING";
          case StackInstanceDetailedStatus::RUNNING:
            return "RUNNING";
          case StackInstanceDetailedStatus::SUCCEEDED:
            return "SUCCEEDED";
          case StackInstanceDetailedStatus::FAILED:
            return "FAILED";
          case StackInstanceDetailedStatus::CANCELLED:
            return "CANCELLED";
          case StackInstanceDetailedStatus::INOPERABLE:
            return "INOPERABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackInstanceDetailedStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
