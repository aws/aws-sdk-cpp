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
    AWS_DEVOPSGURU_API DescribeOrganizationOverviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrganizationOverview"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    /**
     * <p> The start of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * after this day. </p>
     */
    inline const Aws::Utils::DateTime& GetFromTime() const{ return m_fromTime; }

    /**
     * <p> The start of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * after this day. </p>
     */
    inline bool FromTimeHasBeenSet() const { return m_fromTimeHasBeenSet; }

    /**
     * <p> The start of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * after this day. </p>
     */
    inline void SetFromTime(const Aws::Utils::DateTime& value) { m_fromTimeHasBeenSet = true; m_fromTime = value; }

    /**
     * <p> The start of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * after this day. </p>
     */
    inline void SetFromTime(Aws::Utils::DateTime&& value) { m_fromTimeHasBeenSet = true; m_fromTime = std::move(value); }

    /**
     * <p> The start of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * after this day. </p>
     */
    inline DescribeOrganizationOverviewRequest& WithFromTime(const Aws::Utils::DateTime& value) { SetFromTime(value); return *this;}

    /**
     * <p> The start of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * after this day. </p>
     */
    inline DescribeOrganizationOverviewRequest& WithFromTime(Aws::Utils::DateTime&& value) { SetFromTime(std::move(value)); return *this;}


    /**
     * <p> The end of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * before this day. If this is not specified, then the current day is used. </p>
     */
    inline const Aws::Utils::DateTime& GetToTime() const{ return m_toTime; }

    /**
     * <p> The end of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * before this day. If this is not specified, then the current day is used. </p>
     */
    inline bool ToTimeHasBeenSet() const { return m_toTimeHasBeenSet; }

    /**
     * <p> The end of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * before this day. If this is not specified, then the current day is used. </p>
     */
    inline void SetToTime(const Aws::Utils::DateTime& value) { m_toTimeHasBeenSet = true; m_toTime = value; }

    /**
     * <p> The end of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * before this day. If this is not specified, then the current day is used. </p>
     */
    inline void SetToTime(Aws::Utils::DateTime&& value) { m_toTimeHasBeenSet = true; m_toTime = std::move(value); }

    /**
     * <p> The end of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * before this day. If this is not specified, then the current day is used. </p>
     */
    inline DescribeOrganizationOverviewRequest& WithToTime(const Aws::Utils::DateTime& value) { SetToTime(value); return *this;}

    /**
     * <p> The end of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * before this day. If this is not specified, then the current day is used. </p>
     */
    inline DescribeOrganizationOverviewRequest& WithToTime(Aws::Utils::DateTime&& value) { SetToTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationOverviewRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationOverviewRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationOverviewRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationOverviewRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationOverviewRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const{ return m_organizationalUnitIds; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline void SetOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = value; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline void SetOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = std::move(value); }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationOverviewRequest& WithOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitIds(value); return *this;}

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationOverviewRequest& WithOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationOverviewRequest& AddOrganizationalUnitIds(const Aws::String& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationOverviewRequest& AddOrganizationalUnitIds(Aws::String&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationOverviewRequest& AddOrganizationalUnitIds(const char* value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }

  private:

    Aws::Utils::DateTime m_fromTime;
    bool m_fromTimeHasBeenSet = false;

    Aws::Utils::DateTime m_toTime;
    bool m_toTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitIds;
    bool m_organizationalUnitIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
