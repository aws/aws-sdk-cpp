/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

#include <utility>

namespace Aws {
namespace imagebuilder {
namespace Model {

/**
 */
class ListLifecycleExecutionResourcesRequest : public ImagebuilderRequest {
 public:
  AWS_IMAGEBUILDER_API ListLifecycleExecutionResourcesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListLifecycleExecutionResources"; }

  AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for a runtime instance of the lifecycle policy.</p>
   */
  inline const Aws::String& GetLifecycleExecutionId() const { return m_lifecycleExecutionId; }
  inline bool LifecycleExecutionIdHasBeenSet() const { return m_lifecycleExecutionIdHasBeenSet; }
  template <typename LifecycleExecutionIdT = Aws::String>
  void SetLifecycleExecutionId(LifecycleExecutionIdT&& value) {
    m_lifecycleExecutionIdHasBeenSet = true;
    m_lifecycleExecutionId = std::forward<LifecycleExecutionIdT>(value);
  }
  template <typename LifecycleExecutionIdT = Aws::String>
  ListLifecycleExecutionResourcesRequest& WithLifecycleExecutionId(LifecycleExecutionIdT&& value) {
    SetLifecycleExecutionId(std::forward<LifecycleExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of an image build version to get the output
   * resources for, such as AMIs or container images in Amazon ECR. You can get this
   * value from the <code>resourceId</code> in the top-level response. If you leave
   * this property empty, the response lists the Image Builder resources that the
   * lifecycle execution identified for lifecycle actions. If the image build version
   * that you specify in <code>parentResourceId</code> wasn't part of this lifecycle
   * execution, the response contains an empty list.</p>
   */
  inline const Aws::String& GetParentResourceId() const { return m_parentResourceId; }
  inline bool ParentResourceIdHasBeenSet() const { return m_parentResourceIdHasBeenSet; }
  template <typename ParentResourceIdT = Aws::String>
  void SetParentResourceId(ParentResourceIdT&& value) {
    m_parentResourceIdHasBeenSet = true;
    m_parentResourceId = std::forward<ParentResourceIdT>(value);
  }
  template <typename ParentResourceIdT = Aws::String>
  ListLifecycleExecutionResourcesRequest& WithParentResourceId(ParentResourceIdT&& value) {
    SetParentResourceId(std::forward<ParentResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to return in a single request.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListLifecycleExecutionResourcesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to specify where to start paginating. Use the <code>nextToken</code>
   * value from a previously truncated response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListLifecycleExecutionResourcesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lifecycleExecutionId;

  Aws::String m_parentResourceId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_lifecycleExecutionIdHasBeenSet = false;
  bool m_parentResourceIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
