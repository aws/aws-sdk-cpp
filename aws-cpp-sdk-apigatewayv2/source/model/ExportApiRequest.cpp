/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/apigatewayv2/model/ExportApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ExportApiRequest::ExportApiRequest() : 
    m_apiIdHasBeenSet(false),
    m_exportVersionHasBeenSet(false),
    m_includeExtensions(false),
    m_includeExtensionsHasBeenSet(false),
    m_outputTypeHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

Aws::String ExportApiRequest::SerializePayload() const
{
  return {};
}

void ExportApiRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_exportVersionHasBeenSet)
    {
      ss << m_exportVersion;
      uri.AddQueryStringParameter("exportVersion", ss.str());
      ss.str("");
    }

    if(m_includeExtensionsHasBeenSet)
    {
      ss << m_includeExtensions;
      uri.AddQueryStringParameter("includeExtensions", ss.str());
      ss.str("");
    }

    if(m_outputTypeHasBeenSet)
    {
      ss << m_outputType;
      uri.AddQueryStringParameter("outputType", ss.str());
      ss.str("");
    }

    if(m_stageNameHasBeenSet)
    {
      ss << m_stageName;
      uri.AddQueryStringParameter("stageName", ss.str());
      ss.str("");
    }

}



