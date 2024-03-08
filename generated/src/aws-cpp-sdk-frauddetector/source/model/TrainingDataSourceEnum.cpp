/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/TrainingDataSourceEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace TrainingDataSourceEnumMapper
      {

        static const int EXTERNAL_EVENTS_HASH = HashingUtils::HashString("EXTERNAL_EVENTS");
        static const int INGESTED_EVENTS_HASH = HashingUtils::HashString("INGESTED_EVENTS");


        TrainingDataSourceEnum GetTrainingDataSourceEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXTERNAL_EVENTS_HASH)
          {
            return TrainingDataSourceEnum::EXTERNAL_EVENTS;
          }
          else if (hashCode == INGESTED_EVENTS_HASH)
          {
            return TrainingDataSourceEnum::INGESTED_EVENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingDataSourceEnum>(hashCode);
          }

          return TrainingDataSourceEnum::NOT_SET;
        }

        Aws::String GetNameForTrainingDataSourceEnum(TrainingDataSourceEnum enumValue)
        {
          switch(enumValue)
          {
          case TrainingDataSourceEnum::NOT_SET:
            return {};
          case TrainingDataSourceEnum::EXTERNAL_EVENTS:
            return "EXTERNAL_EVENTS";
          case TrainingDataSourceEnum::INGESTED_EVENTS:
            return "INGESTED_EVENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingDataSourceEnumMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
