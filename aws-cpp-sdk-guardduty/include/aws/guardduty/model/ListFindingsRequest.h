/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingCriteria.h>
#include <aws/guardduty/model/SortCriteria.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   * ListFindings request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFindingsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API ListFindingsRequest : public GuardDutyRequest
  {
  public:
    ListFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFindings"; }

    Aws::String SerializePayload() const override;


    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to list.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to list.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to list.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to list.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to list.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to list.
     */
    inline ListFindingsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to list.
     */
    inline ListFindingsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to list.
     */
    inline ListFindingsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * Represents the criteria used for querying findings.
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * Represents the criteria used for querying findings.
     */
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }

    /**
     * Represents the criteria used for querying findings.
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }

    /**
     * Represents the criteria used for querying findings.
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }

    /**
     * Represents the criteria used for querying findings.
     */
    inline ListFindingsRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * Represents the criteria used for querying findings.
     */
    inline ListFindingsRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}


    /**
     * You can use this parameter to indicate the maximum number of items you want in
     * the response. The default value is 50. The maximum value is 50.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * You can use this parameter to indicate the maximum number of items you want in
     * the response. The default value is 50. The maximum value is 50.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * You can use this parameter to indicate the maximum number of items you want in
     * the response. The default value is 50. The maximum value is 50.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * You can use this parameter to indicate the maximum number of items you want in
     * the response. The default value is 50. The maximum value is 50.
     */
    inline ListFindingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListFindings action. For subsequent
     * calls to the action fill nextToken in the request with the value of nextToken
     * from the previous response to continue listing data.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListFindings action. For subsequent
     * calls to the action fill nextToken in the request with the value of nextToken
     * from the previous response to continue listing data.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListFindings action. For subsequent
     * calls to the action fill nextToken in the request with the value of nextToken
     * from the previous response to continue listing data.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListFindings action. For subsequent
     * calls to the action fill nextToken in the request with the value of nextToken
     * from the previous response to continue listing data.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListFindings action. For subsequent
     * calls to the action fill nextToken in the request with the value of nextToken
     * from the previous response to continue listing data.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListFindings action. For subsequent
     * calls to the action fill nextToken in the request with the value of nextToken
     * from the previous response to continue listing data.
     */
    inline ListFindingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListFindings action. For subsequent
     * calls to the action fill nextToken in the request with the value of nextToken
     * from the previous response to continue listing data.
     */
    inline ListFindingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListFindings action. For subsequent
     * calls to the action fill nextToken in the request with the value of nextToken
     * from the previous response to continue listing data.
     */
    inline ListFindingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * Represents the criteria used for sorting findings.
     */
    inline const SortCriteria& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * Represents the criteria used for sorting findings.
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * Represents the criteria used for sorting findings.
     */
    inline void SetSortCriteria(const SortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * Represents the criteria used for sorting findings.
     */
    inline void SetSortCriteria(SortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * Represents the criteria used for sorting findings.
     */
    inline ListFindingsRequest& WithSortCriteria(const SortCriteria& value) { SetSortCriteria(value); return *this;}

    /**
     * Represents the criteria used for sorting findings.
     */
    inline ListFindingsRequest& WithSortCriteria(SortCriteria&& value) { SetSortCriteria(std::move(value)); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    SortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
