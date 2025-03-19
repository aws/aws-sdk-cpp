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
    AWS_CLOUDFORMATION_API ResourceDetail() = default;
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
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ResourceDetail& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical id for this resource in the final generated template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const { return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    template<typename LogicalResourceIdT = Aws::String>
    void SetLogicalResourceId(LogicalResourceIdT&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::forward<LogicalResourceIdT>(value); }
    template<typename LogicalResourceIdT = Aws::String>
    ResourceDetail& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::Map<Aws::String, Aws::String>>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::Map<Aws::String, Aws::String>>
    ResourceDetail& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    template<typename ResourceIdentifierKeyT = Aws::String, typename ResourceIdentifierValueT = Aws::String>
    ResourceDetail& AddResourceIdentifier(ResourceIdentifierKeyT&& key, ResourceIdentifierValueT&& value) {
      m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(std::forward<ResourceIdentifierKeyT>(key), std::forward<ResourceIdentifierValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Status of the processing of a resource in a generated template.</p> <dl> <dt>
     * InProgress </dt> <dd> <p>The resource processing is still in progress.</p> </dd>
     * <dt> Complete </dt> <dd> <p>The resource processing is complete.</p> </dd> <dt>
     * Pending </dt> <dd> <p>The resource processing is pending.</p> </dd> <dt> Failed
     * </dt> <dd> <p>The resource processing has failed.</p> </dd> </dl>
     */
    inline GeneratedTemplateResourceStatus GetResourceStatus() const { return m_resourceStatus; }
    inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }
    inline void SetResourceStatus(GeneratedTemplateResourceStatus value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }
    inline ResourceDetail& WithResourceStatus(GeneratedTemplateResourceStatus value) { SetResourceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the resource detail, providing more information if a failure
     * happened.</p>
     */
    inline const Aws::String& GetResourceStatusReason() const { return m_resourceStatusReason; }
    inline bool ResourceStatusReasonHasBeenSet() const { return m_resourceStatusReasonHasBeenSet; }
    template<typename ResourceStatusReasonT = Aws::String>
    void SetResourceStatusReason(ResourceStatusReasonT&& value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason = std::forward<ResourceStatusReasonT>(value); }
    template<typename ResourceStatusReasonT = Aws::String>
    ResourceDetail& WithResourceStatusReason(ResourceStatusReasonT&& value) { SetResourceStatusReason(std::forward<ResourceStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warnings generated for this resource.</p>
     */
    inline const Aws::Vector<WarningDetail>& GetWarnings() const { return m_warnings; }
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }
    template<typename WarningsT = Aws::Vector<WarningDetail>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<WarningDetail>>
    ResourceDetail& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = WarningDetail>
    ResourceDetail& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    GeneratedTemplateResourceStatus m_resourceStatus{GeneratedTemplateResourceStatus::NOT_SET};
    bool m_resourceStatusHasBeenSet = false;

    Aws::String m_resourceStatusReason;
    bool m_resourceStatusReasonHasBeenSet = false;

    Aws::Vector<WarningDetail> m_warnings;
    bool m_warningsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
