/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/IntegrationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApiGatewayV2
  {
    namespace Model
    {
      namespace IntegrationTypeMapper
      {

        static constexpr uint32_t AWS_HASH = ConstExprHashingUtils::HashString("AWS");
        static constexpr uint32_t HTTP_HASH = ConstExprHashingUtils::HashString("HTTP");
        static constexpr uint32_t MOCK_HASH = ConstExprHashingUtils::HashString("MOCK");
        static constexpr uint32_t HTTP_PROXY_HASH = ConstExprHashingUtils::HashString("HTTP_PROXY");
        static constexpr uint32_t AWS_PROXY_HASH = ConstExprHashingUtils::HashString("AWS_PROXY");


        IntegrationType GetIntegrationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return IntegrationType::AWS;
          }
          else if (hashCode == HTTP_HASH)
          {
            return IntegrationType::HTTP;
          }
          else if (hashCode == MOCK_HASH)
          {
            return IntegrationType::MOCK;
          }
          else if (hashCode == HTTP_PROXY_HASH)
          {
            return IntegrationType::HTTP_PROXY;
          }
          else if (hashCode == AWS_PROXY_HASH)
          {
            return IntegrationType::AWS_PROXY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegrationType>(hashCode);
          }

          return IntegrationType::NOT_SET;
        }

        Aws::String GetNameForIntegrationType(IntegrationType enumValue)
        {
          switch(enumValue)
          {
          case IntegrationType::NOT_SET:
            return {};
          case IntegrationType::AWS:
            return "AWS";
          case IntegrationType::HTTP:
            return "HTTP";
          case IntegrationType::MOCK:
            return "MOCK";
          case IntegrationType::HTTP_PROXY:
            return "HTTP_PROXY";
          case IntegrationType::AWS_PROXY:
            return "AWS_PROXY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntegrationTypeMapper
    } // namespace Model
  } // namespace ApiGatewayV2
} // namespace Aws
