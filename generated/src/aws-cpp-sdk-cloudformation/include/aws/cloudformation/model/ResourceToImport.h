/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Describes the target resource of an import operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ResourceToImport">AWS
   * API Reference</a></p>
   */
  class ResourceToImport
  {
  public:
    AWS_CLOUDFORMATION_API ResourceToImport();
    AWS_CLOUDFORMATION_API ResourceToImport(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ResourceToImport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of resource to import into your stack, such as
     * <code>AWS::S3::Bucket</code>. For a list of supported resource types, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resource-import-supported-resources.html">Resource
     * type support for imports and drift detection</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ResourceToImport& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ResourceToImport& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ResourceToImport& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical ID of the target resource as specified in the template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }
    inline ResourceToImport& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}
    inline ResourceToImport& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}
    inline ResourceToImport& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value pair that identifies the target resource. The key is an
     * identifier property (for example, <code>BucketName</code> for
     * <code>AWS::S3::Bucket</code> resources) and the value is the actual property
     * value (for example, <code>MyS3Bucket</code>).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline ResourceToImport& WithResourceIdentifier(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceIdentifier(value); return *this;}
    inline ResourceToImport& WithResourceIdentifier(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline ResourceToImport& AddResourceIdentifier(const Aws::String& key, const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(key, value); return *this; }
    inline ResourceToImport& AddResourceIdentifier(Aws::String&& key, const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(std::move(key), value); return *this; }
    inline ResourceToImport& AddResourceIdentifier(const Aws::String& key, Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(key, std::move(value)); return *this; }
    inline ResourceToImport& AddResourceIdentifier(Aws::String&& key, Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(std::move(key), std::move(value)); return *this; }
    inline ResourceToImport& AddResourceIdentifier(const char* key, Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(key, std::move(value)); return *this; }
    inline ResourceToImport& AddResourceIdentifier(Aws::String&& key, const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(std::move(key), value); return *this; }
    inline ResourceToImport& AddResourceIdentifier(const char* key, const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
