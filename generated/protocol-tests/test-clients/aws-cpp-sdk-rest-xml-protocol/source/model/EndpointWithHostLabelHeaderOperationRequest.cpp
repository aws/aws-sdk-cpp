/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/EndpointWithHostLabelHeaderOperationRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String EndpointWithHostLabelHeaderOperationRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection EndpointWithHostLabelHeaderOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_accountIdHasBeenSet) {
    ss << m_accountId;
    headers.emplace("x-amz-account-id", ss.str());
    ss.str("");
  }

  return headers;
}
