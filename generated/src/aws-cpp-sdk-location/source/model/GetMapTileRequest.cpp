/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GetMapTileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetMapTileRequest::GetMapTileRequest() : 
    m_keyHasBeenSet(false),
    m_mapNameHasBeenSet(false),
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_zHasBeenSet(false)
{
}

Aws::String GetMapTileRequest::SerializePayload() const
{
  return {};
}

void GetMapTileRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



