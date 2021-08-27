/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GetIntrospectionSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetIntrospectionSchemaRequest::GetIntrospectionSchemaRequest() : 
    m_apiIdHasBeenSet(false),
    m_format(OutputType::NOT_SET),
    m_formatHasBeenSet(false),
    m_includeDirectives(false),
    m_includeDirectivesHasBeenSet(false)
{
}

Aws::String GetIntrospectionSchemaRequest::SerializePayload() const
{
  return {};
}

void GetIntrospectionSchemaRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_formatHasBeenSet)
    {
      ss << OutputTypeMapper::GetNameForOutputType(m_format);
      uri.AddQueryStringParameter("format", ss.str());
      ss.str("");
    }

    if(m_includeDirectivesHasBeenSet)
    {
      ss << m_includeDirectives;
      uri.AddQueryStringParameter("includeDirectives", ss.str());
      ss.str("");
    }

}



