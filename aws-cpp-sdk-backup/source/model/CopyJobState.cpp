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

#include <aws/backup/model/CopyJobState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace CopyJobStateMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        CopyJobState GetCopyJobStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return CopyJobState::CREATED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return CopyJobState::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CopyJobState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CopyJobState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CopyJobState>(hashCode);
          }

          return CopyJobState::NOT_SET;
        }

        Aws::String GetNameForCopyJobState(CopyJobState enumValue)
        {
          switch(enumValue)
          {
          case CopyJobState::CREATED:
            return "CREATED";
          case CopyJobState::RUNNING:
            return "RUNNING";
          case CopyJobState::COMPLETED:
            return "COMPLETED";
          case CopyJobState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CopyJobStateMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
