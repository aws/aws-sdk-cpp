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

#include <aws/iam/model/DeletionTaskStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace DeletionTaskStatusTypeMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");


        DeletionTaskStatusType GetDeletionTaskStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return DeletionTaskStatusType::SUCCEEDED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return DeletionTaskStatusType::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeletionTaskStatusType::FAILED;
          }
          else if (hashCode == NOT_STARTED_HASH)
          {
            return DeletionTaskStatusType::NOT_STARTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeletionTaskStatusType>(hashCode);
          }

          return DeletionTaskStatusType::NOT_SET;
        }

        Aws::String GetNameForDeletionTaskStatusType(DeletionTaskStatusType enumValue)
        {
          switch(enumValue)
          {
          case DeletionTaskStatusType::SUCCEEDED:
            return "SUCCEEDED";
          case DeletionTaskStatusType::IN_PROGRESS:
            return "IN_PROGRESS";
          case DeletionTaskStatusType::FAILED:
            return "FAILED";
          case DeletionTaskStatusType::NOT_STARTED:
            return "NOT_STARTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeletionTaskStatusTypeMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
