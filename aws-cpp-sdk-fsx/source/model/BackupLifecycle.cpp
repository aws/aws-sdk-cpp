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

#include <aws/fsx/model/BackupLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace BackupLifecycleMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        BackupLifecycle GetBackupLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return BackupLifecycle::AVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return BackupLifecycle::CREATING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return BackupLifecycle::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BackupLifecycle::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupLifecycle>(hashCode);
          }

          return BackupLifecycle::NOT_SET;
        }

        Aws::String GetNameForBackupLifecycle(BackupLifecycle enumValue)
        {
          switch(enumValue)
          {
          case BackupLifecycle::AVAILABLE:
            return "AVAILABLE";
          case BackupLifecycle::CREATING:
            return "CREATING";
          case BackupLifecycle::DELETED:
            return "DELETED";
          case BackupLifecycle::FAILED:
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

      } // namespace BackupLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
