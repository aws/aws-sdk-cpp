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

#include <aws/quicksight/model/ResourceStatus.h>
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
      namespace ResourceStatusMapper
      {

        static const int CREATION_IN_PROGRESS_HASH = HashingUtils::HashString("CREATION_IN_PROGRESS");
        static const int CREATION_SUCCESSFUL_HASH = HashingUtils::HashString("CREATION_SUCCESSFUL");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_SUCCESSFUL_HASH = HashingUtils::HashString("UPDATE_SUCCESSFUL");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        ResourceStatus GetResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATION_IN_PROGRESS_HASH)
          {
            return ResourceStatus::CREATION_IN_PROGRESS;
          }
          else if (hashCode == CREATION_SUCCESSFUL_HASH)
          {
            return ResourceStatus::CREATION_SUCCESSFUL;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return ResourceStatus::CREATION_FAILED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ResourceStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_SUCCESSFUL_HASH)
          {
            return ResourceStatus::UPDATE_SUCCESSFUL;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ResourceStatus::UPDATE_FAILED;
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
          case ResourceStatus::CREATION_IN_PROGRESS:
            return "CREATION_IN_PROGRESS";
          case ResourceStatus::CREATION_SUCCESSFUL:
            return "CREATION_SUCCESSFUL";
          case ResourceStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          case ResourceStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case ResourceStatus::UPDATE_SUCCESSFUL:
            return "UPDATE_SUCCESSFUL";
          case ResourceStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
