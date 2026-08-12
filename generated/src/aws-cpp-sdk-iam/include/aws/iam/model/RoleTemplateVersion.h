/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/InlinePolicy.h>
#include <aws/iam/model/ManagedByTypeType.h>
#include <aws/iam/model/ParameterDefinition.h>
#include <aws/iam/model/TagTemplate.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {

/**
 * <p>Contains information about a version of an IAM role template, including the
 * configuration that is used to create roles with <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_AcquireRole.html">AcquireRole</a>.
 * This structure is returned as a response element by the <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetRoleTemplateVersion.html">GetRoleTemplateVersion</a>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RoleTemplateVersion">AWS
 * API Reference</a></p>
 */
class RoleTemplateVersion {
 public:
  AWS_IAM_API RoleTemplateVersion() = default;
  AWS_IAM_API RoleTemplateVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API RoleTemplateVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that identifies the role template.</p> <p>For
   * more information about ARNs, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
   * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
   * Reference</i>.</p>
   */
  inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
  inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
  template <typename TemplateArnT = Aws::String>
  void SetTemplateArn(TemplateArnT&& value) {
    m_templateArnHasBeenSet = true;
    m_templateArn = std::forward<TemplateArnT>(value);
  }
  template <typename TemplateArnT = Aws::String>
  RoleTemplateVersion& WithTemplateArn(TemplateArnT&& value) {
    SetTemplateArn(std::forward<TemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The friendly name that identifies the role template.</p>
   */
  inline const Aws::String& GetTemplateName() const { return m_templateName; }
  inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
  template <typename TemplateNameT = Aws::String>
  void SetTemplateName(TemplateNameT&& value) {
    m_templateNameHasBeenSet = true;
    m_templateName = std::forward<TemplateNameT>(value);
  }
  template <typename TemplateNameT = Aws::String>
  RoleTemplateVersion& WithTemplateName(TemplateNameT&& value) {
    SetTemplateName(std::forward<TemplateNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the role template version.</p>
   */
  inline const Aws::String& GetTemplateVersionId() const { return m_templateVersionId; }
  inline bool TemplateVersionIdHasBeenSet() const { return m_templateVersionIdHasBeenSet; }
  template <typename TemplateVersionIdT = Aws::String>
  void SetTemplateVersionId(TemplateVersionIdT&& value) {
    m_templateVersionIdHasBeenSet = true;
    m_templateVersionId = std::forward<TemplateVersionIdT>(value);
  }
  template <typename TemplateVersionIdT = Aws::String>
  RoleTemplateVersion& WithTemplateVersionId(TemplateVersionIdT&& value) {
    SetTemplateVersionId(std::forward<TemplateVersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the role template.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RoleTemplateVersion& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The major version number of the role template.</p>
   */
  inline int GetMajorVersion() const { return m_majorVersion; }
  inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }
  inline void SetMajorVersion(int value) {
    m_majorVersionHasBeenSet = true;
    m_majorVersion = value;
  }
  inline RoleTemplateVersion& WithMajorVersion(int value) {
    SetMajorVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minor version that the service uses by default when you create a role
   * from this template without specifying a minor version.</p>
   */
  inline int GetDefaultMinorVersion() const { return m_defaultMinorVersion; }
  inline bool DefaultMinorVersionHasBeenSet() const { return m_defaultMinorVersionHasBeenSet; }
  inline void SetDefaultMinorVersion(int value) {
    m_defaultMinorVersionHasBeenSet = true;
    m_defaultMinorVersion = value;
  }
  inline RoleTemplateVersion& WithDefaultMinorVersion(int value) {
    SetDefaultMinorVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates that the role template is managed by an Amazon Web Services
   * service.</p>
   */
  inline ManagedByTypeType GetManagedByType() const { return m_managedByType; }
  inline bool ManagedByTypeHasBeenSet() const { return m_managedByTypeHasBeenSet; }
  inline void SetManagedByType(ManagedByTypeType value) {
    m_managedByTypeHasBeenSet = true;
    m_managedByType = value;
  }
  inline RoleTemplateVersion& WithManagedByType(ManagedByTypeType value) {
    SetManagedByType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Amazon Web Services service that manages the role
   * template.</p>
   */
  inline const Aws::String& GetManagedByValue() const { return m_managedByValue; }
  inline bool ManagedByValueHasBeenSet() const { return m_managedByValueHasBeenSet; }
  template <typename ManagedByValueT = Aws::String>
  void SetManagedByValue(ManagedByValueT&& value) {
    m_managedByValueHasBeenSet = true;
    m_managedByValue = std::forward<ManagedByValueT>(value);
  }
  template <typename ManagedByValueT = Aws::String>
  RoleTemplateVersion& WithManagedByValue(ManagedByValueT&& value) {
    SetManagedByValue(std::forward<ManagedByValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the role template is enabled. When a template is disabled,
   * you cannot create roles from it.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline RoleTemplateVersion& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minor version number of this role template version.</p>
   */
  inline int GetMinorVersion() const { return m_minorVersion; }
  inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }
  inline void SetMinorVersion(int value) {
    m_minorVersionHasBeenSet = true;
    m_minorVersion = value;
  }
  inline RoleTemplateVersion& WithMinorVersion(int value) {
    SetMinorVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pattern that is used to generate the name of a role that is created from
   * this template. The pattern can include <code>@{parameter}</code> placeholders
   * that are replaced with the values you supply in the
   * <code>ReplacementValues</code> parameter of <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_AcquireRole.html">AcquireRole</a>.</p>
   */
  inline const Aws::String& GetRoleNamePattern() const { return m_roleNamePattern; }
  inline bool RoleNamePatternHasBeenSet() const { return m_roleNamePatternHasBeenSet; }
  template <typename RoleNamePatternT = Aws::String>
  void SetRoleNamePattern(RoleNamePatternT&& value) {
    m_roleNamePatternHasBeenSet = true;
    m_roleNamePattern = std::forward<RoleNamePatternT>(value);
  }
  template <typename RoleNamePatternT = Aws::String>
  RoleTemplateVersion& WithRoleNamePattern(RoleNamePatternT&& value) {
    SetRoleNamePattern(std::forward<RoleNamePatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pattern that is used to generate the path of a role that is created from
   * this template.</p>
   */
  inline const Aws::String& GetRolePathPattern() const { return m_rolePathPattern; }
  inline bool RolePathPatternHasBeenSet() const { return m_rolePathPatternHasBeenSet; }
  template <typename RolePathPatternT = Aws::String>
  void SetRolePathPattern(RolePathPatternT&& value) {
    m_rolePathPatternHasBeenSet = true;
    m_rolePathPattern = std::forward<RolePathPatternT>(value);
  }
  template <typename RolePathPatternT = Aws::String>
  RoleTemplateVersion& WithRolePathPattern(RolePathPatternT&& value) {
    SetRolePathPattern(std::forward<RolePathPatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pattern that is used to generate the description of a role that is
   * created from this template.</p>
   */
  inline const Aws::String& GetRoleDescriptionPattern() const { return m_roleDescriptionPattern; }
  inline bool RoleDescriptionPatternHasBeenSet() const { return m_roleDescriptionPatternHasBeenSet; }
  template <typename RoleDescriptionPatternT = Aws::String>
  void SetRoleDescriptionPattern(RoleDescriptionPatternT&& value) {
    m_roleDescriptionPatternHasBeenSet = true;
    m_roleDescriptionPattern = std::forward<RoleDescriptionPatternT>(value);
  }
  template <typename RoleDescriptionPatternT = Aws::String>
  RoleTemplateVersion& WithRoleDescriptionPattern(RoleDescriptionPatternT&& value) {
    SetRoleDescriptionPattern(std::forward<RoleDescriptionPatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust policy template that grants an entity permission to assume roles
   * that you create from this template.</p>
   */
  inline const Aws::String& GetAssumeRolePolicyDocumentTemplate() const { return m_assumeRolePolicyDocumentTemplate; }
  inline bool AssumeRolePolicyDocumentTemplateHasBeenSet() const { return m_assumeRolePolicyDocumentTemplateHasBeenSet; }
  template <typename AssumeRolePolicyDocumentTemplateT = Aws::String>
  void SetAssumeRolePolicyDocumentTemplate(AssumeRolePolicyDocumentTemplateT&& value) {
    m_assumeRolePolicyDocumentTemplateHasBeenSet = true;
    m_assumeRolePolicyDocumentTemplate = std::forward<AssumeRolePolicyDocumentTemplateT>(value);
  }
  template <typename AssumeRolePolicyDocumentTemplateT = Aws::String>
  RoleTemplateVersion& WithAssumeRolePolicyDocumentTemplate(AssumeRolePolicyDocumentTemplateT&& value) {
    SetAssumeRolePolicyDocumentTemplate(std::forward<AssumeRolePolicyDocumentTemplateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of inline policy templates that the service embeds in roles that you
   * create from this template.</p>
   */
  inline const Aws::Vector<InlinePolicy>& GetInlinePolicyTemplates() const { return m_inlinePolicyTemplates; }
  inline bool InlinePolicyTemplatesHasBeenSet() const { return m_inlinePolicyTemplatesHasBeenSet; }
  template <typename InlinePolicyTemplatesT = Aws::Vector<InlinePolicy>>
  void SetInlinePolicyTemplates(InlinePolicyTemplatesT&& value) {
    m_inlinePolicyTemplatesHasBeenSet = true;
    m_inlinePolicyTemplates = std::forward<InlinePolicyTemplatesT>(value);
  }
  template <typename InlinePolicyTemplatesT = Aws::Vector<InlinePolicy>>
  RoleTemplateVersion& WithInlinePolicyTemplates(InlinePolicyTemplatesT&& value) {
    SetInlinePolicyTemplates(std::forward<InlinePolicyTemplatesT>(value));
    return *this;
  }
  template <typename InlinePolicyTemplatesT = InlinePolicy>
  RoleTemplateVersion& AddInlinePolicyTemplates(InlinePolicyTemplatesT&& value) {
    m_inlinePolicyTemplatesHasBeenSet = true;
    m_inlinePolicyTemplates.emplace_back(std::forward<InlinePolicyTemplatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of the ARNs of the managed policies that the service attaches to roles
   * that you create from this template.</p>
   */
  inline const Aws::Vector<Aws::String>& GetManagedPolicyArns() const { return m_managedPolicyArns; }
  inline bool ManagedPolicyArnsHasBeenSet() const { return m_managedPolicyArnsHasBeenSet; }
  template <typename ManagedPolicyArnsT = Aws::Vector<Aws::String>>
  void SetManagedPolicyArns(ManagedPolicyArnsT&& value) {
    m_managedPolicyArnsHasBeenSet = true;
    m_managedPolicyArns = std::forward<ManagedPolicyArnsT>(value);
  }
  template <typename ManagedPolicyArnsT = Aws::Vector<Aws::String>>
  RoleTemplateVersion& WithManagedPolicyArns(ManagedPolicyArnsT&& value) {
    SetManagedPolicyArns(std::forward<ManagedPolicyArnsT>(value));
    return *this;
  }
  template <typename ManagedPolicyArnsT = Aws::String>
  RoleTemplateVersion& AddManagedPolicyArns(ManagedPolicyArnsT&& value) {
    m_managedPolicyArnsHasBeenSet = true;
    m_managedPolicyArns.emplace_back(std::forward<ManagedPolicyArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the policy that sets the permissions boundary for roles that you
   * create from this template.</p> <p>For more information about ARNs, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
   * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
   * Reference</i>.</p>
   */
  inline const Aws::String& GetPermissionBoundaryArn() const { return m_permissionBoundaryArn; }
  inline bool PermissionBoundaryArnHasBeenSet() const { return m_permissionBoundaryArnHasBeenSet; }
  template <typename PermissionBoundaryArnT = Aws::String>
  void SetPermissionBoundaryArn(PermissionBoundaryArnT&& value) {
    m_permissionBoundaryArnHasBeenSet = true;
    m_permissionBoundaryArn = std::forward<PermissionBoundaryArnT>(value);
  }
  template <typename PermissionBoundaryArnT = Aws::String>
  RoleTemplateVersion& WithPermissionBoundaryArn(PermissionBoundaryArnT&& value) {
    SetPermissionBoundaryArn(std::forward<PermissionBoundaryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of the parameters that are defined for this role template version. You
   * supply values for these parameters when you create a role with <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_AcquireRole.html">AcquireRole</a>.</p>
   */
  inline const Aws::Vector<ParameterDefinition>& GetParametersDefinition() const { return m_parametersDefinition; }
  inline bool ParametersDefinitionHasBeenSet() const { return m_parametersDefinitionHasBeenSet; }
  template <typename ParametersDefinitionT = Aws::Vector<ParameterDefinition>>
  void SetParametersDefinition(ParametersDefinitionT&& value) {
    m_parametersDefinitionHasBeenSet = true;
    m_parametersDefinition = std::forward<ParametersDefinitionT>(value);
  }
  template <typename ParametersDefinitionT = Aws::Vector<ParameterDefinition>>
  RoleTemplateVersion& WithParametersDefinition(ParametersDefinitionT&& value) {
    SetParametersDefinition(std::forward<ParametersDefinitionT>(value));
    return *this;
  }
  template <typename ParametersDefinitionT = ParameterDefinition>
  RoleTemplateVersion& AddParametersDefinition(ParametersDefinitionT&& value) {
    m_parametersDefinitionHasBeenSet = true;
    m_parametersDefinition.emplace_back(std::forward<ParametersDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tag templates that are applied to roles that are created from this
   * template.</p>
   */
  inline const Aws::Vector<TagTemplate>& GetRoleTagsTemplate() const { return m_roleTagsTemplate; }
  inline bool RoleTagsTemplateHasBeenSet() const { return m_roleTagsTemplateHasBeenSet; }
  template <typename RoleTagsTemplateT = Aws::Vector<TagTemplate>>
  void SetRoleTagsTemplate(RoleTagsTemplateT&& value) {
    m_roleTagsTemplateHasBeenSet = true;
    m_roleTagsTemplate = std::forward<RoleTagsTemplateT>(value);
  }
  template <typename RoleTagsTemplateT = Aws::Vector<TagTemplate>>
  RoleTemplateVersion& WithRoleTagsTemplate(RoleTagsTemplateT&& value) {
    SetRoleTagsTemplate(std::forward<RoleTagsTemplateT>(value));
    return *this;
  }
  template <typename RoleTagsTemplateT = TagTemplate>
  RoleTemplateVersion& AddRoleTagsTemplate(RoleTagsTemplateT&& value) {
    m_roleTagsTemplateHasBeenSet = true;
    m_roleTagsTemplate.emplace_back(std::forward<RoleTagsTemplateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum session duration (in seconds) for roles that are created from
   * this template.</p>
   */
  inline int GetMaxSessionDuration() const { return m_maxSessionDuration; }
  inline bool MaxSessionDurationHasBeenSet() const { return m_maxSessionDurationHasBeenSet; }
  inline void SetMaxSessionDuration(int value) {
    m_maxSessionDurationHasBeenSet = true;
    m_maxSessionDuration = value;
  }
  inline RoleTemplateVersion& WithMaxSessionDuration(int value) {
    SetMaxSessionDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this specific minor version of the role template is
   * enabled.</p>
   */
  inline bool GetVersionEnabled() const { return m_versionEnabled; }
  inline bool VersionEnabledHasBeenSet() const { return m_versionEnabledHasBeenSet; }
  inline void SetVersionEnabled(bool value) {
    m_versionEnabledHasBeenSet = true;
    m_versionEnabled = value;
  }
  inline RoleTemplateVersion& WithVersionEnabled(bool value) {
    SetVersionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
   * date-time format</a>, when the role template version was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTimestamp() const { return m_createTimestamp; }
  inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
  template <typename CreateTimestampT = Aws::Utils::DateTime>
  void SetCreateTimestamp(CreateTimestampT&& value) {
    m_createTimestampHasBeenSet = true;
    m_createTimestamp = std::forward<CreateTimestampT>(value);
  }
  template <typename CreateTimestampT = Aws::Utils::DateTime>
  RoleTemplateVersion& WithCreateTimestamp(CreateTimestampT&& value) {
    SetCreateTimestamp(std::forward<CreateTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
   * date-time format</a>, when the role template version was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdateTimestamp() const { return m_updateTimestamp; }
  inline bool UpdateTimestampHasBeenSet() const { return m_updateTimestampHasBeenSet; }
  template <typename UpdateTimestampT = Aws::Utils::DateTime>
  void SetUpdateTimestamp(UpdateTimestampT&& value) {
    m_updateTimestampHasBeenSet = true;
    m_updateTimestamp = std::forward<UpdateTimestampT>(value);
  }
  template <typename UpdateTimestampT = Aws::Utils::DateTime>
  RoleTemplateVersion& WithUpdateTimestamp(UpdateTimestampT&& value) {
    SetUpdateTimestamp(std::forward<UpdateTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_templateArn;

  Aws::String m_templateName;

  Aws::String m_templateVersionId;

  Aws::String m_description;

  int m_majorVersion{0};

  int m_defaultMinorVersion{0};

  ManagedByTypeType m_managedByType{ManagedByTypeType::NOT_SET};

  Aws::String m_managedByValue;

  bool m_enabled{false};

  int m_minorVersion{0};

  Aws::String m_roleNamePattern;

  Aws::String m_rolePathPattern;

  Aws::String m_roleDescriptionPattern;

  Aws::String m_assumeRolePolicyDocumentTemplate;

  Aws::Vector<InlinePolicy> m_inlinePolicyTemplates;

  Aws::Vector<Aws::String> m_managedPolicyArns;

  Aws::String m_permissionBoundaryArn;

  Aws::Vector<ParameterDefinition> m_parametersDefinition;

  Aws::Vector<TagTemplate> m_roleTagsTemplate;

  int m_maxSessionDuration{0};

  bool m_versionEnabled{false};

  Aws::Utils::DateTime m_createTimestamp{};

  Aws::Utils::DateTime m_updateTimestamp{};
  bool m_templateArnHasBeenSet = false;
  bool m_templateNameHasBeenSet = false;
  bool m_templateVersionIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_majorVersionHasBeenSet = false;
  bool m_defaultMinorVersionHasBeenSet = false;
  bool m_managedByTypeHasBeenSet = false;
  bool m_managedByValueHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_minorVersionHasBeenSet = false;
  bool m_roleNamePatternHasBeenSet = false;
  bool m_rolePathPatternHasBeenSet = false;
  bool m_roleDescriptionPatternHasBeenSet = false;
  bool m_assumeRolePolicyDocumentTemplateHasBeenSet = false;
  bool m_inlinePolicyTemplatesHasBeenSet = false;
  bool m_managedPolicyArnsHasBeenSet = false;
  bool m_permissionBoundaryArnHasBeenSet = false;
  bool m_parametersDefinitionHasBeenSet = false;
  bool m_roleTagsTemplateHasBeenSet = false;
  bool m_maxSessionDurationHasBeenSet = false;
  bool m_versionEnabledHasBeenSet = false;
  bool m_createTimestampHasBeenSet = false;
  bool m_updateTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
