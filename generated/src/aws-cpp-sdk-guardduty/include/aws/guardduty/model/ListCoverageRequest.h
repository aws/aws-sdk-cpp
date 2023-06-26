/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/CoverageFilterCriteria.h>
#include <aws/guardduty/model/CoverageSortCriteria.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class ListCoverageRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API ListCoverageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCoverage"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector whose coverage details you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector whose coverage details you want to
     * retrieve.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector whose coverage details you want to
     * retrieve.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector whose coverage details you want to
     * retrieve.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector whose coverage details you want to
     * retrieve.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector whose coverage details you want to
     * retrieve.</p>
     */
    inline ListCoverageRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector whose coverage details you want to
     * retrieve.</p>
     */
    inline ListCoverageRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector whose coverage details you want to
     * retrieve.</p>
     */
    inline ListCoverageRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline ListCoverageRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline ListCoverageRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline ListCoverageRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline ListCoverageRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Represents the criteria used to filter the coverage details.</p>
     */
    inline const CoverageFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>Represents the criteria used to filter the coverage details.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>Represents the criteria used to filter the coverage details.</p>
     */
    inline void SetFilterCriteria(const CoverageFilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>Represents the criteria used to filter the coverage details.</p>
     */
    inline void SetFilterCriteria(CoverageFilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>Represents the criteria used to filter the coverage details.</p>
     */
    inline ListCoverageRequest& WithFilterCriteria(const CoverageFilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>Represents the criteria used to filter the coverage details.</p>
     */
    inline ListCoverageRequest& WithFilterCriteria(CoverageFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>Represents the criteria used to sort the coverage details.</p>
     */
    inline const CoverageSortCriteria& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>Represents the criteria used to sort the coverage details.</p>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>Represents the criteria used to sort the coverage details.</p>
     */
    inline void SetSortCriteria(const CoverageSortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>Represents the criteria used to sort the coverage details.</p>
     */
    inline void SetSortCriteria(CoverageSortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>Represents the criteria used to sort the coverage details.</p>
     */
    inline ListCoverageRequest& WithSortCriteria(const CoverageSortCriteria& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>Represents the criteria used to sort the coverage details.</p>
     */
    inline ListCoverageRequest& WithSortCriteria(CoverageSortCriteria&& value) { SetSortCriteria(std::move(value)); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    CoverageFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    CoverageSortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
