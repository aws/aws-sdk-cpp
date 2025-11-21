/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetEventConfigurationResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEventConfigurationResult::GetEventConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetEventConfigurationResult& GetEventConfigurationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("TrailARN")) {
    m_trailARN = jsonValue.GetString("TrailARN");
    m_trailARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventDataStoreArn")) {
    m_eventDataStoreArn = jsonValue.GetString("EventDataStoreArn");
    m_eventDataStoreArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxEventSize")) {
    m_maxEventSize = MaxEventSizeMapper::GetMaxEventSizeForName(jsonValue.GetString("MaxEventSize"));
    m_maxEventSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContextKeySelectors")) {
    Aws::Utils::Array<JsonView> contextKeySelectorsJsonList = jsonValue.GetArray("ContextKeySelectors");
    for (unsigned contextKeySelectorsIndex = 0; contextKeySelectorsIndex < contextKeySelectorsJsonList.GetLength();
         ++contextKeySelectorsIndex) {
      m_contextKeySelectors.push_back(contextKeySelectorsJsonList[contextKeySelectorsIndex].AsObject());
    }
    m_contextKeySelectorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AggregationConfigurations")) {
    Aws::Utils::Array<JsonView> aggregationConfigurationsJsonList = jsonValue.GetArray("AggregationConfigurations");
    for (unsigned aggregationConfigurationsIndex = 0; aggregationConfigurationsIndex < aggregationConfigurationsJsonList.GetLength();
         ++aggregationConfigurationsIndex) {
      m_aggregationConfigurations.push_back(aggregationConfigurationsJsonList[aggregationConfigurationsIndex].AsObject());
    }
    m_aggregationConfigurationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
