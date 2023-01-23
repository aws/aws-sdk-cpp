/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/TypeDefinitionFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace TypeDefinitionFormatMapper
      {

        static const int SDL_HASH = HashingUtils::HashString("SDL");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        TypeDefinitionFormat GetTypeDefinitionFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SDL_HASH)
          {
            return TypeDefinitionFormat::SDL;
          }
          else if (hashCode == JSON_HASH)
          {
            return TypeDefinitionFormat::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TypeDefinitionFormat>(hashCode);
          }

          return TypeDefinitionFormat::NOT_SET;
        }

        Aws::String GetNameForTypeDefinitionFormat(TypeDefinitionFormat enumValue)
        {
          switch(enumValue)
          {
          case TypeDefinitionFormat::SDL:
            return "SDL";
          case TypeDefinitionFormat::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeDefinitionFormatMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
