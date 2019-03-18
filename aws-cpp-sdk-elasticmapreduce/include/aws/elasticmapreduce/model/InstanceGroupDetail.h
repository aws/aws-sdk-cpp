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
#include <aws/elasticmapreduce/model/MarketType.h>
#include <aws/elasticmapreduce/model/InstanceRoleType.h>
#include <aws/elasticmapreduce/model/InstanceGroupState.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Detailed information about an instance group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceGroupDetail">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceGroupDetail
  {
  public:
    InstanceGroupDetail();
    InstanceGroupDetail(Aws::Utils::Json::JsonView jsonValue);
    InstanceGroupDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for the instance group.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const{ return m_instanceGroupId; }

    /**
     * <p>Unique identifier for the instance group.</p>
     */
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }

    /**
     * <p>Unique identifier for the instance group.</p>
     */
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }

    /**
     * <p>Unique identifier for the instance group.</p>
     */
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::move(value); }

    /**
     * <p>Unique identifier for the instance group.</p>
     */
    inline void SetInstanceGroupId(const char* value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId.assign(value); }

    /**
     * <p>Unique identifier for the instance group.</p>
     */
    inline InstanceGroupDetail& WithInstanceGroupId(const Aws::String& value) { SetInstanceGroupId(value); return *this;}

    /**
     * <p>Unique identifier for the instance group.</p>
     */
    inline InstanceGroupDetail& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the instance group.</p>
     */
    inline InstanceGroupDetail& WithInstanceGroupId(const char* value) { SetInstanceGroupId(value); return *this;}


    /**
     * <p>Friendly name for the instance group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Friendly name for the instance group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Friendly name for the instance group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Friendly name for the instance group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Friendly name for the instance group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Friendly name for the instance group.</p>
     */
    inline InstanceGroupDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Friendly name for the instance group.</p>
     */
    inline InstanceGroupDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Friendly name for the instance group.</p>
     */
    inline InstanceGroupDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline const MarketType& GetMarket() const{ return m_market; }

    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }

    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline void SetMarket(const MarketType& value) { m_marketHasBeenSet = true; m_market = value; }

    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline void SetMarket(MarketType&& value) { m_marketHasBeenSet = true; m_market = std::move(value); }

    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline InstanceGroupDetail& WithMarket(const MarketType& value) { SetMarket(value); return *this;}

    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline InstanceGroupDetail& WithMarket(MarketType&& value) { SetMarket(std::move(value)); return *this;}


    /**
     * <p>Instance group role in the cluster</p>
     */
    inline const InstanceRoleType& GetInstanceRole() const{ return m_instanceRole; }

    /**
     * <p>Instance group role in the cluster</p>
     */
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }

    /**
     * <p>Instance group role in the cluster</p>
     */
    inline void SetInstanceRole(const InstanceRoleType& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }

    /**
     * <p>Instance group role in the cluster</p>
     */
    inline void SetInstanceRole(InstanceRoleType&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = std::move(value); }

    /**
     * <p>Instance group role in the cluster</p>
     */
    inline InstanceGroupDetail& WithInstanceRole(const InstanceRoleType& value) { SetInstanceRole(value); return *this;}

    /**
     * <p>Instance group role in the cluster</p>
     */
    inline InstanceGroupDetail& WithInstanceRole(InstanceRoleType&& value) { SetInstanceRole(std::move(value)); return *this;}


    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specified in USD. If the value
     * is NULL and <code>SPOT</code> is specified, the maximum Spot price is set equal
     * to the On-Demand price.</p>
     */
    inline const Aws::String& GetBidPrice() const{ return m_bidPrice; }

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specified in USD. If the value
     * is NULL and <code>SPOT</code> is specified, the maximum Spot price is set equal
     * to the On-Demand price.</p>
     */
    inline bool BidPriceHasBeenSet() const { return m_bidPriceHasBeenSet; }

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specified in USD. If the value
     * is NULL and <code>SPOT</code> is specified, the maximum Spot price is set equal
     * to the On-Demand price.</p>
     */
    inline void SetBidPrice(const Aws::String& value) { m_bidPriceHasBeenSet = true; m_bidPrice = value; }

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specified in USD. If the value
     * is NULL and <code>SPOT</code> is specified, the maximum Spot price is set equal
     * to the On-Demand price.</p>
     */
    inline void SetBidPrice(Aws::String&& value) { m_bidPriceHasBeenSet = true; m_bidPrice = std::move(value); }

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specified in USD. If the value
     * is NULL and <code>SPOT</code> is specified, the maximum Spot price is set equal
     * to the On-Demand price.</p>
     */
    inline void SetBidPrice(const char* value) { m_bidPriceHasBeenSet = true; m_bidPrice.assign(value); }

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specified in USD. If the value
     * is NULL and <code>SPOT</code> is specified, the maximum Spot price is set equal
     * to the On-Demand price.</p>
     */
    inline InstanceGroupDetail& WithBidPrice(const Aws::String& value) { SetBidPrice(value); return *this;}

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specified in USD. If the value
     * is NULL and <code>SPOT</code> is specified, the maximum Spot price is set equal
     * to the On-Demand price.</p>
     */
    inline InstanceGroupDetail& WithBidPrice(Aws::String&& value) { SetBidPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specified in USD. If the value
     * is NULL and <code>SPOT</code> is specified, the maximum Spot price is set equal
     * to the On-Demand price.</p>
     */
    inline InstanceGroupDetail& WithBidPrice(const char* value) { SetBidPrice(value); return *this;}


    /**
     * <p>EC2 instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>EC2 instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>EC2 instance type.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>EC2 instance type.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>EC2 instance type.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>EC2 instance type.</p>
     */
    inline InstanceGroupDetail& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>EC2 instance type.</p>
     */
    inline InstanceGroupDetail& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>EC2 instance type.</p>
     */
    inline InstanceGroupDetail& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>Target number of instances to run in the instance group.</p>
     */
    inline int GetInstanceRequestCount() const{ return m_instanceRequestCount; }

    /**
     * <p>Target number of instances to run in the instance group.</p>
     */
    inline bool InstanceRequestCountHasBeenSet() const { return m_instanceRequestCountHasBeenSet; }

    /**
     * <p>Target number of instances to run in the instance group.</p>
     */
    inline void SetInstanceRequestCount(int value) { m_instanceRequestCountHasBeenSet = true; m_instanceRequestCount = value; }

    /**
     * <p>Target number of instances to run in the instance group.</p>
     */
    inline InstanceGroupDetail& WithInstanceRequestCount(int value) { SetInstanceRequestCount(value); return *this;}


    /**
     * <p>Actual count of running instances.</p>
     */
    inline int GetInstanceRunningCount() const{ return m_instanceRunningCount; }

    /**
     * <p>Actual count of running instances.</p>
     */
    inline bool InstanceRunningCountHasBeenSet() const { return m_instanceRunningCountHasBeenSet; }

    /**
     * <p>Actual count of running instances.</p>
     */
    inline void SetInstanceRunningCount(int value) { m_instanceRunningCountHasBeenSet = true; m_instanceRunningCount = value; }

    /**
     * <p>Actual count of running instances.</p>
     */
    inline InstanceGroupDetail& WithInstanceRunningCount(int value) { SetInstanceRunningCount(value); return *this;}


    /**
     * <p>State of instance group. The following values are deprecated: STARTING,
     * TERMINATED, and FAILED.</p>
     */
    inline const InstanceGroupState& GetState() const{ return m_state; }

    /**
     * <p>State of instance group. The following values are deprecated: STARTING,
     * TERMINATED, and FAILED.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>State of instance group. The following values are deprecated: STARTING,
     * TERMINATED, and FAILED.</p>
     */
    inline void SetState(const InstanceGroupState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>State of instance group. The following values are deprecated: STARTING,
     * TERMINATED, and FAILED.</p>
     */
    inline void SetState(InstanceGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>State of instance group. The following values are deprecated: STARTING,
     * TERMINATED, and FAILED.</p>
     */
    inline InstanceGroupDetail& WithState(const InstanceGroupState& value) { SetState(value); return *this;}

    /**
     * <p>State of instance group. The following values are deprecated: STARTING,
     * TERMINATED, and FAILED.</p>
     */
    inline InstanceGroupDetail& WithState(InstanceGroupState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Details regarding the state of the instance group.</p>
     */
    inline const Aws::String& GetLastStateChangeReason() const{ return m_lastStateChangeReason; }

    /**
     * <p>Details regarding the state of the instance group.</p>
     */
    inline bool LastStateChangeReasonHasBeenSet() const { return m_lastStateChangeReasonHasBeenSet; }

    /**
     * <p>Details regarding the state of the instance group.</p>
     */
    inline void SetLastStateChangeReason(const Aws::String& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = value; }

    /**
     * <p>Details regarding the state of the instance group.</p>
     */
    inline void SetLastStateChangeReason(Aws::String&& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = std::move(value); }

    /**
     * <p>Details regarding the state of the instance group.</p>
     */
    inline void SetLastStateChangeReason(const char* value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason.assign(value); }

    /**
     * <p>Details regarding the state of the instance group.</p>
     */
    inline InstanceGroupDetail& WithLastStateChangeReason(const Aws::String& value) { SetLastStateChangeReason(value); return *this;}

    /**
     * <p>Details regarding the state of the instance group.</p>
     */
    inline InstanceGroupDetail& WithLastStateChangeReason(Aws::String&& value) { SetLastStateChangeReason(std::move(value)); return *this;}

    /**
     * <p>Details regarding the state of the instance group.</p>
     */
    inline InstanceGroupDetail& WithLastStateChangeReason(const char* value) { SetLastStateChangeReason(value); return *this;}


    /**
     * <p>The date/time the instance group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date/time the instance group was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date/time the instance group was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date/time the instance group was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date/time the instance group was created.</p>
     */
    inline InstanceGroupDetail& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date/time the instance group was created.</p>
     */
    inline InstanceGroupDetail& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date/time the instance group was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>The date/time the instance group was started.</p>
     */
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }

    /**
     * <p>The date/time the instance group was started.</p>
     */
    inline void SetStartDateTime(const Aws::Utils::DateTime& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The date/time the instance group was started.</p>
     */
    inline void SetStartDateTime(Aws::Utils::DateTime&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }

    /**
     * <p>The date/time the instance group was started.</p>
     */
    inline InstanceGroupDetail& WithStartDateTime(const Aws::Utils::DateTime& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The date/time the instance group was started.</p>
     */
    inline InstanceGroupDetail& WithStartDateTime(Aws::Utils::DateTime&& value) { SetStartDateTime(std::move(value)); return *this;}


    /**
     * <p>The date/time the instance group was available to the cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetReadyDateTime() const{ return m_readyDateTime; }

    /**
     * <p>The date/time the instance group was available to the cluster.</p>
     */
    inline bool ReadyDateTimeHasBeenSet() const { return m_readyDateTimeHasBeenSet; }

    /**
     * <p>The date/time the instance group was available to the cluster.</p>
     */
    inline void SetReadyDateTime(const Aws::Utils::DateTime& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = value; }

    /**
     * <p>The date/time the instance group was available to the cluster.</p>
     */
    inline void SetReadyDateTime(Aws::Utils::DateTime&& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = std::move(value); }

    /**
     * <p>The date/time the instance group was available to the cluster.</p>
     */
    inline InstanceGroupDetail& WithReadyDateTime(const Aws::Utils::DateTime& value) { SetReadyDateTime(value); return *this;}

    /**
     * <p>The date/time the instance group was available to the cluster.</p>
     */
    inline InstanceGroupDetail& WithReadyDateTime(Aws::Utils::DateTime&& value) { SetReadyDateTime(std::move(value)); return *this;}


    /**
     * <p>The date/time the instance group was terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The date/time the instance group was terminated.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The date/time the instance group was terminated.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The date/time the instance group was terminated.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The date/time the instance group was terminated.</p>
     */
    inline InstanceGroupDetail& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The date/time the instance group was terminated.</p>
     */
    inline InstanceGroupDetail& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    MarketType m_market;
    bool m_marketHasBeenSet;

    InstanceRoleType m_instanceRole;
    bool m_instanceRoleHasBeenSet;

    Aws::String m_bidPrice;
    bool m_bidPriceHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_instanceRequestCount;
    bool m_instanceRequestCountHasBeenSet;

    int m_instanceRunningCount;
    bool m_instanceRunningCountHasBeenSet;

    InstanceGroupState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_lastStateChangeReason;
    bool m_lastStateChangeReasonHasBeenSet;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;

    Aws::Utils::DateTime m_startDateTime;
    bool m_startDateTimeHasBeenSet;

    Aws::Utils::DateTime m_readyDateTime;
    bool m_readyDateTimeHasBeenSet;

    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
