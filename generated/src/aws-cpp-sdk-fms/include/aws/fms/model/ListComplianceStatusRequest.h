/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class ListComplianceStatusRequest : public FMSRequest
  {
  public:
    AWS_FMS_API ListComplianceStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListComplianceStatus"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline ListComplianceStatusRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline ListComplianceStatusRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline ListComplianceStatusRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, Firewall Manager returns a <code>NextToken</code> value
     * in the response that allows you to list another group of
     * <code>PolicyComplianceStatus</code> objects. For the second and subsequent
     * <code>ListComplianceStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, Firewall Manager returns a <code>NextToken</code> value
     * in the response that allows you to list another group of
     * <code>PolicyComplianceStatus</code> objects. For the second and subsequent
     * <code>ListComplianceStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, Firewall Manager returns a <code>NextToken</code> value
     * in the response that allows you to list another group of
     * <code>PolicyComplianceStatus</code> objects. For the second and subsequent
     * <code>ListComplianceStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, Firewall Manager returns a <code>NextToken</code> value
     * in the response that allows you to list another group of
     * <code>PolicyComplianceStatus</code> objects. For the second and subsequent
     * <code>ListComplianceStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, Firewall Manager returns a <code>NextToken</code> value
     * in the response that allows you to list another group of
     * <code>PolicyComplianceStatus</code> objects. For the second and subsequent
     * <code>ListComplianceStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, Firewall Manager returns a <code>NextToken</code> value
     * in the response that allows you to list another group of
     * <code>PolicyComplianceStatus</code> objects. For the second and subsequent
     * <code>ListComplianceStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline ListComplianceStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, Firewall Manager returns a <code>NextToken</code> value
     * in the response that allows you to list another group of
     * <code>PolicyComplianceStatus</code> objects. For the second and subsequent
     * <code>ListComplianceStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline ListComplianceStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, Firewall Manager returns a <code>NextToken</code> value
     * in the response that allows you to list another group of
     * <code>PolicyComplianceStatus</code> objects. For the second and subsequent
     * <code>ListComplianceStatus</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline ListComplianceStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the number of <code>PolicyComplianceStatus</code> objects that you
     * want Firewall Manager to return for this request. If you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, the response includes a <code>NextToken</code> value
     * that you can use to get another batch of <code>PolicyComplianceStatus</code>
     * objects.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the number of <code>PolicyComplianceStatus</code> objects that you
     * want Firewall Manager to return for this request. If you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, the response includes a <code>NextToken</code> value
     * that you can use to get another batch of <code>PolicyComplianceStatus</code>
     * objects.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the number of <code>PolicyComplianceStatus</code> objects that you
     * want Firewall Manager to return for this request. If you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, the response includes a <code>NextToken</code> value
     * that you can use to get another batch of <code>PolicyComplianceStatus</code>
     * objects.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the number of <code>PolicyComplianceStatus</code> objects that you
     * want Firewall Manager to return for this request. If you have more
     * <code>PolicyComplianceStatus</code> objects than the number that you specify for
     * <code>MaxResults</code>, the response includes a <code>NextToken</code> value
     * that you can use to get another batch of <code>PolicyComplianceStatus</code>
     * objects.</p>
     */
    inline ListComplianceStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
