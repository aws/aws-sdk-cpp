/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/DescribeImageReplicationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeImageReplicationStatusResult::DescribeImageReplicationStatusResult()
{
}

DescribeImageReplicationStatusResult::DescribeImageReplicationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeImageReplicationStatusResult& DescribeImageReplicationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

  }

  if(jsonValue.ValueExists("imageId"))
  {
    m_imageId = jsonValue.GetObject("imageId");

  }

  if(jsonValue.ValueExists("replicationStatuses"))
  {
    Aws::Utils::Array<JsonView> replicationStatusesJsonList = jsonValue.GetArray("replicationStatuses");
    for(unsigned replicationStatusesIndex = 0; replicationStatusesIndex < replicationStatusesJsonList.GetLength(); ++replicationStatusesIndex)
    {
      m_replicationStatuses.push_back(replicationStatusesJsonList[replicationStatusesIndex].AsObject());
    }
  }



  return *this;
}
