/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/Filter.h>
#include <aws/imagebuilder/model/Ownership.h>

#include <utility>

namespace Aws {
namespace imagebuilder {
namespace Model {

/**
 */
class ListWorkflowsRequest : public ImagebuilderRequest {
 public:
  AWS_IMAGEBUILDER_API ListWorkflowsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListWorkflows"; }

  AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Filters results based on the workflow owner. By default, this request returns
   * the workflows that your account owns (<code>Self</code>). Specify
   * <code>Amazon</code> to list the workflows that Image Builder manages. Image
   * Builder rejects the <code>Shared</code> and <code>ThirdParty</code> owner values
   * for workflows, and <code>AWSMarketplace</code> returns no results.</p>
   */
  inline Ownership GetOwner() const { return m_owner; }
  inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
  inline void SetOwner(Ownership value) {
    m_ownerHasBeenSet = true;
    m_owner = value;
  }
  inline ListWorkflowsRequest& WithOwner(Ownership value) {
    SetOwner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters to narrow the list of workflows. You can filter on <code>name</code>,
   * <code>version</code>, <code>description</code>, and <code>type</code>.</p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  ListWorkflowsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  ListWorkflowsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to return one entry per workflow name, with all versions of
   * each workflow aggregated. Defaults to <code>false</code>, which returns one
   * entry per workflow version. You can't combine this option with the
   * <code>version</code> filter.</p>
   */
  inline bool GetByName() const { return m_byName; }
  inline bool ByNameHasBeenSet() const { return m_byNameHasBeenSet; }
  inline void SetByName(bool value) {
    m_byNameHasBeenSet = true;
    m_byName = value;
  }
  inline ListWorkflowsRequest& WithByName(bool value) {
    SetByName(value);
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
  inline ListWorkflowsRequest& WithMaxResults(int value) {
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
  ListWorkflowsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Ownership m_owner{Ownership::NOT_SET};

  Aws::Vector<Filter> m_filters;

  bool m_byName{false};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_ownerHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_byNameHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
