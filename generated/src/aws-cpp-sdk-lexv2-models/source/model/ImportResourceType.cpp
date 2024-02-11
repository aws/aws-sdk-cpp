/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ImportResourceType.h>
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
      namespace ImportResourceTypeMapper
      {

        static const int Bot_HASH = HashingUtils::HashString("Bot");
        static const int BotLocale_HASH = HashingUtils::HashString("BotLocale");
        static const int CustomVocabulary_HASH = HashingUtils::HashString("CustomVocabulary");
        static const int TestSet_HASH = HashingUtils::HashString("TestSet");


        ImportResourceType GetImportResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Bot_HASH)
          {
            return ImportResourceType::Bot;
          }
          else if (hashCode == BotLocale_HASH)
          {
            return ImportResourceType::BotLocale;
          }
          else if (hashCode == CustomVocabulary_HASH)
          {
            return ImportResourceType::CustomVocabulary;
          }
          else if (hashCode == TestSet_HASH)
          {
            return ImportResourceType::TestSet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportResourceType>(hashCode);
          }

          return ImportResourceType::NOT_SET;
        }

        Aws::String GetNameForImportResourceType(ImportResourceType enumValue)
        {
          switch(enumValue)
          {
          case ImportResourceType::NOT_SET:
            return {};
          case ImportResourceType::Bot:
            return "Bot";
          case ImportResourceType::BotLocale:
            return "BotLocale";
          case ImportResourceType::CustomVocabulary:
            return "CustomVocabulary";
          case ImportResourceType::TestSet:
            return "TestSet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportResourceTypeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
