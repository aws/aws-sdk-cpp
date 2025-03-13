/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ListingStatus.h>
#include <aws/ec2/model/InstanceCount.h>
#include <aws/ec2/model/PriceSchedule.h>
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
   * <p>Describes a Reserved Instance listing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedInstancesListing">AWS
   * API Reference</a></p>
   */
  class ReservedInstancesListing
  {
  public:
    AWS_EC2_API ReservedInstancesListing() = default;
    AWS_EC2_API ReservedInstancesListing(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReservedInstancesListing& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ReservedInstancesListing& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the listing was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    ReservedInstancesListing& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in this state.</p>
     */
    inline const Aws::Vector<InstanceCount>& GetInstanceCounts() const { return m_instanceCounts; }
    inline bool InstanceCountsHasBeenSet() const { return m_instanceCountsHasBeenSet; }
    template<typename InstanceCountsT = Aws::Vector<InstanceCount>>
    void SetInstanceCounts(InstanceCountsT&& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts = std::forward<InstanceCountsT>(value); }
    template<typename InstanceCountsT = Aws::Vector<InstanceCount>>
    ReservedInstancesListing& WithInstanceCounts(InstanceCountsT&& value) { SetInstanceCounts(std::forward<InstanceCountsT>(value)); return *this;}
    template<typename InstanceCountsT = InstanceCount>
    ReservedInstancesListing& AddInstanceCounts(InstanceCountsT&& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts.emplace_back(std::forward<InstanceCountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The price of the Reserved Instance listing.</p>
     */
    inline const Aws::Vector<PriceSchedule>& GetPriceSchedules() const { return m_priceSchedules; }
    inline bool PriceSchedulesHasBeenSet() const { return m_priceSchedulesHasBeenSet; }
    template<typename PriceSchedulesT = Aws::Vector<PriceSchedule>>
    void SetPriceSchedules(PriceSchedulesT&& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules = std::forward<PriceSchedulesT>(value); }
    template<typename PriceSchedulesT = Aws::Vector<PriceSchedule>>
    ReservedInstancesListing& WithPriceSchedules(PriceSchedulesT&& value) { SetPriceSchedules(std::forward<PriceSchedulesT>(value)); return *this;}
    template<typename PriceSchedulesT = PriceSchedule>
    ReservedInstancesListing& AddPriceSchedules(PriceSchedulesT&& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules.emplace_back(std::forward<PriceSchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const { return m_reservedInstancesId; }
    inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }
    template<typename ReservedInstancesIdT = Aws::String>
    void SetReservedInstancesId(ReservedInstancesIdT&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::forward<ReservedInstancesIdT>(value); }
    template<typename ReservedInstancesIdT = Aws::String>
    ReservedInstancesListing& WithReservedInstancesId(ReservedInstancesIdT&& value) { SetReservedInstancesId(std::forward<ReservedInstancesIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline const Aws::String& GetReservedInstancesListingId() const { return m_reservedInstancesListingId; }
    inline bool ReservedInstancesListingIdHasBeenSet() const { return m_reservedInstancesListingIdHasBeenSet; }
    template<typename ReservedInstancesListingIdT = Aws::String>
    void SetReservedInstancesListingId(ReservedInstancesListingIdT&& value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId = std::forward<ReservedInstancesListingIdT>(value); }
    template<typename ReservedInstancesListingIdT = Aws::String>
    ReservedInstancesListing& WithReservedInstancesListingId(ReservedInstancesListingIdT&& value) { SetReservedInstancesListingId(std::forward<ReservedInstancesListingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Reserved Instance listing.</p>
     */
    inline ListingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ListingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReservedInstancesListing& WithStatus(ListingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status of the Reserved Instance listing. The
     * response can be blank.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ReservedInstancesListing& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ReservedInstancesListing& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ReservedInstancesListing& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last modified timestamp of the listing.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const { return m_updateDate; }
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    void SetUpdateDate(UpdateDateT&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::forward<UpdateDateT>(value); }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    ReservedInstancesListing& WithUpdateDate(UpdateDateT&& value) { SetUpdateDate(std::forward<UpdateDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Vector<InstanceCount> m_instanceCounts;
    bool m_instanceCountsHasBeenSet = false;

    Aws::Vector<PriceSchedule> m_priceSchedules;
    bool m_priceSchedulesHasBeenSet = false;

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet = false;

    Aws::String m_reservedInstancesListingId;
    bool m_reservedInstancesListingIdHasBeenSet = false;

    ListingStatus m_status{ListingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_updateDate{};
    bool m_updateDateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
