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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotMarketOptions">AWS
   * API Reference</a></p>
   */
  class SpotMarketOptions
  {
  public:
    AWS_EC2_API SpotMarketOptions() = default;
    AWS_EC2_API SpotMarketOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotMarketOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The maximum hourly price that you're willing to pay for a Spot Instance. We
     * do not recommend using this parameter because it can lead to increased
     * interruptions. If you do not specify this parameter, you will pay the current
     * Spot price.</p>  <p>If you specify a maximum price, your Spot
     * Instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> <p>If you specify a maximum price, it must be more than USD
     * $0.001. Specifying a value below USD $0.001 will result in an
     * <code>InvalidParameterValue</code> error message.</p> 
     */
    inline const Aws::String& GetMaxPrice() const { return m_maxPrice; }
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }
    template<typename MaxPriceT = Aws::String>
    void SetMaxPrice(MaxPriceT&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::forward<MaxPriceT>(value); }
    template<typename MaxPriceT = Aws::String>
    SpotMarketOptions& WithMaxPrice(MaxPriceT&& value) { SetMaxPrice(std::forward<MaxPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Spot Instance request type. For <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances">RunInstances</a>,
     * persistent Spot Instance requests are only supported when the instance
     * interruption behavior is either <code>hibernate</code> or <code>stop</code>.</p>
     */
    inline SpotInstanceType GetSpotInstanceType() const { return m_spotInstanceType; }
    inline bool SpotInstanceTypeHasBeenSet() const { return m_spotInstanceTypeHasBeenSet; }
    inline void SetSpotInstanceType(SpotInstanceType value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = value; }
    inline SpotMarketOptions& WithSpotInstanceType(SpotInstanceType value) { SetSpotInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>
     */
    inline int GetBlockDurationMinutes() const { return m_blockDurationMinutes; }
    inline bool BlockDurationMinutesHasBeenSet() const { return m_blockDurationMinutesHasBeenSet; }
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }
    inline SpotMarketOptions& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). Supported only
     * for persistent requests.</p> <ul> <li> <p>For a persistent request, the request
     * remains active until the <code>ValidUntil</code> date and time is reached.
     * Otherwise, the request remains active until you cancel it.</p> </li> <li> <p>For
     * a one-time request, <code>ValidUntil</code> is not supported. The request
     * remains active until all instances launch or you cancel the request.</p> </li>
     * </ul>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const { return m_validUntil; }
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    void SetValidUntil(ValidUntilT&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::forward<ValidUntilT>(value); }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    SpotMarketOptions& WithValidUntil(ValidUntilT&& value) { SetValidUntil(std::forward<ValidUntilT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The behavior when a Spot Instance is interrupted.</p> <p>If
     * <code>Configured</code> (for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_HibernationOptionsRequest.html">
     * <code>HibernationOptions</code> </a>) is set to <code>true</code>, the
     * <code>InstanceInterruptionBehavior</code> parameter is automatically set to
     * <code>hibernate</code>. If you set it to <code>stop</code> or
     * <code>terminate</code>, you'll get an error.</p> <p>If <code>Configured</code>
     * (for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_HibernationOptionsRequest.html">
     * <code>HibernationOptions</code> </a>) is set to <code>false</code> or
     * <code>null</code>, the <code>InstanceInterruptionBehavior</code> parameter is
     * automatically set to <code>terminate</code>. You can also set it to
     * <code>stop</code> or <code>hibernate</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/interruption-behavior.html">Interruption
     * behavior</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceInterruptionBehavior GetInstanceInterruptionBehavior() const { return m_instanceInterruptionBehavior; }
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }
    inline void SetInstanceInterruptionBehavior(InstanceInterruptionBehavior value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }
    inline SpotMarketOptions& WithInstanceInterruptionBehavior(InstanceInterruptionBehavior value) { SetInstanceInterruptionBehavior(value); return *this;}
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
