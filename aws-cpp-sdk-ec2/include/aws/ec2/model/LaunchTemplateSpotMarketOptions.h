/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateSpotMarketOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplateSpotMarketOptions
  {
  public:
    LaunchTemplateSpotMarketOptions();
    LaunchTemplateSpotMarketOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateSpotMarketOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances.</p>
     */
    inline const Aws::String& GetMaxPrice() const{ return m_maxPrice; }

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances.</p>
     */
    inline void SetMaxPrice(const Aws::String& value) { m_maxPriceHasBeenSet = true; m_maxPrice = value; }

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances.</p>
     */
    inline void SetMaxPrice(Aws::String&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::move(value); }

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances.</p>
     */
    inline void SetMaxPrice(const char* value) { m_maxPriceHasBeenSet = true; m_maxPrice.assign(value); }

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances.</p>
     */
    inline LaunchTemplateSpotMarketOptions& WithMaxPrice(const Aws::String& value) { SetMaxPrice(value); return *this;}

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances.</p>
     */
    inline LaunchTemplateSpotMarketOptions& WithMaxPrice(Aws::String&& value) { SetMaxPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum hourly price you're willing to pay for the Spot Instances.</p>
     */
    inline LaunchTemplateSpotMarketOptions& WithMaxPrice(const char* value) { SetMaxPrice(value); return *this;}


    /**
     * <p>The Spot Instance request type.</p>
     */
    inline const SpotInstanceType& GetSpotInstanceType() const{ return m_spotInstanceType; }

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline void SetSpotInstanceType(const SpotInstanceType& value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = value; }

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline void SetSpotInstanceType(SpotInstanceType&& value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = std::move(value); }

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline LaunchTemplateSpotMarketOptions& WithSpotInstanceType(const SpotInstanceType& value) { SetSpotInstanceType(value); return *this;}

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline LaunchTemplateSpotMarketOptions& WithSpotInstanceType(SpotInstanceType&& value) { SetSpotInstanceType(std::move(value)); return *this;}


    /**
     * <p>The required duration for the Spot Instances (also known as Spot blocks), in
     * minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or
     * 360).</p>
     */
    inline int GetBlockDurationMinutes() const{ return m_blockDurationMinutes; }

    /**
     * <p>The required duration for the Spot Instances (also known as Spot blocks), in
     * minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or
     * 360).</p>
     */
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }

    /**
     * <p>The required duration for the Spot Instances (also known as Spot blocks), in
     * minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or
     * 360).</p>
     */
    inline LaunchTemplateSpotMarketOptions& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}


    /**
     * <p>The end date of the request. For a one-time request, the request remains
     * active until all instances launch, the request is canceled, or this date is
     * reached. If the request is persistent, it remains active until it is canceled or
     * this date and time is reached.</p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const{ return m_validUntil; }

    /**
     * <p>The end date of the request. For a one-time request, the request remains
     * active until all instances launch, the request is canceled, or this date is
     * reached. If the request is persistent, it remains active until it is canceled or
     * this date and time is reached.</p>
     */
    inline void SetValidUntil(const Aws::Utils::DateTime& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

    /**
     * <p>The end date of the request. For a one-time request, the request remains
     * active until all instances launch, the request is canceled, or this date is
     * reached. If the request is persistent, it remains active until it is canceled or
     * this date and time is reached.</p>
     */
    inline void SetValidUntil(Aws::Utils::DateTime&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }

    /**
     * <p>The end date of the request. For a one-time request, the request remains
     * active until all instances launch, the request is canceled, or this date is
     * reached. If the request is persistent, it remains active until it is canceled or
     * this date and time is reached.</p>
     */
    inline LaunchTemplateSpotMarketOptions& WithValidUntil(const Aws::Utils::DateTime& value) { SetValidUntil(value); return *this;}

    /**
     * <p>The end date of the request. For a one-time request, the request remains
     * active until all instances launch, the request is canceled, or this date is
     * reached. If the request is persistent, it remains active until it is canceled or
     * this date and time is reached.</p>
     */
    inline LaunchTemplateSpotMarketOptions& WithValidUntil(Aws::Utils::DateTime&& value) { SetValidUntil(std::move(value)); return *this;}


    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline const InstanceInterruptionBehavior& GetInstanceInterruptionBehavior() const{ return m_instanceInterruptionBehavior; }

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline void SetInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline void SetInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = std::move(value); }

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline LaunchTemplateSpotMarketOptions& WithInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { SetInstanceInterruptionBehavior(value); return *this;}

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline LaunchTemplateSpotMarketOptions& WithInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { SetInstanceInterruptionBehavior(std::move(value)); return *this;}

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
