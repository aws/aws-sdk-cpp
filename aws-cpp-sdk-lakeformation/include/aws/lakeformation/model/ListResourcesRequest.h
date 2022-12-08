/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/FilterCondition.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class ListResourcesRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API ListResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResources"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>Any applicable row-level and/or column-level filtering conditions for the
     * resources.</p>
     */
    inline const Aws::Vector<FilterCondition>& GetFilterConditionList() const{ return m_filterConditionList; }

    /**
     * <p>Any applicable row-level and/or column-level filtering conditions for the
     * resources.</p>
     */
    inline bool FilterConditionListHasBeenSet() const { return m_filterConditionListHasBeenSet; }

    /**
     * <p>Any applicable row-level and/or column-level filtering conditions for the
     * resources.</p>
     */
    inline void SetFilterConditionList(const Aws::Vector<FilterCondition>& value) { m_filterConditionListHasBeenSet = true; m_filterConditionList = value; }

    /**
     * <p>Any applicable row-level and/or column-level filtering conditions for the
     * resources.</p>
     */
    inline void SetFilterConditionList(Aws::Vector<FilterCondition>&& value) { m_filterConditionListHasBeenSet = true; m_filterConditionList = std::move(value); }

    /**
     * <p>Any applicable row-level and/or column-level filtering conditions for the
     * resources.</p>
     */
    inline ListResourcesRequest& WithFilterConditionList(const Aws::Vector<FilterCondition>& value) { SetFilterConditionList(value); return *this;}

    /**
     * <p>Any applicable row-level and/or column-level filtering conditions for the
     * resources.</p>
     */
    inline ListResourcesRequest& WithFilterConditionList(Aws::Vector<FilterCondition>&& value) { SetFilterConditionList(std::move(value)); return *this;}

    /**
     * <p>Any applicable row-level and/or column-level filtering conditions for the
     * resources.</p>
     */
    inline ListResourcesRequest& AddFilterConditionList(const FilterCondition& value) { m_filterConditionListHasBeenSet = true; m_filterConditionList.push_back(value); return *this; }

    /**
     * <p>Any applicable row-level and/or column-level filtering conditions for the
     * resources.</p>
     */
    inline ListResourcesRequest& AddFilterConditionList(FilterCondition&& value) { m_filterConditionListHasBeenSet = true; m_filterConditionList.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of resource results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of resource results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of resource results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of resource results.</p>
     */
    inline ListResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline ListResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline ListResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline ListResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FilterCondition> m_filterConditionList;
    bool m_filterConditionListHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
