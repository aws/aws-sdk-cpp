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
    AWS_EC2_API PublicIpv4Pool() = default;
    AWS_EC2_API PublicIpv4Pool(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PublicIpv4Pool& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the address pool.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    PublicIpv4Pool& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the address pool.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PublicIpv4Pool& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address ranges.</p>
     */
    inline const Aws::Vector<PublicIpv4PoolRange>& GetPoolAddressRanges() const { return m_poolAddressRanges; }
    inline bool PoolAddressRangesHasBeenSet() const { return m_poolAddressRangesHasBeenSet; }
    template<typename PoolAddressRangesT = Aws::Vector<PublicIpv4PoolRange>>
    void SetPoolAddressRanges(PoolAddressRangesT&& value) { m_poolAddressRangesHasBeenSet = true; m_poolAddressRanges = std::forward<PoolAddressRangesT>(value); }
    template<typename PoolAddressRangesT = Aws::Vector<PublicIpv4PoolRange>>
    PublicIpv4Pool& WithPoolAddressRanges(PoolAddressRangesT&& value) { SetPoolAddressRanges(std::forward<PoolAddressRangesT>(value)); return *this;}
    template<typename PoolAddressRangesT = PublicIpv4PoolRange>
    PublicIpv4Pool& AddPoolAddressRanges(PoolAddressRangesT&& value) { m_poolAddressRangesHasBeenSet = true; m_poolAddressRanges.emplace_back(std::forward<PoolAddressRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of addresses.</p>
     */
    inline int GetTotalAddressCount() const { return m_totalAddressCount; }
    inline bool TotalAddressCountHasBeenSet() const { return m_totalAddressCountHasBeenSet; }
    inline void SetTotalAddressCount(int value) { m_totalAddressCountHasBeenSet = true; m_totalAddressCount = value; }
    inline PublicIpv4Pool& WithTotalAddressCount(int value) { SetTotalAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of available addresses.</p>
     */
    inline int GetTotalAvailableAddressCount() const { return m_totalAvailableAddressCount; }
    inline bool TotalAvailableAddressCountHasBeenSet() const { return m_totalAvailableAddressCountHasBeenSet; }
    inline void SetTotalAvailableAddressCount(int value) { m_totalAvailableAddressCountHasBeenSet = true; m_totalAvailableAddressCount = value; }
    inline PublicIpv4Pool& WithTotalAvailableAddressCount(int value) { SetTotalAvailableAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the location from which the address pool is advertised. A network
     * border group is a unique set of Availability Zones or Local Zones from where
     * Amazon Web Services advertises public IP addresses.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const { return m_networkBorderGroup; }
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
    template<typename NetworkBorderGroupT = Aws::String>
    void SetNetworkBorderGroup(NetworkBorderGroupT&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::forward<NetworkBorderGroupT>(value); }
    template<typename NetworkBorderGroupT = Aws::String>
    PublicIpv4Pool& WithNetworkBorderGroup(NetworkBorderGroupT&& value) { SetNetworkBorderGroup(std::forward<NetworkBorderGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags for the address pool.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PublicIpv4Pool& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PublicIpv4Pool& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<PublicIpv4PoolRange> m_poolAddressRanges;
    bool m_poolAddressRangesHasBeenSet = false;

    int m_totalAddressCount{0};
    bool m_totalAddressCountHasBeenSet = false;

    int m_totalAvailableAddressCount{0};
    bool m_totalAvailableAddressCountHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
