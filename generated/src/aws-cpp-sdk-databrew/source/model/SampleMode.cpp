/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/SampleMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace SampleModeMapper
      {

        static const int FULL_DATASET_HASH = HashingUtils::HashString("FULL_DATASET");
        static const int CUSTOM_ROWS_HASH = HashingUtils::HashString("CUSTOM_ROWS");


        SampleMode GetSampleModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_DATASET_HASH)
          {
            return SampleMode::FULL_DATASET;
          }
          else if (hashCode == CUSTOM_ROWS_HASH)
          {
            return SampleMode::CUSTOM_ROWS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SampleMode>(hashCode);
          }

          return SampleMode::NOT_SET;
        }

        Aws::String GetNameForSampleMode(SampleMode enumValue)
        {
          switch(enumValue)
          {
          case SampleMode::NOT_SET:
            return {};
          case SampleMode::FULL_DATASET:
            return "FULL_DATASET";
          case SampleMode::CUSTOM_ROWS:
            return "CUSTOM_ROWS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SampleModeMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
