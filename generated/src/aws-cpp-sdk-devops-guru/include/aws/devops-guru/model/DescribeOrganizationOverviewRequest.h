/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class DescribeOrganizationOverviewRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API DescribeOrganizationOverviewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrganizationOverview"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The start of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * after this day. </p>
     */
    inline const Aws::Utils::DateTime& GetFromTime() const { return m_fromTime; }
    inline bool FromTimeHasBeenSet() const { return m_fromTimeHasBeenSet; }
    template<typename FromTimeT = Aws::Utils::DateTime>
    void SetFromTime(FromTimeT&& value) { m_fromTimeHasBeenSet = true; m_fromTime = std::forward<FromTimeT>(value); }
    template<typename FromTimeT = Aws::Utils::DateTime>
    DescribeOrganizationOverviewRequest& WithFromTime(FromTimeT&& value) { SetFromTime(std::forward<FromTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * before this day. If this is not specified, then the current day is used. </p>
     */
    inline const Aws::Utils::DateTime& GetToTime() const { return m_toTime; }
    inline bool ToTimeHasBeenSet() const { return m_toTimeHasBeenSet; }
    template<typename ToTimeT = Aws::Utils::DateTime>
    void SetToTime(ToTimeT&& value) { m_toTimeHasBeenSet = true; m_toTime = std::forward<ToTimeT>(value); }
    template<typename ToTimeT = Aws::Utils::DateTime>
    DescribeOrganizationOverviewRequest& WithToTime(ToTimeT&& value) { SetToTime(std::forward<ToTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    DescribeOrganizationOverviewRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    DescribeOrganizationOverviewRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const { return m_organizationalUnitIds; }
    inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }
    template<typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = std::forward<OrganizationalUnitIdsT>(value); }
    template<typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
    DescribeOrganizationOverviewRequest& WithOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { SetOrganizationalUnitIds(std::forward<OrganizationalUnitIdsT>(value)); return *this;}
    template<typename OrganizationalUnitIdsT = Aws::String>
    DescribeOrganizationOverviewRequest& AddOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.emplace_back(std::forward<OrganizationalUnitIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_fromTime{};
    bool m_fromTimeHasBeenSet = false;

    Aws::Utils::DateTime m_toTime{};
    bool m_toTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitIds;
    bool m_organizationalUnitIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
