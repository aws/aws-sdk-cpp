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

#include <aws/quicksight/model/IngestionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace IngestionStatusMapper
      {

        static const int INITIALIZED_HASH = HashingUtils::HashString("INITIALIZED");
        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        IngestionStatus GetIngestionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZED_HASH)
          {
            return IngestionStatus::INITIALIZED;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return IngestionStatus::QUEUED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return IngestionStatus::RUNNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return IngestionStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return IngestionStatus::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return IngestionStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionStatus>(hashCode);
          }

          return IngestionStatus::NOT_SET;
        }

        Aws::String GetNameForIngestionStatus(IngestionStatus enumValue)
        {
          switch(enumValue)
          {
          case IngestionStatus::INITIALIZED:
            return "INITIALIZED";
          case IngestionStatus::QUEUED:
            return "QUEUED";
          case IngestionStatus::RUNNING:
            return "RUNNING";
          case IngestionStatus::FAILED:
            return "FAILED";
          case IngestionStatus::COMPLETED:
            return "COMPLETED";
          case IngestionStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
