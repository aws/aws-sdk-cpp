/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GenerationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace GenerationStatusMapper
      {

        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t PROCESSING_HASH = ConstExprHashingUtils::HashString("PROCESSING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        GenerationStatus GetGenerationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return GenerationStatus::SUCCEEDED;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return GenerationStatus::PROCESSING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return GenerationStatus::FAILED;
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
          case GenerationStatus::SUCCEEDED:
            return "SUCCEEDED";
          case GenerationStatus::PROCESSING:
            return "PROCESSING";
          case GenerationStatus::FAILED:
            return "FAILED";
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
  } // namespace CostExplorer
} // namespace Aws
