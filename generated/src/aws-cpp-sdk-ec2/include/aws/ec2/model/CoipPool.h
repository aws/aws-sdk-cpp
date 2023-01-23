/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes a customer-owned address pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CoipPool">AWS API
   * Reference</a></p>
   */
  class CoipPool
  {
  public:
    AWS_EC2_API CoipPool();
    AWS_EC2_API CoipPool(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CoipPool& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline CoipPool& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the address pool.</p>
     */
    inline CoipPool& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the address pool.</p>
     */
    inline CoipPool& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The address ranges of the address pool.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPoolCidrs() const{ return m_poolCidrs; }

    /**
     * <p>The address ranges of the address pool.</p>
     */
    inline bool PoolCidrsHasBeenSet() const { return m_poolCidrsHasBeenSet; }

    /**
     * <p>The address ranges of the address pool.</p>
     */
    inline void SetPoolCidrs(const Aws::Vector<Aws::String>& value) { m_poolCidrsHasBeenSet = true; m_poolCidrs = value; }

    /**
     * <p>The address ranges of the address pool.</p>
     */
    inline void SetPoolCidrs(Aws::Vector<Aws::String>&& value) { m_poolCidrsHasBeenSet = true; m_poolCidrs = std::move(value); }

    /**
     * <p>The address ranges of the address pool.</p>
     */
    inline CoipPool& WithPoolCidrs(const Aws::Vector<Aws::String>& value) { SetPoolCidrs(value); return *this;}

    /**
     * <p>The address ranges of the address pool.</p>
     */
    inline CoipPool& WithPoolCidrs(Aws::Vector<Aws::String>&& value) { SetPoolCidrs(std::move(value)); return *this;}

    /**
     * <p>The address ranges of the address pool.</p>
     */
    inline CoipPool& AddPoolCidrs(const Aws::String& value) { m_poolCidrsHasBeenSet = true; m_poolCidrs.push_back(value); return *this; }

    /**
     * <p>The address ranges of the address pool.</p>
     */
    inline CoipPool& AddPoolCidrs(Aws::String&& value) { m_poolCidrsHasBeenSet = true; m_poolCidrs.push_back(std::move(value)); return *this; }

    /**
     * <p>The address ranges of the address pool.</p>
     */
    inline CoipPool& AddPoolCidrs(const char* value) { m_poolCidrsHasBeenSet = true; m_poolCidrs.push_back(value); return *this; }


    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const{ return m_localGatewayRouteTableId; }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(const Aws::String& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = value; }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(Aws::String&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::move(value); }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(const char* value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId.assign(value); }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline CoipPool& WithLocalGatewayRouteTableId(const Aws::String& value) { SetLocalGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline CoipPool& WithLocalGatewayRouteTableId(Aws::String&& value) { SetLocalGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline CoipPool& WithLocalGatewayRouteTableId(const char* value) { SetLocalGatewayRouteTableId(value); return *this;}


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline CoipPool& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline CoipPool& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline CoipPool& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline CoipPool& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the address pool.</p>
     */
    inline const Aws::String& GetPoolArn() const{ return m_poolArn; }

    /**
     * <p>The ARN of the address pool.</p>
     */
    inline bool PoolArnHasBeenSet() const { return m_poolArnHasBeenSet; }

    /**
     * <p>The ARN of the address pool.</p>
     */
    inline void SetPoolArn(const Aws::String& value) { m_poolArnHasBeenSet = true; m_poolArn = value; }

    /**
     * <p>The ARN of the address pool.</p>
     */
    inline void SetPoolArn(Aws::String&& value) { m_poolArnHasBeenSet = true; m_poolArn = std::move(value); }

    /**
     * <p>The ARN of the address pool.</p>
     */
    inline void SetPoolArn(const char* value) { m_poolArnHasBeenSet = true; m_poolArn.assign(value); }

    /**
     * <p>The ARN of the address pool.</p>
     */
    inline CoipPool& WithPoolArn(const Aws::String& value) { SetPoolArn(value); return *this;}

    /**
     * <p>The ARN of the address pool.</p>
     */
    inline CoipPool& WithPoolArn(Aws::String&& value) { SetPoolArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the address pool.</p>
     */
    inline CoipPool& WithPoolArn(const char* value) { SetPoolArn(value); return *this;}

  private:

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_poolCidrs;
    bool m_poolCidrsHasBeenSet = false;

    Aws::String m_localGatewayRouteTableId;
    bool m_localGatewayRouteTableIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_poolArn;
    bool m_poolArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
