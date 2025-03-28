/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/ShareAttributes.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The fair-share scheduling policy details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/FairsharePolicy">AWS
   * API Reference</a></p>
   */
  class FairsharePolicy
  {
  public:
    AWS_BATCH_API FairsharePolicy() = default;
    AWS_BATCH_API FairsharePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API FairsharePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of time (in seconds) to use to calculate a fair-share percentage
     * for each share identifier in use. A value of zero (0) indicates the default
     * minimum time window (600 seconds). The maximum supported value is 604800 (1
     * week).</p> <p>The decay allows for more recently run jobs to have more weight
     * than jobs that ran earlier. Consider adjusting this number if you have jobs that
     * (on average) run longer than ten minutes, or a large difference in job count or
     * job run times between share identifiers, and the allocation of resources doesn't
     * meet your needs.</p>
     */
    inline int GetShareDecaySeconds() const { return m_shareDecaySeconds; }
    inline bool ShareDecaySecondsHasBeenSet() const { return m_shareDecaySecondsHasBeenSet; }
    inline void SetShareDecaySeconds(int value) { m_shareDecaySecondsHasBeenSet = true; m_shareDecaySeconds = value; }
    inline FairsharePolicy& WithShareDecaySeconds(int value) { SetShareDecaySeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value used to reserve some of the available maximum vCPU for share
     * identifiers that aren't already used.</p> <p>The reserved ratio is
     * <code>(<i>computeReservation</i>/100)^<i>ActiveFairShares</i> </code> where
     * <code> <i>ActiveFairShares</i> </code> is the number of active share
     * identifiers.</p> <p>For example, a <code>computeReservation</code> value of 50
     * indicates that Batch reserves 50% of the maximum available vCPU if there's only
     * one share identifier. It reserves 25% if there are two share identifiers. It
     * reserves 12.5% if there are three share identifiers. A
     * <code>computeReservation</code> value of 25 indicates that Batch should reserve
     * 25% of the maximum available vCPU if there's only one share identifier, 6.25% if
     * there are two fair share identifiers, and 1.56% if there are three share
     * identifiers.</p> <p>The minimum value is 0 and the maximum value is 99.</p>
     */
    inline int GetComputeReservation() const { return m_computeReservation; }
    inline bool ComputeReservationHasBeenSet() const { return m_computeReservationHasBeenSet; }
    inline void SetComputeReservation(int value) { m_computeReservationHasBeenSet = true; m_computeReservation = value; }
    inline FairsharePolicy& WithComputeReservation(int value) { SetComputeReservation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>SharedIdentifier</code> objects that contain the weights
     * for the share identifiers for the fair-share policy. Share identifiers that
     * aren't included have a default weight of <code>1.0</code>.</p>
     */
    inline const Aws::Vector<ShareAttributes>& GetShareDistribution() const { return m_shareDistribution; }
    inline bool ShareDistributionHasBeenSet() const { return m_shareDistributionHasBeenSet; }
    template<typename ShareDistributionT = Aws::Vector<ShareAttributes>>
    void SetShareDistribution(ShareDistributionT&& value) { m_shareDistributionHasBeenSet = true; m_shareDistribution = std::forward<ShareDistributionT>(value); }
    template<typename ShareDistributionT = Aws::Vector<ShareAttributes>>
    FairsharePolicy& WithShareDistribution(ShareDistributionT&& value) { SetShareDistribution(std::forward<ShareDistributionT>(value)); return *this;}
    template<typename ShareDistributionT = ShareAttributes>
    FairsharePolicy& AddShareDistribution(ShareDistributionT&& value) { m_shareDistributionHasBeenSet = true; m_shareDistribution.emplace_back(std::forward<ShareDistributionT>(value)); return *this; }
    ///@}
  private:

    int m_shareDecaySeconds{0};
    bool m_shareDecaySecondsHasBeenSet = false;

    int m_computeReservation{0};
    bool m_computeReservationHasBeenSet = false;

    Aws::Vector<ShareAttributes> m_shareDistribution;
    bool m_shareDistributionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
