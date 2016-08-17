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
#include <aws/cloudformation/model/ResourceStatus.h>
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
      namespace ResourceStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETE_COMPLETE_HASH = HashingUtils::HashString("DELETE_COMPLETE");
        static const int DELETE_SKIPPED_HASH = HashingUtils::HashString("DELETE_SKIPPED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int UPDATE_COMPLETE_HASH = HashingUtils::HashString("UPDATE_COMPLETE");


        ResourceStatus GetResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ResourceStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ResourceStatus::CREATE_FAILED;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return ResourceStatus::CREATE_COMPLETE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ResourceStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ResourceStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return ResourceStatus::DELETE_COMPLETE;
          }
          else if (hashCode == DELETE_SKIPPED_HASH)
          {
            return ResourceStatus::DELETE_SKIPPED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ResourceStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ResourceStatus::UPDATE_FAILED;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return ResourceStatus::UPDATE_COMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceStatus>(hashCode);
          }

          return ResourceStatus::NOT_SET;
        }

        Aws::String GetNameForResourceStatus(ResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ResourceStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ResourceStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case ResourceStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ResourceStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ResourceStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case ResourceStatus::DELETE_SKIPPED:
            return "DELETE_SKIPPED";
          case ResourceStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case ResourceStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case ResourceStatus::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ResourceStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
