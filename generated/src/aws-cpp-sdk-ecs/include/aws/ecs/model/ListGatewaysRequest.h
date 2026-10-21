/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayStatus.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class ListGatewaysRequest : public ECSRequest {
 public:
  AWS_ECS_API ListGatewaysRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListGateways"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The gateway names to filter the results by. You can specify up to 10
   * names.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNames() const { return m_names; }
  inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
  template <typename NamesT = Aws::Vector<Aws::String>>
  void SetNames(NamesT&& value) {
    m_namesHasBeenSet = true;
    m_names = std::forward<NamesT>(value);
  }
  template <typename NamesT = Aws::Vector<Aws::String>>
  ListGatewaysRequest& WithNames(NamesT&& value) {
    SetNames(std::forward<NamesT>(value));
    return *this;
  }
  template <typename NamesT = Aws::String>
  ListGatewaysRequest& AddNames(NamesT&& value) {
    m_namesHasBeenSet = true;
    m_names.emplace_back(std::forward<NamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The gateway statuses to filter the results by.</p>
   */
  inline const Aws::Vector<GatewayStatus>& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::Vector<GatewayStatus>>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::Vector<GatewayStatus>>
  ListGatewaysRequest& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  inline ListGatewaysRequest& AddStatus(GatewayStatus value) {
    m_statusHasBeenSet = true;
    m_status.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of gateway results that <code>ListGateways</code> returns
   * in a single page. The default is 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListGatewaysRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value returned from a previous paginated
   * <code>ListGateways</code> request where <code>maxResults</code> was used and the
   * results exceeded the value of that parameter. Pagination continues from the end
   * of the previous results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListGatewaysRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_names;

  Aws::Vector<GatewayStatus> m_status;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_namesHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
