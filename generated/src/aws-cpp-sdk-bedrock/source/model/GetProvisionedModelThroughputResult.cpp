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

GetProvisionedModelThroughputResult::GetProvisionedModelThroughputResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetProvisionedModelThroughputResult& GetProvisionedModelThroughputResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("modelUnits"))
  {
    m_modelUnits = jsonValue.GetInteger("modelUnits");
    m_modelUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("desiredModelUnits"))
  {
    m_desiredModelUnits = jsonValue.GetInteger("desiredModelUnits");
    m_desiredModelUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provisionedModelName"))
  {
    m_provisionedModelName = jsonValue.GetString("provisionedModelName");
    m_provisionedModelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provisionedModelArn"))
  {
    m_provisionedModelArn = jsonValue.GetString("provisionedModelArn");
    m_provisionedModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("desiredModelArn"))
  {
    m_desiredModelArn = jsonValue.GetString("desiredModelArn");
    m_desiredModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("foundationModelArn"))
  {
    m_foundationModelArn = jsonValue.GetString("foundationModelArn");
    m_foundationModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ProvisionedModelStatusMapper::GetProvisionedModelStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commitmentDuration"))
  {
    m_commitmentDuration = CommitmentDurationMapper::GetCommitmentDurationForName(jsonValue.GetString("commitmentDuration"));
    m_commitmentDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commitmentExpirationTime"))
  {
    m_commitmentExpirationTime = jsonValue.GetString("commitmentExpirationTime");
    m_commitmentExpirationTimeHasBeenSet = true;
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
