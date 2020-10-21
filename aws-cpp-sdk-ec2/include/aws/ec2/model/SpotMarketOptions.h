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
  class AWS_EC2_API SpotMarketOptions
  {
  public:
    SpotMarketOptions();
    SpotMarketOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotMarketOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances. The
     * default is the On-Demand price.</p>
     */
    inline const Aws::String& GetMaxPrice() const{ return m_maxPrice; }

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances. The
     * default is the On-Demand price.</p>
     */
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances. The
     * default is the On-Demand price.</p>
     */
    inline void SetMaxPrice(const Aws::String& value) { m_maxPriceHasBeenSet = true; m_maxPrice = value; }

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances. The
     * default is the On-Demand price.</p>
     */
    inline void SetMaxPrice(Aws::String&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::move(value); }

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances. The
     * default is the On-Demand price.</p>
     */
    inline void SetMaxPrice(const char* value) { m_maxPriceHasBeenSet = true; m_maxPrice.assign(value); }

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances. The
     * default is the On-Demand price.</p>
     */
    inline SpotMarketOptions& WithMaxPrice(const Aws::String& value) { SetMaxPrice(value); return *this;}

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances. The
     * default is the On-Demand price.</p>
     */
    inline SpotMarketOptions& WithMaxPrice(Aws::String&& value) { SetMaxPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances. The
     * default is the On-Demand price.</p>
     */
    inline SpotMarketOptions& WithMaxPrice(const char* value) { SetMaxPrice(value); return *this;}


    /**
     * <p>The Spot Instance request type. For <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances">RunInstances</a>,
     * persistent Spot Instance requests are only supported when
     * <b>InstanceInterruptionBehavior</b> is set to either <code>hibernate</code> or
     * <code>stop</code>.</p>
     */
    inline const SpotInstanceType& GetSpotInstanceType() const{ return m_spotInstanceType; }

    /**
     * <p>The Spot Instance request type. For <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances">RunInstances</a>,
     * persistent Spot Instance requests are only supported when
     * <b>InstanceInterruptionBehavior</b> is set to either <code>hibernate</code> or
     * <code>stop</code>.</p>
     */
    inline bool SpotInstanceTypeHasBeenSet() const { return m_spotInstanceTypeHasBeenSet; }

    /**
     * <p>The Spot Instance request type. For <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances">RunInstances</a>,
     * persistent Spot Instance requests are only supported when
     * <b>InstanceInterruptionBehavior</b> is set to either <code>hibernate</code> or
     * <code>stop</code>.</p>
     */
    inline void SetSpotInstanceType(const SpotInstanceType& value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = value; }

    /**
     * <p>The Spot Instance request type. For <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances">RunInstances</a>,
     * persistent Spot Instance requests are only supported when
     * <b>InstanceInterruptionBehavior</b> is set to either <code>hibernate</code> or
     * <code>stop</code>.</p>
     */
    inline void SetSpotInstanceType(SpotInstanceType&& value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = std::move(value); }

    /**
     * <p>The Spot Instance request type. For <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances">RunInstances</a>,
     * persistent Spot Instance requests are only supported when
     * <b>InstanceInterruptionBehavior</b> is set to either <code>hibernate</code> or
     * <code>stop</code>.</p>
     */
    inline SpotMarketOptions& WithSpotInstanceType(const SpotInstanceType& value) { SetSpotInstanceType(value); return *this;}

    /**
     * <p>The Spot Instance request type. For <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances">RunInstances</a>,
     * persistent Spot Instance requests are only supported when
     * <b>InstanceInterruptionBehavior</b> is set to either <code>hibernate</code> or
     * <code>stop</code>.</p>
     */
    inline SpotMarketOptions& WithSpotInstanceType(SpotInstanceType&& value) { SetSpotInstanceType(std::move(value)); return *this;}


    /**
     * <p>The required duration for the Spot Instances (also known as Spot blocks), in
     * minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or
     * 360).</p> <p>The duration period starts as soon as your Spot Instance receives
     * its instance ID. At the end of the duration period, Amazon EC2 marks the Spot
     * Instance for termination and provides a Spot Instance termination notice, which
     * gives the instance a two-minute warning before it terminates.</p> <p>You can't
     * specify an Availability Zone group or a launch group if you specify a
     * duration.</p> <p>New accounts or accounts with no previous billing history with
     * AWS are not eligible for Spot Instances with a defined duration (also known as
     * Spot blocks).</p>
     */
    inline int GetBlockDurationMinutes() const{ return m_blockDurationMinutes; }

    /**
     * <p>The required duration for the Spot Instances (also known as Spot blocks), in
     * minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or
     * 360).</p> <p>The duration period starts as soon as your Spot Instance receives
     * its instance ID. At the end of the duration period, Amazon EC2 marks the Spot
     * Instance for termination and provides a Spot Instance termination notice, which
     * gives the instance a two-minute warning before it terminates.</p> <p>You can't
     * specify an Availability Zone group or a launch group if you specify a
     * duration.</p> <p>New accounts or accounts with no previous billing history with
     * AWS are not eligible for Spot Instances with a defined duration (also known as
     * Spot blocks).</p>
     */
    inline bool BlockDurationMinutesHasBeenSet() const { return m_blockDurationMinutesHasBeenSet; }

    /**
     * <p>The required duration for the Spot Instances (also known as Spot blocks), in
     * minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or
     * 360).</p> <p>The duration period starts as soon as your Spot Instance receives
     * its instance ID. At the end of the duration period, Amazon EC2 marks the Spot
     * Instance for termination and provides a Spot Instance termination notice, which
     * gives the instance a two-minute warning before it terminates.</p> <p>You can't
     * specify an Availability Zone group or a launch group if you specify a
     * duration.</p> <p>New accounts or accounts with no previous billing history with
     * AWS are not eligible for Spot Instances with a defined duration (also known as
     * Spot blocks).</p>
     */
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }

    /**
     * <p>The required duration for the Spot Instances (also known as Spot blocks), in
     * minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or
     * 360).</p> <p>The duration period starts as soon as your Spot Instance receives
     * its instance ID. At the end of the duration period, Amazon EC2 marks the Spot
     * Instance for termination and provides a Spot Instance termination notice, which
     * gives the instance a two-minute warning before it terminates.</p> <p>You can't
     * specify an Availability Zone group or a launch group if you specify a
     * duration.</p> <p>New accounts or accounts with no previous billing history with
     * AWS are not eligible for Spot Instances with a defined duration (also known as
     * Spot blocks).</p>
     */
    inline SpotMarketOptions& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}


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
    inline const Aws::Utils::DateTime& GetValidUntil() const{ return m_validUntil; }

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
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }

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
    inline void SetValidUntil(const Aws::Utils::DateTime& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

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
    inline void SetValidUntil(Aws::Utils::DateTime&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }

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
    inline SpotMarketOptions& WithValidUntil(const Aws::Utils::DateTime& value) { SetValidUntil(value); return *this;}

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
    inline SpotMarketOptions& WithValidUntil(Aws::Utils::DateTime&& value) { SetValidUntil(std::move(value)); return *this;}


    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline const InstanceInterruptionBehavior& GetInstanceInterruptionBehavior() const{ return m_instanceInterruptionBehavior; }

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline void SetInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline void SetInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = std::move(value); }

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline SpotMarketOptions& WithInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { SetInstanceInterruptionBehavior(value); return *this;}

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline SpotMarketOptions& WithInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { SetInstanceInterruptionBehavior(std::move(value)); return *this;}

  private:

    Aws::String m_maxPrice;
    bool m_maxPriceHasBeenSet;

    SpotInstanceType m_spotInstanceType;
    bool m_spotInstanceTypeHasBeenSet;

    int m_blockDurationMinutes;
    bool m_blockDurationMinutesHasBeenSet;

    Aws::Utils::DateTime m_validUntil;
    bool m_validUntilHasBeenSet;

    InstanceInterruptionBehavior m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
