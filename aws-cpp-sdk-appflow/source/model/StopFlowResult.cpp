/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/StopFlowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StopFlowResult::StopFlowResult() : 
    m_flowStatus(FlowStatus::NOT_SET)
{
}

StopFlowResult::StopFlowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_flowStatus(FlowStatus::NOT_SET)
{
  *this = result;
}

StopFlowResult& StopFlowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");

  }

  if(jsonValue.ValueExists("flowStatus"))
  {
    m_flowStatus = FlowStatusMapper::GetFlowStatusForName(jsonValue.GetString("flowStatus"));

  }



  return *this;
}
