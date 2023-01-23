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
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssessmentFramework"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of the new custom framework. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the new custom framework. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the new custom framework. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the new custom framework. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the new custom framework. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the new custom framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the new custom framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the new custom framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> An optional description for the new custom framework. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> An optional description for the new custom framework. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> An optional description for the new custom framework. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> An optional description for the new custom framework. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> An optional description for the new custom framework. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> An optional description for the new custom framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> An optional description for the new custom framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> An optional description for the new custom framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}


    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline const Aws::Vector<CreateAssessmentFrameworkControlSet>& GetControlSets() const{ return m_controlSets; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline bool ControlSetsHasBeenSet() const { return m_controlSetsHasBeenSet; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline void SetControlSets(const Aws::Vector<CreateAssessmentFrameworkControlSet>& value) { m_controlSetsHasBeenSet = true; m_controlSets = value; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline void SetControlSets(Aws::Vector<CreateAssessmentFrameworkControlSet>&& value) { m_controlSetsHasBeenSet = true; m_controlSets = std::move(value); }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithControlSets(const Aws::Vector<CreateAssessmentFrameworkControlSet>& value) { SetControlSets(value); return *this;}

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithControlSets(Aws::Vector<CreateAssessmentFrameworkControlSet>&& value) { SetControlSets(std::move(value)); return *this;}

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& AddControlSets(const CreateAssessmentFrameworkControlSet& value) { m_controlSetsHasBeenSet = true; m_controlSets.push_back(value); return *this; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& AddControlSets(CreateAssessmentFrameworkControlSet&& value) { m_controlSetsHasBeenSet = true; m_controlSets.push_back(std::move(value)); return *this; }


    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline CreateAssessmentFrameworkRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
