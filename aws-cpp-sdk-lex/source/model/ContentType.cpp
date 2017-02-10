/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

            return "";
          }
        }

      } // namespace ContentTypeMapper
    } // namespace Model
  } // namespace LexRuntimeService
} // namespace Aws
