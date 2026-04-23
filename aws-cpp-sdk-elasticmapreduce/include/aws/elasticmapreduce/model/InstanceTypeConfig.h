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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/EbsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/Configuration.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>An instance type configuration for each instance type in an instance fleet,
   * which determines the EC2 instances Amazon EMR attempts to provision to fulfill
   * On-Demand and Spot target capacities. There can be a maximum of 5 instance type
   * configurations in a fleet.</p> <note> <p>The instance fleet configuration is
   * available only in Amazon EMR versions 4.8.0 and later, excluding 5.0.x
   * versions.</p> </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceTypeConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceTypeConfig
  {
  public:
    InstanceTypeConfig();
    InstanceTypeConfig(Aws::Utils::Json::JsonView jsonValue);
    InstanceTypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An EC2 instance type, such as <code>m3.xlarge</code>. </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>An EC2 instance type, such as <code>m3.xlarge</code>. </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>An EC2 instance type, such as <code>m3.xlarge</code>. </p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>An EC2 instance type, such as <code>m3.xlarge</code>. </p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>An EC2 instance type, such as <code>m3.xlarge</code>. </p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>An EC2 instance type, such as <code>m3.xlarge</code>. </p>
     */
    inline InstanceTypeConfig& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>An EC2 instance type, such as <code>m3.xlarge</code>. </p>
     */
    inline InstanceTypeConfig& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>An EC2 instance type, such as <code>m3.xlarge</code>. </p>
     */
    inline InstanceTypeConfig& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The number of units that a provisioned instance of this type provides toward
     * fulfilling the target capacities defined in <a>InstanceFleetConfig</a>. This
     * value is 1 for a master instance fleet, and must be 1 or greater for core and
     * task instance fleets. Defaults to 1 if not specified. </p>
     */
    inline int GetWeightedCapacity() const{ return m_weightedCapacity; }

    /**
     * <p>The number of units that a provisioned instance of this type provides toward
     * fulfilling the target capacities defined in <a>InstanceFleetConfig</a>. This
     * value is 1 for a master instance fleet, and must be 1 or greater for core and
     * task instance fleets. Defaults to 1 if not specified. </p>
     */
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }

    /**
     * <p>The number of units that a provisioned instance of this type provides toward
     * fulfilling the target capacities defined in <a>InstanceFleetConfig</a>. This
     * value is 1 for a master instance fleet, and must be 1 or greater for core and
     * task instance fleets. Defaults to 1 if not specified. </p>
     */
    inline void SetWeightedCapacity(int value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }

    /**
     * <p>The number of units that a provisioned instance of this type provides toward
     * fulfilling the target capacities defined in <a>InstanceFleetConfig</a>. This
     * value is 1 for a master instance fleet, and must be 1 or greater for core and
     * task instance fleets. Defaults to 1 if not specified. </p>
     */
    inline InstanceTypeConfig& WithWeightedCapacity(int value) { SetWeightedCapacity(value); return *this;}


    /**
     * <p>The bid price for each EC2 Spot instance type as defined by
     * <code>InstanceType</code>. Expressed in USD. If neither <code>BidPrice</code>
     * nor <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%. </p>
     */
    inline const Aws::String& GetBidPrice() const{ return m_bidPrice; }

    /**
     * <p>The bid price for each EC2 Spot instance type as defined by
     * <code>InstanceType</code>. Expressed in USD. If neither <code>BidPrice</code>
     * nor <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%. </p>
     */
    inline bool BidPriceHasBeenSet() const { return m_bidPriceHasBeenSet; }

    /**
     * <p>The bid price for each EC2 Spot instance type as defined by
     * <code>InstanceType</code>. Expressed in USD. If neither <code>BidPrice</code>
     * nor <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%. </p>
     */
    inline void SetBidPrice(const Aws::String& value) { m_bidPriceHasBeenSet = true; m_bidPrice = value; }

    /**
     * <p>The bid price for each EC2 Spot instance type as defined by
     * <code>InstanceType</code>. Expressed in USD. If neither <code>BidPrice</code>
     * nor <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%. </p>
     */
    inline void SetBidPrice(Aws::String&& value) { m_bidPriceHasBeenSet = true; m_bidPrice = std::move(value); }

    /**
     * <p>The bid price for each EC2 Spot instance type as defined by
     * <code>InstanceType</code>. Expressed in USD. If neither <code>BidPrice</code>
     * nor <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%. </p>
     */
    inline void SetBidPrice(const char* value) { m_bidPriceHasBeenSet = true; m_bidPrice.assign(value); }

    /**
     * <p>The bid price for each EC2 Spot instance type as defined by
     * <code>InstanceType</code>. Expressed in USD. If neither <code>BidPrice</code>
     * nor <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%. </p>
     */
    inline InstanceTypeConfig& WithBidPrice(const Aws::String& value) { SetBidPrice(value); return *this;}

    /**
     * <p>The bid price for each EC2 Spot instance type as defined by
     * <code>InstanceType</code>. Expressed in USD. If neither <code>BidPrice</code>
     * nor <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%. </p>
     */
    inline InstanceTypeConfig& WithBidPrice(Aws::String&& value) { SetBidPrice(std::move(value)); return *this;}

    /**
     * <p>The bid price for each EC2 Spot instance type as defined by
     * <code>InstanceType</code>. Expressed in USD. If neither <code>BidPrice</code>
     * nor <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%. </p>
     */
    inline InstanceTypeConfig& WithBidPrice(const char* value) { SetBidPrice(value); return *this;}


    /**
     * <p>The bid price, as a percentage of On-Demand price, for each EC2 Spot instance
     * as defined by <code>InstanceType</code>. Expressed as a number (for example, 20
     * specifies 20%). If neither <code>BidPrice</code> nor
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%.</p>
     */
    inline double GetBidPriceAsPercentageOfOnDemandPrice() const{ return m_bidPriceAsPercentageOfOnDemandPrice; }

    /**
     * <p>The bid price, as a percentage of On-Demand price, for each EC2 Spot instance
     * as defined by <code>InstanceType</code>. Expressed as a number (for example, 20
     * specifies 20%). If neither <code>BidPrice</code> nor
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%.</p>
     */
    inline bool BidPriceAsPercentageOfOnDemandPriceHasBeenSet() const { return m_bidPriceAsPercentageOfOnDemandPriceHasBeenSet; }

    /**
     * <p>The bid price, as a percentage of On-Demand price, for each EC2 Spot instance
     * as defined by <code>InstanceType</code>. Expressed as a number (for example, 20
     * specifies 20%). If neither <code>BidPrice</code> nor
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%.</p>
     */
    inline void SetBidPriceAsPercentageOfOnDemandPrice(double value) { m_bidPriceAsPercentageOfOnDemandPriceHasBeenSet = true; m_bidPriceAsPercentageOfOnDemandPrice = value; }

    /**
     * <p>The bid price, as a percentage of On-Demand price, for each EC2 Spot instance
     * as defined by <code>InstanceType</code>. Expressed as a number (for example, 20
     * specifies 20%). If neither <code>BidPrice</code> nor
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%.</p>
     */
    inline InstanceTypeConfig& WithBidPriceAsPercentageOfOnDemandPrice(double value) { SetBidPriceAsPercentageOfOnDemandPrice(value); return *this;}


    /**
     * <p>The configuration of Amazon Elastic Block Storage (EBS) attached to each
     * instance as defined by <code>InstanceType</code>. </p>
     */
    inline const EbsConfiguration& GetEbsConfiguration() const{ return m_ebsConfiguration; }

    /**
     * <p>The configuration of Amazon Elastic Block Storage (EBS) attached to each
     * instance as defined by <code>InstanceType</code>. </p>
     */
    inline bool EbsConfigurationHasBeenSet() const { return m_ebsConfigurationHasBeenSet; }

    /**
     * <p>The configuration of Amazon Elastic Block Storage (EBS) attached to each
     * instance as defined by <code>InstanceType</code>. </p>
     */
    inline void SetEbsConfiguration(const EbsConfiguration& value) { m_ebsConfigurationHasBeenSet = true; m_ebsConfiguration = value; }

    /**
     * <p>The configuration of Amazon Elastic Block Storage (EBS) attached to each
     * instance as defined by <code>InstanceType</code>. </p>
     */
    inline void SetEbsConfiguration(EbsConfiguration&& value) { m_ebsConfigurationHasBeenSet = true; m_ebsConfiguration = std::move(value); }

    /**
     * <p>The configuration of Amazon Elastic Block Storage (EBS) attached to each
     * instance as defined by <code>InstanceType</code>. </p>
     */
    inline InstanceTypeConfig& WithEbsConfiguration(const EbsConfiguration& value) { SetEbsConfiguration(value); return *this;}

    /**
     * <p>The configuration of Amazon Elastic Block Storage (EBS) attached to each
     * instance as defined by <code>InstanceType</code>. </p>
     */
    inline InstanceTypeConfig& WithEbsConfiguration(EbsConfiguration&& value) { SetEbsConfiguration(std::move(value)); return *this;}


    /**
     * <p>A configuration classification that applies when provisioning cluster
     * instances, which can include configurations for applications and software that
     * run on the cluster.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>A configuration classification that applies when provisioning cluster
     * instances, which can include configurations for applications and software that
     * run on the cluster.</p>
     */
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

    /**
     * <p>A configuration classification that applies when provisioning cluster
     * instances, which can include configurations for applications and software that
     * run on the cluster.</p>
     */
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>A configuration classification that applies when provisioning cluster
     * instances, which can include configurations for applications and software that
     * run on the cluster.</p>
     */
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

    /**
     * <p>A configuration classification that applies when provisioning cluster
     * instances, which can include configurations for applications and software that
     * run on the cluster.</p>
     */
    inline InstanceTypeConfig& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>A configuration classification that applies when provisioning cluster
     * instances, which can include configurations for applications and software that
     * run on the cluster.</p>
     */
    inline InstanceTypeConfig& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>A configuration classification that applies when provisioning cluster
     * instances, which can include configurations for applications and software that
     * run on the cluster.</p>
     */
    inline InstanceTypeConfig& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>A configuration classification that applies when provisioning cluster
     * instances, which can include configurations for applications and software that
     * run on the cluster.</p>
     */
    inline InstanceTypeConfig& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet;

    Aws::String m_bidPrice;
    bool m_bidPriceHasBeenSet;

    double m_bidPriceAsPercentageOfOnDemandPrice;
    bool m_bidPriceAsPercentageOfOnDemandPriceHasBeenSet;

    EbsConfiguration m_ebsConfiguration;
    bool m_ebsConfigurationHasBeenSet;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
