/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SpotFleetLaunchSpecification.h>

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
   * <p>Describes the configuration of a Spot fleet request.</p>
   */
  class AWS_EC2_API SpotFleetRequestConfigData
  {
  public:
    SpotFleetRequestConfigData();
    SpotFleetRequestConfigData(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotFleetRequestConfigData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>A unique, case-sensitive identifier you provide to ensure idempotency of your
     * listings. This helps avoid duplicate listings. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier you provide to ensure idempotency of your
     * listings. This helps avoid duplicate listings. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier you provide to ensure idempotency of your
     * listings. This helps avoid duplicate listings. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier you provide to ensure idempotency of your
     * listings. This helps avoid duplicate listings. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier you provide to ensure idempotency of your
     * listings. This helps avoid duplicate listings. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline SpotFleetRequestConfigData& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier you provide to ensure idempotency of your
     * listings. This helps avoid duplicate listings. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline SpotFleetRequestConfigData& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier you provide to ensure idempotency of your
     * listings. This helps avoid duplicate listings. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline SpotFleetRequestConfigData& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline SpotFleetRequestConfigData& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline SpotFleetRequestConfigData& WithSpotPrice(Aws::String&& value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline SpotFleetRequestConfigData& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum number of Spot Instances to launch.</p>
     */
    inline long GetTargetCapacity() const{ return m_targetCapacity; }

    /**
     * <p>The maximum number of Spot Instances to launch.</p>
     */
    inline void SetTargetCapacity(long value) { m_targetCapacityHasBeenSet = true; m_targetCapacity = value; }

    /**
     * <p>The maximum number of Spot Instances to launch.</p>
     */
    inline SpotFleetRequestConfigData& WithTargetCapacity(long value) { SetTargetCapacity(value); return *this;}

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately.</p>
     */
    inline double GetValidFrom() const{ return m_validFrom; }

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately.</p>
     */
    inline void SetValidFrom(double value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately.</p>
     */
    inline SpotFleetRequestConfigData& WithValidFrom(double value) { SetValidFrom(value); return *this;}

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new Spot Instance requests are placed or enabled to fulfill the request.</p>
     */
    inline double GetValidUntil() const{ return m_validUntil; }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new Spot Instance requests are placed or enabled to fulfill the request.</p>
     */
    inline void SetValidUntil(double value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new Spot Instance requests are placed or enabled to fulfill the request.</p>
     */
    inline SpotFleetRequestConfigData& WithValidUntil(double value) { SetValidUntil(value); return *this;}

    /**
     * <p>Indicates whether running instances should be terminated when the Spot fleet
     * request expires.</p>
     */
    inline bool GetTerminateInstancesWithExpiration() const{ return m_terminateInstancesWithExpiration; }

    /**
     * <p>Indicates whether running instances should be terminated when the Spot fleet
     * request expires.</p>
     */
    inline void SetTerminateInstancesWithExpiration(bool value) { m_terminateInstancesWithExpirationHasBeenSet = true; m_terminateInstancesWithExpiration = value; }

    /**
     * <p>Indicates whether running instances should be terminated when the Spot fleet
     * request expires.</p>
     */
    inline SpotFleetRequestConfigData& WithTerminateInstancesWithExpiration(bool value) { SetTerminateInstancesWithExpiration(value); return *this;}

    /**
     * <p>Grants the Spot fleet service permission to terminate instances on your
     * behalf when you cancel a Spot fleet request using <a>CancelSpotFleetRequests</a>
     * or when the Spot fleet request expires, if you set
     * <code>terminateInstancesWithExpiration</code>.</p>
     */
    inline const Aws::String& GetIamFleetRole() const{ return m_iamFleetRole; }

    /**
     * <p>Grants the Spot fleet service permission to terminate instances on your
     * behalf when you cancel a Spot fleet request using <a>CancelSpotFleetRequests</a>
     * or when the Spot fleet request expires, if you set
     * <code>terminateInstancesWithExpiration</code>.</p>
     */
    inline void SetIamFleetRole(const Aws::String& value) { m_iamFleetRoleHasBeenSet = true; m_iamFleetRole = value; }

    /**
     * <p>Grants the Spot fleet service permission to terminate instances on your
     * behalf when you cancel a Spot fleet request using <a>CancelSpotFleetRequests</a>
     * or when the Spot fleet request expires, if you set
     * <code>terminateInstancesWithExpiration</code>.</p>
     */
    inline void SetIamFleetRole(Aws::String&& value) { m_iamFleetRoleHasBeenSet = true; m_iamFleetRole = value; }

    /**
     * <p>Grants the Spot fleet service permission to terminate instances on your
     * behalf when you cancel a Spot fleet request using <a>CancelSpotFleetRequests</a>
     * or when the Spot fleet request expires, if you set
     * <code>terminateInstancesWithExpiration</code>.</p>
     */
    inline void SetIamFleetRole(const char* value) { m_iamFleetRoleHasBeenSet = true; m_iamFleetRole.assign(value); }

    /**
     * <p>Grants the Spot fleet service permission to terminate instances on your
     * behalf when you cancel a Spot fleet request using <a>CancelSpotFleetRequests</a>
     * or when the Spot fleet request expires, if you set
     * <code>terminateInstancesWithExpiration</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithIamFleetRole(const Aws::String& value) { SetIamFleetRole(value); return *this;}

    /**
     * <p>Grants the Spot fleet service permission to terminate instances on your
     * behalf when you cancel a Spot fleet request using <a>CancelSpotFleetRequests</a>
     * or when the Spot fleet request expires, if you set
     * <code>terminateInstancesWithExpiration</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithIamFleetRole(Aws::String&& value) { SetIamFleetRole(value); return *this;}

    /**
     * <p>Grants the Spot fleet service permission to terminate instances on your
     * behalf when you cancel a Spot fleet request using <a>CancelSpotFleetRequests</a>
     * or when the Spot fleet request expires, if you set
     * <code>terminateInstancesWithExpiration</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithIamFleetRole(const char* value) { SetIamFleetRole(value); return *this;}

    /**
     * <p>Information about the launch specifications for the instances.</p>
     */
    inline const Aws::Vector<SpotFleetLaunchSpecification>& GetLaunchSpecifications() const{ return m_launchSpecifications; }

    /**
     * <p>Information about the launch specifications for the instances.</p>
     */
    inline void SetLaunchSpecifications(const Aws::Vector<SpotFleetLaunchSpecification>& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = value; }

    /**
     * <p>Information about the launch specifications for the instances.</p>
     */
    inline void SetLaunchSpecifications(Aws::Vector<SpotFleetLaunchSpecification>&& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = value; }

    /**
     * <p>Information about the launch specifications for the instances.</p>
     */
    inline SpotFleetRequestConfigData& WithLaunchSpecifications(const Aws::Vector<SpotFleetLaunchSpecification>& value) { SetLaunchSpecifications(value); return *this;}

    /**
     * <p>Information about the launch specifications for the instances.</p>
     */
    inline SpotFleetRequestConfigData& WithLaunchSpecifications(Aws::Vector<SpotFleetLaunchSpecification>&& value) { SetLaunchSpecifications(value); return *this;}

    /**
     * <p>Information about the launch specifications for the instances.</p>
     */
    inline SpotFleetRequestConfigData& AddLaunchSpecifications(const SpotFleetLaunchSpecification& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications.push_back(value); return *this; }

    /**
     * <p>Information about the launch specifications for the instances.</p>
     */
    inline SpotFleetRequestConfigData& AddLaunchSpecifications(SpotFleetLaunchSpecification&& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications.push_back(value); return *this; }

  private:
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet;
    long m_targetCapacity;
    bool m_targetCapacityHasBeenSet;
    double m_validFrom;
    bool m_validFromHasBeenSet;
    double m_validUntil;
    bool m_validUntilHasBeenSet;
    bool m_terminateInstancesWithExpiration;
    bool m_terminateInstancesWithExpirationHasBeenSet;
    Aws::String m_iamFleetRole;
    bool m_iamFleetRoleHasBeenSet;
    Aws::Vector<SpotFleetLaunchSpecification> m_launchSpecifications;
    bool m_launchSpecificationsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
