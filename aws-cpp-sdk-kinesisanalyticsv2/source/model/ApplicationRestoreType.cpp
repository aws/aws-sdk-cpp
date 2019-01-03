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

#include <aws/kinesisanalyticsv2/model/ApplicationRestoreType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace ApplicationRestoreTypeMapper
      {

        static const int SKIP_RESTORE_FROM_SNAPSHOT_HASH = HashingUtils::HashString("SKIP_RESTORE_FROM_SNAPSHOT");
        static const int RESTORE_FROM_LATEST_SNAPSHOT_HASH = HashingUtils::HashString("RESTORE_FROM_LATEST_SNAPSHOT");
        static const int RESTORE_FROM_CUSTOM_SNAPSHOT_HASH = HashingUtils::HashString("RESTORE_FROM_CUSTOM_SNAPSHOT");


        ApplicationRestoreType GetApplicationRestoreTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SKIP_RESTORE_FROM_SNAPSHOT_HASH)
          {
            return ApplicationRestoreType::SKIP_RESTORE_FROM_SNAPSHOT;
          }
          else if (hashCode == RESTORE_FROM_LATEST_SNAPSHOT_HASH)
          {
            return ApplicationRestoreType::RESTORE_FROM_LATEST_SNAPSHOT;
          }
          else if (hashCode == RESTORE_FROM_CUSTOM_SNAPSHOT_HASH)
          {
            return ApplicationRestoreType::RESTORE_FROM_CUSTOM_SNAPSHOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationRestoreType>(hashCode);
          }

          return ApplicationRestoreType::NOT_SET;
        }

        Aws::String GetNameForApplicationRestoreType(ApplicationRestoreType enumValue)
        {
          switch(enumValue)
          {
          case ApplicationRestoreType::SKIP_RESTORE_FROM_SNAPSHOT:
            return "SKIP_RESTORE_FROM_SNAPSHOT";
          case ApplicationRestoreType::RESTORE_FROM_LATEST_SNAPSHOT:
            return "RESTORE_FROM_LATEST_SNAPSHOT";
          case ApplicationRestoreType::RESTORE_FROM_CUSTOM_SNAPSHOT:
            return "RESTORE_FROM_CUSTOM_SNAPSHOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationRestoreTypeMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
