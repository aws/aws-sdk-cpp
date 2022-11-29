/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WordCloudWordScaling.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace WordCloudWordScalingMapper
      {

        static const int EMPHASIZE_HASH = HashingUtils::HashString("EMPHASIZE");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");


        WordCloudWordScaling GetWordCloudWordScalingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMPHASIZE_HASH)
          {
            return WordCloudWordScaling::EMPHASIZE;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return WordCloudWordScaling::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WordCloudWordScaling>(hashCode);
          }

          return WordCloudWordScaling::NOT_SET;
        }

        Aws::String GetNameForWordCloudWordScaling(WordCloudWordScaling enumValue)
        {
          switch(enumValue)
          {
          case WordCloudWordScaling::EMPHASIZE:
            return "EMPHASIZE";
          case WordCloudWordScaling::NORMAL:
            return "NORMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WordCloudWordScalingMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
