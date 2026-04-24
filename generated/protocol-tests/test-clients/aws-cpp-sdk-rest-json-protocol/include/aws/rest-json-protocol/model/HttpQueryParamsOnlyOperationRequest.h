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
namespace Http {
class URI;
}  // namespace Http
namespace RestJsonProtocol {
namespace Model {

/**
 */
class HttpQueryParamsOnlyOperationRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API HttpQueryParamsOnlyOperationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "HttpQueryParamsOnlyOperation"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetQueryMap() const { return m_queryMap; }
  inline bool QueryMapHasBeenSet() const { return m_queryMapHasBeenSet; }
  template <typename QueryMapT = Aws::Map<Aws::String, Aws::String>>
  void SetQueryMap(QueryMapT&& value) {
    m_queryMapHasBeenSet = true;
    m_queryMap = std::forward<QueryMapT>(value);
  }
  template <typename QueryMapT = Aws::Map<Aws::String, Aws::String>>
  HttpQueryParamsOnlyOperationRequest& WithQueryMap(QueryMapT&& value) {
    SetQueryMap(std::forward<QueryMapT>(value));
    return *this;
  }
  template <typename QueryMapKeyT = Aws::String, typename QueryMapValueT = Aws::String>
  HttpQueryParamsOnlyOperationRequest& AddQueryMap(QueryMapKeyT&& key, QueryMapValueT&& value) {
    m_queryMapHasBeenSet = true;
    m_queryMap.emplace(std::forward<QueryMapKeyT>(key), std::forward<QueryMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_queryMap;
  bool m_queryMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
