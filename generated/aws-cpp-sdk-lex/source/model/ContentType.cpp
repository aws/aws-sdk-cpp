/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/ContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeService
  {
    namespace Model
    {
      namespace ContentTypeMapper
      {

        static const int application_vnd_amazonaws_card_generic_HASH = HashingUtils::HashString("application/vnd.amazonaws.card.generic");


        ContentType GetContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == application_vnd_amazonaws_card_generic_HASH)
          {
            return ContentType::application_vnd_amazonaws_card_generic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentType>(hashCode);
          }

          return ContentType::NOT_SET;
        }

        Aws::String GetNameForContentType(ContentType enumValue)
        {
          switch(enumValue)
          {
          case ContentType::application_vnd_amazonaws_card_generic:
            return "application/vnd.amazonaws.card.generic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentTypeMapper
    } // namespace Model
  } // namespace LexRuntimeService
} // namespace Aws
