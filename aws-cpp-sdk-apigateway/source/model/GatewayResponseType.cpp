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

        static const int DEFAULT_4XX_HASH = HashingUtils::HashString("DEFAULT_4XX");
        static const int DEFAULT_5XX_HASH = HashingUtils::HashString("DEFAULT_5XX");
        static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
        static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UNAUTHORIZED");
        static const int INVALID_API_KEY_HASH = HashingUtils::HashString("INVALID_API_KEY");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int AUTHORIZER_FAILURE_HASH = HashingUtils::HashString("AUTHORIZER_FAILURE");
        static const int AUTHORIZER_CONFIGURATION_ERROR_HASH = HashingUtils::HashString("AUTHORIZER_CONFIGURATION_ERROR");
        static const int INVALID_SIGNATURE_HASH = HashingUtils::HashString("INVALID_SIGNATURE");
        static const int EXPIRED_TOKEN_HASH = HashingUtils::HashString("EXPIRED_TOKEN");
        static const int MISSING_AUTHENTICATION_TOKEN_HASH = HashingUtils::HashString("MISSING_AUTHENTICATION_TOKEN");
        static const int INTEGRATION_FAILURE_HASH = HashingUtils::HashString("INTEGRATION_FAILURE");
        static const int INTEGRATION_TIMEOUT_HASH = HashingUtils::HashString("INTEGRATION_TIMEOUT");
        static const int API_CONFIGURATION_ERROR_HASH = HashingUtils::HashString("API_CONFIGURATION_ERROR");
        static const int UNSUPPORTED_MEDIA_TYPE_HASH = HashingUtils::HashString("UNSUPPORTED_MEDIA_TYPE");
        static const int BAD_REQUEST_PARAMETERS_HASH = HashingUtils::HashString("BAD_REQUEST_PARAMETERS");
        static const int BAD_REQUEST_BODY_HASH = HashingUtils::HashString("BAD_REQUEST_BODY");
        static const int REQUEST_TOO_LARGE_HASH = HashingUtils::HashString("REQUEST_TOO_LARGE");
        static const int THROTTLED_HASH = HashingUtils::HashString("THROTTLED");
        static const int QUOTA_EXCEEDED_HASH = HashingUtils::HashString("QUOTA_EXCEEDED");


        GatewayResponseType GetGatewayResponseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
