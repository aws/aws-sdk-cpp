/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/MediaStorageConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace MediaStorageConfigurationStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        MediaStorageConfigurationStatus GetMediaStorageConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return MediaStorageConfigurationStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return MediaStorageConfigurationStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaStorageConfigurationStatus>(hashCode);
          }

          return MediaStorageConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForMediaStorageConfigurationStatus(MediaStorageConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case MediaStorageConfigurationStatus::ENABLED:
            return "ENABLED";
          case MediaStorageConfigurationStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaStorageConfigurationStatusMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
