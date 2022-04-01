/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/AcknowledgeThirdPartyJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AcknowledgeThirdPartyJobResult::AcknowledgeThirdPartyJobResult() : 
    m_status(JobStatus::NOT_SET)
{
}

AcknowledgeThirdPartyJobResult::AcknowledgeThirdPartyJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(JobStatus::NOT_SET)
{
  *this = result;
}

AcknowledgeThirdPartyJobResult& AcknowledgeThirdPartyJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
