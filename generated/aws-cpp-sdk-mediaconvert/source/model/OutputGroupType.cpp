/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/OutputGroupType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace OutputGroupTypeMapper
      {

        static const int HLS_GROUP_SETTINGS_HASH = HashingUtils::HashString("HLS_GROUP_SETTINGS");
        static const int DASH_ISO_GROUP_SETTINGS_HASH = HashingUtils::HashString("DASH_ISO_GROUP_SETTINGS");
        static const int FILE_GROUP_SETTINGS_HASH = HashingUtils::HashString("FILE_GROUP_SETTINGS");
        static const int MS_SMOOTH_GROUP_SETTINGS_HASH = HashingUtils::HashString("MS_SMOOTH_GROUP_SETTINGS");
        static const int CMAF_GROUP_SETTINGS_HASH = HashingUtils::HashString("CMAF_GROUP_SETTINGS");


        OutputGroupType GetOutputGroupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HLS_GROUP_SETTINGS_HASH)
          {
            return OutputGroupType::HLS_GROUP_SETTINGS;
          }
          else if (hashCode == DASH_ISO_GROUP_SETTINGS_HASH)
          {
            return OutputGroupType::DASH_ISO_GROUP_SETTINGS;
          }
          else if (hashCode == FILE_GROUP_SETTINGS_HASH)
          {
            return OutputGroupType::FILE_GROUP_SETTINGS;
          }
          else if (hashCode == MS_SMOOTH_GROUP_SETTINGS_HASH)
          {
            return OutputGroupType::MS_SMOOTH_GROUP_SETTINGS;
          }
          else if (hashCode == CMAF_GROUP_SETTINGS_HASH)
          {
            return OutputGroupType::CMAF_GROUP_SETTINGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputGroupType>(hashCode);
          }

          return OutputGroupType::NOT_SET;
        }

        Aws::String GetNameForOutputGroupType(OutputGroupType enumValue)
        {
          switch(enumValue)
          {
          case OutputGroupType::HLS_GROUP_SETTINGS:
            return "HLS_GROUP_SETTINGS";
          case OutputGroupType::DASH_ISO_GROUP_SETTINGS:
            return "DASH_ISO_GROUP_SETTINGS";
          case OutputGroupType::FILE_GROUP_SETTINGS:
            return "FILE_GROUP_SETTINGS";
          case OutputGroupType::MS_SMOOTH_GROUP_SETTINGS:
            return "MS_SMOOTH_GROUP_SETTINGS";
          case OutputGroupType::CMAF_GROUP_SETTINGS:
            return "CMAF_GROUP_SETTINGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputGroupTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
