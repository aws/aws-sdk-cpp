/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/VoiceConnectorAwsRegion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace VoiceConnectorAwsRegionMapper
      {

        static const int us_east_1_HASH = HashingUtils::HashString("us-east-1");
        static const int us_west_2_HASH = HashingUtils::HashString("us-west-2");


        VoiceConnectorAwsRegion GetVoiceConnectorAwsRegionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == us_east_1_HASH)
          {
            return VoiceConnectorAwsRegion::us_east_1;
          }
          else if (hashCode == us_west_2_HASH)
          {
            return VoiceConnectorAwsRegion::us_west_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoiceConnectorAwsRegion>(hashCode);
          }

          return VoiceConnectorAwsRegion::NOT_SET;
        }

        Aws::String GetNameForVoiceConnectorAwsRegion(VoiceConnectorAwsRegion enumValue)
        {
          switch(enumValue)
          {
          case VoiceConnectorAwsRegion::us_east_1:
            return "us-east-1";
          case VoiceConnectorAwsRegion::us_west_2:
            return "us-west-2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoiceConnectorAwsRegionMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
