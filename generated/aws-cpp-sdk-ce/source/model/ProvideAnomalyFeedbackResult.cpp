/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ProvideAnomalyFeedbackResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ProvideAnomalyFeedbackResult::ProvideAnomalyFeedbackResult()
{
}

ProvideAnomalyFeedbackResult::ProvideAnomalyFeedbackResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ProvideAnomalyFeedbackResult& ProvideAnomalyFeedbackResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnomalyId"))
  {
    m_anomalyId = jsonValue.GetString("AnomalyId");

  }



  return *this;
}
