﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class GetProtectionStatusRequest : public FMSRequest
  {
  public:
    AWS_FMS_API GetProtectionStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProtectionStatus"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the policy for which you want to get the attack information.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }
    inline GetProtectionStatusRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}
    inline GetProtectionStatusRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}
    inline GetProtectionStatusRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that is in scope of the policy that you want
     * to get the details for.</p>
     */
    inline const Aws::String& GetMemberAccountId() const{ return m_memberAccountId; }
    inline bool MemberAccountIdHasBeenSet() const { return m_memberAccountIdHasBeenSet; }
    inline void SetMemberAccountId(const Aws::String& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = value; }
    inline void SetMemberAccountId(Aws::String&& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = std::move(value); }
    inline void SetMemberAccountId(const char* value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId.assign(value); }
    inline GetProtectionStatusRequest& WithMemberAccountId(const Aws::String& value) { SetMemberAccountId(value); return *this;}
    inline GetProtectionStatusRequest& WithMemberAccountId(Aws::String&& value) { SetMemberAccountId(std::move(value)); return *this;}
    inline GetProtectionStatusRequest& WithMemberAccountId(const char* value) { SetMemberAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The request syntax listing indicates a
     * <code>number</code> type because the default used by Firewall Manager is Unix
     * time in seconds. However, any valid <code>timestamp</code> format is
     * allowed.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GetProtectionStatusRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetProtectionStatusRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The request syntax listing indicates a
     * <code>number</code> type because the default used by Firewall Manager is Unix
     * time in seconds. However, any valid <code>timestamp</code> format is
     * allowed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GetProtectionStatusRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetProtectionStatusRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more objects
     * than the number that you specify for <code>MaxResults</code>, Firewall Manager
     * returns a <code>NextToken</code> value in the response, which you can use to
     * retrieve another group of objects. For the second and subsequent
     * <code>GetProtectionStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetProtectionStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetProtectionStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetProtectionStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of objects that you want Firewall Manager to return for
     * this request. If you have more objects than the number that you specify for
     * <code>MaxResults</code>, the response includes a <code>NextToken</code> value
     * that you can use to get another batch of objects.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetProtectionStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_memberAccountId;
    bool m_memberAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
