/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ivsrealtime {
namespace Model {

/**
 */
class RevokeConnectionTokenRequest : public IvsrealtimeRequest {
 public:
  AWS_IVSREALTIME_API RevokeConnectionTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RevokeConnectionToken"; }

  AWS_IVSREALTIME_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the connection token to revoke.</p>
   */
  inline const Aws::String& GetTokenId() const { return m_tokenId; }
  inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }
  template <typename TokenIdT = Aws::String>
  void SetTokenId(TokenIdT&& value) {
    m_tokenIdHasBeenSet = true;
    m_tokenId = std::forward<TokenIdT>(value);
  }
  template <typename TokenIdT = Aws::String>
  RevokeConnectionTokenRequest& WithTokenId(TokenIdT&& value) {
    SetTokenId(std::forward<TokenIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tokenId;
  bool m_tokenIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ivsrealtime
}  // namespace Aws
