﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/controltower/model/ControlOperationFilter.h>
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
  class ListControlOperationsRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API ListControlOperationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListControlOperations"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An input filter for the <code>ListControlOperations</code> API that lets you
     * select the types of control operations to view.</p>
     */
    inline const ControlOperationFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const ControlOperationFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(ControlOperationFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ListControlOperationsRequest& WithFilter(const ControlOperationFilter& value) { SetFilter(value); return *this;}
    inline ListControlOperationsRequest& WithFilter(ControlOperationFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be shown.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListControlOperationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListControlOperationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListControlOperationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListControlOperationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    ControlOperationFilter m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
