/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeComputationModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeComputationModelResult::DescribeComputationModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeComputationModelResult& DescribeComputationModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("computationModelId"))
  {
    m_computationModelId = jsonValue.GetString("computationModelId");
    m_computationModelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computationModelArn"))
  {
    m_computationModelArn = jsonValue.GetString("computationModelArn");
    m_computationModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computationModelName"))
  {
    m_computationModelName = jsonValue.GetString("computationModelName");
    m_computationModelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computationModelDescription"))
  {
    m_computationModelDescription = jsonValue.GetString("computationModelDescription");
    m_computationModelDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computationModelConfiguration"))
  {
    m_computationModelConfiguration = jsonValue.GetObject("computationModelConfiguration");
    m_computationModelConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computationModelDataBinding"))
  {
    Aws::Map<Aws::String, JsonView> computationModelDataBindingJsonMap = jsonValue.GetObject("computationModelDataBinding").GetAllObjects();
    for(auto& computationModelDataBindingItem : computationModelDataBindingJsonMap)
    {
      m_computationModelDataBinding[computationModelDataBindingItem.first] = computationModelDataBindingItem.second.AsObject();
    }
    m_computationModelDataBindingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computationModelCreationDate"))
  {
    m_computationModelCreationDate = jsonValue.GetDouble("computationModelCreationDate");
    m_computationModelCreationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computationModelLastUpdateDate"))
  {
    m_computationModelLastUpdateDate = jsonValue.GetDouble("computationModelLastUpdateDate");
    m_computationModelLastUpdateDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computationModelStatus"))
  {
    m_computationModelStatus = jsonValue.GetObject("computationModelStatus");
    m_computationModelStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computationModelVersion"))
  {
    m_computationModelVersion = jsonValue.GetString("computationModelVersion");
    m_computationModelVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionDefinitions"))
  {
    Aws::Utils::Array<JsonView> actionDefinitionsJsonList = jsonValue.GetArray("actionDefinitions");
    for(unsigned actionDefinitionsIndex = 0; actionDefinitionsIndex < actionDefinitionsJsonList.GetLength(); ++actionDefinitionsIndex)
    {
      m_actionDefinitions.push_back(actionDefinitionsJsonList[actionDefinitionsIndex].AsObject());
    }
    m_actionDefinitionsHasBeenSet = true;
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
