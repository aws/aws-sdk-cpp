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
    AWS_CLOUDFORMATION_API ResourceChange() = default;
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
    inline PolicyAction GetPolicyAction() const { return m_policyAction; }
    inline bool PolicyActionHasBeenSet() const { return m_policyActionHasBeenSet; }
    inline void SetPolicyAction(PolicyAction value) { m_policyActionHasBeenSet = true; m_policyAction = value; }
    inline ResourceChange& WithPolicyAction(PolicyAction value) { SetPolicyAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that CloudFormation takes on the resource, such as
     * <code>Add</code> (adds a new resource), <code>Modify</code> (changes a
     * resource), <code>Remove</code> (deletes a resource), <code>Import</code>
     * (imports a resource), or <code>Dynamic</code> (exact action for the resource
     * can't be determined).</p>
     */
    inline ChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline ResourceChange& WithAction(ChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const { return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    template<typename LogicalResourceIdT = Aws::String>
    void SetLogicalResourceId(LogicalResourceIdT&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::forward<LogicalResourceIdT>(value); }
    template<typename LogicalResourceIdT = Aws::String>
    ResourceChange& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource's physical ID (resource name). Resources that you are adding
     * don't have physical IDs because they haven't been created.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const { return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    template<typename PhysicalResourceIdT = Aws::String>
    void SetPhysicalResourceId(PhysicalResourceIdT&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::forward<PhysicalResourceIdT>(value); }
    template<typename PhysicalResourceIdT = Aws::String>
    ResourceChange& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ResourceChange& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
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
    inline Replacement GetReplacement() const { return m_replacement; }
    inline bool ReplacementHasBeenSet() const { return m_replacementHasBeenSet; }
    inline void SetReplacement(Replacement value) { m_replacementHasBeenSet = true; m_replacement = value; }
    inline ResourceChange& WithReplacement(Replacement value) { SetReplacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the <code>Modify</code> action, indicates which resource attribute is
     * triggering this update, such as a change in the resource attribute's
     * <code>Metadata</code>, <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline const Aws::Vector<ResourceAttribute>& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::Vector<ResourceAttribute>>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::Vector<ResourceAttribute>>
    ResourceChange& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    inline ResourceChange& AddScope(ResourceAttribute value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For the <code>Modify</code> action, a list of
     * <code>ResourceChangeDetail</code> structures that describes the changes that
     * CloudFormation will make to the resource.</p>
     */
    inline const Aws::Vector<ResourceChangeDetail>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Vector<ResourceChangeDetail>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Vector<ResourceChangeDetail>>
    ResourceChange& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    template<typename DetailsT = ResourceChangeDetail>
    ResourceChange& AddDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details.emplace_back(std::forward<DetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The change set ID of the nested change set.</p>
     */
    inline const Aws::String& GetChangeSetId() const { return m_changeSetId; }
    inline bool ChangeSetIdHasBeenSet() const { return m_changeSetIdHasBeenSet; }
    template<typename ChangeSetIdT = Aws::String>
    void SetChangeSetId(ChangeSetIdT&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::forward<ChangeSetIdT>(value); }
    template<typename ChangeSetIdT = Aws::String>
    ResourceChange& WithChangeSetId(ChangeSetIdT&& value) { SetChangeSetId(std::forward<ChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the module from which the resource was created, if
     * the resource was created from a module included in the stack template.</p>
     */
    inline const ModuleInfo& GetModuleInfo() const { return m_moduleInfo; }
    inline bool ModuleInfoHasBeenSet() const { return m_moduleInfoHasBeenSet; }
    template<typename ModuleInfoT = ModuleInfo>
    void SetModuleInfo(ModuleInfoT&& value) { m_moduleInfoHasBeenSet = true; m_moduleInfo = std::forward<ModuleInfoT>(value); }
    template<typename ModuleInfoT = ModuleInfo>
    ResourceChange& WithModuleInfo(ModuleInfoT&& value) { SetModuleInfo(std::forward<ModuleInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encoded JSON string that contains the context of the resource before the
     * change is executed.</p>
     */
    inline const Aws::String& GetBeforeContext() const { return m_beforeContext; }
    inline bool BeforeContextHasBeenSet() const { return m_beforeContextHasBeenSet; }
    template<typename BeforeContextT = Aws::String>
    void SetBeforeContext(BeforeContextT&& value) { m_beforeContextHasBeenSet = true; m_beforeContext = std::forward<BeforeContextT>(value); }
    template<typename BeforeContextT = Aws::String>
    ResourceChange& WithBeforeContext(BeforeContextT&& value) { SetBeforeContext(std::forward<BeforeContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encoded JSON string that contains the context of the resource after the
     * change is executed.</p>
     */
    inline const Aws::String& GetAfterContext() const { return m_afterContext; }
    inline bool AfterContextHasBeenSet() const { return m_afterContextHasBeenSet; }
    template<typename AfterContextT = Aws::String>
    void SetAfterContext(AfterContextT&& value) { m_afterContextHasBeenSet = true; m_afterContext = std::forward<AfterContextT>(value); }
    template<typename AfterContextT = Aws::String>
    ResourceChange& WithAfterContext(AfterContextT&& value) { SetAfterContext(std::forward<AfterContextT>(value)); return *this;}
    ///@}
  private:

    PolicyAction m_policyAction{PolicyAction::NOT_SET};
    bool m_policyActionHasBeenSet = false;

    ChangeAction m_action{ChangeAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Replacement m_replacement{Replacement::NOT_SET};
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
