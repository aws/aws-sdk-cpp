/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WebNotificationSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

WebNotificationSource::WebNotificationSource(JsonView jsonValue) { *this = jsonValue; }

WebNotificationSource& WebNotificationSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceCampaign")) {
    m_sourceCampaign = jsonValue.GetObject("SourceCampaign");
    m_sourceCampaignHasBeenSet = true;
  }
  return *this;
}

JsonValue WebNotificationSource::Jsonize() const {
  JsonValue payload;

  if (m_sourceCampaignHasBeenSet) {
    payload.WithObject("SourceCampaign", m_sourceCampaign.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
