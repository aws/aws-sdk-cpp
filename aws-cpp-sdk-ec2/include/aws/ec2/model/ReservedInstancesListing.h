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
  class AWS_EC2_API ReservedInstancesListing
  {
  public:
    ReservedInstancesListing();
    ReservedInstancesListing(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReservedInstancesListing& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ReservedInstancesListing& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ReservedInstancesListing& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive key supplied by the client to ensure that the
     * request is idempotent. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ReservedInstancesListing& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The time the listing was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The time the listing was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The time the listing was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The time the listing was created.</p>
     */
    inline ReservedInstancesListing& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The time the listing was created.</p>
     */
    inline ReservedInstancesListing& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The number of instances in this state.</p>
     */
    inline const Aws::Vector<InstanceCount>& GetInstanceCounts() const{ return m_instanceCounts; }

    /**
     * <p>The number of instances in this state.</p>
     */
    inline void SetInstanceCounts(const Aws::Vector<InstanceCount>& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts = value; }

    /**
     * <p>The number of instances in this state.</p>
     */
    inline void SetInstanceCounts(Aws::Vector<InstanceCount>&& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts = std::move(value); }

    /**
     * <p>The number of instances in this state.</p>
     */
    inline ReservedInstancesListing& WithInstanceCounts(const Aws::Vector<InstanceCount>& value) { SetInstanceCounts(value); return *this;}

    /**
     * <p>The number of instances in this state.</p>
     */
    inline ReservedInstancesListing& WithInstanceCounts(Aws::Vector<InstanceCount>&& value) { SetInstanceCounts(std::move(value)); return *this;}

    /**
     * <p>The number of instances in this state.</p>
     */
    inline ReservedInstancesListing& AddInstanceCounts(const InstanceCount& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts.push_back(value); return *this; }

    /**
     * <p>The number of instances in this state.</p>
     */
    inline ReservedInstancesListing& AddInstanceCounts(InstanceCount&& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts.push_back(std::move(value)); return *this; }


    /**
     * <p>The price of the Reserved Instance listing.</p>
     */
    inline const Aws::Vector<PriceSchedule>& GetPriceSchedules() const{ return m_priceSchedules; }

    /**
     * <p>The price of the Reserved Instance listing.</p>
     */
    inline void SetPriceSchedules(const Aws::Vector<PriceSchedule>& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules = value; }

    /**
     * <p>The price of the Reserved Instance listing.</p>
     */
    inline void SetPriceSchedules(Aws::Vector<PriceSchedule>&& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules = std::move(value); }

    /**
     * <p>The price of the Reserved Instance listing.</p>
     */
    inline ReservedInstancesListing& WithPriceSchedules(const Aws::Vector<PriceSchedule>& value) { SetPriceSchedules(value); return *this;}

    /**
     * <p>The price of the Reserved Instance listing.</p>
     */
    inline ReservedInstancesListing& WithPriceSchedules(Aws::Vector<PriceSchedule>&& value) { SetPriceSchedules(std::move(value)); return *this;}

    /**
     * <p>The price of the Reserved Instance listing.</p>
     */
    inline ReservedInstancesListing& AddPriceSchedules(const PriceSchedule& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules.push_back(value); return *this; }

    /**
     * <p>The price of the Reserved Instance listing.</p>
     */
    inline ReservedInstancesListing& AddPriceSchedules(PriceSchedule&& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const{ return m_reservedInstancesId; }

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline void SetReservedInstancesId(const Aws::String& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = value; }

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline void SetReservedInstancesId(Aws::String&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::move(value); }

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline void SetReservedInstancesId(const char* value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId.assign(value); }

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline ReservedInstancesListing& WithReservedInstancesId(const Aws::String& value) { SetReservedInstancesId(value); return *this;}

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline ReservedInstancesListing& WithReservedInstancesId(Aws::String&& value) { SetReservedInstancesId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline ReservedInstancesListing& WithReservedInstancesId(const char* value) { SetReservedInstancesId(value); return *this;}


    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline const Aws::String& GetReservedInstancesListingId() const{ return m_reservedInstancesListingId; }

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline void SetReservedInstancesListingId(const Aws::String& value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId = value; }

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline void SetReservedInstancesListingId(Aws::String&& value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId = std::move(value); }

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline void SetReservedInstancesListingId(const char* value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId.assign(value); }

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline ReservedInstancesListing& WithReservedInstancesListingId(const Aws::String& value) { SetReservedInstancesListingId(value); return *this;}

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline ReservedInstancesListing& WithReservedInstancesListingId(Aws::String&& value) { SetReservedInstancesListingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline ReservedInstancesListing& WithReservedInstancesListingId(const char* value) { SetReservedInstancesListingId(value); return *this;}


    /**
     * <p>The status of the Reserved Instance listing.</p>
     */
    inline const ListingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Reserved Instance listing.</p>
     */
    inline void SetStatus(const ListingStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Reserved Instance listing.</p>
     */
    inline void SetStatus(ListingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Reserved Instance listing.</p>
     */
    inline ReservedInstancesListing& WithStatus(const ListingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Reserved Instance listing.</p>
     */
    inline ReservedInstancesListing& WithStatus(ListingStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the current status of the Reserved Instance listing. The
     * response can be blank.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The reason for the current status of the Reserved Instance listing. The
     * response can be blank.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The reason for the current status of the Reserved Instance listing. The
     * response can be blank.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The reason for the current status of the Reserved Instance listing. The
     * response can be blank.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The reason for the current status of the Reserved Instance listing. The
     * response can be blank.</p>
     */
    inline ReservedInstancesListing& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The reason for the current status of the Reserved Instance listing. The
     * response can be blank.</p>
     */
    inline ReservedInstancesListing& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The reason for the current status of the Reserved Instance listing. The
     * response can be blank.</p>
     */
    inline ReservedInstancesListing& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline ReservedInstancesListing& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline ReservedInstancesListing& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline ReservedInstancesListing& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline ReservedInstancesListing& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The last modified timestamp of the listing.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>The last modified timestamp of the listing.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDateHasBeenSet = true; m_updateDate = value; }

    /**
     * <p>The last modified timestamp of the listing.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::move(value); }

    /**
     * <p>The last modified timestamp of the listing.</p>
     */
    inline ReservedInstancesListing& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>The last modified timestamp of the listing.</p>
     */
    inline ReservedInstancesListing& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    Aws::Vector<InstanceCount> m_instanceCounts;
    bool m_instanceCountsHasBeenSet;

    Aws::Vector<PriceSchedule> m_priceSchedules;
    bool m_priceSchedulesHasBeenSet;

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet;

    Aws::String m_reservedInstancesListingId;
    bool m_reservedInstancesListingIdHasBeenSet;

    ListingStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Utils::DateTime m_updateDate;
    bool m_updateDateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
