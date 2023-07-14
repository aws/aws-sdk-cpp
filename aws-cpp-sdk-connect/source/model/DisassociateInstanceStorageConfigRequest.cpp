/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateInstanceStorageConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DisassociateInstanceStorageConfigRequest::DisassociateInstanceStorageConfigRequest() : 
    m_instanceIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_resourceType(InstanceStorageResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

Aws::String DisassociateInstanceStorageConfigRequest::SerializePayload() const
{
  return {};
}

void DisassociateInstanceStorageConfigRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceTypeHasBeenSet)
    {
      ss << InstanceStorageResourceTypeMapper::GetNameForInstanceStorageResourceType(m_resourceType);
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

}



