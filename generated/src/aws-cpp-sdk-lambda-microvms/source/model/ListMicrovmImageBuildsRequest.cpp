/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-microvms/model/ListMicrovmImageBuildsRequest.h>

#include <utility>

using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListMicrovmImageBuildsRequest::SerializePayload() const { return {}; }

void ListMicrovmImageBuildsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }

  if (m_architectureHasBeenSet) {
    ss << ArchitectureMapper::GetNameForArchitecture(m_architecture);
    uri.AddQueryStringParameter("architecture", ss.str());
    ss.str("");
  }

  if (m_chipsetHasBeenSet) {
    ss << ChipsetMapper::GetNameForChipset(m_chipset);
    uri.AddQueryStringParameter("chipset", ss.str());
    ss.str("");
  }

  if (m_chipsetGenerationHasBeenSet) {
    ss << m_chipsetGeneration;
    uri.AddQueryStringParameter("chipsetGeneration", ss.str());
    ss.str("");
  }
}
