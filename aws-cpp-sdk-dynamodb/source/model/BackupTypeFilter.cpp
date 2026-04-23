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

#include <aws/dynamodb/model/BackupTypeFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace BackupTypeFilterMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");
        static const int AWS_BACKUP_HASH = HashingUtils::HashString("AWS_BACKUP");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        BackupTypeFilter GetBackupTypeFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return BackupTypeFilter::USER;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return BackupTypeFilter::SYSTEM;
          }
          else if (hashCode == AWS_BACKUP_HASH)
          {
            return BackupTypeFilter::AWS_BACKUP;
          }
          else if (hashCode == ALL_HASH)
          {
            return BackupTypeFilter::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupTypeFilter>(hashCode);
          }

          return BackupTypeFilter::NOT_SET;
        }

        Aws::String GetNameForBackupTypeFilter(BackupTypeFilter enumValue)
        {
          switch(enumValue)
          {
          case BackupTypeFilter::USER:
            return "USER";
          case BackupTypeFilter::SYSTEM:
            return "SYSTEM";
          case BackupTypeFilter::AWS_BACKUP:
            return "AWS_BACKUP";
          case BackupTypeFilter::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupTypeFilterMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
