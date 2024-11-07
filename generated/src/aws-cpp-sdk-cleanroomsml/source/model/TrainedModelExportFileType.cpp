/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelExportFileType.h>
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
      namespace TrainedModelExportFileTypeMapper
      {

        static const int MODEL_HASH = HashingUtils::HashString("MODEL");
        static const int OUTPUT_HASH = HashingUtils::HashString("OUTPUT");


        TrainedModelExportFileType GetTrainedModelExportFileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MODEL_HASH)
          {
            return TrainedModelExportFileType::MODEL;
          }
          else if (hashCode == OUTPUT_HASH)
          {
            return TrainedModelExportFileType::OUTPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainedModelExportFileType>(hashCode);
          }

          return TrainedModelExportFileType::NOT_SET;
        }

        Aws::String GetNameForTrainedModelExportFileType(TrainedModelExportFileType enumValue)
        {
          switch(enumValue)
          {
          case TrainedModelExportFileType::NOT_SET:
            return {};
          case TrainedModelExportFileType::MODEL:
            return "MODEL";
          case TrainedModelExportFileType::OUTPUT:
            return "OUTPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainedModelExportFileTypeMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
