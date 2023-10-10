/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CustomVocabularyStatus.h>
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
      namespace CustomVocabularyStatusMapper
      {

        static const int Ready_HASH = HashingUtils::HashString("Ready");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Exporting_HASH = HashingUtils::HashString("Exporting");
        static const int Importing_HASH = HashingUtils::HashString("Importing");
        static const int Creating_HASH = HashingUtils::HashString("Creating");


        CustomVocabularyStatus GetCustomVocabularyStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ready_HASH)
          {
            return CustomVocabularyStatus::Ready;
          }
          else if (hashCode == Deleting_HASH)
          {
            return CustomVocabularyStatus::Deleting;
          }
          else if (hashCode == Exporting_HASH)
          {
            return CustomVocabularyStatus::Exporting;
          }
          else if (hashCode == Importing_HASH)
          {
            return CustomVocabularyStatus::Importing;
          }
          else if (hashCode == Creating_HASH)
          {
            return CustomVocabularyStatus::Creating;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomVocabularyStatus>(hashCode);
          }

          return CustomVocabularyStatus::NOT_SET;
        }

        Aws::String GetNameForCustomVocabularyStatus(CustomVocabularyStatus enumValue)
        {
          switch(enumValue)
          {
          case CustomVocabularyStatus::NOT_SET:
            return {};
          case CustomVocabularyStatus::Ready:
            return "Ready";
          case CustomVocabularyStatus::Deleting:
            return "Deleting";
          case CustomVocabularyStatus::Exporting:
            return "Exporting";
          case CustomVocabularyStatus::Importing:
            return "Importing";
          case CustomVocabularyStatus::Creating:
            return "Creating";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomVocabularyStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
