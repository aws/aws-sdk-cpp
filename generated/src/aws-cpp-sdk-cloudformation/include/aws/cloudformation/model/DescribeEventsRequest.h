/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/EventFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudFormation {
namespace Model {

/**
 */
class DescribeEventsRequest : public CloudFormationRequest {
 public:
  AWS_CLOUDFORMATION_API DescribeEventsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeEvents"; }

  AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

 protected:
  AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The name or unique stack ID for which you want to retrieve events.</p>
   */
  inline const Aws::String& GetStackName() const { return m_stackName; }
  inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
  template <typename StackNameT = Aws::String>
  void SetStackName(StackNameT&& value) {
    m_stackNameHasBeenSet = true;
    m_stackName = std::forward<StackNameT>(value);
  }
  template <typename StackNameT = Aws::String>
  DescribeEventsRequest& WithStackName(StackNameT&& value) {
    SetStackName(std::forward<StackNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the change set for which you want
   * to retrieve events.</p>
   */
  inline const Aws::String& GetChangeSetName() const { return m_changeSetName; }
  inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }
  template <typename ChangeSetNameT = Aws::String>
  void SetChangeSetName(ChangeSetNameT&& value) {
    m_changeSetNameHasBeenSet = true;
    m_changeSetName = std::forward<ChangeSetNameT>(value);
  }
  template <typename ChangeSetNameT = Aws::String>
  DescribeEventsRequest& WithChangeSetName(ChangeSetNameT&& value) {
    SetChangeSetName(std::forward<ChangeSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the operation for which you want to retrieve
   * events.</p>
   */
  inline const Aws::String& GetOperationId() const { return m_operationId; }
  inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
  template <typename OperationIdT = Aws::String>
  void SetOperationId(OperationIdT&& value) {
    m_operationIdHasBeenSet = true;
    m_operationId = std::forward<OperationIdT>(value);
  }
  template <typename OperationIdT = Aws::String>
  DescribeEventsRequest& WithOperationId(OperationIdT&& value) {
    SetOperationId(std::forward<OperationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters to apply when retrieving events.</p>
   */
  inline const EventFilter& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = EventFilter>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = EventFilter>
  DescribeEventsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of items to return. (You received this token from
   * a previous call.)</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeEventsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stackName;
  bool m_stackNameHasBeenSet = false;

  Aws::String m_changeSetName;
  bool m_changeSetNameHasBeenSet = false;

  Aws::String m_operationId;
  bool m_operationIdHasBeenSet = false;

  EventFilter m_filters;
  bool m_filtersHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
