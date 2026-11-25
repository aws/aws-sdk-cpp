/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elb-proxy/ELBProxyRequest.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ProxyType.h>

#include <utility>

namespace Aws {
namespace ELBProxy {
namespace Model {

/**
 */
class ListProxyVersionsRequest : public ELBProxyRequest {
 public:
  AWS_ELBPROXY_API ListProxyVersionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListProxyVersions"; }

  AWS_ELBPROXY_API Aws::String SerializePayload() const override;

  AWS_ELBPROXY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The type of proxy.</p>
   */
  inline ProxyType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ProxyType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ListProxyVersionsRequest& WithType(ProxyType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListProxyVersionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListProxyVersionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  ProxyType m_type{ProxyType::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_typeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
