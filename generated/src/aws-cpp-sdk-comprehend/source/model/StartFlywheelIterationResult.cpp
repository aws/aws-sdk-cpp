/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/StartFlywheelIterationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartFlywheelIterationResult::StartFlywheelIterationResult()
{
}

StartFlywheelIterationResult::StartFlywheelIterationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartFlywheelIterationResult& StartFlywheelIterationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FlywheelArn"))
  {
    m_flywheelArn = jsonValue.GetString("FlywheelArn");

  }

  if(jsonValue.ValueExists("FlywheelIterationId"))
  {
    m_flywheelIterationId = jsonValue.GetString("FlywheelIterationId");

  }



  return *this;
}
