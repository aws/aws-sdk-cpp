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
