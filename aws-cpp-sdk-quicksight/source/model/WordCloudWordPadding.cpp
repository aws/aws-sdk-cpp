/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WordCloudWordPadding.h>
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
      namespace WordCloudWordPaddingMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SMALL_HASH = HashingUtils::HashString("SMALL");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LARGE_HASH = HashingUtils::HashString("LARGE");


        WordCloudWordPadding GetWordCloudWordPaddingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return WordCloudWordPadding::NONE;
          }
          else if (hashCode == SMALL_HASH)
          {
            return WordCloudWordPadding::SMALL;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return WordCloudWordPadding::MEDIUM;
          }
          else if (hashCode == LARGE_HASH)
          {
            return WordCloudWordPadding::LARGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WordCloudWordPadding>(hashCode);
          }

          return WordCloudWordPadding::NOT_SET;
        }

        Aws::String GetNameForWordCloudWordPadding(WordCloudWordPadding enumValue)
        {
          switch(enumValue)
          {
          case WordCloudWordPadding::NONE:
            return "NONE";
          case WordCloudWordPadding::SMALL:
            return "SMALL";
          case WordCloudWordPadding::MEDIUM:
            return "MEDIUM";
          case WordCloudWordPadding::LARGE:
            return "LARGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WordCloudWordPaddingMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
