/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/UpdateFlowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateFlowResult::UpdateFlowResult() : 
    m_flowStatus(FlowStatus::NOT_SET)
{
}

UpdateFlowResult::UpdateFlowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_flowStatus(FlowStatus::NOT_SET)
{
  *this = result;
}

UpdateFlowResult& UpdateFlowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("flowStatus"))
  {
    m_flowStatus = FlowStatusMapper::GetFlowStatusForName(jsonValue.GetString("flowStatus"));

  }



  return *this;
}
