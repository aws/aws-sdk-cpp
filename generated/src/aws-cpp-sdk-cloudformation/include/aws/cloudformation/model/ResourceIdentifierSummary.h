/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Describes the target resources of a specific type in your import template
   * (for example, all <code>AWS::S3::Bucket</code> resources) and the properties you
   * can provide during the import to identify resources of that type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ResourceIdentifierSummary">AWS
   * API Reference</a></p>
   */
  class ResourceIdentifierSummary
  {
  public:
    AWS_CLOUDFORMATION_API ResourceIdentifierSummary() = default;
    AWS_CLOUDFORMATION_API ResourceIdentifierSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ResourceIdentifierSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The template resource type of the target resources, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ResourceIdentifierSummary& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical IDs of the target resources of the specified
     * <code>ResourceType</code>, as defined in the import template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogicalResourceIds() const { return m_logicalResourceIds; }
    inline bool LogicalResourceIdsHasBeenSet() const { return m_logicalResourceIdsHasBeenSet; }
    template<typename LogicalResourceIdsT = Aws::Vector<Aws::String>>
    void SetLogicalResourceIds(LogicalResourceIdsT&& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds = std::forward<LogicalResourceIdsT>(value); }
    template<typename LogicalResourceIdsT = Aws::Vector<Aws::String>>
    ResourceIdentifierSummary& WithLogicalResourceIds(LogicalResourceIdsT&& value) { SetLogicalResourceIds(std::forward<LogicalResourceIdsT>(value)); return *this;}
    template<typename LogicalResourceIdsT = Aws::String>
    ResourceIdentifierSummary& AddLogicalResourceIds(LogicalResourceIdsT&& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds.emplace_back(std::forward<LogicalResourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource properties you can provide during the import to identify your
     * target resources. For example, <code>BucketName</code> is a possible identifier
     * property for <code>AWS::S3::Bucket</code> resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIdentifiers() const { return m_resourceIdentifiers; }
    inline bool ResourceIdentifiersHasBeenSet() const { return m_resourceIdentifiersHasBeenSet; }
    template<typename ResourceIdentifiersT = Aws::Vector<Aws::String>>
    void SetResourceIdentifiers(ResourceIdentifiersT&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = std::forward<ResourceIdentifiersT>(value); }
    template<typename ResourceIdentifiersT = Aws::Vector<Aws::String>>
    ResourceIdentifierSummary& WithResourceIdentifiers(ResourceIdentifiersT&& value) { SetResourceIdentifiers(std::forward<ResourceIdentifiersT>(value)); return *this;}
    template<typename ResourceIdentifiersT = Aws::String>
    ResourceIdentifierSummary& AddResourceIdentifiers(ResourceIdentifiersT&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.emplace_back(std::forward<ResourceIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_logicalResourceIds;
    bool m_logicalResourceIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIdentifiers;
    bool m_resourceIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
