/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelInferenceMaxOutputSizeUnitType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace TrainedModelInferenceMaxOutputSizeUnitTypeMapper
      {

        static const int GB_HASH = HashingUtils::HashString("GB");


        TrainedModelInferenceMaxOutputSizeUnitType GetTrainedModelInferenceMaxOutputSizeUnitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GB_HASH)
          {
            return TrainedModelInferenceMaxOutputSizeUnitType::GB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainedModelInferenceMaxOutputSizeUnitType>(hashCode);
          }

          return TrainedModelInferenceMaxOutputSizeUnitType::NOT_SET;
        }

        Aws::String GetNameForTrainedModelInferenceMaxOutputSizeUnitType(TrainedModelInferenceMaxOutputSizeUnitType enumValue)
        {
          switch(enumValue)
          {
          case TrainedModelInferenceMaxOutputSizeUnitType::NOT_SET:
            return {};
          case TrainedModelInferenceMaxOutputSizeUnitType::GB:
            return "GB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainedModelInferenceMaxOutputSizeUnitTypeMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
