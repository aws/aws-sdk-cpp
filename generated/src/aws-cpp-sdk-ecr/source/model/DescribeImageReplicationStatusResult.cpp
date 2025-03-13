/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/DescribeImageReplicationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

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
    m_repositoryNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imageId"))
  {
    m_imageId = jsonValue.GetObject("imageId");
    m_imageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicationStatuses"))
  {
    Aws::Utils::Array<JsonView> replicationStatusesJsonList = jsonValue.GetArray("replicationStatuses");
    for(unsigned replicationStatusesIndex = 0; replicationStatusesIndex < replicationStatusesJsonList.GetLength(); ++replicationStatusesIndex)
    {
      m_replicationStatuses.push_back(replicationStatusesJsonList[replicationStatusesIndex].AsObject());
    }
    m_replicationStatusesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
