/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cloudformation/model/GeneratedTemplateResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/WarningDetail.h>
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
   * <p>Details about a resource in a generated template</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ResourceDetail">AWS
   * API Reference</a></p>
   */
  class ResourceDetail
  {
  public:
    AWS_CLOUDFORMATION_API ResourceDetail();
    AWS_CLOUDFORMATION_API ResourceDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ResourceDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of the resource, such as <code>AWS::DynamoDB::Table</code>. For the
     * list of supported resources, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resource-import-supported-resources.html">Resource
     * type support for imports and drift detection</a> In the <i>CloudFormation User
     * Guide</i> </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ResourceDetail& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ResourceDetail& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ResourceDetail& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical id for this resource in the final generated template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }
    inline ResourceDetail& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}
    inline ResourceDetail& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}
    inline ResourceDetail& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 256 key-value pairs that identifies the resource in the
     * generated template. The key is the name of one of the primary identifiers for
     * the resource. (Primary identifiers are specified in the
     * <code>primaryIdentifier</code> list in the resource schema.) The value is the
     * value of that primary identifier. For example, for a
     * <code>AWS::DynamoDB::Table</code> resource, the primary identifiers is
     * <code>TableName</code> so the key-value pair could be <code>"TableName":
     * "MyDDBTable"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html#schema-properties-primaryidentifier">primaryIdentifier</a>
     * in the <i>CloudFormation Command Line Interface (CLI) User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline ResourceDetail& WithResourceIdentifier(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceIdentifier(value); return *this;}
    inline ResourceDetail& WithResourceIdentifier(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline ResourceDetail& AddResourceIdentifier(const Aws::String& key, const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(key, value); return *this; }
    inline ResourceDetail& AddResourceIdentifier(Aws::String&& key, const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(std::move(key), value); return *this; }
    inline ResourceDetail& AddResourceIdentifier(const Aws::String& key, Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(key, std::move(value)); return *this; }
    inline ResourceDetail& AddResourceIdentifier(Aws::String&& key, Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(std::move(key), std::move(value)); return *this; }
    inline ResourceDetail& AddResourceIdentifier(const char* key, Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(key, std::move(value)); return *this; }
    inline ResourceDetail& AddResourceIdentifier(Aws::String&& key, const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(std::move(key), value); return *this; }
    inline ResourceDetail& AddResourceIdentifier(const char* key, const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Status of the processing of a resource in a generated template.</p> <dl> <dt>
     * InProgress </dt> <dd> <p>The resource processing is still in progress.</p> </dd>
     * <dt> Complete </dt> <dd> <p>The resource processing is complete.</p> </dd> <dt>
     * Pending </dt> <dd> <p>The resource processing is pending.</p> </dd> <dt> Failed
     * </dt> <dd> <p>The resource processing has failed.</p> </dd> </dl>
     */
    inline const GeneratedTemplateResourceStatus& GetResourceStatus() const{ return m_resourceStatus; }
    inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }
    inline void SetResourceStatus(const GeneratedTemplateResourceStatus& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }
    inline void SetResourceStatus(GeneratedTemplateResourceStatus&& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = std::move(value); }
    inline ResourceDetail& WithResourceStatus(const GeneratedTemplateResourceStatus& value) { SetResourceStatus(value); return *this;}
    inline ResourceDetail& WithResourceStatus(GeneratedTemplateResourceStatus&& value) { SetResourceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the resource detail, providing more information if a failure
     * happened.</p>
     */
    inline const Aws::String& GetResourceStatusReason() const{ return m_resourceStatusReason; }
    inline bool ResourceStatusReasonHasBeenSet() const { return m_resourceStatusReasonHasBeenSet; }
    inline void SetResourceStatusReason(const Aws::String& value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason = value; }
    inline void SetResourceStatusReason(Aws::String&& value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason = std::move(value); }
    inline void SetResourceStatusReason(const char* value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason.assign(value); }
    inline ResourceDetail& WithResourceStatusReason(const Aws::String& value) { SetResourceStatusReason(value); return *this;}
    inline ResourceDetail& WithResourceStatusReason(Aws::String&& value) { SetResourceStatusReason(std::move(value)); return *this;}
    inline ResourceDetail& WithResourceStatusReason(const char* value) { SetResourceStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warnings generated for this resource.</p>
     */
    inline const Aws::Vector<WarningDetail>& GetWarnings() const{ return m_warnings; }
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }
    inline void SetWarnings(const Aws::Vector<WarningDetail>& value) { m_warningsHasBeenSet = true; m_warnings = value; }
    inline void SetWarnings(Aws::Vector<WarningDetail>&& value) { m_warningsHasBeenSet = true; m_warnings = std::move(value); }
    inline ResourceDetail& WithWarnings(const Aws::Vector<WarningDetail>& value) { SetWarnings(value); return *this;}
    inline ResourceDetail& WithWarnings(Aws::Vector<WarningDetail>&& value) { SetWarnings(std::move(value)); return *this;}
    inline ResourceDetail& AddWarnings(const WarningDetail& value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }
    inline ResourceDetail& AddWarnings(WarningDetail&& value) { m_warningsHasBeenSet = true; m_warnings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    GeneratedTemplateResourceStatus m_resourceStatus;
    bool m_resourceStatusHasBeenSet = false;

    Aws::String m_resourceStatusReason;
    bool m_resourceStatusReasonHasBeenSet = false;

    Aws::Vector<WarningDetail> m_warnings;
    bool m_warningsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
