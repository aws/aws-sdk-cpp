/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/PolicyAction.h>
#include <aws/cloudformation/model/ChangeAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/Replacement.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ModuleInfo.h>
#include <aws/cloudformation/model/ResourceAttribute.h>
#include <aws/cloudformation/model/ResourceChangeDetail.h>
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
   * <p>The <code>ResourceChange</code> structure describes the resource and the
   * action that CloudFormation will perform on it if you execute this change
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ResourceChange">AWS
   * API Reference</a></p>
   */
  class ResourceChange
  {
  public:
    AWS_CLOUDFORMATION_API ResourceChange();
    AWS_CLOUDFORMATION_API ResourceChange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ResourceChange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The action that will be taken on the physical resource when the change set is
     * executed.</p> <ul> <li> <p> <code>Delete</code> The resource will be
     * deleted.</p> </li> <li> <p> <code>Retain</code> The resource will be
     * retained.</p> </li> <li> <p> <code>Snapshot</code> The resource will have a
     * snapshot taken.</p> </li> <li> <p> <code>ReplaceAndDelete</code> The resource
     * will be replaced and then deleted.</p> </li> <li> <p>
     * <code>ReplaceAndRetain</code> The resource will be replaced and then
     * retained.</p> </li> <li> <p> <code>ReplaceAndSnapshot</code> The resource will
     * be replaced and then have a snapshot taken.</p> </li> </ul>
     */
    inline const PolicyAction& GetPolicyAction() const{ return m_policyAction; }
    inline bool PolicyActionHasBeenSet() const { return m_policyActionHasBeenSet; }
    inline void SetPolicyAction(const PolicyAction& value) { m_policyActionHasBeenSet = true; m_policyAction = value; }
    inline void SetPolicyAction(PolicyAction&& value) { m_policyActionHasBeenSet = true; m_policyAction = std::move(value); }
    inline ResourceChange& WithPolicyAction(const PolicyAction& value) { SetPolicyAction(value); return *this;}
    inline ResourceChange& WithPolicyAction(PolicyAction&& value) { SetPolicyAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that CloudFormation takes on the resource, such as
     * <code>Add</code> (adds a new resource), <code>Modify</code> (changes a
     * resource), <code>Remove</code> (deletes a resource), <code>Import</code>
     * (imports a resource), or <code>Dynamic</code> (exact action for the resource
     * can't be determined).</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline ResourceChange& WithAction(const ChangeAction& value) { SetAction(value); return *this;}
    inline ResourceChange& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }
    inline ResourceChange& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}
    inline ResourceChange& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}
    inline ResourceChange& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource's physical ID (resource name). Resources that you are adding
     * don't have physical IDs because they haven't been created.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }
    inline ResourceChange& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}
    inline ResourceChange& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(std::move(value)); return *this;}
    inline ResourceChange& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ResourceChange& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ResourceChange& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ResourceChange& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the <code>Modify</code> action, indicates whether CloudFormation will
     * replace the resource by creating a new one and deleting the old one. This value
     * depends on the value of the <code>RequiresRecreation</code> property in the
     * <code>ResourceTargetDefinition</code> structure. For example, if the
     * <code>RequiresRecreation</code> field is <code>Always</code> and the
     * <code>Evaluation</code> field is <code>Static</code>, <code>Replacement</code>
     * is <code>True</code>. If the <code>RequiresRecreation</code> field is
     * <code>Always</code> and the <code>Evaluation</code> field is
     * <code>Dynamic</code>, <code>Replacement</code> is <code>Conditional</code>.</p>
     * <p>If you have multiple changes with different <code>RequiresRecreation</code>
     * values, the <code>Replacement</code> value depends on the change with the most
     * impact. A <code>RequiresRecreation</code> value of <code>Always</code> has the
     * most impact, followed by <code>Conditional</code>, and then
     * <code>Never</code>.</p>
     */
    inline const Replacement& GetReplacement() const{ return m_replacement; }
    inline bool ReplacementHasBeenSet() const { return m_replacementHasBeenSet; }
    inline void SetReplacement(const Replacement& value) { m_replacementHasBeenSet = true; m_replacement = value; }
    inline void SetReplacement(Replacement&& value) { m_replacementHasBeenSet = true; m_replacement = std::move(value); }
    inline ResourceChange& WithReplacement(const Replacement& value) { SetReplacement(value); return *this;}
    inline ResourceChange& WithReplacement(Replacement&& value) { SetReplacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the <code>Modify</code> action, indicates which resource attribute is
     * triggering this update, such as a change in the resource attribute's
     * <code>Metadata</code>, <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline const Aws::Vector<ResourceAttribute>& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Aws::Vector<ResourceAttribute>& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Aws::Vector<ResourceAttribute>&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline ResourceChange& WithScope(const Aws::Vector<ResourceAttribute>& value) { SetScope(value); return *this;}
    inline ResourceChange& WithScope(Aws::Vector<ResourceAttribute>&& value) { SetScope(std::move(value)); return *this;}
    inline ResourceChange& AddScope(const ResourceAttribute& value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }
    inline ResourceChange& AddScope(ResourceAttribute&& value) { m_scopeHasBeenSet = true; m_scope.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For the <code>Modify</code> action, a list of
     * <code>ResourceChangeDetail</code> structures that describes the changes that
     * CloudFormation will make to the resource.</p>
     */
    inline const Aws::Vector<ResourceChangeDetail>& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::Vector<ResourceChangeDetail>& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::Vector<ResourceChangeDetail>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline ResourceChange& WithDetails(const Aws::Vector<ResourceChangeDetail>& value) { SetDetails(value); return *this;}
    inline ResourceChange& WithDetails(Aws::Vector<ResourceChangeDetail>&& value) { SetDetails(std::move(value)); return *this;}
    inline ResourceChange& AddDetails(const ResourceChangeDetail& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }
    inline ResourceChange& AddDetails(ResourceChangeDetail&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The change set ID of the nested change set.</p>
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }
    inline bool ChangeSetIdHasBeenSet() const { return m_changeSetIdHasBeenSet; }
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = value; }
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::move(value); }
    inline void SetChangeSetId(const char* value) { m_changeSetIdHasBeenSet = true; m_changeSetId.assign(value); }
    inline ResourceChange& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}
    inline ResourceChange& WithChangeSetId(Aws::String&& value) { SetChangeSetId(std::move(value)); return *this;}
    inline ResourceChange& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the module from which the resource was created, if
     * the resource was created from a module included in the stack template.</p>
     */
    inline const ModuleInfo& GetModuleInfo() const{ return m_moduleInfo; }
    inline bool ModuleInfoHasBeenSet() const { return m_moduleInfoHasBeenSet; }
    inline void SetModuleInfo(const ModuleInfo& value) { m_moduleInfoHasBeenSet = true; m_moduleInfo = value; }
    inline void SetModuleInfo(ModuleInfo&& value) { m_moduleInfoHasBeenSet = true; m_moduleInfo = std::move(value); }
    inline ResourceChange& WithModuleInfo(const ModuleInfo& value) { SetModuleInfo(value); return *this;}
    inline ResourceChange& WithModuleInfo(ModuleInfo&& value) { SetModuleInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encoded JSON string containing the context of the resource before the
     * change is executed.</p>
     */
    inline const Aws::String& GetBeforeContext() const{ return m_beforeContext; }
    inline bool BeforeContextHasBeenSet() const { return m_beforeContextHasBeenSet; }
    inline void SetBeforeContext(const Aws::String& value) { m_beforeContextHasBeenSet = true; m_beforeContext = value; }
    inline void SetBeforeContext(Aws::String&& value) { m_beforeContextHasBeenSet = true; m_beforeContext = std::move(value); }
    inline void SetBeforeContext(const char* value) { m_beforeContextHasBeenSet = true; m_beforeContext.assign(value); }
    inline ResourceChange& WithBeforeContext(const Aws::String& value) { SetBeforeContext(value); return *this;}
    inline ResourceChange& WithBeforeContext(Aws::String&& value) { SetBeforeContext(std::move(value)); return *this;}
    inline ResourceChange& WithBeforeContext(const char* value) { SetBeforeContext(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encoded JSON string containing the context of the resource after the
     * change is executed.</p>
     */
    inline const Aws::String& GetAfterContext() const{ return m_afterContext; }
    inline bool AfterContextHasBeenSet() const { return m_afterContextHasBeenSet; }
    inline void SetAfterContext(const Aws::String& value) { m_afterContextHasBeenSet = true; m_afterContext = value; }
    inline void SetAfterContext(Aws::String&& value) { m_afterContextHasBeenSet = true; m_afterContext = std::move(value); }
    inline void SetAfterContext(const char* value) { m_afterContextHasBeenSet = true; m_afterContext.assign(value); }
    inline ResourceChange& WithAfterContext(const Aws::String& value) { SetAfterContext(value); return *this;}
    inline ResourceChange& WithAfterContext(Aws::String&& value) { SetAfterContext(std::move(value)); return *this;}
    inline ResourceChange& WithAfterContext(const char* value) { SetAfterContext(value); return *this;}
    ///@}
  private:

    PolicyAction m_policyAction;
    bool m_policyActionHasBeenSet = false;

    ChangeAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Replacement m_replacement;
    bool m_replacementHasBeenSet = false;

    Aws::Vector<ResourceAttribute> m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<ResourceChangeDetail> m_details;
    bool m_detailsHasBeenSet = false;

    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet = false;

    ModuleInfo m_moduleInfo;
    bool m_moduleInfoHasBeenSet = false;

    Aws::String m_beforeContext;
    bool m_beforeContextHasBeenSet = false;

    Aws::String m_afterContext;
    bool m_afterContextHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
