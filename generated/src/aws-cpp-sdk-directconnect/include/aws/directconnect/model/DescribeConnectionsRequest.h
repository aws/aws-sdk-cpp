﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace DirectConnect {
namespace Model {

/**
 */
class DescribeConnectionsRequest : public DirectConnectRequest {
 public:
  AWS_DIRECTCONNECT_API DescribeConnectionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeConnections"; }

  AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

  AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the connection.</p>
   */
  inline const Aws::String& GetConnectionId() const { return m_connectionId; }
  inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
  template <typename ConnectionIdT = Aws::String>
  void SetConnectionId(ConnectionIdT&& value) {
    m_connectionIdHasBeenSet = true;
    m_connectionId = std::forward<ConnectionIdT>(value);
  }
  template <typename ConnectionIdT = Aws::String>
  DescribeConnectionsRequest& WithConnectionId(ConnectionIdT&& value) {
    SetConnectionId(std::forward<ConnectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return with a single call. To retrieve the
   * remaining results, make another call with the returned <code>nextToken</code>
   * value.</p> <p>If <code>MaxResults</code> is given a value larger than 100, only
   * 100 results are returned.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeConnectionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeConnectionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectionId;
  bool m_connectionIdHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
