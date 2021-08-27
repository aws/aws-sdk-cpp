/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PutActionRevisionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutActionRevisionResult::PutActionRevisionResult() : 
    m_newRevision(false)
{
}

PutActionRevisionResult::PutActionRevisionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_newRevision(false)
{
  *this = result;
}

PutActionRevisionResult& PutActionRevisionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("newRevision"))
  {
    m_newRevision = jsonValue.GetBool("newRevision");

  }

  if(jsonValue.ValueExists("pipelineExecutionId"))
  {
    m_pipelineExecutionId = jsonValue.GetString("pipelineExecutionId");

  }



  return *this;
}
