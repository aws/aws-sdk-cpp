/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackSetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackSetDriftDetectionDetails.h>
#include <aws/cloudformation/model/AutoDeployment.h>
#include <aws/cloudformation/model/PermissionModels.h>
#include <aws/cloudformation/model/ManagedExecution.h>
#include <aws/cloudformation/model/Parameter.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/Tag.h>
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
   * <p>A structure that contains information about a StackSet. With StackSets, you
   * can provision stacks across Amazon Web Services accounts and Regions from a
   * single CloudFormation template. Each stack is based on the same CloudFormation
   * template, but you can customize individual stacks using
   * parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSet">AWS
   * API Reference</a></p>
   */
  class StackSet
  {
  public:
    AWS_CLOUDFORMATION_API StackSet() = default;
    AWS_CLOUDFORMATION_API StackSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name that's associated with the StackSet.</p>
     */
    inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    template<typename StackSetNameT = Aws::String>
    void SetStackSetName(StackSetNameT&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::forward<StackSetNameT>(value); }
    template<typename StackSetNameT = Aws::String>
    StackSet& WithStackSetName(StackSetNameT&& value) { SetStackSetName(std::forward<StackSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the StackSet.</p>
     */
    inline const Aws::String& GetStackSetId() const { return m_stackSetId; }
    inline bool StackSetIdHasBeenSet() const { return m_stackSetIdHasBeenSet; }
    template<typename StackSetIdT = Aws::String>
    void SetStackSetId(StackSetIdT&& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = std::forward<StackSetIdT>(value); }
    template<typename StackSetIdT = Aws::String>
    StackSet& WithStackSetId(StackSetIdT&& value) { SetStackSetId(std::forward<StackSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the StackSet that you specify when the StackSet is created
     * or updated.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StackSet& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the StackSet.</p>
     */
    inline StackSetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StackSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StackSet& WithStatus(StackSetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure that contains the body of the template that was used to create
     * or update the StackSet.</p>
     */
    inline const Aws::String& GetTemplateBody() const { return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    template<typename TemplateBodyT = Aws::String>
    void SetTemplateBody(TemplateBodyT&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::forward<TemplateBodyT>(value); }
    template<typename TemplateBodyT = Aws::String>
    StackSet& WithTemplateBody(TemplateBodyT&& value) { SetTemplateBody(std::forward<TemplateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of input parameters for a StackSet.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<Parameter>>
    StackSet& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = Parameter>
    StackSet& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capabilities that are allowed in the StackSet. Some StackSet templates
     * might include resources that can affect permissions in your Amazon Web Services
     * account—for example, by creating new Identity and Access Management (IAM) users.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/control-access-with-iam.html#using-iam-capabilities">Acknowledging
     * IAM resources in CloudFormation templates</a>.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    StackSet& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    inline StackSet& AddCapabilities(Capability value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags that specify information about the StackSet. A maximum number
     * of 50 tags can be specified.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StackSet& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StackSet& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the StackSet.</p>
     */
    inline const Aws::String& GetStackSetARN() const { return m_stackSetARN; }
    inline bool StackSetARNHasBeenSet() const { return m_stackSetARNHasBeenSet; }
    template<typename StackSetARNT = Aws::String>
    void SetStackSetARN(StackSetARNT&& value) { m_stackSetARNHasBeenSet = true; m_stackSetARN = std::forward<StackSetARNT>(value); }
    template<typename StackSetARNT = Aws::String>
    StackSet& WithStackSetARN(StackSetARNT&& value) { SetStackSetARN(std::forward<StackSetARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to create or update the
     * stack set.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific StackSets within the same administrator account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites
     * for using CloudFormation StackSets</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetAdministrationRoleARN() const { return m_administrationRoleARN; }
    inline bool AdministrationRoleARNHasBeenSet() const { return m_administrationRoleARNHasBeenSet; }
    template<typename AdministrationRoleARNT = Aws::String>
    void SetAdministrationRoleARN(AdministrationRoleARNT&& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = std::forward<AdministrationRoleARNT>(value); }
    template<typename AdministrationRoleARNT = Aws::String>
    StackSet& WithAdministrationRoleARN(AdministrationRoleARNT&& value) { SetAdministrationRoleARN(std::forward<AdministrationRoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM execution role used to create or update the StackSet.</p>
     * <p>Use customized execution roles to control which stack resources users and
     * groups can include in their StackSets.</p>
     */
    inline const Aws::String& GetExecutionRoleName() const { return m_executionRoleName; }
    inline bool ExecutionRoleNameHasBeenSet() const { return m_executionRoleNameHasBeenSet; }
    template<typename ExecutionRoleNameT = Aws::String>
    void SetExecutionRoleName(ExecutionRoleNameT&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::forward<ExecutionRoleNameT>(value); }
    template<typename ExecutionRoleNameT = Aws::String>
    StackSet& WithExecutionRoleName(ExecutionRoleNameT&& value) { SetExecutionRoleName(std::forward<ExecutionRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the drift status of the StackSet.</p> <p>For
     * StackSets, contains information about the last <i>completed</i> drift operation
     * performed on the StackSet. Information about drift operations currently in
     * progress isn't included.</p>
     */
    inline const StackSetDriftDetectionDetails& GetStackSetDriftDetectionDetails() const { return m_stackSetDriftDetectionDetails; }
    inline bool StackSetDriftDetectionDetailsHasBeenSet() const { return m_stackSetDriftDetectionDetailsHasBeenSet; }
    template<typename StackSetDriftDetectionDetailsT = StackSetDriftDetectionDetails>
    void SetStackSetDriftDetectionDetails(StackSetDriftDetectionDetailsT&& value) { m_stackSetDriftDetectionDetailsHasBeenSet = true; m_stackSetDriftDetectionDetails = std::forward<StackSetDriftDetectionDetailsT>(value); }
    template<typename StackSetDriftDetectionDetailsT = StackSetDriftDetectionDetails>
    StackSet& WithStackSetDriftDetectionDetails(StackSetDriftDetectionDetailsT&& value) { SetStackSetDriftDetectionDetails(std::forward<StackSetDriftDetectionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether StackSets automatically deploys to Organizations accounts
     * that are added to a target organization or organizational unit (OU). Valid only
     * if the StackSet uses service-managed permissions.</p>
     */
    inline const AutoDeployment& GetAutoDeployment() const { return m_autoDeployment; }
    inline bool AutoDeploymentHasBeenSet() const { return m_autoDeploymentHasBeenSet; }
    template<typename AutoDeploymentT = AutoDeployment>
    void SetAutoDeployment(AutoDeploymentT&& value) { m_autoDeploymentHasBeenSet = true; m_autoDeployment = std::forward<AutoDeploymentT>(value); }
    template<typename AutoDeploymentT = AutoDeployment>
    StackSet& WithAutoDeployment(AutoDeploymentT&& value) { SetAutoDeployment(std::forward<AutoDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes how the IAM roles required for StackSet operations are created.</p>
     * <ul> <li> <p>With <code>self-managed</code> permissions, you must create the
     * administrator and execution roles required to deploy to target accounts. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * self-managed permissions</a>.</p> </li> <li> <p>With
     * <code>service-managed</code> permissions, StackSets automatically creates the
     * IAM roles required to deploy to accounts managed by Organizations. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-activate-trusted-access.html">Activate
     * trusted access for StackSets with Organizations</a>.</p> </li> </ul>
     */
    inline PermissionModels GetPermissionModel() const { return m_permissionModel; }
    inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }
    inline void SetPermissionModel(PermissionModels value) { m_permissionModelHasBeenSet = true; m_permissionModel = value; }
    inline StackSet& WithPermissionModel(PermissionModels value) { SetPermissionModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Service-managed permissions] The organization root ID or organizational unit
     * (OU) IDs that you specified for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DeploymentTargets.html">DeploymentTargets</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const { return m_organizationalUnitIds; }
    inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }
    template<typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = std::forward<OrganizationalUnitIdsT>(value); }
    template<typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
    StackSet& WithOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { SetOrganizationalUnitIds(std::forward<OrganizationalUnitIdsT>(value)); return *this;}
    template<typename OrganizationalUnitIdsT = Aws::String>
    StackSet& AddOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.emplace_back(std::forward<OrganizationalUnitIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes whether StackSets performs non-conflicting operations concurrently
     * and queues conflicting operations.</p>
     */
    inline const ManagedExecution& GetManagedExecution() const { return m_managedExecution; }
    inline bool ManagedExecutionHasBeenSet() const { return m_managedExecutionHasBeenSet; }
    template<typename ManagedExecutionT = ManagedExecution>
    void SetManagedExecution(ManagedExecutionT&& value) { m_managedExecutionHasBeenSet = true; m_managedExecution = std::forward<ManagedExecutionT>(value); }
    template<typename ManagedExecutionT = ManagedExecution>
    StackSet& WithManagedExecution(ManagedExecutionT&& value) { SetManagedExecution(std::forward<ManagedExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of all Amazon Web Services Regions the given StackSet has
     * stack instances deployed in. The Amazon Web Services Regions list output is in
     * no particular order.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    StackSet& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    StackSet& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::String m_stackSetId;
    bool m_stackSetIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StackSetStatus m_status{StackSetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_stackSetARN;
    bool m_stackSetARNHasBeenSet = false;

    Aws::String m_administrationRoleARN;
    bool m_administrationRoleARNHasBeenSet = false;

    Aws::String m_executionRoleName;
    bool m_executionRoleNameHasBeenSet = false;

    StackSetDriftDetectionDetails m_stackSetDriftDetectionDetails;
    bool m_stackSetDriftDetectionDetailsHasBeenSet = false;

    AutoDeployment m_autoDeployment;
    bool m_autoDeploymentHasBeenSet = false;

    PermissionModels m_permissionModel{PermissionModels::NOT_SET};
    bool m_permissionModelHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitIds;
    bool m_organizationalUnitIdsHasBeenSet = false;

    ManagedExecution m_managedExecution;
    bool m_managedExecutionHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
