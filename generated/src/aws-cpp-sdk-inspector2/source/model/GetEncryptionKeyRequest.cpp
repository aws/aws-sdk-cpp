/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/GetEncryptionKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetEncryptionKeyRequest::GetEncryptionKeyRequest() : 
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_scanType(ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false)
{
}

Aws::String GetEncryptionKeyRequest::SerializePayload() const
{
  return {};
}

void GetEncryptionKeyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceTypeHasBeenSet)
    {
      ss << ResourceTypeMapper::GetNameForResourceType(m_resourceType);
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

    if(m_scanTypeHasBeenSet)
    {
      ss << ScanTypeMapper::GetNameForScanType(m_scanType);
      uri.AddQueryStringParameter("scanType", ss.str());
      ss.str("");
    }

}



