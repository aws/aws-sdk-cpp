/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ResourceType.h>
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
   * <p>The tags for a Spot Fleet resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotFleetTagSpecification">AWS
   * API Reference</a></p>
   */
  class SpotFleetTagSpecification
  {
  public:
    AWS_EC2_API SpotFleetTagSpecification();
    AWS_EC2_API SpotFleetTagSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotFleetTagSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of resource. Currently, the only resource type that is supported is
     * <code>instance</code>. To tag the Spot Fleet request on creation, use the
     * <code>TagSpecifications</code> parameter in <code> <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetRequestConfigData.html">SpotFleetRequestConfigData</a>
     * </code>.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource. Currently, the only resource type that is supported is
     * <code>instance</code>. To tag the Spot Fleet request on creation, use the
     * <code>TagSpecifications</code> parameter in <code> <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetRequestConfigData.html">SpotFleetRequestConfigData</a>
     * </code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource. Currently, the only resource type that is supported is
     * <code>instance</code>. To tag the Spot Fleet request on creation, use the
     * <code>TagSpecifications</code> parameter in <code> <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetRequestConfigData.html">SpotFleetRequestConfigData</a>
     * </code>.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource. Currently, the only resource type that is supported is
     * <code>instance</code>. To tag the Spot Fleet request on creation, use the
     * <code>TagSpecifications</code> parameter in <code> <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetRequestConfigData.html">SpotFleetRequestConfigData</a>
     * </code>.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource. Currently, the only resource type that is supported is
     * <code>instance</code>. To tag the Spot Fleet request on creation, use the
     * <code>TagSpecifications</code> parameter in <code> <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetRequestConfigData.html">SpotFleetRequestConfigData</a>
     * </code>.</p>
     */
    inline SpotFleetTagSpecification& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource. Currently, the only resource type that is supported is
     * <code>instance</code>. To tag the Spot Fleet request on creation, use the
     * <code>TagSpecifications</code> parameter in <code> <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetRequestConfigData.html">SpotFleetRequestConfigData</a>
     * </code>.</p>
     */
    inline SpotFleetTagSpecification& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


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
    inline SpotFleetTagSpecification& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline SpotFleetTagSpecification& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline SpotFleetTagSpecification& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline SpotFleetTagSpecification& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
