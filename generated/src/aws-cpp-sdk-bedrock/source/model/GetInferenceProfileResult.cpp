/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetInferenceProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInferenceProfileResult::GetInferenceProfileResult() : 
    m_status(InferenceProfileStatus::NOT_SET),
    m_type(InferenceProfileType::NOT_SET)
{
}

GetInferenceProfileResult::GetInferenceProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetInferenceProfileResult()
{
  *this = result;
}

GetInferenceProfileResult& GetInferenceProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("inferenceProfileName"))
  {
    m_inferenceProfileName = jsonValue.GetString("inferenceProfileName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("inferenceProfileArn"))
  {
    m_inferenceProfileArn = jsonValue.GetString("inferenceProfileArn");

  }

  if(jsonValue.ValueExists("models"))
  {
    Aws::Utils::Array<JsonView> modelsJsonList = jsonValue.GetArray("models");
    for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
    {
      m_models.push_back(modelsJsonList[modelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("inferenceProfileId"))
  {
    m_inferenceProfileId = jsonValue.GetString("inferenceProfileId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = InferenceProfileStatusMapper::GetInferenceProfileStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = InferenceProfileTypeMapper::GetInferenceProfileTypeForName(jsonValue.GetString("type"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
