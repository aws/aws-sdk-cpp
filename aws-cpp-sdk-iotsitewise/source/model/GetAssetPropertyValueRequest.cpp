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

#include <aws/iotsitewise/model/GetAssetPropertyValueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetAssetPropertyValueRequest::GetAssetPropertyValueRequest() : 
    m_assetIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false),
    m_propertyAliasHasBeenSet(false)
{
}

Aws::String GetAssetPropertyValueRequest::SerializePayload() const
{
  return {};
}

void GetAssetPropertyValueRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_assetIdHasBeenSet)
    {
      ss << m_assetId;
      uri.AddQueryStringParameter("assetId", ss.str());
      ss.str("");
    }

    if(m_propertyIdHasBeenSet)
    {
      ss << m_propertyId;
      uri.AddQueryStringParameter("propertyId", ss.str());
      ss.str("");
    }

    if(m_propertyAliasHasBeenSet)
    {
      ss << m_propertyAlias;
      uri.AddQueryStringParameter("propertyAlias", ss.str());
      ss.str("");
    }

}



