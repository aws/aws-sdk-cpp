/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-core/model/ListNetworkConnectorsRequest.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListNetworkConnectorsRequest::SerializePayload() const { return {}; }

void ListNetworkConnectorsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_stateHasBeenSet) {
    ss << NetworkConnectorStateMapper::GetNameForNetworkConnectorState(m_state);
    uri.AddQueryStringParameter("State", ss.str());
    ss.str("");
  }

  if (m_markerHasBeenSet) {
    ss << m_marker;
    uri.AddQueryStringParameter("Marker", ss.str());
    ss.str("");
  }

  if (m_maxItemsHasBeenSet) {
    ss << m_maxItems;
    uri.AddQueryStringParameter("MaxItems", ss.str());
    ss.str("");
  }
}
