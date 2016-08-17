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
#include <aws/cloudformation/model/ChangeSetStatus.h>
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
      namespace ChangeSetStatusMapper
      {

        static const int CREATE_PENDING_HASH = HashingUtils::HashString("CREATE_PENDING");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int DELETE_COMPLETE_HASH = HashingUtils::HashString("DELETE_COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ChangeSetStatus GetChangeSetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_PENDING_HASH)
          {
            return ChangeSetStatus::CREATE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ChangeSetStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return ChangeSetStatus::CREATE_COMPLETE;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return ChangeSetStatus::DELETE_COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChangeSetStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeSetStatus>(hashCode);
          }

          return ChangeSetStatus::NOT_SET;
        }

        Aws::String GetNameForChangeSetStatus(ChangeSetStatus enumValue)
        {
          switch(enumValue)
          {
          case ChangeSetStatus::CREATE_PENDING:
            return "CREATE_PENDING";
          case ChangeSetStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ChangeSetStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case ChangeSetStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case ChangeSetStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ChangeSetStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
