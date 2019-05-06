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
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class AWS_GUARDDUTY_API ListMembersRequest : public GuardDutyRequest
  {
  public:
    ListMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMembers"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * list.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * list.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * list.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * list.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * list.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * list.
     */
    inline ListMembersRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * list.
     */
    inline ListMembersRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * list.
     */
    inline ListMembersRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * You can use this parameter to indicate the maximum number of items you want in
     * the response. The default value is 1. The maximum value is 50.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * You can use this parameter to indicate the maximum number of items you want in
     * the response. The default value is 1. The maximum value is 50.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * You can use this parameter to indicate the maximum number of items you want in
     * the response. The default value is 1. The maximum value is 50.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * You can use this parameter to indicate the maximum number of items you want in
     * the response. The default value is 1. The maximum value is 50.
     */
    inline ListMembersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListMembers action. Subsequent calls
     * to the action fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListMembers action. Subsequent calls
     * to the action fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListMembers action. Subsequent calls
     * to the action fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListMembers action. Subsequent calls
     * to the action fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListMembers action. Subsequent calls
     * to the action fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListMembers action. Subsequent calls
     * to the action fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.
     */
    inline ListMembersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListMembers action. Subsequent calls
     * to the action fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.
     */
    inline ListMembersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListMembers action. Subsequent calls
     * to the action fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.
     */
    inline ListMembersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * Specifies what member accounts the response is to include based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response will include member accounts whose
     * relationship status with the master is set to Enabled, Disabled. If
     * onlyAssociated is set to FALSE, the response will include all existing member
     * accounts.
     */
    inline const Aws::String& GetOnlyAssociated() const{ return m_onlyAssociated; }

    /**
     * Specifies what member accounts the response is to include based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response will include member accounts whose
     * relationship status with the master is set to Enabled, Disabled. If
     * onlyAssociated is set to FALSE, the response will include all existing member
     * accounts.
     */
    inline bool OnlyAssociatedHasBeenSet() const { return m_onlyAssociatedHasBeenSet; }

    /**
     * Specifies what member accounts the response is to include based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response will include member accounts whose
     * relationship status with the master is set to Enabled, Disabled. If
     * onlyAssociated is set to FALSE, the response will include all existing member
     * accounts.
     */
    inline void SetOnlyAssociated(const Aws::String& value) { m_onlyAssociatedHasBeenSet = true; m_onlyAssociated = value; }

    /**
     * Specifies what member accounts the response is to include based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response will include member accounts whose
     * relationship status with the master is set to Enabled, Disabled. If
     * onlyAssociated is set to FALSE, the response will include all existing member
     * accounts.
     */
    inline void SetOnlyAssociated(Aws::String&& value) { m_onlyAssociatedHasBeenSet = true; m_onlyAssociated = std::move(value); }

    /**
     * Specifies what member accounts the response is to include based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response will include member accounts whose
     * relationship status with the master is set to Enabled, Disabled. If
     * onlyAssociated is set to FALSE, the response will include all existing member
     * accounts.
     */
    inline void SetOnlyAssociated(const char* value) { m_onlyAssociatedHasBeenSet = true; m_onlyAssociated.assign(value); }

    /**
     * Specifies what member accounts the response is to include based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response will include member accounts whose
     * relationship status with the master is set to Enabled, Disabled. If
     * onlyAssociated is set to FALSE, the response will include all existing member
     * accounts.
     */
    inline ListMembersRequest& WithOnlyAssociated(const Aws::String& value) { SetOnlyAssociated(value); return *this;}

    /**
     * Specifies what member accounts the response is to include based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response will include member accounts whose
     * relationship status with the master is set to Enabled, Disabled. If
     * onlyAssociated is set to FALSE, the response will include all existing member
     * accounts.
     */
    inline ListMembersRequest& WithOnlyAssociated(Aws::String&& value) { SetOnlyAssociated(std::move(value)); return *this;}

    /**
     * Specifies what member accounts the response is to include based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response will include member accounts whose
     * relationship status with the master is set to Enabled, Disabled. If
     * onlyAssociated is set to FALSE, the response will include all existing member
     * accounts.
     */
    inline ListMembersRequest& WithOnlyAssociated(const char* value) { SetOnlyAssociated(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_onlyAssociated;
    bool m_onlyAssociatedHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
