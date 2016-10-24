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
#include <aws/apigateway/model/IntegrationType.h>
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
      namespace IntegrationTypeMapper
      {

        static const int HTTP_HASH = HashingUtils::HashString("HTTP");
        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int MOCK_HASH = HashingUtils::HashString("MOCK");
        static const int HTTP_PROXY_HASH = HashingUtils::HashString("HTTP_PROXY");
        static const int AWS_PROXY_HASH = HashingUtils::HashString("AWS_PROXY");


        IntegrationType GetIntegrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HASH)
          {
            return IntegrationType::HTTP;
          }
          else if (hashCode == AWS_HASH)
          {
            return IntegrationType::AWS;
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
          case IntegrationType::HTTP:
            return "HTTP";
          case IntegrationType::AWS:
            return "AWS";
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

            return "";
          }
        }

      } // namespace IntegrationTypeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
