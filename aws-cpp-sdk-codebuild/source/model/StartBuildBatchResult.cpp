/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/StartBuildBatchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartBuildBatchResult::StartBuildBatchResult()
{
}

StartBuildBatchResult::StartBuildBatchResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartBuildBatchResult& StartBuildBatchResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("buildBatch"))
  {
    m_buildBatch = jsonValue.GetObject("buildBatch");

  }



  return *this;
}
