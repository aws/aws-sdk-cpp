/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/DescribeRepositoryCreationTemplatesResult.h>
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

DescribeRepositoryCreationTemplatesResult::DescribeRepositoryCreationTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRepositoryCreationTemplatesResult& DescribeRepositoryCreationTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");
    m_registryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("repositoryCreationTemplates"))
  {
    Aws::Utils::Array<JsonView> repositoryCreationTemplatesJsonList = jsonValue.GetArray("repositoryCreationTemplates");
    for(unsigned repositoryCreationTemplatesIndex = 0; repositoryCreationTemplatesIndex < repositoryCreationTemplatesJsonList.GetLength(); ++repositoryCreationTemplatesIndex)
    {
      m_repositoryCreationTemplates.push_back(repositoryCreationTemplatesJsonList[repositoryCreationTemplatesIndex].AsObject());
    }
    m_repositoryCreationTemplatesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
