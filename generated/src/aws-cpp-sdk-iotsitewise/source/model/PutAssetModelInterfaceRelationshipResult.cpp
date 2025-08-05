/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PutAssetModelInterfaceRelationshipResult.h>
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

PutAssetModelInterfaceRelationshipResult::PutAssetModelInterfaceRelationshipResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutAssetModelInterfaceRelationshipResult& PutAssetModelInterfaceRelationshipResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetModelId"))
  {
    m_assetModelId = jsonValue.GetString("assetModelId");
    m_assetModelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("interfaceAssetModelId"))
  {
    m_interfaceAssetModelId = jsonValue.GetString("interfaceAssetModelId");
    m_interfaceAssetModelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModelArn"))
  {
    m_assetModelArn = jsonValue.GetString("assetModelArn");
    m_assetModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModelStatus"))
  {
    m_assetModelStatus = jsonValue.GetObject("assetModelStatus");
    m_assetModelStatusHasBeenSet = true;
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
