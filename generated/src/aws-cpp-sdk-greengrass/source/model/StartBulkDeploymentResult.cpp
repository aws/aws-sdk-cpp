/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/StartBulkDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartBulkDeploymentResult::StartBulkDeploymentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartBulkDeploymentResult& StartBulkDeploymentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BulkDeploymentArn"))
  {
    m_bulkDeploymentArn = jsonValue.GetString("BulkDeploymentArn");
    m_bulkDeploymentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BulkDeploymentId"))
  {
    m_bulkDeploymentId = jsonValue.GetString("BulkDeploymentId");
    m_bulkDeploymentIdHasBeenSet = true;
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
