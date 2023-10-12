/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/TranscribeMedicalRegion.h>
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
      namespace TranscribeMedicalRegionMapper
      {

        static constexpr uint32_t us_east_1_HASH = ConstExprHashingUtils::HashString("us-east-1");
        static constexpr uint32_t us_east_2_HASH = ConstExprHashingUtils::HashString("us-east-2");
        static constexpr uint32_t us_west_2_HASH = ConstExprHashingUtils::HashString("us-west-2");
        static constexpr uint32_t ap_southeast_2_HASH = ConstExprHashingUtils::HashString("ap-southeast-2");
        static constexpr uint32_t ca_central_1_HASH = ConstExprHashingUtils::HashString("ca-central-1");
        static constexpr uint32_t eu_west_1_HASH = ConstExprHashingUtils::HashString("eu-west-1");
        static constexpr uint32_t auto__HASH = ConstExprHashingUtils::HashString("auto");


        TranscribeMedicalRegion GetTranscribeMedicalRegionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == us_east_1_HASH)
          {
            return TranscribeMedicalRegion::us_east_1;
          }
          else if (hashCode == us_east_2_HASH)
          {
            return TranscribeMedicalRegion::us_east_2;
          }
          else if (hashCode == us_west_2_HASH)
          {
            return TranscribeMedicalRegion::us_west_2;
          }
          else if (hashCode == ap_southeast_2_HASH)
          {
            return TranscribeMedicalRegion::ap_southeast_2;
          }
          else if (hashCode == ca_central_1_HASH)
          {
            return TranscribeMedicalRegion::ca_central_1;
          }
          else if (hashCode == eu_west_1_HASH)
          {
            return TranscribeMedicalRegion::eu_west_1;
          }
          else if (hashCode == auto__HASH)
          {
            return TranscribeMedicalRegion::auto_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscribeMedicalRegion>(hashCode);
          }

          return TranscribeMedicalRegion::NOT_SET;
        }

        Aws::String GetNameForTranscribeMedicalRegion(TranscribeMedicalRegion enumValue)
        {
          switch(enumValue)
          {
          case TranscribeMedicalRegion::NOT_SET:
            return {};
          case TranscribeMedicalRegion::us_east_1:
            return "us-east-1";
          case TranscribeMedicalRegion::us_east_2:
            return "us-east-2";
          case TranscribeMedicalRegion::us_west_2:
            return "us-west-2";
          case TranscribeMedicalRegion::ap_southeast_2:
            return "ap-southeast-2";
          case TranscribeMedicalRegion::ca_central_1:
            return "ca-central-1";
          case TranscribeMedicalRegion::eu_west_1:
            return "eu-west-1";
          case TranscribeMedicalRegion::auto_:
            return "auto";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscribeMedicalRegionMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
