/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetDocumentationPartsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDocumentationPartsRequest::GetDocumentationPartsRequest() : 
    m_restApiIdHasBeenSet(false),
    m_type(DocumentationPartType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameQueryHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_locationStatus(LocationStatusType::NOT_SET),
    m_locationStatusHasBeenSet(false)
{
}

Aws::String GetDocumentationPartsRequest::SerializePayload() const
{
  return {};
}

void GetDocumentationPartsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_typeHasBeenSet)
    {
      ss << DocumentationPartTypeMapper::GetNameForDocumentationPartType(m_type);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

    if(m_nameQueryHasBeenSet)
    {
      ss << m_nameQuery;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_pathHasBeenSet)
    {
      ss << m_path;
      uri.AddQueryStringParameter("path", ss.str());
      ss.str("");
    }

    if(m_positionHasBeenSet)
    {
      ss << m_position;
      uri.AddQueryStringParameter("position", ss.str());
      ss.str("");
    }

    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_locationStatusHasBeenSet)
    {
      ss << LocationStatusTypeMapper::GetNameForLocationStatusType(m_locationStatus);
      uri.AddQueryStringParameter("locationStatus", ss.str());
      ss.str("");
    }

}



