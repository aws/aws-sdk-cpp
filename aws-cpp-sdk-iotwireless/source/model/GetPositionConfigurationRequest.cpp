/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetPositionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetPositionConfigurationRequest::GetPositionConfigurationRequest() : 
    m_resourceIdentifierHasBeenSet(false),
    m_resourceType(PositionResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

Aws::String GetPositionConfigurationRequest::SerializePayload() const
{
  return {};
}

void GetPositionConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceTypeHasBeenSet)
    {
      ss << PositionResourceTypeMapper::GetNameForPositionResourceType(m_resourceType);
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

}



