/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetModelCopyJobResult.h>
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

GetModelCopyJobResult::GetModelCopyJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetModelCopyJobResult& GetModelCopyJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ModelCopyJobStatusMapper::GetModelCopyJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetModelArn"))
  {
    m_targetModelArn = jsonValue.GetString("targetModelArn");
    m_targetModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetModelName"))
  {
    m_targetModelName = jsonValue.GetString("targetModelName");
    m_targetModelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceAccountId"))
  {
    m_sourceAccountId = jsonValue.GetString("sourceAccountId");
    m_sourceAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceModelArn"))
  {
    m_sourceModelArn = jsonValue.GetString("sourceModelArn");
    m_sourceModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetModelKmsKeyArn"))
  {
    m_targetModelKmsKeyArn = jsonValue.GetString("targetModelKmsKeyArn");
    m_targetModelKmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetModelTags"))
  {
    Aws::Utils::Array<JsonView> targetModelTagsJsonList = jsonValue.GetArray("targetModelTags");
    for(unsigned targetModelTagsIndex = 0; targetModelTagsIndex < targetModelTagsJsonList.GetLength(); ++targetModelTagsIndex)
    {
      m_targetModelTags.push_back(targetModelTagsJsonList[targetModelTagsIndex].AsObject());
    }
    m_targetModelTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceModelName"))
  {
    m_sourceModelName = jsonValue.GetString("sourceModelName");
    m_sourceModelNameHasBeenSet = true;
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
