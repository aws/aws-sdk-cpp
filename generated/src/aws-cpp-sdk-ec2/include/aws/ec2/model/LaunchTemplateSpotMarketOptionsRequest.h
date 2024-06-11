/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SpotInstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/InstanceInterruptionBehavior.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The options for Spot Instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateSpotMarketOptionsRequest">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateSpotMarketOptionsRequest
  {
  public:
    AWS_EC2_API LaunchTemplateSpotMarketOptionsRequest();
    AWS_EC2_API LaunchTemplateSpotMarketOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateSpotMarketOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances. We do
     * not recommend using this parameter because it can lead to increased
     * interruptions. If you do not specify this parameter, you will pay the current
     * Spot price.</p>  <p>If you specify a maximum price, your Spot
     * Instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline const Aws::String& GetMaxPrice() const{ return m_maxPrice; }
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }
    inline void SetMaxPrice(const Aws::String& value) { m_maxPriceHasBeenSet = true; m_maxPrice = value; }
    inline void SetMaxPrice(Aws::String&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::move(value); }
    inline void SetMaxPrice(const char* value) { m_maxPriceHasBeenSet = true; m_maxPrice.assign(value); }
    inline LaunchTemplateSpotMarketOptionsRequest& WithMaxPrice(const Aws::String& value) { SetMaxPrice(value); return *this;}
    inline LaunchTemplateSpotMarketOptionsRequest& WithMaxPrice(Aws::String&& value) { SetMaxPrice(std::move(value)); return *this;}
    inline LaunchTemplateSpotMarketOptionsRequest& WithMaxPrice(const char* value) { SetMaxPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spot Instance request type.</p>
     */
    inline const SpotInstanceType& GetSpotInstanceType() const{ return m_spotInstanceType; }
    inline bool SpotInstanceTypeHasBeenSet() const { return m_spotInstanceTypeHasBeenSet; }
    inline void SetSpotInstanceType(const SpotInstanceType& value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = value; }
    inline void SetSpotInstanceType(SpotInstanceType&& value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = std::move(value); }
    inline LaunchTemplateSpotMarketOptionsRequest& WithSpotInstanceType(const SpotInstanceType& value) { SetSpotInstanceType(value); return *this;}
    inline LaunchTemplateSpotMarketOptionsRequest& WithSpotInstanceType(SpotInstanceType&& value) { SetSpotInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>
     */
    inline int GetBlockDurationMinutes() const{ return m_blockDurationMinutes; }
    inline bool BlockDurationMinutesHasBeenSet() const { return m_blockDurationMinutesHasBeenSet; }
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }
    inline LaunchTemplateSpotMarketOptionsRequest& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date of the request, in UTC format
     * (<i>YYYY-MM-DD</i>T<i>HH:MM:SS</i>Z). Supported only for persistent
     * requests.</p> <ul> <li> <p>For a persistent request, the request remains active
     * until the <code>ValidUntil</code> date and time is reached. Otherwise, the
     * request remains active until you cancel it.</p> </li> <li> <p>For a one-time
     * request, <code>ValidUntil</code> is not supported. The request remains active
     * until all instances launch or you cancel the request.</p> </li> </ul>
     * <p>Default: 7 days from the current date</p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const{ return m_validUntil; }
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }
    inline void SetValidUntil(const Aws::Utils::DateTime& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }
    inline void SetValidUntil(Aws::Utils::DateTime&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }
    inline LaunchTemplateSpotMarketOptionsRequest& WithValidUntil(const Aws::Utils::DateTime& value) { SetValidUntil(value); return *this;}
    inline LaunchTemplateSpotMarketOptionsRequest& WithValidUntil(Aws::Utils::DateTime&& value) { SetValidUntil(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline const InstanceInterruptionBehavior& GetInstanceInterruptionBehavior() const{ return m_instanceInterruptionBehavior; }
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }
    inline void SetInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }
    inline void SetInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = std::move(value); }
    inline LaunchTemplateSpotMarketOptionsRequest& WithInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { SetInstanceInterruptionBehavior(value); return *this;}
    inline LaunchTemplateSpotMarketOptionsRequest& WithInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { SetInstanceInterruptionBehavior(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_maxPrice;
    bool m_maxPriceHasBeenSet = false;

    SpotInstanceType m_spotInstanceType;
    bool m_spotInstanceTypeHasBeenSet = false;

    int m_blockDurationMinutes;
    bool m_blockDurationMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_validUntil;
    bool m_validUntilHasBeenSet = false;

    InstanceInterruptionBehavior m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
