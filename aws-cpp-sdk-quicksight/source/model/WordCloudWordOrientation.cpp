/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WordCloudWordOrientation.h>
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
      namespace WordCloudWordOrientationMapper
      {

        static const int HORIZONTAL_HASH = HashingUtils::HashString("HORIZONTAL");
        static const int HORIZONTAL_AND_VERTICAL_HASH = HashingUtils::HashString("HORIZONTAL_AND_VERTICAL");


        WordCloudWordOrientation GetWordCloudWordOrientationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HORIZONTAL_HASH)
          {
            return WordCloudWordOrientation::HORIZONTAL;
          }
          else if (hashCode == HORIZONTAL_AND_VERTICAL_HASH)
          {
            return WordCloudWordOrientation::HORIZONTAL_AND_VERTICAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WordCloudWordOrientation>(hashCode);
          }

          return WordCloudWordOrientation::NOT_SET;
        }

        Aws::String GetNameForWordCloudWordOrientation(WordCloudWordOrientation enumValue)
        {
          switch(enumValue)
          {
          case WordCloudWordOrientation::HORIZONTAL:
            return "HORIZONTAL";
          case WordCloudWordOrientation::HORIZONTAL_AND_VERTICAL:
            return "HORIZONTAL_AND_VERTICAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WordCloudWordOrientationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
