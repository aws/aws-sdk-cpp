/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>

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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Predictive config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PredictiveConfig">AWS
   * API Reference</a></p>
   */
  class PredictiveConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API PredictiveConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API PredictiveConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API PredictiveConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline double GetBandwidthAllocation() const { return m_bandwidthAllocation; }
    inline bool BandwidthAllocationHasBeenSet() const { return m_bandwidthAllocationHasBeenSet; }
    inline void SetBandwidthAllocation(double value) { m_bandwidthAllocationHasBeenSet = true; m_bandwidthAllocation = value; }
    inline PredictiveConfig& WithBandwidthAllocation(double value) { SetBandwidthAllocation(value); return *this;}
    ///@}
  private:

    double m_bandwidthAllocation{0.0};
    bool m_bandwidthAllocationHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
