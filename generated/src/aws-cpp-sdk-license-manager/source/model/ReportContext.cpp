/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/ReportContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

ReportContext::ReportContext(JsonView jsonValue) { *this = jsonValue; }

ReportContext& ReportContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("licenseConfigurationArns")) {
    Aws::Utils::Array<JsonView> licenseConfigurationArnsJsonList = jsonValue.GetArray("licenseConfigurationArns");
    for (unsigned licenseConfigurationArnsIndex = 0; licenseConfigurationArnsIndex < licenseConfigurationArnsJsonList.GetLength();
         ++licenseConfigurationArnsIndex) {
      m_licenseConfigurationArns.push_back(licenseConfigurationArnsJsonList[licenseConfigurationArnsIndex].AsString());
    }
    m_licenseConfigurationArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("licenseAssetGroupArns")) {
    Aws::Utils::Array<JsonView> licenseAssetGroupArnsJsonList = jsonValue.GetArray("licenseAssetGroupArns");
    for (unsigned licenseAssetGroupArnsIndex = 0; licenseAssetGroupArnsIndex < licenseAssetGroupArnsJsonList.GetLength();
         ++licenseAssetGroupArnsIndex) {
      m_licenseAssetGroupArns.push_back(licenseAssetGroupArnsJsonList[licenseAssetGroupArnsIndex].AsString());
    }
    m_licenseAssetGroupArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reportStartDate")) {
    m_reportStartDate = jsonValue.GetDouble("reportStartDate");
    m_reportStartDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reportEndDate")) {
    m_reportEndDate = jsonValue.GetDouble("reportEndDate");
    m_reportEndDateHasBeenSet = true;
  }
  return *this;
}

JsonValue ReportContext::Jsonize() const {
  JsonValue payload;

  if (m_licenseConfigurationArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> licenseConfigurationArnsJsonList(m_licenseConfigurationArns.size());
    for (unsigned licenseConfigurationArnsIndex = 0; licenseConfigurationArnsIndex < licenseConfigurationArnsJsonList.GetLength();
         ++licenseConfigurationArnsIndex) {
      licenseConfigurationArnsJsonList[licenseConfigurationArnsIndex].AsString(m_licenseConfigurationArns[licenseConfigurationArnsIndex]);
    }
    payload.WithArray("licenseConfigurationArns", std::move(licenseConfigurationArnsJsonList));
  }

  if (m_licenseAssetGroupArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> licenseAssetGroupArnsJsonList(m_licenseAssetGroupArns.size());
    for (unsigned licenseAssetGroupArnsIndex = 0; licenseAssetGroupArnsIndex < licenseAssetGroupArnsJsonList.GetLength();
         ++licenseAssetGroupArnsIndex) {
      licenseAssetGroupArnsJsonList[licenseAssetGroupArnsIndex].AsString(m_licenseAssetGroupArns[licenseAssetGroupArnsIndex]);
    }
    payload.WithArray("licenseAssetGroupArns", std::move(licenseAssetGroupArnsJsonList));
  }

  if (m_reportStartDateHasBeenSet) {
    payload.WithDouble("reportStartDate", m_reportStartDate.SecondsWithMSPrecision());
  }

  if (m_reportEndDateHasBeenSet) {
    payload.WithDouble("reportEndDate", m_reportEndDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
