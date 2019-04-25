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

#include <aws/lambda/model/GetLayerVersionByArnResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLayerVersionByArnResult::GetLayerVersionByArnResult() : 
    m_version(0)
{
}

GetLayerVersionByArnResult::GetLayerVersionByArnResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_version(0)
{
  *this = result;
}

GetLayerVersionByArnResult& GetLayerVersionByArnResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetObject("Content");

  }

  if(jsonValue.ValueExists("LayerArn"))
  {
    m_layerArn = jsonValue.GetString("LayerArn");

  }

  if(jsonValue.ValueExists("LayerVersionArn"))
  {
    m_layerVersionArn = jsonValue.GetString("LayerVersionArn");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");

  }

  if(jsonValue.ValueExists("CompatibleRuntimes"))
  {
    Array<JsonView> compatibleRuntimesJsonList = jsonValue.GetArray("CompatibleRuntimes");
    for(unsigned compatibleRuntimesIndex = 0; compatibleRuntimesIndex < compatibleRuntimesJsonList.GetLength(); ++compatibleRuntimesIndex)
    {
      m_compatibleRuntimes.push_back(RuntimeMapper::GetRuntimeForName(compatibleRuntimesJsonList[compatibleRuntimesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("LicenseInfo"))
  {
    m_licenseInfo = jsonValue.GetString("LicenseInfo");

  }



  return *this;
}
