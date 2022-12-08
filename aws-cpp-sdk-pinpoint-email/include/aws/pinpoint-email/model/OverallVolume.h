/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/VolumeStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/DomainIspPlacement.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that contains information about email that was sent from the
   * selected domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/OverallVolume">AWS
   * API Reference</a></p>
   */
  class OverallVolume
  {
  public:
    AWS_PINPOINTEMAIL_API OverallVolume();
    AWS_PINPOINTEMAIL_API OverallVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API OverallVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains information about the numbers of messages that
     * arrived in recipients' inboxes and junk mail folders.</p>
     */
    inline const VolumeStatistics& GetVolumeStatistics() const{ return m_volumeStatistics; }

    /**
     * <p>An object that contains information about the numbers of messages that
     * arrived in recipients' inboxes and junk mail folders.</p>
     */
    inline bool VolumeStatisticsHasBeenSet() const { return m_volumeStatisticsHasBeenSet; }

    /**
     * <p>An object that contains information about the numbers of messages that
     * arrived in recipients' inboxes and junk mail folders.</p>
     */
    inline void SetVolumeStatistics(const VolumeStatistics& value) { m_volumeStatisticsHasBeenSet = true; m_volumeStatistics = value; }

    /**
     * <p>An object that contains information about the numbers of messages that
     * arrived in recipients' inboxes and junk mail folders.</p>
     */
    inline void SetVolumeStatistics(VolumeStatistics&& value) { m_volumeStatisticsHasBeenSet = true; m_volumeStatistics = std::move(value); }

    /**
     * <p>An object that contains information about the numbers of messages that
     * arrived in recipients' inboxes and junk mail folders.</p>
     */
    inline OverallVolume& WithVolumeStatistics(const VolumeStatistics& value) { SetVolumeStatistics(value); return *this;}

    /**
     * <p>An object that contains information about the numbers of messages that
     * arrived in recipients' inboxes and junk mail folders.</p>
     */
    inline OverallVolume& WithVolumeStatistics(VolumeStatistics&& value) { SetVolumeStatistics(std::move(value)); return *this;}


    /**
     * <p>The percentage of emails that were sent from the domain that were read by
     * their recipients.</p>
     */
    inline double GetReadRatePercent() const{ return m_readRatePercent; }

    /**
     * <p>The percentage of emails that were sent from the domain that were read by
     * their recipients.</p>
     */
    inline bool ReadRatePercentHasBeenSet() const { return m_readRatePercentHasBeenSet; }

    /**
     * <p>The percentage of emails that were sent from the domain that were read by
     * their recipients.</p>
     */
    inline void SetReadRatePercent(double value) { m_readRatePercentHasBeenSet = true; m_readRatePercent = value; }

    /**
     * <p>The percentage of emails that were sent from the domain that were read by
     * their recipients.</p>
     */
    inline OverallVolume& WithReadRatePercent(double value) { SetReadRatePercent(value); return *this;}


    /**
     * <p>An object that contains inbox and junk mail placement metrics for individual
     * email providers.</p>
     */
    inline const Aws::Vector<DomainIspPlacement>& GetDomainIspPlacements() const{ return m_domainIspPlacements; }

    /**
     * <p>An object that contains inbox and junk mail placement metrics for individual
     * email providers.</p>
     */
    inline bool DomainIspPlacementsHasBeenSet() const { return m_domainIspPlacementsHasBeenSet; }

    /**
     * <p>An object that contains inbox and junk mail placement metrics for individual
     * email providers.</p>
     */
    inline void SetDomainIspPlacements(const Aws::Vector<DomainIspPlacement>& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements = value; }

    /**
     * <p>An object that contains inbox and junk mail placement metrics for individual
     * email providers.</p>
     */
    inline void SetDomainIspPlacements(Aws::Vector<DomainIspPlacement>&& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements = std::move(value); }

    /**
     * <p>An object that contains inbox and junk mail placement metrics for individual
     * email providers.</p>
     */
    inline OverallVolume& WithDomainIspPlacements(const Aws::Vector<DomainIspPlacement>& value) { SetDomainIspPlacements(value); return *this;}

    /**
     * <p>An object that contains inbox and junk mail placement metrics for individual
     * email providers.</p>
     */
    inline OverallVolume& WithDomainIspPlacements(Aws::Vector<DomainIspPlacement>&& value) { SetDomainIspPlacements(std::move(value)); return *this;}

    /**
     * <p>An object that contains inbox and junk mail placement metrics for individual
     * email providers.</p>
     */
    inline OverallVolume& AddDomainIspPlacements(const DomainIspPlacement& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements.push_back(value); return *this; }

    /**
     * <p>An object that contains inbox and junk mail placement metrics for individual
     * email providers.</p>
     */
    inline OverallVolume& AddDomainIspPlacements(DomainIspPlacement&& value) { m_domainIspPlacementsHasBeenSet = true; m_domainIspPlacements.push_back(std::move(value)); return *this; }

  private:

    VolumeStatistics m_volumeStatistics;
    bool m_volumeStatisticsHasBeenSet = false;

    double m_readRatePercent;
    bool m_readRatePercentHasBeenSet = false;

    Aws::Vector<DomainIspPlacement> m_domainIspPlacements;
    bool m_domainIspPlacementsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
