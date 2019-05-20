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

#include <aws/mediapackage-vod/model/DescribeAssetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAssetResult::DescribeAssetResult()
{
}

DescribeAssetResult::DescribeAssetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAssetResult& DescribeAssetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("egressEndpoints"))
  {
    Array<JsonView> egressEndpointsJsonList = jsonValue.GetArray("egressEndpoints");
    for(unsigned egressEndpointsIndex = 0; egressEndpointsIndex < egressEndpointsJsonList.GetLength(); ++egressEndpointsIndex)
    {
      m_egressEndpoints.push_back(egressEndpointsJsonList[egressEndpointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("packagingGroupId"))
  {
    m_packagingGroupId = jsonValue.GetString("packagingGroupId");

  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

  }

  if(jsonValue.ValueExists("sourceArn"))
  {
    m_sourceArn = jsonValue.GetString("sourceArn");

  }

  if(jsonValue.ValueExists("sourceRoleArn"))
  {
    m_sourceRoleArn = jsonValue.GetString("sourceRoleArn");

  }



  return *this;
}
