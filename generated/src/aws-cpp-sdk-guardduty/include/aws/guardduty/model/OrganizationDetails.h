/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/guardduty/model/OrganizationStatistics.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about GuardDuty coverage statistics for members in your Amazon
   * Web Services organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationDetails">AWS
   * API Reference</a></p>
   */
  class OrganizationDetails
  {
  public:
    AWS_GUARDDUTY_API OrganizationDetails();
    AWS_GUARDDUTY_API OrganizationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp at which the organization statistics was last updated. This is
     * in UTC format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline OrganizationDetails& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline OrganizationDetails& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the GuardDuty coverage statistics for members in your
     * Amazon Web Services organization.</p>
     */
    inline const OrganizationStatistics& GetOrganizationStatistics() const{ return m_organizationStatistics; }
    inline bool OrganizationStatisticsHasBeenSet() const { return m_organizationStatisticsHasBeenSet; }
    inline void SetOrganizationStatistics(const OrganizationStatistics& value) { m_organizationStatisticsHasBeenSet = true; m_organizationStatistics = value; }
    inline void SetOrganizationStatistics(OrganizationStatistics&& value) { m_organizationStatisticsHasBeenSet = true; m_organizationStatistics = std::move(value); }
    inline OrganizationDetails& WithOrganizationStatistics(const OrganizationStatistics& value) { SetOrganizationStatistics(value); return *this;}
    inline OrganizationDetails& WithOrganizationStatistics(OrganizationStatistics&& value) { SetOrganizationStatistics(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    OrganizationStatistics m_organizationStatistics;
    bool m_organizationStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
