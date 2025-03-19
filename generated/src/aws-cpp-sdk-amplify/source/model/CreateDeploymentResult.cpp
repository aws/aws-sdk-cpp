/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/CreateDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDeploymentResult::CreateDeploymentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDeploymentResult& CreateDeploymentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileUploadUrls"))
  {
    Aws::Map<Aws::String, JsonView> fileUploadUrlsJsonMap = jsonValue.GetObject("fileUploadUrls").GetAllObjects();
    for(auto& fileUploadUrlsItem : fileUploadUrlsJsonMap)
    {
      m_fileUploadUrls[fileUploadUrlsItem.first] = fileUploadUrlsItem.second.AsString();
    }
    m_fileUploadUrlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("zipUploadUrl"))
  {
    m_zipUploadUrl = jsonValue.GetString("zipUploadUrl");
    m_zipUploadUrlHasBeenSet = true;
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
