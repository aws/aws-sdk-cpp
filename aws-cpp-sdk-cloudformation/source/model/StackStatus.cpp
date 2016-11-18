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
#include <aws/cloudformation/model/StackStatus.h>
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
      namespace StackStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int ROLLBACK_IN_PROGRESS_HASH = HashingUtils::HashString("ROLLBACK_IN_PROGRESS");
        static const int ROLLBACK_FAILED_HASH = HashingUtils::HashString("ROLLBACK_FAILED");
        static const int ROLLBACK_COMPLETE_HASH = HashingUtils::HashString("ROLLBACK_COMPLETE");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETE_COMPLETE_HASH = HashingUtils::HashString("DELETE_COMPLETE");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_COMPLETE_CLEANUP_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_COMPLETE_CLEANUP_IN_PROGRESS");
        static const int UPDATE_COMPLETE_HASH = HashingUtils::HashString("UPDATE_COMPLETE");
        static const int UPDATE_ROLLBACK_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_ROLLBACK_IN_PROGRESS");
        static const int UPDATE_ROLLBACK_FAILED_HASH = HashingUtils::HashString("UPDATE_ROLLBACK_FAILED");
        static const int UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS");
        static const int UPDATE_ROLLBACK_COMPLETE_HASH = HashingUtils::HashString("UPDATE_ROLLBACK_COMPLETE");
        static const int REVIEW_IN_PROGRESS_HASH = HashingUtils::HashString("REVIEW_IN_PROGRESS");


        StackStatus GetStackStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return StackStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return StackStatus::CREATE_FAILED;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return StackStatus::CREATE_COMPLETE;
          }
          else if (hashCode == ROLLBACK_IN_PROGRESS_HASH)
          {
            return StackStatus::ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == ROLLBACK_FAILED_HASH)
          {
            return StackStatus::ROLLBACK_FAILED;
          }
          else if (hashCode == ROLLBACK_COMPLETE_HASH)
          {
            return StackStatus::ROLLBACK_COMPLETE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return StackStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return StackStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return StackStatus::DELETE_COMPLETE;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return StackStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_COMPLETE_CLEANUP_IN_PROGRESS_HASH)
          {
            return StackStatus::UPDATE_COMPLETE_CLEANUP_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return StackStatus::UPDATE_COMPLETE;
          }
          else if (hashCode == UPDATE_ROLLBACK_IN_PROGRESS_HASH)
          {
            return StackStatus::UPDATE_ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_ROLLBACK_FAILED_HASH)
          {
            return StackStatus::UPDATE_ROLLBACK_FAILED;
          }
          else if (hashCode == UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS_HASH)
          {
            return StackStatus::UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_ROLLBACK_COMPLETE_HASH)
          {
            return StackStatus::UPDATE_ROLLBACK_COMPLETE;
          }
          else if (hashCode == REVIEW_IN_PROGRESS_HASH)
          {
            return StackStatus::REVIEW_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackStatus>(hashCode);
          }

          return StackStatus::NOT_SET;
        }

        Aws::String GetNameForStackStatus(StackStatus enumValue)
        {
          switch(enumValue)
          {
          case StackStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case StackStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case StackStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case StackStatus::ROLLBACK_IN_PROGRESS:
            return "ROLLBACK_IN_PROGRESS";
          case StackStatus::ROLLBACK_FAILED:
            return "ROLLBACK_FAILED";
          case StackStatus::ROLLBACK_COMPLETE:
            return "ROLLBACK_COMPLETE";
          case StackStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case StackStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case StackStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case StackStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case StackStatus::UPDATE_COMPLETE_CLEANUP_IN_PROGRESS:
            return "UPDATE_COMPLETE_CLEANUP_IN_PROGRESS";
          case StackStatus::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          case StackStatus::UPDATE_ROLLBACK_IN_PROGRESS:
            return "UPDATE_ROLLBACK_IN_PROGRESS";
          case StackStatus::UPDATE_ROLLBACK_FAILED:
            return "UPDATE_ROLLBACK_FAILED";
          case StackStatus::UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS:
            return "UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS";
          case StackStatus::UPDATE_ROLLBACK_COMPLETE:
            return "UPDATE_ROLLBACK_COMPLETE";
          case StackStatus::REVIEW_IN_PROGRESS:
            return "REVIEW_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace StackStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
