/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ModelQuality.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace ModelQualityMapper
      {

        static const int QUALITY_THRESHOLD_MET_HASH = HashingUtils::HashString("QUALITY_THRESHOLD_MET");
        static const int CANNOT_DETERMINE_QUALITY_HASH = HashingUtils::HashString("CANNOT_DETERMINE_QUALITY");
        static const int POOR_QUALITY_DETECTED_HASH = HashingUtils::HashString("POOR_QUALITY_DETECTED");


        ModelQuality GetModelQualityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUALITY_THRESHOLD_MET_HASH)
          {
            return ModelQuality::QUALITY_THRESHOLD_MET;
          }
          else if (hashCode == CANNOT_DETERMINE_QUALITY_HASH)
          {
            return ModelQuality::CANNOT_DETERMINE_QUALITY;
          }
          else if (hashCode == POOR_QUALITY_DETECTED_HASH)
          {
            return ModelQuality::POOR_QUALITY_DETECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelQuality>(hashCode);
          }

          return ModelQuality::NOT_SET;
        }

        Aws::String GetNameForModelQuality(ModelQuality enumValue)
        {
          switch(enumValue)
          {
          case ModelQuality::NOT_SET:
            return {};
          case ModelQuality::QUALITY_THRESHOLD_MET:
            return "QUALITY_THRESHOLD_MET";
          case ModelQuality::CANNOT_DETERMINE_QUALITY:
            return "CANNOT_DETERMINE_QUALITY";
          case ModelQuality::POOR_QUALITY_DETECTED:
            return "POOR_QUALITY_DETECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelQualityMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
