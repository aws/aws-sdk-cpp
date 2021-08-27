/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/ExportBundleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Mobile::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ExportBundleRequest::ExportBundleRequest() : 
    m_bundleIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false)
{
}

Aws::String ExportBundleRequest::SerializePayload() const
{
  return {};
}

void ExportBundleRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_projectIdHasBeenSet)
    {
      ss << m_projectId;
      uri.AddQueryStringParameter("projectId", ss.str());
      ss.str("");
    }

    if(m_platformHasBeenSet)
    {
      ss << PlatformMapper::GetNameForPlatform(m_platform);
      uri.AddQueryStringParameter("platform", ss.str());
      ss.str("");
    }

}



