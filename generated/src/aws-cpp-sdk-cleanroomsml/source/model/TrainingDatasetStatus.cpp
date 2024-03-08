/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainingDatasetStatus.h>
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
      namespace TrainingDatasetStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        TrainingDatasetStatus GetTrainingDatasetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return TrainingDatasetStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingDatasetStatus>(hashCode);
          }

          return TrainingDatasetStatus::NOT_SET;
        }

        Aws::String GetNameForTrainingDatasetStatus(TrainingDatasetStatus enumValue)
        {
          switch(enumValue)
          {
          case TrainingDatasetStatus::NOT_SET:
            return {};
          case TrainingDatasetStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingDatasetStatusMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
