/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GetTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetTypeRequest::GetTypeRequest() : 
    m_apiIdHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_format(TypeDefinitionFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
}

Aws::String GetTypeRequest::SerializePayload() const
{
  return {};
}

void GetTypeRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_formatHasBeenSet)
    {
      ss << TypeDefinitionFormatMapper::GetNameForTypeDefinitionFormat(m_format);
      uri.AddQueryStringParameter("format", ss.str());
      ss.str("");
    }

}



