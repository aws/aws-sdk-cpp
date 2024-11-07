/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelExportsMaxSizeUnitType.h>
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
      namespace TrainedModelExportsMaxSizeUnitTypeMapper
      {

        static const int GB_HASH = HashingUtils::HashString("GB");


        TrainedModelExportsMaxSizeUnitType GetTrainedModelExportsMaxSizeUnitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GB_HASH)
          {
            return TrainedModelExportsMaxSizeUnitType::GB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainedModelExportsMaxSizeUnitType>(hashCode);
          }

          return TrainedModelExportsMaxSizeUnitType::NOT_SET;
        }

        Aws::String GetNameForTrainedModelExportsMaxSizeUnitType(TrainedModelExportsMaxSizeUnitType enumValue)
        {
          switch(enumValue)
          {
          case TrainedModelExportsMaxSizeUnitType::NOT_SET:
            return {};
          case TrainedModelExportsMaxSizeUnitType::GB:
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

      } // namespace TrainedModelExportsMaxSizeUnitTypeMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
