/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelArtifactMaxSizeUnitType.h>
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
      namespace TrainedModelArtifactMaxSizeUnitTypeMapper
      {

        static const int GB_HASH = HashingUtils::HashString("GB");


        TrainedModelArtifactMaxSizeUnitType GetTrainedModelArtifactMaxSizeUnitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GB_HASH)
          {
            return TrainedModelArtifactMaxSizeUnitType::GB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainedModelArtifactMaxSizeUnitType>(hashCode);
          }

          return TrainedModelArtifactMaxSizeUnitType::NOT_SET;
        }

        Aws::String GetNameForTrainedModelArtifactMaxSizeUnitType(TrainedModelArtifactMaxSizeUnitType enumValue)
        {
          switch(enumValue)
          {
          case TrainedModelArtifactMaxSizeUnitType::NOT_SET:
            return {};
          case TrainedModelArtifactMaxSizeUnitType::GB:
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

      } // namespace TrainedModelArtifactMaxSizeUnitTypeMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
