/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetProvisionedModelThroughputResult.h>
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

GetProvisionedModelThroughputResult::GetProvisionedModelThroughputResult() : 
    m_modelUnits(0),
    m_desiredModelUnits(0),
    m_status(ProvisionedModelStatus::NOT_SET),
    m_commitmentDuration(CommitmentDuration::NOT_SET)
{
}

GetProvisionedModelThroughputResult::GetProvisionedModelThroughputResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_modelUnits(0),
    m_desiredModelUnits(0),
    m_status(ProvisionedModelStatus::NOT_SET),
    m_commitmentDuration(CommitmentDuration::NOT_SET)
{
  *this = result;
}

GetProvisionedModelThroughputResult& GetProvisionedModelThroughputResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("modelUnits"))
  {
    m_modelUnits = jsonValue.GetInteger("modelUnits");

  }

  if(jsonValue.ValueExists("desiredModelUnits"))
  {
    m_desiredModelUnits = jsonValue.GetInteger("desiredModelUnits");

  }

  if(jsonValue.ValueExists("provisionedModelName"))
  {
    m_provisionedModelName = jsonValue.GetString("provisionedModelName");

  }

  if(jsonValue.ValueExists("provisionedModelArn"))
  {
    m_provisionedModelArn = jsonValue.GetString("provisionedModelArn");

  }

  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");

  }

  if(jsonValue.ValueExists("desiredModelArn"))
  {
    m_desiredModelArn = jsonValue.GetString("desiredModelArn");

  }

  if(jsonValue.ValueExists("foundationModelArn"))
  {
    m_foundationModelArn = jsonValue.GetString("foundationModelArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ProvisionedModelStatusMapper::GetProvisionedModelStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");

  }

  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");

  }

  if(jsonValue.ValueExists("commitmentDuration"))
  {
    m_commitmentDuration = CommitmentDurationMapper::GetCommitmentDurationForName(jsonValue.GetString("commitmentDuration"));

  }

  if(jsonValue.ValueExists("commitmentExpirationTime"))
  {
    m_commitmentExpirationTime = jsonValue.GetString("commitmentExpirationTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
