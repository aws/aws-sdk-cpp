/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
  class AWS_GUARDDUTY_API DescribeOrganizationConfigurationResult
  {
  public:
    DescribeOrganizationConfigurationResult();
    DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether GuardDuty is automatically enabled for accounts added to
     * the organization.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>Indicates whether GuardDuty is automatically enabled for accounts added to
     * the organization.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnable = value; }

    /**
     * <p>Indicates whether GuardDuty is automatically enabled for accounts added to
     * the organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}


    /**
     * <p>Indicates whether the maximum number of allowed member accounts are already
     * associated with the delegated administrator master account.</p>
     */
    inline bool GetMemberAccountLimitReached() const{ return m_memberAccountLimitReached; }

    /**
     * <p>Indicates whether the maximum number of allowed member accounts are already
     * associated with the delegated administrator master account.</p>
     */
    inline void SetMemberAccountLimitReached(bool value) { m_memberAccountLimitReached = value; }

    /**
     * <p>Indicates whether the maximum number of allowed member accounts are already
     * associated with the delegated administrator master account.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithMemberAccountLimitReached(bool value) { SetMemberAccountLimitReached(value); return *this;}

  private:

    bool m_autoEnable;

    bool m_memberAccountLimitReached;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
