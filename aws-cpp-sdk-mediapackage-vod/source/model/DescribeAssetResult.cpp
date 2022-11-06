/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("egressEndpoints"))
  {
    Aws::Utils::Array<JsonView> egressEndpointsJsonList = jsonValue.GetArray("egressEndpoints");
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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
