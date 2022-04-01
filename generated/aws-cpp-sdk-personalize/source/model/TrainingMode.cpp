/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/TrainingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Personalize
  {
    namespace Model
    {
      namespace TrainingModeMapper
      {

        static const int FULL_HASH = HashingUtils::HashString("FULL");
        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");


        TrainingMode GetTrainingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_HASH)
          {
            return TrainingMode::FULL;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return TrainingMode::UPDATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingMode>(hashCode);
          }

          return TrainingMode::NOT_SET;
        }

        Aws::String GetNameForTrainingMode(TrainingMode enumValue)
        {
          switch(enumValue)
          {
          case TrainingMode::FULL:
            return "FULL";
          case TrainingMode::UPDATE:
            return "UPDATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingModeMapper
    } // namespace Model
  } // namespace Personalize
} // namespace Aws
