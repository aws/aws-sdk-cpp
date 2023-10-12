/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GatewayResponseType.h>
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
      namespace GatewayResponseTypeMapper
      {

        static constexpr uint32_t DEFAULT_4XX_HASH = ConstExprHashingUtils::HashString("DEFAULT_4XX");
        static constexpr uint32_t DEFAULT_5XX_HASH = ConstExprHashingUtils::HashString("DEFAULT_5XX");
        static constexpr uint32_t RESOURCE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("RESOURCE_NOT_FOUND");
        static constexpr uint32_t UNAUTHORIZED_HASH = ConstExprHashingUtils::HashString("UNAUTHORIZED");
        static constexpr uint32_t INVALID_API_KEY_HASH = ConstExprHashingUtils::HashString("INVALID_API_KEY");
        static constexpr uint32_t ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED");
        static constexpr uint32_t AUTHORIZER_FAILURE_HASH = ConstExprHashingUtils::HashString("AUTHORIZER_FAILURE");
        static constexpr uint32_t AUTHORIZER_CONFIGURATION_ERROR_HASH = ConstExprHashingUtils::HashString("AUTHORIZER_CONFIGURATION_ERROR");
        static constexpr uint32_t INVALID_SIGNATURE_HASH = ConstExprHashingUtils::HashString("INVALID_SIGNATURE");
        static constexpr uint32_t EXPIRED_TOKEN_HASH = ConstExprHashingUtils::HashString("EXPIRED_TOKEN");
        static constexpr uint32_t MISSING_AUTHENTICATION_TOKEN_HASH = ConstExprHashingUtils::HashString("MISSING_AUTHENTICATION_TOKEN");
        static constexpr uint32_t INTEGRATION_FAILURE_HASH = ConstExprHashingUtils::HashString("INTEGRATION_FAILURE");
        static constexpr uint32_t INTEGRATION_TIMEOUT_HASH = ConstExprHashingUtils::HashString("INTEGRATION_TIMEOUT");
        static constexpr uint32_t API_CONFIGURATION_ERROR_HASH = ConstExprHashingUtils::HashString("API_CONFIGURATION_ERROR");
        static constexpr uint32_t UNSUPPORTED_MEDIA_TYPE_HASH = ConstExprHashingUtils::HashString("UNSUPPORTED_MEDIA_TYPE");
        static constexpr uint32_t BAD_REQUEST_PARAMETERS_HASH = ConstExprHashingUtils::HashString("BAD_REQUEST_PARAMETERS");
        static constexpr uint32_t BAD_REQUEST_BODY_HASH = ConstExprHashingUtils::HashString("BAD_REQUEST_BODY");
        static constexpr uint32_t REQUEST_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("REQUEST_TOO_LARGE");
        static constexpr uint32_t THROTTLED_HASH = ConstExprHashingUtils::HashString("THROTTLED");
        static constexpr uint32_t QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("QUOTA_EXCEEDED");
        static constexpr uint32_t WAF_FILTERED_HASH = ConstExprHashingUtils::HashString("WAF_FILTERED");


        GatewayResponseType GetGatewayResponseTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_4XX_HASH)
          {
            return GatewayResponseType::DEFAULT_4XX;
          }
          else if (hashCode == DEFAULT_5XX_HASH)
          {
            return GatewayResponseType::DEFAULT_5XX;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_HASH)
          {
            return GatewayResponseType::RESOURCE_NOT_FOUND;
          }
          else if (hashCode == UNAUTHORIZED_HASH)
          {
            return GatewayResponseType::UNAUTHORIZED;
          }
          else if (hashCode == INVALID_API_KEY_HASH)
          {
            return GatewayResponseType::INVALID_API_KEY;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return GatewayResponseType::ACCESS_DENIED;
          }
          else if (hashCode == AUTHORIZER_FAILURE_HASH)
          {
            return GatewayResponseType::AUTHORIZER_FAILURE;
          }
          else if (hashCode == AUTHORIZER_CONFIGURATION_ERROR_HASH)
          {
            return GatewayResponseType::AUTHORIZER_CONFIGURATION_ERROR;
          }
          else if (hashCode == INVALID_SIGNATURE_HASH)
          {
            return GatewayResponseType::INVALID_SIGNATURE;
          }
          else if (hashCode == EXPIRED_TOKEN_HASH)
          {
            return GatewayResponseType::EXPIRED_TOKEN;
          }
          else if (hashCode == MISSING_AUTHENTICATION_TOKEN_HASH)
          {
            return GatewayResponseType::MISSING_AUTHENTICATION_TOKEN;
          }
          else if (hashCode == INTEGRATION_FAILURE_HASH)
          {
            return GatewayResponseType::INTEGRATION_FAILURE;
          }
          else if (hashCode == INTEGRATION_TIMEOUT_HASH)
          {
            return GatewayResponseType::INTEGRATION_TIMEOUT;
          }
          else if (hashCode == API_CONFIGURATION_ERROR_HASH)
          {
            return GatewayResponseType::API_CONFIGURATION_ERROR;
          }
          else if (hashCode == UNSUPPORTED_MEDIA_TYPE_HASH)
          {
            return GatewayResponseType::UNSUPPORTED_MEDIA_TYPE;
          }
          else if (hashCode == BAD_REQUEST_PARAMETERS_HASH)
          {
            return GatewayResponseType::BAD_REQUEST_PARAMETERS;
          }
          else if (hashCode == BAD_REQUEST_BODY_HASH)
          {
            return GatewayResponseType::BAD_REQUEST_BODY;
          }
          else if (hashCode == REQUEST_TOO_LARGE_HASH)
          {
            return GatewayResponseType::REQUEST_TOO_LARGE;
          }
          else if (hashCode == THROTTLED_HASH)
          {
            return GatewayResponseType::THROTTLED;
          }
          else if (hashCode == QUOTA_EXCEEDED_HASH)
          {
            return GatewayResponseType::QUOTA_EXCEEDED;
          }
          else if (hashCode == WAF_FILTERED_HASH)
          {
            return GatewayResponseType::WAF_FILTERED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GatewayResponseType>(hashCode);
          }

          return GatewayResponseType::NOT_SET;
        }

        Aws::String GetNameForGatewayResponseType(GatewayResponseType enumValue)
        {
          switch(enumValue)
          {
          case GatewayResponseType::NOT_SET:
            return {};
          case GatewayResponseType::DEFAULT_4XX:
            return "DEFAULT_4XX";
          case GatewayResponseType::DEFAULT_5XX:
            return "DEFAULT_5XX";
          case GatewayResponseType::RESOURCE_NOT_FOUND:
            return "RESOURCE_NOT_FOUND";
          case GatewayResponseType::UNAUTHORIZED:
            return "UNAUTHORIZED";
          case GatewayResponseType::INVALID_API_KEY:
            return "INVALID_API_KEY";
          case GatewayResponseType::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case GatewayResponseType::AUTHORIZER_FAILURE:
            return "AUTHORIZER_FAILURE";
          case GatewayResponseType::AUTHORIZER_CONFIGURATION_ERROR:
            return "AUTHORIZER_CONFIGURATION_ERROR";
          case GatewayResponseType::INVALID_SIGNATURE:
            return "INVALID_SIGNATURE";
          case GatewayResponseType::EXPIRED_TOKEN:
            return "EXPIRED_TOKEN";
          case GatewayResponseType::MISSING_AUTHENTICATION_TOKEN:
            return "MISSING_AUTHENTICATION_TOKEN";
          case GatewayResponseType::INTEGRATION_FAILURE:
            return "INTEGRATION_FAILURE";
          case GatewayResponseType::INTEGRATION_TIMEOUT:
            return "INTEGRATION_TIMEOUT";
          case GatewayResponseType::API_CONFIGURATION_ERROR:
            return "API_CONFIGURATION_ERROR";
          case GatewayResponseType::UNSUPPORTED_MEDIA_TYPE:
            return "UNSUPPORTED_MEDIA_TYPE";
          case GatewayResponseType::BAD_REQUEST_PARAMETERS:
            return "BAD_REQUEST_PARAMETERS";
          case GatewayResponseType::BAD_REQUEST_BODY:
            return "BAD_REQUEST_BODY";
          case GatewayResponseType::REQUEST_TOO_LARGE:
            return "REQUEST_TOO_LARGE";
          case GatewayResponseType::THROTTLED:
            return "THROTTLED";
          case GatewayResponseType::QUOTA_EXCEEDED:
            return "QUOTA_EXCEEDED";
          case GatewayResponseType::WAF_FILTERED:
            return "WAF_FILTERED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GatewayResponseTypeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
