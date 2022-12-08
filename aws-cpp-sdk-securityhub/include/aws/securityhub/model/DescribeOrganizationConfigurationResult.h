/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AutoEnableStandards.h>
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
namespace SecurityHub
{
namespace Model
{
  class DescribeOrganizationConfigurationResult
  {
  public:
    AWS_SECURITYHUB_API DescribeOrganizationConfigurationResult();
    AWS_SECURITYHUB_API DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> for new member accounts in the organization.</p> <p>The default
     * value of this parameter is equal to <code>DEFAULT</code>.</p> <p>If equal to
     * <code>DEFAULT</code>, then Security Hub default standards are automatically
     * enabled for new member accounts. If equal to <code>NONE</code>, then default
     * standards are not automatically enabled for new member accounts.</p>
     */
    inline const AutoEnableStandards& GetAutoEnableStandards() const{ return m_autoEnableStandards; }

    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> for new member accounts in the organization.</p> <p>The default
     * value of this parameter is equal to <code>DEFAULT</code>.</p> <p>If equal to
     * <code>DEFAULT</code>, then Security Hub default standards are automatically
     * enabled for new member accounts. If equal to <code>NONE</code>, then default
     * standards are not automatically enabled for new member accounts.</p>
     */
    inline void SetAutoEnableStandards(const AutoEnableStandards& value) { m_autoEnableStandards = value; }

    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> for new member accounts in the organization.</p> <p>The default
     * value of this parameter is equal to <code>DEFAULT</code>.</p> <p>If equal to
     * <code>DEFAULT</code>, then Security Hub default standards are automatically
     * enabled for new member accounts. If equal to <code>NONE</code>, then default
     * standards are not automatically enabled for new member accounts.</p>
     */
    inline void SetAutoEnableStandards(AutoEnableStandards&& value) { m_autoEnableStandards = std::move(value); }

    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> for new member accounts in the organization.</p> <p>The default
     * value of this parameter is equal to <code>DEFAULT</code>.</p> <p>If equal to
     * <code>DEFAULT</code>, then Security Hub default standards are automatically
     * enabled for new member accounts. If equal to <code>NONE</code>, then default
     * standards are not automatically enabled for new member accounts.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithAutoEnableStandards(const AutoEnableStandards& value) { SetAutoEnableStandards(value); return *this;}

    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> for new member accounts in the organization.</p> <p>The default
     * value of this parameter is equal to <code>DEFAULT</code>.</p> <p>If equal to
     * <code>DEFAULT</code>, then Security Hub default standards are automatically
     * enabled for new member accounts. If equal to <code>NONE</code>, then default
     * standards are not automatically enabled for new member accounts.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithAutoEnableStandards(AutoEnableStandards&& value) { SetAutoEnableStandards(std::move(value)); return *this;}

  private:

    bool m_autoEnable;

    bool m_memberAccountLimitReached;

    AutoEnableStandards m_autoEnableStandards;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
