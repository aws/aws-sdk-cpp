﻿/*
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

#include <aws/secretsmanager/model/PutSecretValueResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutSecretValueResult::PutSecretValueResult()
{
}

PutSecretValueResult::PutSecretValueResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutSecretValueResult& PutSecretValueResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

  }

  if(jsonValue.ValueExists("VersionStages"))
  {
    Array<JsonView> versionStagesJsonList = jsonValue.GetArray("VersionStages");
    for(unsigned versionStagesIndex = 0; versionStagesIndex < versionStagesJsonList.GetLength(); ++versionStagesIndex)
    {
      m_versionStages.push_back(versionStagesJsonList[versionStagesIndex].AsString());
    }
  }



  return *this;
}
