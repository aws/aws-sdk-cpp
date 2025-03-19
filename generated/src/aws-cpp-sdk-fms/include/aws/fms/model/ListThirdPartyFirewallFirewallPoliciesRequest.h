/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/fms/model/ThirdPartyFirewall.h>
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
  class ListThirdPartyFirewallFirewallPoliciesRequest : public FMSRequest
  {
  public:
    AWS_FMS_API ListThirdPartyFirewallFirewallPoliciesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListThirdPartyFirewallFirewallPolicies"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the third-party firewall vendor.</p>
     */
    inline ThirdPartyFirewall GetThirdPartyFirewall() const { return m_thirdPartyFirewall; }
    inline bool ThirdPartyFirewallHasBeenSet() const { return m_thirdPartyFirewallHasBeenSet; }
    inline void SetThirdPartyFirewall(ThirdPartyFirewall value) { m_thirdPartyFirewallHasBeenSet = true; m_thirdPartyFirewall = value; }
    inline ListThirdPartyFirewallFirewallPoliciesRequest& WithThirdPartyFirewall(ThirdPartyFirewall value) { SetThirdPartyFirewall(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response included a <code>NextToken</code> element, the
     * specified third-party firewall vendor is associated with more third-party
     * firewall policies. To get more third-party firewall policies, submit another
     * <code>ListThirdPartyFirewallFirewallPoliciesRequest</code> request.</p> <p> For
     * the value of <code>NextToken</code>, specify the value of <code>NextToken</code>
     * from the previous response. If the previous response didn't include a
     * <code>NextToken</code> element, there are no more third-party firewall policies
     * to get. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListThirdPartyFirewallFirewallPoliciesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of third-party firewall policies that you want Firewall
     * Manager to return. If the specified third-party firewall vendor is associated
     * with more than <code>MaxResults</code> firewall policies, the response includes
     * a <code>NextToken</code> element. <code>NextToken</code> contains an encrypted
     * token that identifies the first third-party firewall policies that Firewall
     * Manager will return if you submit another request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListThirdPartyFirewallFirewallPoliciesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    ThirdPartyFirewall m_thirdPartyFirewall{ThirdPartyFirewall::NOT_SET};
    bool m_thirdPartyFirewallHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
