/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/DocumentationPartType.h>
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
      namespace DocumentationPartTypeMapper
      {

        static const int API_HASH = HashingUtils::HashString("API");
        static const int AUTHORIZER_HASH = HashingUtils::HashString("AUTHORIZER");
        static const int MODEL_HASH = HashingUtils::HashString("MODEL");
        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
        static const int METHOD_HASH = HashingUtils::HashString("METHOD");
        static const int PATH_PARAMETER_HASH = HashingUtils::HashString("PATH_PARAMETER");
        static const int QUERY_PARAMETER_HASH = HashingUtils::HashString("QUERY_PARAMETER");
        static const int REQUEST_HEADER_HASH = HashingUtils::HashString("REQUEST_HEADER");
        static const int REQUEST_BODY_HASH = HashingUtils::HashString("REQUEST_BODY");
        static const int RESPONSE_HASH = HashingUtils::HashString("RESPONSE");
        static const int RESPONSE_HEADER_HASH = HashingUtils::HashString("RESPONSE_HEADER");
        static const int RESPONSE_BODY_HASH = HashingUtils::HashString("RESPONSE_BODY");


        DocumentationPartType GetDocumentationPartTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == API_HASH)
          {
            return DocumentationPartType::API;
          }
          else if (hashCode == AUTHORIZER_HASH)
          {
            return DocumentationPartType::AUTHORIZER;
          }
          else if (hashCode == MODEL_HASH)
          {
            return DocumentationPartType::MODEL;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return DocumentationPartType::RESOURCE;
          }
          else if (hashCode == METHOD_HASH)
          {
            return DocumentationPartType::METHOD;
          }
          else if (hashCode == PATH_PARAMETER_HASH)
          {
            return DocumentationPartType::PATH_PARAMETER;
          }
          else if (hashCode == QUERY_PARAMETER_HASH)
          {
            return DocumentationPartType::QUERY_PARAMETER;
          }
          else if (hashCode == REQUEST_HEADER_HASH)
          {
            return DocumentationPartType::REQUEST_HEADER;
          }
          else if (hashCode == REQUEST_BODY_HASH)
          {
            return DocumentationPartType::REQUEST_BODY;
          }
          else if (hashCode == RESPONSE_HASH)
          {
            return DocumentationPartType::RESPONSE;
          }
          else if (hashCode == RESPONSE_HEADER_HASH)
          {
            return DocumentationPartType::RESPONSE_HEADER;
          }
          else if (hashCode == RESPONSE_BODY_HASH)
          {
            return DocumentationPartType::RESPONSE_BODY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentationPartType>(hashCode);
          }

          return DocumentationPartType::NOT_SET;
        }

        Aws::String GetNameForDocumentationPartType(DocumentationPartType enumValue)
        {
          switch(enumValue)
          {
          case DocumentationPartType::API:
            return "API";
          case DocumentationPartType::AUTHORIZER:
            return "AUTHORIZER";
          case DocumentationPartType::MODEL:
            return "MODEL";
          case DocumentationPartType::RESOURCE:
            return "RESOURCE";
          case DocumentationPartType::METHOD:
            return "METHOD";
          case DocumentationPartType::PATH_PARAMETER:
            return "PATH_PARAMETER";
          case DocumentationPartType::QUERY_PARAMETER:
            return "QUERY_PARAMETER";
          case DocumentationPartType::REQUEST_HEADER:
            return "REQUEST_HEADER";
          case DocumentationPartType::REQUEST_BODY:
            return "REQUEST_BODY";
          case DocumentationPartType::RESPONSE:
            return "RESPONSE";
          case DocumentationPartType::RESPONSE_HEADER:
            return "RESPONSE_HEADER";
          case DocumentationPartType::RESPONSE_BODY:
            return "RESPONSE_BODY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentationPartTypeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
