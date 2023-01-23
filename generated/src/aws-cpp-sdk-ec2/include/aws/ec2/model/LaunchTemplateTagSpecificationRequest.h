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
   * <p>The tags specification for the resources that are created during instance
   * launch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateTagSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateTagSpecificationRequest
  {
  public:
    AWS_EC2_API LaunchTemplateTagSpecificationRequest();
    AWS_EC2_API LaunchTemplateTagSpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateTagSpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of resource to tag.</p> <p>The <code>Valid Values</code> are all the
     * resource types that can be tagged. However, when creating a launch template, you
     * can specify tags for the following resource types only: <code>instance</code> |
     * <code>volume</code> | <code>elastic-gpu</code> | <code>network-interface</code>
     * | <code>spot-instances-request</code> </p> <p>To tag a resource after it has
     * been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource to tag.</p> <p>The <code>Valid Values</code> are all the
     * resource types that can be tagged. However, when creating a launch template, you
     * can specify tags for the following resource types only: <code>instance</code> |
     * <code>volume</code> | <code>elastic-gpu</code> | <code>network-interface</code>
     * | <code>spot-instances-request</code> </p> <p>To tag a resource after it has
     * been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource to tag.</p> <p>The <code>Valid Values</code> are all the
     * resource types that can be tagged. However, when creating a launch template, you
     * can specify tags for the following resource types only: <code>instance</code> |
     * <code>volume</code> | <code>elastic-gpu</code> | <code>network-interface</code>
     * | <code>spot-instances-request</code> </p> <p>To tag a resource after it has
     * been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource to tag.</p> <p>The <code>Valid Values</code> are all the
     * resource types that can be tagged. However, when creating a launch template, you
     * can specify tags for the following resource types only: <code>instance</code> |
     * <code>volume</code> | <code>elastic-gpu</code> | <code>network-interface</code>
     * | <code>spot-instances-request</code> </p> <p>To tag a resource after it has
     * been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource to tag.</p> <p>The <code>Valid Values</code> are all the
     * resource types that can be tagged. However, when creating a launch template, you
     * can specify tags for the following resource types only: <code>instance</code> |
     * <code>volume</code> | <code>elastic-gpu</code> | <code>network-interface</code>
     * | <code>spot-instances-request</code> </p> <p>To tag a resource after it has
     * been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     */
    inline LaunchTemplateTagSpecificationRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource to tag.</p> <p>The <code>Valid Values</code> are all the
     * resource types that can be tagged. However, when creating a launch template, you
     * can specify tags for the following resource types only: <code>instance</code> |
     * <code>volume</code> | <code>elastic-gpu</code> | <code>network-interface</code>
     * | <code>spot-instances-request</code> </p> <p>To tag a resource after it has
     * been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.</p>
     */
    inline LaunchTemplateTagSpecificationRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline LaunchTemplateTagSpecificationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline LaunchTemplateTagSpecificationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline LaunchTemplateTagSpecificationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline LaunchTemplateTagSpecificationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
