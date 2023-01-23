/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListMembersRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API ListMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMembers"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;

    AWS_GUARDDUTY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique ID of the detector the member is associated with.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector the member is associated with.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector the member is associated with.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector the member is associated with.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector the member is associated with.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector the member is associated with.</p>
     */
    inline ListMembersRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector the member is associated with.</p>
     */
    inline ListMembersRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector the member is associated with.</p>
     */
    inline ListMembersRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 50. The maximum value is 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 50. The maximum value is 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 50. The maximum value is 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 50. The maximum value is 50.</p>
     */
    inline ListMembersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.</p>
     */
    inline ListMembersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.</p>
     */
    inline ListMembersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.</p>
     */
    inline ListMembersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies whether to only return associated members or to return all members
     * (including members who haven't been invited yet or have been disassociated).
     * Member accounts must have been previously associated with the GuardDuty
     * administrator account using <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">
     * <code>Create Members</code> </a>. </p>
     */
    inline const Aws::String& GetOnlyAssociated() const{ return m_onlyAssociated; }

    /**
     * <p>Specifies whether to only return associated members or to return all members
     * (including members who haven't been invited yet or have been disassociated).
     * Member accounts must have been previously associated with the GuardDuty
     * administrator account using <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">
     * <code>Create Members</code> </a>. </p>
     */
    inline bool OnlyAssociatedHasBeenSet() const { return m_onlyAssociatedHasBeenSet; }

    /**
     * <p>Specifies whether to only return associated members or to return all members
     * (including members who haven't been invited yet or have been disassociated).
     * Member accounts must have been previously associated with the GuardDuty
     * administrator account using <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">
     * <code>Create Members</code> </a>. </p>
     */
    inline void SetOnlyAssociated(const Aws::String& value) { m_onlyAssociatedHasBeenSet = true; m_onlyAssociated = value; }

    /**
     * <p>Specifies whether to only return associated members or to return all members
     * (including members who haven't been invited yet or have been disassociated).
     * Member accounts must have been previously associated with the GuardDuty
     * administrator account using <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">
     * <code>Create Members</code> </a>. </p>
     */
    inline void SetOnlyAssociated(Aws::String&& value) { m_onlyAssociatedHasBeenSet = true; m_onlyAssociated = std::move(value); }

    /**
     * <p>Specifies whether to only return associated members or to return all members
     * (including members who haven't been invited yet or have been disassociated).
     * Member accounts must have been previously associated with the GuardDuty
     * administrator account using <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">
     * <code>Create Members</code> </a>. </p>
     */
    inline void SetOnlyAssociated(const char* value) { m_onlyAssociatedHasBeenSet = true; m_onlyAssociated.assign(value); }

    /**
     * <p>Specifies whether to only return associated members or to return all members
     * (including members who haven't been invited yet or have been disassociated).
     * Member accounts must have been previously associated with the GuardDuty
     * administrator account using <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">
     * <code>Create Members</code> </a>. </p>
     */
    inline ListMembersRequest& WithOnlyAssociated(const Aws::String& value) { SetOnlyAssociated(value); return *this;}

    /**
     * <p>Specifies whether to only return associated members or to return all members
     * (including members who haven't been invited yet or have been disassociated).
     * Member accounts must have been previously associated with the GuardDuty
     * administrator account using <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">
     * <code>Create Members</code> </a>. </p>
     */
    inline ListMembersRequest& WithOnlyAssociated(Aws::String&& value) { SetOnlyAssociated(std::move(value)); return *this;}

    /**
     * <p>Specifies whether to only return associated members or to return all members
     * (including members who haven't been invited yet or have been disassociated).
     * Member accounts must have been previously associated with the GuardDuty
     * administrator account using <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">
     * <code>Create Members</code> </a>. </p>
     */
    inline ListMembersRequest& WithOnlyAssociated(const char* value) { SetOnlyAssociated(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_onlyAssociated;
    bool m_onlyAssociatedHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
