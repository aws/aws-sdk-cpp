/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ImportModelVersionResult.h>
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

ImportModelVersionResult::ImportModelVersionResult() : 
    m_modelVersion(0),
    m_status(ModelVersionStatus::NOT_SET)
{
}

ImportModelVersionResult::ImportModelVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_modelVersion(0),
    m_status(ModelVersionStatus::NOT_SET)
{
  *this = result;
}

ImportModelVersionResult& ImportModelVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("ModelVersionArn"))
  {
    m_modelVersionArn = jsonValue.GetString("ModelVersionArn");

  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetInt64("ModelVersion");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelVersionStatusMapper::GetModelVersionStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
