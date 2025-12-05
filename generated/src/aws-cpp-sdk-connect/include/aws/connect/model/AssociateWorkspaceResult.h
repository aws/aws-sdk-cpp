/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/FailedBatchAssociationSummary.h>
#include <aws/connect/model/SuccessfulBatchAssociationSummary.h>
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
namespace Connect {
namespace Model {
class AssociateWorkspaceResult {
 public:
  AWS_CONNECT_API AssociateWorkspaceResult() = default;
  AWS_CONNECT_API AssociateWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API AssociateWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of resources that were successfully associated with the workspace.</p>
   */
  inline const Aws::Vector<SuccessfulBatchAssociationSummary>& GetSuccessfulList() const { return m_successfulList; }
  template <typename SuccessfulListT = Aws::Vector<SuccessfulBatchAssociationSummary>>
  void SetSuccessfulList(SuccessfulListT&& value) {
    m_successfulListHasBeenSet = true;
    m_successfulList = std::forward<SuccessfulListT>(value);
  }
  template <typename SuccessfulListT = Aws::Vector<SuccessfulBatchAssociationSummary>>
  AssociateWorkspaceResult& WithSuccessfulList(SuccessfulListT&& value) {
    SetSuccessfulList(std::forward<SuccessfulListT>(value));
    return *this;
  }
  template <typename SuccessfulListT = SuccessfulBatchAssociationSummary>
  AssociateWorkspaceResult& AddSuccessfulList(SuccessfulListT&& value) {
    m_successfulListHasBeenSet = true;
    m_successfulList.emplace_back(std::forward<SuccessfulListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of resources that failed to be associated with the workspace,
   * including error details.</p>
   */
  inline const Aws::Vector<FailedBatchAssociationSummary>& GetFailedList() const { return m_failedList; }
  template <typename FailedListT = Aws::Vector<FailedBatchAssociationSummary>>
  void SetFailedList(FailedListT&& value) {
    m_failedListHasBeenSet = true;
    m_failedList = std::forward<FailedListT>(value);
  }
  template <typename FailedListT = Aws::Vector<FailedBatchAssociationSummary>>
  AssociateWorkspaceResult& WithFailedList(FailedListT&& value) {
    SetFailedList(std::forward<FailedListT>(value));
    return *this;
  }
  template <typename FailedListT = FailedBatchAssociationSummary>
  AssociateWorkspaceResult& AddFailedList(FailedListT&& value) {
    m_failedListHasBeenSet = true;
    m_failedList.emplace_back(std::forward<FailedListT>(value));
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
  AssociateWorkspaceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SuccessfulBatchAssociationSummary> m_successfulList;

  Aws::Vector<FailedBatchAssociationSummary> m_failedList;

  Aws::String m_requestId;
  bool m_successfulListHasBeenSet = false;
  bool m_failedListHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
