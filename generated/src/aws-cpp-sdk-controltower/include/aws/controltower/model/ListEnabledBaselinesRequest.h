/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/controltower/model/EnabledBaselineFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class ListEnabledBaselinesRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API ListEnabledBaselinesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnabledBaselines"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A filter applied on the <code>ListEnabledBaseline</code> operation. Allowed
     * filters are <code>baselineIdentifiers</code> and <code>targetIdentifiers</code>.
     * The filter can be applied for either, or both.</p>
     */
    inline const EnabledBaselineFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = EnabledBaselineFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = EnabledBaselineFilter>
    ListEnabledBaselinesRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that can be set to include the child enabled baselines in responses.
     * The default value is false.</p>
     */
    inline bool GetIncludeChildren() const { return m_includeChildren; }
    inline bool IncludeChildrenHasBeenSet() const { return m_includeChildrenHasBeenSet; }
    inline void SetIncludeChildren(bool value) { m_includeChildrenHasBeenSet = true; m_includeChildren = value; }
    inline ListEnabledBaselinesRequest& WithIncludeChildren(bool value) { SetIncludeChildren(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be shown.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEnabledBaselinesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnabledBaselinesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    EnabledBaselineFilter m_filter;
    bool m_filterHasBeenSet = false;

    bool m_includeChildren{false};
    bool m_includeChildrenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
