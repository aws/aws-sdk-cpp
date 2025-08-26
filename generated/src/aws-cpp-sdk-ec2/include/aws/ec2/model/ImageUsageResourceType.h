/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ImageUsageResourceTypeOption.h>
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
   * <p>A resource type to include in the report. Associated options can also be
   * specified if the resource type is a launch template.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageUsageResourceType">AWS
   * API Reference</a></p>
   */
  class ImageUsageResourceType
  {
  public:
    AWS_EC2_API ImageUsageResourceType() = default;
    AWS_EC2_API ImageUsageResourceType(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImageUsageResourceType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The resource type.</p> <p>Valid values: <code>ec2:Instance</code> |
     * <code>ec2:LaunchTemplate</code> </p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ImageUsageResourceType& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that affect the scope of the report. Valid only when
     * <code>ResourceType</code> is <code>ec2:LaunchTemplate</code>.</p>
     */
    inline const Aws::Vector<ImageUsageResourceTypeOption>& GetResourceTypeOptions() const { return m_resourceTypeOptions; }
    inline bool ResourceTypeOptionsHasBeenSet() const { return m_resourceTypeOptionsHasBeenSet; }
    template<typename ResourceTypeOptionsT = Aws::Vector<ImageUsageResourceTypeOption>>
    void SetResourceTypeOptions(ResourceTypeOptionsT&& value) { m_resourceTypeOptionsHasBeenSet = true; m_resourceTypeOptions = std::forward<ResourceTypeOptionsT>(value); }
    template<typename ResourceTypeOptionsT = Aws::Vector<ImageUsageResourceTypeOption>>
    ImageUsageResourceType& WithResourceTypeOptions(ResourceTypeOptionsT&& value) { SetResourceTypeOptions(std::forward<ResourceTypeOptionsT>(value)); return *this;}
    template<typename ResourceTypeOptionsT = ImageUsageResourceTypeOption>
    ImageUsageResourceType& AddResourceTypeOptions(ResourceTypeOptionsT&& value) { m_resourceTypeOptionsHasBeenSet = true; m_resourceTypeOptions.emplace_back(std::forward<ResourceTypeOptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<ImageUsageResourceTypeOption> m_resourceTypeOptions;
    bool m_resourceTypeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
