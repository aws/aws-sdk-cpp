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
    AWS_CLOUDFORMATION_API ResourceIdentifierSummary();
    AWS_CLOUDFORMATION_API ResourceIdentifierSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ResourceIdentifierSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The template resource type of the target resources, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The template resource type of the target resources, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The template resource type of the target resources, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The template resource type of the target resources, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The template resource type of the target resources, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The template resource type of the target resources, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline ResourceIdentifierSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The template resource type of the target resources, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline ResourceIdentifierSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The template resource type of the target resources, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline ResourceIdentifierSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The logical IDs of the target resources of the specified
     * <code>ResourceType</code>, as defined in the import template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogicalResourceIds() const{ return m_logicalResourceIds; }

    /**
     * <p>The logical IDs of the target resources of the specified
     * <code>ResourceType</code>, as defined in the import template.</p>
     */
    inline bool LogicalResourceIdsHasBeenSet() const { return m_logicalResourceIdsHasBeenSet; }

    /**
     * <p>The logical IDs of the target resources of the specified
     * <code>ResourceType</code>, as defined in the import template.</p>
     */
    inline void SetLogicalResourceIds(const Aws::Vector<Aws::String>& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds = value; }

    /**
     * <p>The logical IDs of the target resources of the specified
     * <code>ResourceType</code>, as defined in the import template.</p>
     */
    inline void SetLogicalResourceIds(Aws::Vector<Aws::String>&& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds = std::move(value); }

    /**
     * <p>The logical IDs of the target resources of the specified
     * <code>ResourceType</code>, as defined in the import template.</p>
     */
    inline ResourceIdentifierSummary& WithLogicalResourceIds(const Aws::Vector<Aws::String>& value) { SetLogicalResourceIds(value); return *this;}

    /**
     * <p>The logical IDs of the target resources of the specified
     * <code>ResourceType</code>, as defined in the import template.</p>
     */
    inline ResourceIdentifierSummary& WithLogicalResourceIds(Aws::Vector<Aws::String>&& value) { SetLogicalResourceIds(std::move(value)); return *this;}

    /**
     * <p>The logical IDs of the target resources of the specified
     * <code>ResourceType</code>, as defined in the import template.</p>
     */
    inline ResourceIdentifierSummary& AddLogicalResourceIds(const Aws::String& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds.push_back(value); return *this; }

    /**
     * <p>The logical IDs of the target resources of the specified
     * <code>ResourceType</code>, as defined in the import template.</p>
     */
    inline ResourceIdentifierSummary& AddLogicalResourceIds(Aws::String&& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The logical IDs of the target resources of the specified
     * <code>ResourceType</code>, as defined in the import template.</p>
     */
    inline ResourceIdentifierSummary& AddLogicalResourceIds(const char* value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds.push_back(value); return *this; }


    /**
     * <p>The resource properties you can provide during the import to identify your
     * target resources. For example, <code>BucketName</code> is a possible identifier
     * property for <code>AWS::S3::Bucket</code> resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIdentifiers() const{ return m_resourceIdentifiers; }

    /**
     * <p>The resource properties you can provide during the import to identify your
     * target resources. For example, <code>BucketName</code> is a possible identifier
     * property for <code>AWS::S3::Bucket</code> resources.</p>
     */
    inline bool ResourceIdentifiersHasBeenSet() const { return m_resourceIdentifiersHasBeenSet; }

    /**
     * <p>The resource properties you can provide during the import to identify your
     * target resources. For example, <code>BucketName</code> is a possible identifier
     * property for <code>AWS::S3::Bucket</code> resources.</p>
     */
    inline void SetResourceIdentifiers(const Aws::Vector<Aws::String>& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = value; }

    /**
     * <p>The resource properties you can provide during the import to identify your
     * target resources. For example, <code>BucketName</code> is a possible identifier
     * property for <code>AWS::S3::Bucket</code> resources.</p>
     */
    inline void SetResourceIdentifiers(Aws::Vector<Aws::String>&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = std::move(value); }

    /**
     * <p>The resource properties you can provide during the import to identify your
     * target resources. For example, <code>BucketName</code> is a possible identifier
     * property for <code>AWS::S3::Bucket</code> resources.</p>
     */
    inline ResourceIdentifierSummary& WithResourceIdentifiers(const Aws::Vector<Aws::String>& value) { SetResourceIdentifiers(value); return *this;}

    /**
     * <p>The resource properties you can provide during the import to identify your
     * target resources. For example, <code>BucketName</code> is a possible identifier
     * property for <code>AWS::S3::Bucket</code> resources.</p>
     */
    inline ResourceIdentifierSummary& WithResourceIdentifiers(Aws::Vector<Aws::String>&& value) { SetResourceIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The resource properties you can provide during the import to identify your
     * target resources. For example, <code>BucketName</code> is a possible identifier
     * property for <code>AWS::S3::Bucket</code> resources.</p>
     */
    inline ResourceIdentifierSummary& AddResourceIdentifiers(const Aws::String& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(value); return *this; }

    /**
     * <p>The resource properties you can provide during the import to identify your
     * target resources. For example, <code>BucketName</code> is a possible identifier
     * property for <code>AWS::S3::Bucket</code> resources.</p>
     */
    inline ResourceIdentifierSummary& AddResourceIdentifiers(Aws::String&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>The resource properties you can provide during the import to identify your
     * target resources. For example, <code>BucketName</code> is a possible identifier
     * property for <code>AWS::S3::Bucket</code> resources.</p>
     */
    inline ResourceIdentifierSummary& AddResourceIdentifiers(const char* value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(value); return *this; }

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
