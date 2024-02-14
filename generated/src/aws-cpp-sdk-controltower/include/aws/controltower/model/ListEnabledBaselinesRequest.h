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
    AWS_CONTROLTOWER_API ListEnabledBaselinesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnabledBaselines"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    /**
     * <p>A filter applied on the <code>ListEnabledBaseline</code> operation. Allowed
     * filters are <code>baselineIdentifiers</code> and <code>targetIdentifiers</code>.
     * The filter can be applied for either, or both.</p>
     */
    inline const EnabledBaselineFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>A filter applied on the <code>ListEnabledBaseline</code> operation. Allowed
     * filters are <code>baselineIdentifiers</code> and <code>targetIdentifiers</code>.
     * The filter can be applied for either, or both.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>A filter applied on the <code>ListEnabledBaseline</code> operation. Allowed
     * filters are <code>baselineIdentifiers</code> and <code>targetIdentifiers</code>.
     * The filter can be applied for either, or both.</p>
     */
    inline void SetFilter(const EnabledBaselineFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>A filter applied on the <code>ListEnabledBaseline</code> operation. Allowed
     * filters are <code>baselineIdentifiers</code> and <code>targetIdentifiers</code>.
     * The filter can be applied for either, or both.</p>
     */
    inline void SetFilter(EnabledBaselineFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>A filter applied on the <code>ListEnabledBaseline</code> operation. Allowed
     * filters are <code>baselineIdentifiers</code> and <code>targetIdentifiers</code>.
     * The filter can be applied for either, or both.</p>
     */
    inline ListEnabledBaselinesRequest& WithFilter(const EnabledBaselineFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>A filter applied on the <code>ListEnabledBaseline</code> operation. Allowed
     * filters are <code>baselineIdentifiers</code> and <code>targetIdentifiers</code>.
     * The filter can be applied for either, or both.</p>
     */
    inline ListEnabledBaselinesRequest& WithFilter(EnabledBaselineFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to be shown.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be shown.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be shown.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be shown.</p>
     */
    inline ListEnabledBaselinesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline ListEnabledBaselinesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListEnabledBaselinesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListEnabledBaselinesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    EnabledBaselineFilter m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
