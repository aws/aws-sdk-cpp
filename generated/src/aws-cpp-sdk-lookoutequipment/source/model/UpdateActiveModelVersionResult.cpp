/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/UpdateActiveModelVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateActiveModelVersionResult::UpdateActiveModelVersionResult() : 
    m_currentActiveVersion(0),
    m_previousActiveVersion(0)
{
}

UpdateActiveModelVersionResult::UpdateActiveModelVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_currentActiveVersion(0),
    m_previousActiveVersion(0)
{
  *this = result;
}

UpdateActiveModelVersionResult& UpdateActiveModelVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

  }

  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

  }

  if(jsonValue.ValueExists("CurrentActiveVersion"))
  {
    m_currentActiveVersion = jsonValue.GetInt64("CurrentActiveVersion");

  }

  if(jsonValue.ValueExists("PreviousActiveVersion"))
  {
    m_previousActiveVersion = jsonValue.GetInt64("PreviousActiveVersion");

  }

  if(jsonValue.ValueExists("CurrentActiveVersionArn"))
  {
    m_currentActiveVersionArn = jsonValue.GetString("CurrentActiveVersionArn");

  }

  if(jsonValue.ValueExists("PreviousActiveVersionArn"))
  {
    m_previousActiveVersionArn = jsonValue.GetString("PreviousActiveVersionArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
