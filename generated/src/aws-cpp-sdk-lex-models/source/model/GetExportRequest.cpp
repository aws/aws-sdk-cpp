/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetExportRequest::GetExportRequest() : 
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_exportType(ExportType::NOT_SET),
    m_exportTypeHasBeenSet(false)
{
}

Aws::String GetExportRequest::SerializePayload() const
{
  return {};
}

void GetExportRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_versionHasBeenSet)
    {
      ss << m_version;
      uri.AddQueryStringParameter("version", ss.str());
      ss.str("");
    }

    if(m_resourceTypeHasBeenSet)
    {
      ss << ResourceTypeMapper::GetNameForResourceType(m_resourceType);
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

    if(m_exportTypeHasBeenSet)
    {
      ss << ExportTypeMapper::GetNameForExportType(m_exportType);
      uri.AddQueryStringParameter("exportType", ss.str());
      ss.str("");
    }

}



