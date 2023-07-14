/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265SceneChangeDetect.h>
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
      namespace H265SceneChangeDetectMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int TRANSITION_DETECTION_HASH = HashingUtils::HashString("TRANSITION_DETECTION");


        H265SceneChangeDetect GetH265SceneChangeDetectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H265SceneChangeDetect::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H265SceneChangeDetect::ENABLED;
          }
          else if (hashCode == TRANSITION_DETECTION_HASH)
          {
            return H265SceneChangeDetect::TRANSITION_DETECTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265SceneChangeDetect>(hashCode);
          }

          return H265SceneChangeDetect::NOT_SET;
        }

        Aws::String GetNameForH265SceneChangeDetect(H265SceneChangeDetect enumValue)
        {
          switch(enumValue)
          {
          case H265SceneChangeDetect::DISABLED:
            return "DISABLED";
          case H265SceneChangeDetect::ENABLED:
            return "ENABLED";
          case H265SceneChangeDetect::TRANSITION_DETECTION:
            return "TRANSITION_DETECTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265SceneChangeDetectMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
