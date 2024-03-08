/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreateAssetModelCompositeModelResult.h>
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

CreateAssetModelCompositeModelResult::CreateAssetModelCompositeModelResult()
{
}

CreateAssetModelCompositeModelResult::CreateAssetModelCompositeModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateAssetModelCompositeModelResult& CreateAssetModelCompositeModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetModelCompositeModelId"))
  {
    m_assetModelCompositeModelId = jsonValue.GetString("assetModelCompositeModelId");

  }

  if(jsonValue.ValueExists("assetModelCompositeModelPath"))
  {
    Aws::Utils::Array<JsonView> assetModelCompositeModelPathJsonList = jsonValue.GetArray("assetModelCompositeModelPath");
    for(unsigned assetModelCompositeModelPathIndex = 0; assetModelCompositeModelPathIndex < assetModelCompositeModelPathJsonList.GetLength(); ++assetModelCompositeModelPathIndex)
    {
      m_assetModelCompositeModelPath.push_back(assetModelCompositeModelPathJsonList[assetModelCompositeModelPathIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assetModelStatus"))
  {
    m_assetModelStatus = jsonValue.GetObject("assetModelStatus");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
