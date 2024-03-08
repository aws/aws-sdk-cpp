/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/GenerationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace GenerationStatusMapper
      {

        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Complete_HASH = HashingUtils::HashString("Complete");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");


        GenerationStatus GetGenerationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Failed_HASH)
          {
            return GenerationStatus::Failed;
          }
          else if (hashCode == Complete_HASH)
          {
            return GenerationStatus::Complete;
          }
          else if (hashCode == InProgress_HASH)
          {
            return GenerationStatus::InProgress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GenerationStatus>(hashCode);
          }

          return GenerationStatus::NOT_SET;
        }

        Aws::String GetNameForGenerationStatus(GenerationStatus enumValue)
        {
          switch(enumValue)
          {
          case GenerationStatus::NOT_SET:
            return {};
          case GenerationStatus::Failed:
            return "Failed";
          case GenerationStatus::Complete:
            return "Complete";
          case GenerationStatus::InProgress:
            return "InProgress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GenerationStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
