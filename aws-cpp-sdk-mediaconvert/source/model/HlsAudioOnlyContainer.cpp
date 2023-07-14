/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsAudioOnlyContainer.h>
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
      namespace HlsAudioOnlyContainerMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int M2TS_HASH = HashingUtils::HashString("M2TS");


        HlsAudioOnlyContainer GetHlsAudioOnlyContainerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return HlsAudioOnlyContainer::AUTOMATIC;
          }
          else if (hashCode == M2TS_HASH)
          {
            return HlsAudioOnlyContainer::M2TS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsAudioOnlyContainer>(hashCode);
          }

          return HlsAudioOnlyContainer::NOT_SET;
        }

        Aws::String GetNameForHlsAudioOnlyContainer(HlsAudioOnlyContainer enumValue)
        {
          switch(enumValue)
          {
          case HlsAudioOnlyContainer::AUTOMATIC:
            return "AUTOMATIC";
          case HlsAudioOnlyContainer::M2TS:
            return "M2TS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsAudioOnlyContainerMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
