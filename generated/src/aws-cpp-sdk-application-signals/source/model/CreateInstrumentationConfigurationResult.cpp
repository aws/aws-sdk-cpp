/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/CreateInstrumentationConfigurationResult.h>
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

CreateInstrumentationConfigurationResult::CreateInstrumentationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

CreateInstrumentationConfigurationResult& CreateInstrumentationConfigurationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("InstrumentationType")) {
    m_instrumentationType = InstrumentationTypeMapper::GetInstrumentationTypeForName(jsonValue.GetString("InstrumentationType"));
    m_instrumentationTypeHasBeenSet = true;
  }
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
  if (jsonValue.ValueExists("LocationHash")) {
    m_locationHash = jsonValue.GetString("LocationHash");
    m_locationHashHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetDouble("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeFilters")) {
    Aws::Utils::Array<JsonView> attributeFiltersJsonList = jsonValue.GetArray("AttributeFilters");
    for (unsigned attributeFiltersIndex = 0; attributeFiltersIndex < attributeFiltersJsonList.GetLength(); ++attributeFiltersIndex) {
      Aws::Map<Aws::String, JsonView> dynamicInstrumentationAttributeFilterGroup2JsonMap =
          attributeFiltersJsonList[attributeFiltersIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> dynamicInstrumentationAttributeFilterGroup2Map;
      for (auto& dynamicInstrumentationAttributeFilterGroup2Item : dynamicInstrumentationAttributeFilterGroup2JsonMap) {
        dynamicInstrumentationAttributeFilterGroup2Map[dynamicInstrumentationAttributeFilterGroup2Item.first] =
            dynamicInstrumentationAttributeFilterGroup2Item.second.AsString();
      }
      m_attributeFilters.push_back(std::move(dynamicInstrumentationAttributeFilterGroup2Map));
    }
    m_attributeFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CaptureConfiguration")) {
    m_captureConfiguration = jsonValue.GetObject("CaptureConfiguration");
    m_captureConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ARN")) {
    m_aRN = jsonValue.GetString("ARN");
    m_aRNHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
