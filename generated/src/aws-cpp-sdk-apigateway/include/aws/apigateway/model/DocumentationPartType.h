/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{
  enum class DocumentationPartType
  {
    NOT_SET,
    API,
    AUTHORIZER,
    MODEL,
    RESOURCE,
    METHOD,
    PATH_PARAMETER,
    QUERY_PARAMETER,
    REQUEST_HEADER,
    REQUEST_BODY,
    RESPONSE,
    RESPONSE_HEADER,
    RESPONSE_BODY
  };

namespace DocumentationPartTypeMapper
{
AWS_APIGATEWAY_API DocumentationPartType GetDocumentationPartTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForDocumentationPartType(DocumentationPartType value);
} // namespace DocumentationPartTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
