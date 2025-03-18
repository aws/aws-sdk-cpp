/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/AutoEnableMembers.h>
#include <aws/guardduty/model/OrganizationFeatureConfigurationResult.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{
  class DescribeOrganizationConfigurationResult
  {
  public:
    AWS_GUARDDUTY_API DescribeOrganizationConfigurationResult() = default;
    AWS_GUARDDUTY_API DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether the maximum number of allowed member accounts are already
     * associated with the delegated administrator account for your organization.</p>
     */
    inline bool GetMemberAccountLimitReached() const { return m_memberAccountLimitReached; }
    inline void SetMemberAccountLimitReached(bool value) { m_memberAccountLimitReachedHasBeenSet = true; m_memberAccountLimitReached = value; }
    inline DescribeOrganizationConfigurationResult& WithMemberAccountLimitReached(bool value) { SetMemberAccountLimitReached(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of features that are configured for this organization.</p>
     */
    inline const Aws::Vector<OrganizationFeatureConfigurationResult>& GetFeatures() const { return m_features; }
    template<typename FeaturesT = Aws::Vector<OrganizationFeatureConfigurationResult>>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = Aws::Vector<OrganizationFeatureConfigurationResult>>
    DescribeOrganizationConfigurationResult& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    template<typename FeaturesT = OrganizationFeatureConfigurationResult>
    DescribeOrganizationConfigurationResult& AddFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features.emplace_back(std::forward<FeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeOrganizationConfigurationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the auto-enablement configuration of GuardDuty or any of the
     * corresponding protection plans for the member accounts in the organization.</p>
     * <ul> <li> <p> <code>NEW</code>: Indicates that when a new account joins the
     * organization, they will have GuardDuty or any of the corresponding protection
     * plans enabled automatically. </p> </li> <li> <p> <code>ALL</code>: Indicates
     * that all accounts in the organization have GuardDuty and any of the
     * corresponding protection plans enabled automatically. This includes
     * <code>NEW</code> accounts that join the organization and accounts that may have
     * been suspended or removed from the organization in GuardDuty.</p> </li> <li> <p>
     * <code>NONE</code>: Indicates that GuardDuty or any of the corresponding
     * protection plans will not be automatically enabled for any account in the
     * organization. The administrator must manage GuardDuty for each account in the
     * organization individually.</p> <p>When you update the auto-enable setting from
     * <code>ALL</code> or <code>NEW</code> to <code>NONE</code>, this action doesn't
     * disable the corresponding option for your existing accounts. This configuration
     * will apply to the new accounts that join the organization. After you update the
     * auto-enable settings, no new account will have the corresponding option as
     * enabled.</p> </li> </ul>
     */
    inline AutoEnableMembers GetAutoEnableOrganizationMembers() const { return m_autoEnableOrganizationMembers; }
    inline void SetAutoEnableOrganizationMembers(AutoEnableMembers value) { m_autoEnableOrganizationMembersHasBeenSet = true; m_autoEnableOrganizationMembers = value; }
    inline DescribeOrganizationConfigurationResult& WithAutoEnableOrganizationMembers(AutoEnableMembers value) { SetAutoEnableOrganizationMembers(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrganizationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_memberAccountLimitReached{false};
    bool m_memberAccountLimitReachedHasBeenSet = false;

    Aws::Vector<OrganizationFeatureConfigurationResult> m_features;
    bool m_featuresHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    AutoEnableMembers m_autoEnableOrganizationMembers{AutoEnableMembers::NOT_SET};
    bool m_autoEnableOrganizationMembersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
