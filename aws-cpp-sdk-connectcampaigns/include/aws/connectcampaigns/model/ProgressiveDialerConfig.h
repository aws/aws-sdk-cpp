/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>

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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>Progressive Dialer config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/ProgressiveDialerConfig">AWS
   * API Reference</a></p>
   */
  class ProgressiveDialerConfig
  {
  public:
    AWS_CONNECTCAMPAIGNS_API ProgressiveDialerConfig();
    AWS_CONNECTCAMPAIGNS_API ProgressiveDialerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API ProgressiveDialerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline double GetBandwidthAllocation() const{ return m_bandwidthAllocation; }

    
    inline bool BandwidthAllocationHasBeenSet() const { return m_bandwidthAllocationHasBeenSet; }

    
    inline void SetBandwidthAllocation(double value) { m_bandwidthAllocationHasBeenSet = true; m_bandwidthAllocation = value; }

    
    inline ProgressiveDialerConfig& WithBandwidthAllocation(double value) { SetBandwidthAllocation(value); return *this;}

  private:

    double m_bandwidthAllocation;
    bool m_bandwidthAllocationHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
