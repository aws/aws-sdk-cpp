/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/auditmanager/model/CreateAssessmentFrameworkControlSet.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class CreateAssessmentFrameworkRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssessmentFramework"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The name of the new custom framework. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAssessmentFrameworkRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional description for the new custom framework. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateAssessmentFrameworkRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline const Aws::String& GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    template<typename ComplianceTypeT = Aws::String>
    void SetComplianceType(ComplianceTypeT&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::forward<ComplianceTypeT>(value); }
    template<typename ComplianceTypeT = Aws::String>
    CreateAssessmentFrameworkRequest& WithComplianceType(ComplianceTypeT&& value) { SetComplianceType(std::forward<ComplianceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The control sets that are associated with the framework. </p>  <p>The
     * <code>Controls</code> object returns a partial response when called through
     * Framework APIs. For a complete <code>Controls</code> object, use
     * <code>GetControl</code>.</p> 
     */
    inline const Aws::Vector<CreateAssessmentFrameworkControlSet>& GetControlSets() const { return m_controlSets; }
    inline bool ControlSetsHasBeenSet() const { return m_controlSetsHasBeenSet; }
    template<typename ControlSetsT = Aws::Vector<CreateAssessmentFrameworkControlSet>>
    void SetControlSets(ControlSetsT&& value) { m_controlSetsHasBeenSet = true; m_controlSets = std::forward<ControlSetsT>(value); }
    template<typename ControlSetsT = Aws::Vector<CreateAssessmentFrameworkControlSet>>
    CreateAssessmentFrameworkRequest& WithControlSets(ControlSetsT&& value) { SetControlSets(std::forward<ControlSetsT>(value)); return *this;}
    template<typename ControlSetsT = CreateAssessmentFrameworkControlSet>
    CreateAssessmentFrameworkRequest& AddControlSets(ControlSetsT&& value) { m_controlSetsHasBeenSet = true; m_controlSets.emplace_back(std::forward<ControlSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateAssessmentFrameworkRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAssessmentFrameworkRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::Vector<CreateAssessmentFrameworkControlSet> m_controlSets;
    bool m_controlSetsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
