/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentReportsDestination.h>
#include <aws/auditmanager/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/auditmanager/model/Role.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class CreateAssessmentRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API CreateAssessmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssessment"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The name of the assessment to be created. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateAssessmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAssessmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAssessmentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The optional description of the assessment to be created. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateAssessmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateAssessmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateAssessmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The assessment report storage destination for the assessment that's being
     * created. </p>
     */
    inline const AssessmentReportsDestination& GetAssessmentReportsDestination() const{ return m_assessmentReportsDestination; }
    inline bool AssessmentReportsDestinationHasBeenSet() const { return m_assessmentReportsDestinationHasBeenSet; }
    inline void SetAssessmentReportsDestination(const AssessmentReportsDestination& value) { m_assessmentReportsDestinationHasBeenSet = true; m_assessmentReportsDestination = value; }
    inline void SetAssessmentReportsDestination(AssessmentReportsDestination&& value) { m_assessmentReportsDestinationHasBeenSet = true; m_assessmentReportsDestination = std::move(value); }
    inline CreateAssessmentRequest& WithAssessmentReportsDestination(const AssessmentReportsDestination& value) { SetAssessmentReportsDestination(value); return *this;}
    inline CreateAssessmentRequest& WithAssessmentReportsDestination(AssessmentReportsDestination&& value) { SetAssessmentReportsDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Scope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline CreateAssessmentRequest& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline CreateAssessmentRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of roles for the assessment. </p>
     */
    inline const Aws::Vector<Role>& GetRoles() const{ return m_roles; }
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }
    inline void SetRoles(const Aws::Vector<Role>& value) { m_rolesHasBeenSet = true; m_roles = value; }
    inline void SetRoles(Aws::Vector<Role>&& value) { m_rolesHasBeenSet = true; m_roles = std::move(value); }
    inline CreateAssessmentRequest& WithRoles(const Aws::Vector<Role>& value) { SetRoles(value); return *this;}
    inline CreateAssessmentRequest& WithRoles(Aws::Vector<Role>&& value) { SetRoles(std::move(value)); return *this;}
    inline CreateAssessmentRequest& AddRoles(const Role& value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }
    inline CreateAssessmentRequest& AddRoles(Role&& value) { m_rolesHasBeenSet = true; m_roles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The identifier for the framework that the assessment will be created from.
     * </p>
     */
    inline const Aws::String& GetFrameworkId() const{ return m_frameworkId; }
    inline bool FrameworkIdHasBeenSet() const { return m_frameworkIdHasBeenSet; }
    inline void SetFrameworkId(const Aws::String& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = value; }
    inline void SetFrameworkId(Aws::String&& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = std::move(value); }
    inline void SetFrameworkId(const char* value) { m_frameworkIdHasBeenSet = true; m_frameworkId.assign(value); }
    inline CreateAssessmentRequest& WithFrameworkId(const Aws::String& value) { SetFrameworkId(value); return *this;}
    inline CreateAssessmentRequest& WithFrameworkId(Aws::String&& value) { SetFrameworkId(std::move(value)); return *this;}
    inline CreateAssessmentRequest& WithFrameworkId(const char* value) { SetFrameworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tags that are associated with the assessment. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAssessmentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateAssessmentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAssessmentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateAssessmentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAssessmentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAssessmentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateAssessmentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAssessmentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAssessmentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AssessmentReportsDestination m_assessmentReportsDestination;
    bool m_assessmentReportsDestinationHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<Role> m_roles;
    bool m_rolesHasBeenSet = false;

    Aws::String m_frameworkId;
    bool m_frameworkIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
