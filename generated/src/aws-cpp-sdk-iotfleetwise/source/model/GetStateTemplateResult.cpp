/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/GetStateTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStateTemplateResult::GetStateTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetStateTemplateResult& GetStateTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signalCatalogArn"))
  {
    m_signalCatalogArn = jsonValue.GetString("signalCatalogArn");
    m_signalCatalogArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateTemplateProperties"))
  {
    Aws::Utils::Array<JsonView> stateTemplatePropertiesJsonList = jsonValue.GetArray("stateTemplateProperties");
    for(unsigned stateTemplatePropertiesIndex = 0; stateTemplatePropertiesIndex < stateTemplatePropertiesJsonList.GetLength(); ++stateTemplatePropertiesIndex)
    {
      m_stateTemplateProperties.push_back(stateTemplatePropertiesJsonList[stateTemplatePropertiesIndex].AsString());
    }
    m_stateTemplatePropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataExtraDimensions"))
  {
    Aws::Utils::Array<JsonView> dataExtraDimensionsJsonList = jsonValue.GetArray("dataExtraDimensions");
    for(unsigned dataExtraDimensionsIndex = 0; dataExtraDimensionsIndex < dataExtraDimensionsJsonList.GetLength(); ++dataExtraDimensionsIndex)
    {
      m_dataExtraDimensions.push_back(dataExtraDimensionsJsonList[dataExtraDimensionsIndex].AsString());
    }
    m_dataExtraDimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadataExtraDimensions"))
  {
    Aws::Utils::Array<JsonView> metadataExtraDimensionsJsonList = jsonValue.GetArray("metadataExtraDimensions");
    for(unsigned metadataExtraDimensionsIndex = 0; metadataExtraDimensionsIndex < metadataExtraDimensionsJsonList.GetLength(); ++metadataExtraDimensionsIndex)
    {
      m_metadataExtraDimensions.push_back(metadataExtraDimensionsJsonList[metadataExtraDimensionsIndex].AsString());
    }
    m_metadataExtraDimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("lastModificationTime");
    m_lastModificationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
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
