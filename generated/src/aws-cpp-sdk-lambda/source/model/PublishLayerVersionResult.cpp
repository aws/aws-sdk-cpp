/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/PublishLayerVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PublishLayerVersionResult::PublishLayerVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PublishLayerVersionResult& PublishLayerVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetObject("Content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LayerArn"))
  {
    m_layerArn = jsonValue.GetString("LayerArn");
    m_layerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LayerVersionArn"))
  {
    m_layerVersionArn = jsonValue.GetString("LayerVersionArn");
    m_layerVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompatibleRuntimes"))
  {
    Aws::Utils::Array<JsonView> compatibleRuntimesJsonList = jsonValue.GetArray("CompatibleRuntimes");
    for(unsigned compatibleRuntimesIndex = 0; compatibleRuntimesIndex < compatibleRuntimesJsonList.GetLength(); ++compatibleRuntimesIndex)
    {
      m_compatibleRuntimes.push_back(RuntimeMapper::GetRuntimeForName(compatibleRuntimesJsonList[compatibleRuntimesIndex].AsString()));
    }
    m_compatibleRuntimesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LicenseInfo"))
  {
    m_licenseInfo = jsonValue.GetString("LicenseInfo");
    m_licenseInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompatibleArchitectures"))
  {
    Aws::Utils::Array<JsonView> compatibleArchitecturesJsonList = jsonValue.GetArray("CompatibleArchitectures");
    for(unsigned compatibleArchitecturesIndex = 0; compatibleArchitecturesIndex < compatibleArchitecturesJsonList.GetLength(); ++compatibleArchitecturesIndex)
    {
      m_compatibleArchitectures.push_back(ArchitectureMapper::GetArchitectureForName(compatibleArchitecturesJsonList[compatibleArchitecturesIndex].AsString()));
    }
    m_compatibleArchitecturesHasBeenSet = true;
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
