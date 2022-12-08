/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrganizationDataSourceConfigurationsResult.h>
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
     * <p>Describes which data sources are enabled automatically for member
     * accounts.</p>
     */
    inline const OrganizationDataSourceConfigurationsResult& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>Describes which data sources are enabled automatically for member
     * accounts.</p>
     */
    inline void SetDataSources(const OrganizationDataSourceConfigurationsResult& value) { m_dataSources = value; }

    /**
     * <p>Describes which data sources are enabled automatically for member
     * accounts.</p>
     */
    inline void SetDataSources(OrganizationDataSourceConfigurationsResult&& value) { m_dataSources = std::move(value); }

    /**
     * <p>Describes which data sources are enabled automatically for member
     * accounts.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithDataSources(const OrganizationDataSourceConfigurationsResult& value) { SetDataSources(value); return *this;}

    /**
     * <p>Describes which data sources are enabled automatically for member
     * accounts.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithDataSources(OrganizationDataSourceConfigurationsResult&& value) { SetDataSources(std::move(value)); return *this;}

  private:

    bool m_autoEnable;

    bool m_memberAccountLimitReached;

    OrganizationDataSourceConfigurationsResult m_dataSources;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
