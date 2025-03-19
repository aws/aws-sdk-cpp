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
    AWS_EC2_API LaunchTemplateSpotMarketOptionsRequest() = default;
    AWS_EC2_API LaunchTemplateSpotMarketOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateSpotMarketOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The maximum hourly price you're willing to pay for a Spot Instance. We do not
     * recommend using this parameter because it can lead to increased interruptions.
     * If you do not specify this parameter, you will pay the current Spot price. If
     * you do specify this parameter, it must be more than USD $0.001. Specifying a
     * value below USD $0.001 will result in an <code>InvalidParameterValue</code>
     * error message when the launch template is used to launch an instance.</p>
     *  <p>If you specify a maximum price, your Spot Instances will be
     * interrupted more frequently than if you do not specify this parameter.</p>
     * 
     */
    inline const Aws::String& GetMaxPrice() const { return m_maxPrice; }
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }
    template<typename MaxPriceT = Aws::String>
    void SetMaxPrice(MaxPriceT&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::forward<MaxPriceT>(value); }
    template<typename MaxPriceT = Aws::String>
    LaunchTemplateSpotMarketOptionsRequest& WithMaxPrice(MaxPriceT&& value) { SetMaxPrice(std::forward<MaxPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spot Instance request type.</p>
     */
    inline SpotInstanceType GetSpotInstanceType() const { return m_spotInstanceType; }
    inline bool SpotInstanceTypeHasBeenSet() const { return m_spotInstanceTypeHasBeenSet; }
    inline void SetSpotInstanceType(SpotInstanceType value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = value; }
    inline LaunchTemplateSpotMarketOptionsRequest& WithSpotInstanceType(SpotInstanceType value) { SetSpotInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>
     */
    inline int GetBlockDurationMinutes() const { return m_blockDurationMinutes; }
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
    inline const Aws::Utils::DateTime& GetValidUntil() const { return m_validUntil; }
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    void SetValidUntil(ValidUntilT&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::forward<ValidUntilT>(value); }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    LaunchTemplateSpotMarketOptionsRequest& WithValidUntil(ValidUntilT&& value) { SetValidUntil(std::forward<ValidUntilT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline InstanceInterruptionBehavior GetInstanceInterruptionBehavior() const { return m_instanceInterruptionBehavior; }
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }
    inline void SetInstanceInterruptionBehavior(InstanceInterruptionBehavior value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }
    inline LaunchTemplateSpotMarketOptionsRequest& WithInstanceInterruptionBehavior(InstanceInterruptionBehavior value) { SetInstanceInterruptionBehavior(value); return *this;}
    ///@}
  private:

    Aws::String m_maxPrice;
    bool m_maxPriceHasBeenSet = false;

    SpotInstanceType m_spotInstanceType{SpotInstanceType::NOT_SET};
    bool m_spotInstanceTypeHasBeenSet = false;

    int m_blockDurationMinutes{0};
    bool m_blockDurationMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_validUntil{};
    bool m_validUntilHasBeenSet = false;

    InstanceInterruptionBehavior m_instanceInterruptionBehavior{InstanceInterruptionBehavior::NOT_SET};
    bool m_instanceInterruptionBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
