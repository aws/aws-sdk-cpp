/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GetPlaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetPlaceRequest::GetPlaceRequest() : 
    m_indexNameHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_placeIdHasBeenSet(false)
{
}

Aws::String GetPlaceRequest::SerializePayload() const
{
  return {};
}

void GetPlaceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_languageHasBeenSet)
    {
      ss << m_language;
      uri.AddQueryStringParameter("language", ss.str());
      ss.str("");
    }

}



