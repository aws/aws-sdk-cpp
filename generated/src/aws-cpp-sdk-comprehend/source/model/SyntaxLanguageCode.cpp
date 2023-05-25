/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/SyntaxLanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace SyntaxLanguageCodeMapper
      {

        static const int en_HASH = HashingUtils::HashString("en");
        static const int es_HASH = HashingUtils::HashString("es");
        static const int fr_HASH = HashingUtils::HashString("fr");
        static const int de_HASH = HashingUtils::HashString("de");
        static const int it_HASH = HashingUtils::HashString("it");
        static const int pt_HASH = HashingUtils::HashString("pt");


        SyntaxLanguageCode GetSyntaxLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_HASH)
          {
            return SyntaxLanguageCode::en;
          }
          else if (hashCode == es_HASH)
          {
            return SyntaxLanguageCode::es;
          }
          else if (hashCode == fr_HASH)
          {
            return SyntaxLanguageCode::fr;
          }
          else if (hashCode == de_HASH)
          {
            return SyntaxLanguageCode::de;
          }
          else if (hashCode == it_HASH)
          {
            return SyntaxLanguageCode::it;
          }
          else if (hashCode == pt_HASH)
          {
            return SyntaxLanguageCode::pt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyntaxLanguageCode>(hashCode);
          }

          return SyntaxLanguageCode::NOT_SET;
        }

        Aws::String GetNameForSyntaxLanguageCode(SyntaxLanguageCode enumValue)
        {
          switch(enumValue)
          {
          case SyntaxLanguageCode::en:
            return "en";
          case SyntaxLanguageCode::es:
            return "es";
          case SyntaxLanguageCode::fr:
            return "fr";
          case SyntaxLanguageCode::de:
            return "de";
          case SyntaxLanguageCode::it:
            return "it";
          case SyntaxLanguageCode::pt:
            return "pt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SyntaxLanguageCodeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
