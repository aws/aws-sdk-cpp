/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PublicIpv4PoolRange.h>
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
   * <p>Describes an IPv4 address pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PublicIpv4Pool">AWS
   * API Reference</a></p>
   */
  class PublicIpv4Pool
  {
  public:
    AWS_EC2_API PublicIpv4Pool();
    AWS_EC2_API PublicIpv4Pool(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PublicIpv4Pool& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the address pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The ID of the address pool.</p>
     */
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }

    /**
     * <p>The ID of the address pool.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }

    /**
     * <p>The ID of the address pool.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }

    /**
     * <p>The ID of the address pool.</p>
     */
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }

    /**
     * <p>The ID of the address pool.</p>
     */
    inline PublicIpv4Pool& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the address pool.</p>
     */
    inline PublicIpv4Pool& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the address pool.</p>
     */
    inline PublicIpv4Pool& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>A description of the address pool.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the address pool.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the address pool.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the address pool.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the address pool.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the address pool.</p>
     */
    inline PublicIpv4Pool& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the address pool.</p>
     */
    inline PublicIpv4Pool& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the address pool.</p>
     */
    inline PublicIpv4Pool& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The address ranges.</p>
     */
    inline const Aws::Vector<PublicIpv4PoolRange>& GetPoolAddressRanges() const{ return m_poolAddressRanges; }

    /**
     * <p>The address ranges.</p>
     */
    inline bool PoolAddressRangesHasBeenSet() const { return m_poolAddressRangesHasBeenSet; }

    /**
     * <p>The address ranges.</p>
     */
    inline void SetPoolAddressRanges(const Aws::Vector<PublicIpv4PoolRange>& value) { m_poolAddressRangesHasBeenSet = true; m_poolAddressRanges = value; }

    /**
     * <p>The address ranges.</p>
     */
    inline void SetPoolAddressRanges(Aws::Vector<PublicIpv4PoolRange>&& value) { m_poolAddressRangesHasBeenSet = true; m_poolAddressRanges = std::move(value); }

    /**
     * <p>The address ranges.</p>
     */
    inline PublicIpv4Pool& WithPoolAddressRanges(const Aws::Vector<PublicIpv4PoolRange>& value) { SetPoolAddressRanges(value); return *this;}

    /**
     * <p>The address ranges.</p>
     */
    inline PublicIpv4Pool& WithPoolAddressRanges(Aws::Vector<PublicIpv4PoolRange>&& value) { SetPoolAddressRanges(std::move(value)); return *this;}

    /**
     * <p>The address ranges.</p>
     */
    inline PublicIpv4Pool& AddPoolAddressRanges(const PublicIpv4PoolRange& value) { m_poolAddressRangesHasBeenSet = true; m_poolAddressRanges.push_back(value); return *this; }

    /**
     * <p>The address ranges.</p>
     */
    inline PublicIpv4Pool& AddPoolAddressRanges(PublicIpv4PoolRange&& value) { m_poolAddressRangesHasBeenSet = true; m_poolAddressRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of addresses.</p>
     */
    inline int GetTotalAddressCount() const{ return m_totalAddressCount; }

    /**
     * <p>The total number of addresses.</p>
     */
    inline bool TotalAddressCountHasBeenSet() const { return m_totalAddressCountHasBeenSet; }

    /**
     * <p>The total number of addresses.</p>
     */
    inline void SetTotalAddressCount(int value) { m_totalAddressCountHasBeenSet = true; m_totalAddressCount = value; }

    /**
     * <p>The total number of addresses.</p>
     */
    inline PublicIpv4Pool& WithTotalAddressCount(int value) { SetTotalAddressCount(value); return *this;}


    /**
     * <p>The total number of available addresses.</p>
     */
    inline int GetTotalAvailableAddressCount() const{ return m_totalAvailableAddressCount; }

    /**
     * <p>The total number of available addresses.</p>
     */
    inline bool TotalAvailableAddressCountHasBeenSet() const { return m_totalAvailableAddressCountHasBeenSet; }

    /**
     * <p>The total number of available addresses.</p>
     */
    inline void SetTotalAvailableAddressCount(int value) { m_totalAvailableAddressCountHasBeenSet = true; m_totalAvailableAddressCount = value; }

    /**
     * <p>The total number of available addresses.</p>
     */
    inline PublicIpv4Pool& WithTotalAvailableAddressCount(int value) { SetTotalAvailableAddressCount(value); return *this;}


    /**
     * <p>The name of the location from which the address pool is advertised. A network
     * border group is a unique set of Availability Zones or Local Zones from where
     * Amazon Web Services advertises public IP addresses.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }

    /**
     * <p>The name of the location from which the address pool is advertised. A network
     * border group is a unique set of Availability Zones or Local Zones from where
     * Amazon Web Services advertises public IP addresses.</p>
     */
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }

    /**
     * <p>The name of the location from which the address pool is advertised. A network
     * border group is a unique set of Availability Zones or Local Zones from where
     * Amazon Web Services advertises public IP addresses.</p>
     */
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }

    /**
     * <p>The name of the location from which the address pool is advertised. A network
     * border group is a unique set of Availability Zones or Local Zones from where
     * Amazon Web Services advertises public IP addresses.</p>
     */
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }

    /**
     * <p>The name of the location from which the address pool is advertised. A network
     * border group is a unique set of Availability Zones or Local Zones from where
     * Amazon Web Services advertises public IP addresses.</p>
     */
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }

    /**
     * <p>The name of the location from which the address pool is advertised. A network
     * border group is a unique set of Availability Zones or Local Zones from where
     * Amazon Web Services advertises public IP addresses.</p>
     */
    inline PublicIpv4Pool& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}

    /**
     * <p>The name of the location from which the address pool is advertised. A network
     * border group is a unique set of Availability Zones or Local Zones from where
     * Amazon Web Services advertises public IP addresses.</p>
     */
    inline PublicIpv4Pool& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the location from which the address pool is advertised. A network
     * border group is a unique set of Availability Zones or Local Zones from where
     * Amazon Web Services advertises public IP addresses.</p>
     */
    inline PublicIpv4Pool& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}


    /**
     * <p>Any tags for the address pool.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags for the address pool.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags for the address pool.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags for the address pool.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags for the address pool.</p>
     */
    inline PublicIpv4Pool& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags for the address pool.</p>
     */
    inline PublicIpv4Pool& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags for the address pool.</p>
     */
    inline PublicIpv4Pool& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags for the address pool.</p>
     */
    inline PublicIpv4Pool& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<PublicIpv4PoolRange> m_poolAddressRanges;
    bool m_poolAddressRangesHasBeenSet = false;

    int m_totalAddressCount;
    bool m_totalAddressCountHasBeenSet = false;

    int m_totalAvailableAddressCount;
    bool m_totalAvailableAddressCountHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
