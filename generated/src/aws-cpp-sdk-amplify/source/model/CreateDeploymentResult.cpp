/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/CreateDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDeploymentResult::CreateDeploymentResult()
{
}

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

  }

  if(jsonValue.ValueExists("fileUploadUrls"))
  {
    Aws::Map<Aws::String, JsonView> fileUploadUrlsJsonMap = jsonValue.GetObject("fileUploadUrls").GetAllObjects();
    for(auto& fileUploadUrlsItem : fileUploadUrlsJsonMap)
    {
      m_fileUploadUrls[fileUploadUrlsItem.first] = fileUploadUrlsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("zipUploadUrl"))
  {
    m_zipUploadUrl = jsonValue.GetString("zipUploadUrl");

  }



  return *this;
}
