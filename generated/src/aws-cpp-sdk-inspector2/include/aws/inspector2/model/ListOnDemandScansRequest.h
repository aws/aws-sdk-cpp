/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/OnDemandResourceType.h>

#include <utility>

namespace Aws {
namespace Inspector2 {
namespace Model {

/**
 */
class ListOnDemandScansRequest : public Inspector2Request {
 public:
  AWS_INSPECTOR2_API ListOnDemandScansRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListOnDemandScans"; }

  AWS_INSPECTOR2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the resource whose on-demand scans are being listed.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ListOnDemandScansRequest& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resource whose on-demand scans are being listed.</p>
   */
  inline OnDemandResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(OnDemandResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline ListOnDemandScansRequest& WithResourceType(OnDemandResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single page of the response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListOnDemandScansRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token from a previous response used to retrieve the next page of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListOnDemandScansRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceId;

  OnDemandResourceType m_resourceType{OnDemandResourceType::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
