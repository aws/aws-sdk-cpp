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
    AWS_EC2_API Ipv6Pool();
    AWS_EC2_API Ipv6Pool(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Ipv6Pool& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline Ipv6Pool& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the address pool.</p>
     */
    inline Ipv6Pool& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the address pool.</p>
     */
    inline Ipv6Pool& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The description for the address pool.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the address pool.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the address pool.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the address pool.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the address pool.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the address pool.</p>
     */
    inline Ipv6Pool& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the address pool.</p>
     */
    inline Ipv6Pool& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the address pool.</p>
     */
    inline Ipv6Pool& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The CIDR blocks for the address pool.</p>
     */
    inline const Aws::Vector<PoolCidrBlock>& GetPoolCidrBlocks() const{ return m_poolCidrBlocks; }

    /**
     * <p>The CIDR blocks for the address pool.</p>
     */
    inline bool PoolCidrBlocksHasBeenSet() const { return m_poolCidrBlocksHasBeenSet; }

    /**
     * <p>The CIDR blocks for the address pool.</p>
     */
    inline void SetPoolCidrBlocks(const Aws::Vector<PoolCidrBlock>& value) { m_poolCidrBlocksHasBeenSet = true; m_poolCidrBlocks = value; }

    /**
     * <p>The CIDR blocks for the address pool.</p>
     */
    inline void SetPoolCidrBlocks(Aws::Vector<PoolCidrBlock>&& value) { m_poolCidrBlocksHasBeenSet = true; m_poolCidrBlocks = std::move(value); }

    /**
     * <p>The CIDR blocks for the address pool.</p>
     */
    inline Ipv6Pool& WithPoolCidrBlocks(const Aws::Vector<PoolCidrBlock>& value) { SetPoolCidrBlocks(value); return *this;}

    /**
     * <p>The CIDR blocks for the address pool.</p>
     */
    inline Ipv6Pool& WithPoolCidrBlocks(Aws::Vector<PoolCidrBlock>&& value) { SetPoolCidrBlocks(std::move(value)); return *this;}

    /**
     * <p>The CIDR blocks for the address pool.</p>
     */
    inline Ipv6Pool& AddPoolCidrBlocks(const PoolCidrBlock& value) { m_poolCidrBlocksHasBeenSet = true; m_poolCidrBlocks.push_back(value); return *this; }

    /**
     * <p>The CIDR blocks for the address pool.</p>
     */
    inline Ipv6Pool& AddPoolCidrBlocks(PoolCidrBlock&& value) { m_poolCidrBlocksHasBeenSet = true; m_poolCidrBlocks.push_back(std::move(value)); return *this; }


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
    inline Ipv6Pool& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags for the address pool.</p>
     */
    inline Ipv6Pool& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags for the address pool.</p>
     */
    inline Ipv6Pool& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags for the address pool.</p>
     */
    inline Ipv6Pool& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
