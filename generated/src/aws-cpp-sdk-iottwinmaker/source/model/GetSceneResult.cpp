/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetSceneResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSceneResult::GetSceneResult()
{
}

GetSceneResult::GetSceneResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSceneResult& GetSceneResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("workspaceId"))
  {
    m_workspaceId = jsonValue.GetString("workspaceId");

  }

  if(jsonValue.ValueExists("sceneId"))
  {
    m_sceneId = jsonValue.GetString("sceneId");

  }

  if(jsonValue.ValueExists("contentLocation"))
  {
    m_contentLocation = jsonValue.GetString("contentLocation");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("capabilities"))
  {
    Aws::Utils::Array<JsonView> capabilitiesJsonList = jsonValue.GetArray("capabilities");
    for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
    {
      m_capabilities.push_back(capabilitiesJsonList[capabilitiesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("sceneMetadata"))
  {
    Aws::Map<Aws::String, JsonView> sceneMetadataJsonMap = jsonValue.GetObject("sceneMetadata").GetAllObjects();
    for(auto& sceneMetadataItem : sceneMetadataJsonMap)
    {
      m_sceneMetadata[sceneMetadataItem.first] = sceneMetadataItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("generatedSceneMetadata"))
  {
    Aws::Map<Aws::String, JsonView> generatedSceneMetadataJsonMap = jsonValue.GetObject("generatedSceneMetadata").GetAllObjects();
    for(auto& generatedSceneMetadataItem : generatedSceneMetadataJsonMap)
    {
      m_generatedSceneMetadata[generatedSceneMetadataItem.first] = generatedSceneMetadataItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
