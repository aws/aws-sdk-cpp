/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/NotifyCodeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

NotifyCodeConfiguration::NotifyCodeConfiguration(JsonView jsonValue) { *this = jsonValue; }

NotifyCodeConfiguration& NotifyCodeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("notifyCodeConfigurationId")) {
    m_notifyCodeConfigurationId = jsonValue.GetString("notifyCodeConfigurationId");
    m_notifyCodeConfigurationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notifyCodeConfigurationArn")) {
    m_notifyCodeConfigurationArn = jsonValue.GetString("notifyCodeConfigurationArn");
    m_notifyCodeConfigurationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notifyCodeConfigurationName")) {
    m_notifyCodeConfigurationName = jsonValue.GetString("notifyCodeConfigurationName");
    m_notifyCodeConfigurationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeConfigurationParameters")) {
    m_codeConfigurationParameters = jsonValue.GetObject("codeConfigurationParameters");
    m_codeConfigurationParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channelParameters")) {
    m_channelParameters = jsonValue.GetObject("channelParameters");
    m_channelParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deletionProtectionEnabled")) {
    m_deletionProtectionEnabled = jsonValue.GetBool("deletionProtectionEnabled");
    m_deletionProtectionEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue NotifyCodeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_notifyCodeConfigurationIdHasBeenSet) {
    payload.WithString("notifyCodeConfigurationId", m_notifyCodeConfigurationId);
  }

  if (m_notifyCodeConfigurationArnHasBeenSet) {
    payload.WithString("notifyCodeConfigurationArn", m_notifyCodeConfigurationArn);
  }

  if (m_notifyCodeConfigurationNameHasBeenSet) {
    payload.WithString("notifyCodeConfigurationName", m_notifyCodeConfigurationName);
  }

  if (m_codeConfigurationParametersHasBeenSet) {
    payload.WithObject("codeConfigurationParameters", m_codeConfigurationParameters.Jsonize());
  }

  if (m_channelParametersHasBeenSet) {
    payload.WithObject("channelParameters", m_channelParameters.Jsonize());
  }

  if (m_deletionProtectionEnabledHasBeenSet) {
    payload.WithBool("deletionProtectionEnabled", m_deletionProtectionEnabled);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
