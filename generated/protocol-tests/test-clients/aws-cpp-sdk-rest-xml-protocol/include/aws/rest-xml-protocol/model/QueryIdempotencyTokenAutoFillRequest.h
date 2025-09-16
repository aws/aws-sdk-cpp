/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace RestXmlProtocol {
namespace Model {

/**
 */
class QueryIdempotencyTokenAutoFillRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API QueryIdempotencyTokenAutoFillRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "QueryIdempotencyTokenAutoFill"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTXMLPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::String& GetToken() const { return m_token; }
  inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
  template <typename TokenT = Aws::String>
  void SetToken(TokenT&& value) {
    m_tokenHasBeenSet = true;
    m_token = std::forward<TokenT>(value);
  }
  template <typename TokenT = Aws::String>
  QueryIdempotencyTokenAutoFillRequest& WithToken(TokenT&& value) {
    SetToken(std::forward<TokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_token{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_tokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
