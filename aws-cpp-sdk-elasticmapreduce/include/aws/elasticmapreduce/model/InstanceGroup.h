/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/MarketType.h>
#include <aws/elasticmapreduce/model/InstanceGroupType.h>
#include <aws/elasticmapreduce/model/InstanceGroupStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/Configuration.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{
  /*
    <p>This entity represents an instance group, which is a group of instances that have common purpose. For example, CORE instance group is used for HDFS.</p>
  */
  class AWS_EMR_API InstanceGroup
  {
  public:
    InstanceGroup();
    InstanceGroup(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceGroup& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The identifier of the instance group.</p>
    */
    inline const Aws::String& GetId() const{ return m_id; }
    /*
     <p>The identifier of the instance group.</p>
    */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /*
     <p>The identifier of the instance group.</p>
    */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /*
     <p>The identifier of the instance group.</p>
    */
    inline InstanceGroup&  WithId(const Aws::String& value) { SetId(value); return *this;}

    /*
     <p>The identifier of the instance group.</p>
    */
    inline InstanceGroup& WithId(const char* value) { SetId(value); return *this;}

    /*
     <p>The name of the instance group.</p>
    */
    inline const Aws::String& GetName() const{ return m_name; }
    /*
     <p>The name of the instance group.</p>
    */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /*
     <p>The name of the instance group.</p>
    */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /*
     <p>The name of the instance group.</p>
    */
    inline InstanceGroup&  WithName(const Aws::String& value) { SetName(value); return *this;}

    /*
     <p>The name of the instance group.</p>
    */
    inline InstanceGroup& WithName(const char* value) { SetName(value); return *this;}

    /*
     <p>The marketplace to provision instances for this group. Valid values are ON_DEMAND or SPOT.</p>
    */
    inline const MarketType& GetMarket() const{ return m_market; }
    /*
     <p>The marketplace to provision instances for this group. Valid values are ON_DEMAND or SPOT.</p>
    */
    inline void SetMarket(const MarketType& value) { m_marketHasBeenSet = true; m_market = value; }

    /*
     <p>The marketplace to provision instances for this group. Valid values are ON_DEMAND or SPOT.</p>
    */
    inline InstanceGroup&  WithMarket(const MarketType& value) { SetMarket(value); return *this;}

    /*
     <p>The type of the instance group. Valid values are MASTER, CORE or TASK.</p>
    */
    inline const InstanceGroupType& GetInstanceGroupType() const{ return m_instanceGroupType; }
    /*
     <p>The type of the instance group. Valid values are MASTER, CORE or TASK.</p>
    */
    inline void SetInstanceGroupType(const InstanceGroupType& value) { m_instanceGroupTypeHasBeenSet = true; m_instanceGroupType = value; }

    /*
     <p>The type of the instance group. Valid values are MASTER, CORE or TASK.</p>
    */
    inline InstanceGroup&  WithInstanceGroupType(const InstanceGroupType& value) { SetInstanceGroupType(value); return *this;}

    /*
     <p>The bid price for each EC2 instance in the instance group when launching nodes as Spot Instances, expressed in USD.</p>
    */
    inline const Aws::String& GetBidPrice() const{ return m_bidPrice; }
    /*
     <p>The bid price for each EC2 instance in the instance group when launching nodes as Spot Instances, expressed in USD.</p>
    */
    inline void SetBidPrice(const Aws::String& value) { m_bidPriceHasBeenSet = true; m_bidPrice = value; }

    /*
     <p>The bid price for each EC2 instance in the instance group when launching nodes as Spot Instances, expressed in USD.</p>
    */
    inline void SetBidPrice(const char* value) { m_bidPriceHasBeenSet = true; m_bidPrice.assign(value); }

    /*
     <p>The bid price for each EC2 instance in the instance group when launching nodes as Spot Instances, expressed in USD.</p>
    */
    inline InstanceGroup&  WithBidPrice(const Aws::String& value) { SetBidPrice(value); return *this;}

    /*
     <p>The bid price for each EC2 instance in the instance group when launching nodes as Spot Instances, expressed in USD.</p>
    */
    inline InstanceGroup& WithBidPrice(const char* value) { SetBidPrice(value); return *this;}

    /*
     <p>The EC2 instance type for all instances in the instance group. </p>
    */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    /*
     <p>The EC2 instance type for all instances in the instance group. </p>
    */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /*
     <p>The EC2 instance type for all instances in the instance group. </p>
    */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /*
     <p>The EC2 instance type for all instances in the instance group. </p>
    */
    inline InstanceGroup&  WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /*
     <p>The EC2 instance type for all instances in the instance group. </p>
    */
    inline InstanceGroup& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

    /*
     <p>The target number of instances for the instance group. </p>
    */
    inline long GetRequestedInstanceCount() const{ return m_requestedInstanceCount; }
    /*
     <p>The target number of instances for the instance group. </p>
    */
    inline void SetRequestedInstanceCount(long value) { m_requestedInstanceCountHasBeenSet = true; m_requestedInstanceCount = value; }

    /*
     <p>The target number of instances for the instance group. </p>
    */
    inline InstanceGroup&  WithRequestedInstanceCount(long value) { SetRequestedInstanceCount(value); return *this;}

    /*
     <p>The number of instances currently running in this instance group.</p>
    */
    inline long GetRunningInstanceCount() const{ return m_runningInstanceCount; }
    /*
     <p>The number of instances currently running in this instance group.</p>
    */
    inline void SetRunningInstanceCount(long value) { m_runningInstanceCountHasBeenSet = true; m_runningInstanceCount = value; }

    /*
     <p>The number of instances currently running in this instance group.</p>
    */
    inline InstanceGroup&  WithRunningInstanceCount(long value) { SetRunningInstanceCount(value); return *this;}

    /*
     <p>The current status of the instance group.</p>
    */
    inline const InstanceGroupStatus& GetStatus() const{ return m_status; }
    /*
     <p>The current status of the instance group.</p>
    */
    inline void SetStatus(const InstanceGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /*
     <p>The current status of the instance group.</p>
    */
    inline InstanceGroup&  WithStatus(const InstanceGroupStatus& value) { SetStatus(value); return *this;}

    /*
     <note><p>Amazon EMR releases 4.x or later.</p></note> <p>The list of configurations supplied for an EMR cluster instance group. You can specify a separate configuration for each instance group (master, core, and task).</p>
    */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }
    /*
     <note><p>Amazon EMR releases 4.x or later.</p></note> <p>The list of configurations supplied for an EMR cluster instance group. You can specify a separate configuration for each instance group (master, core, and task).</p>
    */
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /*
     <note><p>Amazon EMR releases 4.x or later.</p></note> <p>The list of configurations supplied for an EMR cluster instance group. You can specify a separate configuration for each instance group (master, core, and task).</p>
    */
    inline InstanceGroup&  WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /*
     <note><p>Amazon EMR releases 4.x or later.</p></note> <p>The list of configurations supplied for an EMR cluster instance group. You can specify a separate configuration for each instance group (master, core, and task).</p>
    */
    inline InstanceGroup& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    MarketType m_market;
    bool m_marketHasBeenSet;
    InstanceGroupType m_instanceGroupType;
    bool m_instanceGroupTypeHasBeenSet;
    Aws::String m_bidPrice;
    bool m_bidPriceHasBeenSet;
    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;
    long m_requestedInstanceCount;
    bool m_requestedInstanceCountHasBeenSet;
    long m_runningInstanceCount;
    bool m_runningInstanceCountHasBeenSet;
    InstanceGroupStatus m_status;
    bool m_statusHasBeenSet;
    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
