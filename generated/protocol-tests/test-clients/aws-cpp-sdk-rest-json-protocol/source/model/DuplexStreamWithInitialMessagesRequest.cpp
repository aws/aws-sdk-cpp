/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/DuplexStreamWithInitialMessagesRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

std::shared_ptr<Aws::IOStream> DuplexStreamWithInitialMessagesRequest::GetBody() const { return m_stream; }

Aws::Http::HeaderValueCollection DuplexStreamWithInitialMessagesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_initialRequestMemberHasBeenSet) {
    ss << m_initialRequestMember;
    headers.emplace("initial-request-member", ss.str());
    ss.str("");
  }
  return headers;
}
