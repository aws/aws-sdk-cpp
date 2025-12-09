/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/TieringConfigurationsListMember.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Backup {
namespace Model {
class ListTieringConfigurationsResult {
 public:
  AWS_BACKUP_API ListTieringConfigurationsResult() = default;
  AWS_BACKUP_API ListTieringConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BACKUP_API ListTieringConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of tiering configurations returned by the
   * <code>ListTieringConfigurations</code> call.</p>
   */
  inline const Aws::Vector<TieringConfigurationsListMember>& GetTieringConfigurations() const { return m_tieringConfigurations; }
  template <typename TieringConfigurationsT = Aws::Vector<TieringConfigurationsListMember>>
  void SetTieringConfigurations(TieringConfigurationsT&& value) {
    m_tieringConfigurationsHasBeenSet = true;
    m_tieringConfigurations = std::forward<TieringConfigurationsT>(value);
  }
  template <typename TieringConfigurationsT = Aws::Vector<TieringConfigurationsListMember>>
  ListTieringConfigurationsResult& WithTieringConfigurations(TieringConfigurationsT&& value) {
    SetTieringConfigurations(std::forward<TieringConfigurationsT>(value));
    return *this;
  }
  template <typename TieringConfigurationsT = TieringConfigurationsListMember>
  ListTieringConfigurationsResult& AddTieringConfigurations(TieringConfigurationsT&& value) {
    m_tieringConfigurationsHasBeenSet = true;
    m_tieringConfigurations.emplace_back(std::forward<TieringConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The next item following a partial list of returned items. For example, if a
   * request is made to return <code>MaxResults</code> number of items,
   * <code>NextToken</code> allows you to return more items in your list starting at
   * the location pointed to by the next token.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListTieringConfigurationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListTieringConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TieringConfigurationsListMember> m_tieringConfigurations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_tieringConfigurationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
