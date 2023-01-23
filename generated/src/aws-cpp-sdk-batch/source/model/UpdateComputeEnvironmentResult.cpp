/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/UpdateComputeEnvironmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateComputeEnvironmentResult::UpdateComputeEnvironmentResult()
{
}

UpdateComputeEnvironmentResult::UpdateComputeEnvironmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateComputeEnvironmentResult& UpdateComputeEnvironmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("computeEnvironmentName"))
  {
    m_computeEnvironmentName = jsonValue.GetString("computeEnvironmentName");

  }

  if(jsonValue.ValueExists("computeEnvironmentArn"))
  {
    m_computeEnvironmentArn = jsonValue.GetString("computeEnvironmentArn");

  }



  return *this;
}
