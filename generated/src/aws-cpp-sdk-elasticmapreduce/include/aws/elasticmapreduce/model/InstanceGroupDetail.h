/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InstanceGroupDetail
  {
  public:
    AWS_EMR_API InstanceGroupDetail() = default;
    AWS_EMR_API InstanceGroupDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceGroupDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the instance group.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const { return m_instanceGroupId; }
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }
    template<typename InstanceGroupIdT = Aws::String>
    void SetInstanceGroupId(InstanceGroupIdT&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::forward<InstanceGroupIdT>(value); }
    template<typename InstanceGroupIdT = Aws::String>
    InstanceGroupDetail& WithInstanceGroupId(InstanceGroupIdT&& value) { SetInstanceGroupId(std::forward<InstanceGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Friendly name for the instance group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InstanceGroupDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Market type of the Amazon EC2 instances used to create a cluster node.</p>
     */
    inline MarketType GetMarket() const { return m_market; }
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }
    inline void SetMarket(MarketType value) { m_marketHasBeenSet = true; m_market = value; }
    inline InstanceGroupDetail& WithMarket(MarketType value) { SetMarket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instance group role in the cluster</p>
     */
    inline InstanceRoleType GetInstanceRole() const { return m_instanceRole; }
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }
    inline void SetInstanceRole(InstanceRoleType value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }
    inline InstanceGroupDetail& WithInstanceRole(InstanceRoleType value) { SetInstanceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, indicates that the instance group uses Spot Instances. This is
     * the maximum price you are willing to pay for Spot Instances. Specify
     * <code>OnDemandPrice</code> to set the amount equal to the On-Demand price, or
     * specify an amount in USD.</p>
     */
    inline const Aws::String& GetBidPrice() const { return m_bidPrice; }
    inline bool BidPriceHasBeenSet() const { return m_bidPriceHasBeenSet; }
    template<typename BidPriceT = Aws::String>
    void SetBidPrice(BidPriceT&& value) { m_bidPriceHasBeenSet = true; m_bidPrice = std::forward<BidPriceT>(value); }
    template<typename BidPriceT = Aws::String>
    InstanceGroupDetail& WithBidPrice(BidPriceT&& value) { SetBidPrice(std::forward<BidPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon EC2 instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    InstanceGroupDetail& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target number of instances to run in the instance group.</p>
     */
    inline int GetInstanceRequestCount() const { return m_instanceRequestCount; }
    inline bool InstanceRequestCountHasBeenSet() const { return m_instanceRequestCountHasBeenSet; }
    inline void SetInstanceRequestCount(int value) { m_instanceRequestCountHasBeenSet = true; m_instanceRequestCount = value; }
    inline InstanceGroupDetail& WithInstanceRequestCount(int value) { SetInstanceRequestCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Actual count of running instances.</p>
     */
    inline int GetInstanceRunningCount() const { return m_instanceRunningCount; }
    inline bool InstanceRunningCountHasBeenSet() const { return m_instanceRunningCountHasBeenSet; }
    inline void SetInstanceRunningCount(int value) { m_instanceRunningCountHasBeenSet = true; m_instanceRunningCount = value; }
    inline InstanceGroupDetail& WithInstanceRunningCount(int value) { SetInstanceRunningCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of instance group. The following values are no longer supported:
     * STARTING, TERMINATED, and FAILED.</p>
     */
    inline InstanceGroupState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(InstanceGroupState value) { m_stateHasBeenSet = true; m_state = value; }
    inline InstanceGroupDetail& WithState(InstanceGroupState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details regarding the state of the instance group.</p>
     */
    inline const Aws::String& GetLastStateChangeReason() const { return m_lastStateChangeReason; }
    inline bool LastStateChangeReasonHasBeenSet() const { return m_lastStateChangeReasonHasBeenSet; }
    template<typename LastStateChangeReasonT = Aws::String>
    void SetLastStateChangeReason(LastStateChangeReasonT&& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = std::forward<LastStateChangeReasonT>(value); }
    template<typename LastStateChangeReasonT = Aws::String>
    InstanceGroupDetail& WithLastStateChangeReason(LastStateChangeReasonT&& value) { SetLastStateChangeReason(std::forward<LastStateChangeReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date/time the instance group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    InstanceGroupDetail& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date/time the instance group was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const { return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    void SetStartDateTime(StartDateTimeT&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::forward<StartDateTimeT>(value); }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    InstanceGroupDetail& WithStartDateTime(StartDateTimeT&& value) { SetStartDateTime(std::forward<StartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date/time the instance group was available to the cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetReadyDateTime() const { return m_readyDateTime; }
    inline bool ReadyDateTimeHasBeenSet() const { return m_readyDateTimeHasBeenSet; }
    template<typename ReadyDateTimeT = Aws::Utils::DateTime>
    void SetReadyDateTime(ReadyDateTimeT&& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = std::forward<ReadyDateTimeT>(value); }
    template<typename ReadyDateTimeT = Aws::Utils::DateTime>
    InstanceGroupDetail& WithReadyDateTime(ReadyDateTimeT&& value) { SetReadyDateTime(std::forward<ReadyDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date/time the instance group was terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const { return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    InstanceGroupDetail& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom AMI ID to use for the provisioned instance group.</p>
     */
    inline const Aws::String& GetCustomAmiId() const { return m_customAmiId; }
    inline bool CustomAmiIdHasBeenSet() const { return m_customAmiIdHasBeenSet; }
    template<typename CustomAmiIdT = Aws::String>
    void SetCustomAmiId(CustomAmiIdT&& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = std::forward<CustomAmiIdT>(value); }
    template<typename CustomAmiIdT = Aws::String>
    InstanceGroupDetail& WithCustomAmiId(CustomAmiIdT&& value) { SetCustomAmiId(std::forward<CustomAmiIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MarketType m_market{MarketType::NOT_SET};
    bool m_marketHasBeenSet = false;

    InstanceRoleType m_instanceRole{InstanceRoleType::NOT_SET};
    bool m_instanceRoleHasBeenSet = false;

    Aws::String m_bidPrice;
    bool m_bidPriceHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceRequestCount{0};
    bool m_instanceRequestCountHasBeenSet = false;

    int m_instanceRunningCount{0};
    bool m_instanceRunningCountHasBeenSet = false;

    InstanceGroupState m_state{InstanceGroupState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_lastStateChangeReason;
    bool m_lastStateChangeReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startDateTime{};
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_readyDateTime{};
    bool m_readyDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime{};
    bool m_endDateTimeHasBeenSet = false;

    Aws::String m_customAmiId;
    bool m_customAmiIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
