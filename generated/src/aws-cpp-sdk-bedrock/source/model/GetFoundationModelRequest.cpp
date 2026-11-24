/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetFoundationModelRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetFoundationModelRequest::SerializePayload() const { return {}; }

void GetFoundationModelRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_projectIdentifierHasBeenSet) {
    ss << m_projectIdentifier;
    uri.AddQueryStringParameter("projectIdentifier", ss.str());
    ss.str("");
  }
}
