/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/GetInstrumentationConfigurationStatusResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInstrumentationConfigurationStatusResult::GetInstrumentationConfigurationStatusResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetInstrumentationConfigurationStatusResult& GetInstrumentationConfigurationStatusResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Service")) {
    m_service = jsonValue.GetString("Service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Environment")) {
    m_environment = jsonValue.GetString("Environment");
    m_environmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SignalType")) {
    m_signalType = DynamicInstrumentationSignalTypeMapper::GetDynamicInstrumentationSignalTypeForName(jsonValue.GetString("SignalType"));
    m_signalTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Location")) {
    m_location = jsonValue.GetObject("Location");
    m_locationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = InstrumentationConfigurationStatusMapper::GetInstrumentationConfigurationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Events")) {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("Events");
    for (unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex) {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
    m_eventsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
