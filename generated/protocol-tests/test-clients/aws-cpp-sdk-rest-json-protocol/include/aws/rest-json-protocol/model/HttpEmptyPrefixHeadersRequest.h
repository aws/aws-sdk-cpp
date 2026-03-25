/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class HttpEmptyPrefixHeadersRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API HttpEmptyPrefixHeadersRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "HttpEmptyPrefixHeaders"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetPrefixHeaders() const { return m_prefixHeaders; }
  inline bool PrefixHeadersHasBeenSet() const { return m_prefixHeadersHasBeenSet; }
  template <typename PrefixHeadersT = Aws::Map<Aws::String, Aws::String>>
  void SetPrefixHeaders(PrefixHeadersT&& value) {
    m_prefixHeadersHasBeenSet = true;
    m_prefixHeaders = std::forward<PrefixHeadersT>(value);
  }
  template <typename PrefixHeadersT = Aws::Map<Aws::String, Aws::String>>
  HttpEmptyPrefixHeadersRequest& WithPrefixHeaders(PrefixHeadersT&& value) {
    SetPrefixHeaders(std::forward<PrefixHeadersT>(value));
    return *this;
  }
  template <typename PrefixHeadersKeyT = Aws::String, typename PrefixHeadersValueT = Aws::String>
  HttpEmptyPrefixHeadersRequest& AddPrefixHeaders(PrefixHeadersKeyT&& key, PrefixHeadersValueT&& value) {
    m_prefixHeadersHasBeenSet = true;
    m_prefixHeaders.emplace(std::forward<PrefixHeadersKeyT>(key), std::forward<PrefixHeadersValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSpecificHeader() const { return m_specificHeader; }
  inline bool SpecificHeaderHasBeenSet() const { return m_specificHeaderHasBeenSet; }
  template <typename SpecificHeaderT = Aws::String>
  void SetSpecificHeader(SpecificHeaderT&& value) {
    m_specificHeaderHasBeenSet = true;
    m_specificHeader = std::forward<SpecificHeaderT>(value);
  }
  template <typename SpecificHeaderT = Aws::String>
  HttpEmptyPrefixHeadersRequest& WithSpecificHeader(SpecificHeaderT&& value) {
    SetSpecificHeader(std::forward<SpecificHeaderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_prefixHeaders;

  Aws::String m_specificHeader;
  bool m_prefixHeadersHasBeenSet = false;
  bool m_specificHeaderHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
