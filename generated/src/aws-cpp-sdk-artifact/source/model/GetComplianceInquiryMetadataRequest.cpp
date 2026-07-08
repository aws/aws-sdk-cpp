/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/GetComplianceInquiryMetadataRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Artifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetComplianceInquiryMetadataRequest::SerializePayload() const { return {}; }

void GetComplianceInquiryMetadataRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_complianceInquiryIdHasBeenSet) {
    ss << m_complianceInquiryId;
    uri.AddQueryStringParameter("complianceInquiryId", ss.str());
    ss.str("");
  }
}
