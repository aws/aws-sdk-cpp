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
    AWS_GUARDDUTY_API DescribeOrganizationConfigurationResult();
    AWS_GUARDDUTY_API DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether the maximum number of allowed member accounts are already
     * associated with the delegated administrator account for your organization.</p>
     */
    inline bool GetMemberAccountLimitReached() const{ return m_memberAccountLimitReached; }

    /**
     * <p>Indicates whether the maximum number of allowed member accounts are already
     * associated with the delegated administrator account for your organization.</p>
     */
    inline void SetMemberAccountLimitReached(bool value) { m_memberAccountLimitReached = value; }

    /**
     * <p>Indicates whether the maximum number of allowed member accounts are already
     * associated with the delegated administrator account for your organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithMemberAccountLimitReached(bool value) { SetMemberAccountLimitReached(value); return *this;}


    /**
     * <p>A list of features that are configured for this organization.</p>
     */
    inline const Aws::Vector<OrganizationFeatureConfigurationResult>& GetFeatures() const{ return m_features; }

    /**
     * <p>A list of features that are configured for this organization.</p>
     */
    inline void SetFeatures(const Aws::Vector<OrganizationFeatureConfigurationResult>& value) { m_features = value; }

    /**
     * <p>A list of features that are configured for this organization.</p>
     */
    inline void SetFeatures(Aws::Vector<OrganizationFeatureConfigurationResult>&& value) { m_features = std::move(value); }

    /**
     * <p>A list of features that are configured for this organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithFeatures(const Aws::Vector<OrganizationFeatureConfigurationResult>& value) { SetFeatures(value); return *this;}

    /**
     * <p>A list of features that are configured for this organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithFeatures(Aws::Vector<OrganizationFeatureConfigurationResult>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>A list of features that are configured for this organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& AddFeatures(const OrganizationFeatureConfigurationResult& value) { m_features.push_back(value); return *this; }

    /**
     * <p>A list of features that are configured for this organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& AddFeatures(OrganizationFeatureConfigurationResult&& value) { m_features.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline const AutoEnableMembers& GetAutoEnableOrganizationMembers() const{ return m_autoEnableOrganizationMembers; }

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
    inline void SetAutoEnableOrganizationMembers(const AutoEnableMembers& value) { m_autoEnableOrganizationMembers = value; }

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
    inline void SetAutoEnableOrganizationMembers(AutoEnableMembers&& value) { m_autoEnableOrganizationMembers = std::move(value); }

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
    inline DescribeOrganizationConfigurationResult& WithAutoEnableOrganizationMembers(const AutoEnableMembers& value) { SetAutoEnableOrganizationMembers(value); return *this;}

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
    inline DescribeOrganizationConfigurationResult& WithAutoEnableOrganizationMembers(AutoEnableMembers&& value) { SetAutoEnableOrganizationMembers(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeOrganizationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeOrganizationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeOrganizationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_memberAccountLimitReached;

    Aws::Vector<OrganizationFeatureConfigurationResult> m_features;

    Aws::String m_nextToken;

    AutoEnableMembers m_autoEnableOrganizationMembers;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
