/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/CapacityBlockResourceState.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Reserve powerful GPU instances on a future date to support your short
   * duration machine learning (ML) workloads. Instances that run inside a Capacity
   * Block are automatically placed close together inside <a
   * href="http://aws.amazon.com/ec2/ultraclusters/">Amazon EC2 UltraClusters</a>,
   * for low-latency, petabit-scale, non-blocking networking.</p> <p>You can also
   * reserve Amazon EC2 UltraServers. UltraServers connect multiple EC2 instances
   * using a low-latency, high-bandwidth accelerator interconnect (NeuronLink). They
   * are built to tackle very large-scale AI/ML workloads that require significant
   * processing power. For more information, see Amazon EC2
   * UltraServers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityBlock">AWS
   * API Reference</a></p>
   */
  class CapacityBlock
  {
  public:
    AWS_EC2_API CapacityBlock() = default;
    AWS_EC2_API CapacityBlock(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityBlock& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Block.</p>
     */
    inline const Aws::String& GetCapacityBlockId() const { return m_capacityBlockId; }
    inline bool CapacityBlockIdHasBeenSet() const { return m_capacityBlockIdHasBeenSet; }
    template<typename CapacityBlockIdT = Aws::String>
    void SetCapacityBlockId(CapacityBlockIdT&& value) { m_capacityBlockIdHasBeenSet = true; m_capacityBlockId = std::forward<CapacityBlockIdT>(value); }
    template<typename CapacityBlockIdT = Aws::String>
    CapacityBlock& WithCapacityBlockId(CapacityBlockIdT&& value) { SetCapacityBlockId(std::forward<CapacityBlockIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 UltraServer type of the Capacity Block.</p>
     */
    inline const Aws::String& GetUltraserverType() const { return m_ultraserverType; }
    inline bool UltraserverTypeHasBeenSet() const { return m_ultraserverTypeHasBeenSet; }
    template<typename UltraserverTypeT = Aws::String>
    void SetUltraserverType(UltraserverTypeT&& value) { m_ultraserverTypeHasBeenSet = true; m_ultraserverType = std::forward<UltraserverTypeT>(value); }
    template<typename UltraserverTypeT = Aws::String>
    CapacityBlock& WithUltraserverType(UltraserverTypeT&& value) { SetUltraserverType(std::forward<UltraserverTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the Capacity Block.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CapacityBlock& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone ID of the Capacity Block.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CapacityBlock& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityReservationIds() const { return m_capacityReservationIds; }
    inline bool CapacityReservationIdsHasBeenSet() const { return m_capacityReservationIdsHasBeenSet; }
    template<typename CapacityReservationIdsT = Aws::Vector<Aws::String>>
    void SetCapacityReservationIds(CapacityReservationIdsT&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds = std::forward<CapacityReservationIdsT>(value); }
    template<typename CapacityReservationIdsT = Aws::Vector<Aws::String>>
    CapacityBlock& WithCapacityReservationIds(CapacityReservationIdsT&& value) { SetCapacityReservationIds(std::forward<CapacityReservationIdsT>(value)); return *this;}
    template<typename CapacityReservationIdsT = Aws::String>
    CapacityBlock& AddCapacityReservationIds(CapacityReservationIdsT&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.emplace_back(std::forward<CapacityReservationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Block was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    CapacityBlock& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Block expires. When a Capacity Block
     * expires, all instances in the Capacity Block are terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    CapacityBlock& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Block was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    CapacityBlock& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Capacity Block.</p>
     */
    inline CapacityBlockResourceState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CapacityBlockResourceState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CapacityBlock& WithState(CapacityBlockResourceState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the Capacity Block.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CapacityBlock& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CapacityBlock& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_capacityBlockId;
    bool m_capacityBlockIdHasBeenSet = false;

    Aws::String m_ultraserverType;
    bool m_ultraserverTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_capacityReservationIds;
    bool m_capacityReservationIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    CapacityBlockResourceState m_state{CapacityBlockResourceState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
