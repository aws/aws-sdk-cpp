/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PoolCidrBlock.h>
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
   * <p>Describes an IPv6 address pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ipv6Pool">AWS API
   * Reference</a></p>
   */
  class Ipv6Pool
  {
  public:
    AWS_EC2_API Ipv6Pool() = default;
    AWS_EC2_API Ipv6Pool(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Ipv6Pool& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    Ipv6Pool& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the address pool.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Ipv6Pool& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR blocks for the address pool.</p>
     */
    inline const Aws::Vector<PoolCidrBlock>& GetPoolCidrBlocks() const { return m_poolCidrBlocks; }
    inline bool PoolCidrBlocksHasBeenSet() const { return m_poolCidrBlocksHasBeenSet; }
    template<typename PoolCidrBlocksT = Aws::Vector<PoolCidrBlock>>
    void SetPoolCidrBlocks(PoolCidrBlocksT&& value) { m_poolCidrBlocksHasBeenSet = true; m_poolCidrBlocks = std::forward<PoolCidrBlocksT>(value); }
    template<typename PoolCidrBlocksT = Aws::Vector<PoolCidrBlock>>
    Ipv6Pool& WithPoolCidrBlocks(PoolCidrBlocksT&& value) { SetPoolCidrBlocks(std::forward<PoolCidrBlocksT>(value)); return *this;}
    template<typename PoolCidrBlocksT = PoolCidrBlock>
    Ipv6Pool& AddPoolCidrBlocks(PoolCidrBlocksT&& value) { m_poolCidrBlocksHasBeenSet = true; m_poolCidrBlocks.emplace_back(std::forward<PoolCidrBlocksT>(value)); return *this; }
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
    Ipv6Pool& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Ipv6Pool& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<PoolCidrBlock> m_poolCidrBlocks;
    bool m_poolCidrBlocksHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
