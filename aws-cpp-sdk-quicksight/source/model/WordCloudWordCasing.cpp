/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WordCloudWordCasing.h>
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
      namespace WordCloudWordCasingMapper
      {

        static const int LOWER_CASE_HASH = HashingUtils::HashString("LOWER_CASE");
        static const int EXISTING_CASE_HASH = HashingUtils::HashString("EXISTING_CASE");


        WordCloudWordCasing GetWordCloudWordCasingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOWER_CASE_HASH)
          {
            return WordCloudWordCasing::LOWER_CASE;
          }
          else if (hashCode == EXISTING_CASE_HASH)
          {
            return WordCloudWordCasing::EXISTING_CASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WordCloudWordCasing>(hashCode);
          }

          return WordCloudWordCasing::NOT_SET;
        }

        Aws::String GetNameForWordCloudWordCasing(WordCloudWordCasing enumValue)
        {
          switch(enumValue)
          {
          case WordCloudWordCasing::LOWER_CASE:
            return "LOWER_CASE";
          case WordCloudWordCasing::EXISTING_CASE:
            return "EXISTING_CASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WordCloudWordCasingMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
