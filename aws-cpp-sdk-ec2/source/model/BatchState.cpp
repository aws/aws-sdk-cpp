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
#include <aws/ec2/model/BatchState.h>
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
      namespace BatchStateMapper
      {

        static const int submitted_HASH = HashingUtils::HashString("submitted");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int cancelled_running_HASH = HashingUtils::HashString("cancelled_running");
        static const int cancelled_terminating_HASH = HashingUtils::HashString("cancelled_terminating");
        static const int modifying_HASH = HashingUtils::HashString("modifying");


        BatchState GetBatchStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == submitted_HASH)
          {
            return BatchState::submitted;
          }
          else if (hashCode == active_HASH)
          {
            return BatchState::active;
          }
          else if (hashCode == cancelled_HASH)
          {
            return BatchState::cancelled;
          }
          else if (hashCode == failed_HASH)
          {
            return BatchState::failed;
          }
          else if (hashCode == cancelled_running_HASH)
          {
            return BatchState::cancelled_running;
          }
          else if (hashCode == cancelled_terminating_HASH)
          {
            return BatchState::cancelled_terminating;
          }
          else if (hashCode == modifying_HASH)
          {
            return BatchState::modifying;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchState>(hashCode);
          }

          return BatchState::NOT_SET;
        }

        Aws::String GetNameForBatchState(BatchState enumValue)
        {
          switch(enumValue)
          {
          case BatchState::submitted:
            return "submitted";
          case BatchState::active:
            return "active";
          case BatchState::cancelled:
            return "cancelled";
          case BatchState::failed:
            return "failed";
          case BatchState::cancelled_running:
            return "cancelled_running";
          case BatchState::cancelled_terminating:
            return "cancelled_terminating";
          case BatchState::modifying:
            return "modifying";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace BatchStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
