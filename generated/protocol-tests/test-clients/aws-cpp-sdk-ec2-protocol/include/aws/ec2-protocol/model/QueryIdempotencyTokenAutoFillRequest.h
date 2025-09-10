/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2-protocol/EC2ProtocolRequest.h>
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2Protocol {
namespace Model {

/**
 */
class QueryIdempotencyTokenAutoFillRequest : public EC2ProtocolRequest {
 public:
  AWS_EC2PROTOCOL_API QueryIdempotencyTokenAutoFillRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "QueryIdempotencyTokenAutoFill"; }

  AWS_EC2PROTOCOL_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2PROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
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
}  // namespace EC2Protocol
}  // namespace Aws
