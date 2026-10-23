/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/DuplexStreamWithInitialMessagesInitialResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

DuplexStreamWithInitialMessagesInitialResponse::DuplexStreamWithInitialMessagesInitialResponse(JsonView jsonValue) { *this = jsonValue; }

DuplexStreamWithInitialMessagesInitialResponse& DuplexStreamWithInitialMessagesInitialResponse::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

DuplexStreamWithInitialMessagesInitialResponse::DuplexStreamWithInitialMessagesInitialResponse(const Http::HeaderValueCollection& headers)
    : DuplexStreamWithInitialMessagesInitialResponse() {
  const auto& initialResponseMemberIter = headers.find("initial-response-member");
  if (initialResponseMemberIter != headers.end()) {
    m_initialResponseMember = initialResponseMemberIter->second;
    m_initialResponseMemberHasBeenSet = true;
  }
}

JsonValue DuplexStreamWithInitialMessagesInitialResponse::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
