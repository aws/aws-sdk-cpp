/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/ApiKeySourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace ApiKeySourceTypeMapper
      {

        static const int HEADER_HASH = HashingUtils::HashString("HEADER");
        static const int AUTHORIZER_HASH = HashingUtils::HashString("AUTHORIZER");


        ApiKeySourceType GetApiKeySourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEADER_HASH)
          {
            return ApiKeySourceType::HEADER;
          }
          else if (hashCode == AUTHORIZER_HASH)
          {
            return ApiKeySourceType::AUTHORIZER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApiKeySourceType>(hashCode);
          }

          return ApiKeySourceType::NOT_SET;
        }

        Aws::String GetNameForApiKeySourceType(ApiKeySourceType enumValue)
        {
          switch(enumValue)
          {
          case ApiKeySourceType::HEADER:
            return "HEADER";
          case ApiKeySourceType::AUTHORIZER:
            return "AUTHORIZER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApiKeySourceTypeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
