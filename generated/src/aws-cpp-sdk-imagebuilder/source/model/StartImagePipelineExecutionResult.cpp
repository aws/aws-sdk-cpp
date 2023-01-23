/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/StartImagePipelineExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartImagePipelineExecutionResult::StartImagePipelineExecutionResult()
{
}

StartImagePipelineExecutionResult::StartImagePipelineExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartImagePipelineExecutionResult& StartImagePipelineExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");

  }

  if(jsonValue.ValueExists("imageBuildVersionArn"))
  {
    m_imageBuildVersionArn = jsonValue.GetString("imageBuildVersionArn");

  }



  return *this;
}
