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

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        GenerationStatus GetGenerationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
