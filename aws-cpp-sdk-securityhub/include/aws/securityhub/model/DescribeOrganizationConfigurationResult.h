/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API DescribeOrganizationConfigurationResult
  {
  public:
    DescribeOrganizationConfigurationResult();
    DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Whether to automatically enable Security Hub for new accounts in the
     * organization.</p> <p>If set to <code>true</code>, then Security Hub is enabled
     * for new accounts. If set to false, then new accounts are not added
     * automatically.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>Whether to automatically enable Security Hub for new accounts in the
     * organization.</p> <p>If set to <code>true</code>, then Security Hub is enabled
     * for new accounts. If set to false, then new accounts are not added
     * automatically.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnable = value; }

    /**
     * <p>Whether to automatically enable Security Hub for new accounts in the
     * organization.</p> <p>If set to <code>true</code>, then Security Hub is enabled
     * for new accounts. If set to false, then new accounts are not added
     * automatically.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}


    /**
     * <p>Whether the maximum number of allowed member accounts are already associated
     * with the Security Hub administrator account.</p>
     */
    inline bool GetMemberAccountLimitReached() const{ return m_memberAccountLimitReached; }

    /**
     * <p>Whether the maximum number of allowed member accounts are already associated
     * with the Security Hub administrator account.</p>
     */
    inline void SetMemberAccountLimitReached(bool value) { m_memberAccountLimitReached = value; }

    /**
     * <p>Whether the maximum number of allowed member accounts are already associated
     * with the Security Hub administrator account.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithMemberAccountLimitReached(bool value) { SetMemberAccountLimitReached(value); return *this;}

  private:

    bool m_autoEnable;

    bool m_memberAccountLimitReached;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
