/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ListExperimentDefinitionsRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListExperimentDefinitionsRequest::SerializePayload() const { return {}; }

void ListExperimentDefinitionsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_applicationIdentifierHasBeenSet) {
    ss << m_applicationIdentifier;
    uri.AddQueryStringParameter("application_identifier", ss.str());
    ss.str("");
  }

  if (m_configurationProfileIdentifierHasBeenSet) {
    ss << m_configurationProfileIdentifier;
    uri.AddQueryStringParameter("configuration_profile_identifier", ss.str());
    ss.str("");
  }

  if (m_environmentIdentifierHasBeenSet) {
    ss << m_environmentIdentifier;
    uri.AddQueryStringParameter("environment_identifier", ss.str());
    ss.str("");
  }

  if (m_statusHasBeenSet) {
    ss << ExperimentDefinitionStatusMapper::GetNameForExperimentDefinitionStatus(m_status);
    uri.AddQueryStringParameter("status", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("max_results", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("next_token", ss.str());
    ss.str("");
  }
}
