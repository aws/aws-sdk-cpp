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
  class AWS_FMS_API GetProtectionStatusRequest : public FMSRequest
  {
  public:
    GetProtectionStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProtectionStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the policy for which you want to get the attack information.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the policy for which you want to get the attack information.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The ID of the policy for which you want to get the attack information.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of the policy for which you want to get the attack information.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of the policy for which you want to get the attack information.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of the policy for which you want to get the attack information.</p>
     */
    inline GetProtectionStatusRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the policy for which you want to get the attack information.</p>
     */
    inline GetProtectionStatusRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the policy for which you want to get the attack information.</p>
     */
    inline GetProtectionStatusRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The AWS account that is in scope of the policy that you want to get the
     * details for.</p>
     */
    inline const Aws::String& GetMemberAccountId() const{ return m_memberAccountId; }

    /**
     * <p>The AWS account that is in scope of the policy that you want to get the
     * details for.</p>
     */
    inline bool MemberAccountIdHasBeenSet() const { return m_memberAccountIdHasBeenSet; }

    /**
     * <p>The AWS account that is in scope of the policy that you want to get the
     * details for.</p>
     */
    inline void SetMemberAccountId(const Aws::String& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = value; }

    /**
     * <p>The AWS account that is in scope of the policy that you want to get the
     * details for.</p>
     */
    inline void SetMemberAccountId(Aws::String&& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = std::move(value); }

    /**
     * <p>The AWS account that is in scope of the policy that you want to get the
     * details for.</p>
     */
    inline void SetMemberAccountId(const char* value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId.assign(value); }

    /**
     * <p>The AWS account that is in scope of the policy that you want to get the
     * details for.</p>
     */
    inline GetProtectionStatusRequest& WithMemberAccountId(const Aws::String& value) { SetMemberAccountId(value); return *this;}

    /**
     * <p>The AWS account that is in scope of the policy that you want to get the
     * details for.</p>
     */
    inline GetProtectionStatusRequest& WithMemberAccountId(Aws::String&& value) { SetMemberAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account that is in scope of the policy that you want to get the
     * details for.</p>
     */
    inline GetProtectionStatusRequest& WithMemberAccountId(const char* value) { SetMemberAccountId(value); return *this;}


    /**
     * <p>The start of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline GetProtectionStatusRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline GetProtectionStatusRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline GetProtectionStatusRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time period to query for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a number type
     * because the default used by AWS Firewall Manager is Unix time in seconds.
     * However, any valid <code>timestamp</code> format is allowed.</p>
     */
    inline GetProtectionStatusRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more objects
     * than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of objects. For the second and subsequent
     * <code>GetProtectionStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more objects
     * than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of objects. For the second and subsequent
     * <code>GetProtectionStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of objects.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more objects
     * than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of objects. For the second and subsequent
     * <code>GetProtectionStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of objects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more objects
     * than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of objects. For the second and subsequent
     * <code>GetProtectionStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of objects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more objects
     * than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of objects. For the second and subsequent
     * <code>GetProtectionStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of objects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more objects
     * than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of objects. For the second and subsequent
     * <code>GetProtectionStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of objects.</p>
     */
    inline GetProtectionStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more objects
     * than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of objects. For the second and subsequent
     * <code>GetProtectionStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of objects.</p>
     */
    inline GetProtectionStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more objects
     * than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of objects. For the second and subsequent
     * <code>GetProtectionStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of objects.</p>
     */
    inline GetProtectionStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the number of objects that you want AWS Firewall Manager to return
     * for this request. If you have more objects than the number that you specify for
     * <code>MaxResults</code>, the response includes a <code>NextToken</code> value
     * that you can use to get another batch of objects.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the number of objects that you want AWS Firewall Manager to return
     * for this request. If you have more objects than the number that you specify for
     * <code>MaxResults</code>, the response includes a <code>NextToken</code> value
     * that you can use to get another batch of objects.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the number of objects that you want AWS Firewall Manager to return
     * for this request. If you have more objects than the number that you specify for
     * <code>MaxResults</code>, the response includes a <code>NextToken</code> value
     * that you can use to get another batch of objects.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the number of objects that you want AWS Firewall Manager to return
     * for this request. If you have more objects than the number that you specify for
     * <code>MaxResults</code>, the response includes a <code>NextToken</code> value
     * that you can use to get another batch of objects.</p>
     */
    inline GetProtectionStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    Aws::String m_memberAccountId;
    bool m_memberAccountIdHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
