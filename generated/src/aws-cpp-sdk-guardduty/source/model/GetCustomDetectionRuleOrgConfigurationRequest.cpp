/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/guardduty/model/GetCustomDetectionRuleOrgConfigurationRequest.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetCustomDetectionRuleOrgConfigurationRequest::SerializePayload() const { return {}; }

void GetCustomDetectionRuleOrgConfigurationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_modeHasBeenSet) {
    ss << AssociationModeMapper::GetNameForAssociationMode(m_mode);
    uri.AddQueryStringParameter("mode", ss.str());
    ss.str("");
  }
}
