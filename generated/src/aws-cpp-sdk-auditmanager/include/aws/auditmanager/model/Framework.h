/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/FrameworkType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/auditmanager/model/ControlSet.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The file that's used to structure and automate Audit Manager assessments for
   * a given compliance standard. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Framework">AWS
   * API Reference</a></p>
   */
  class Framework
  {
  public:
    AWS_AUDITMANAGER_API Framework();
    AWS_AUDITMANAGER_API Framework(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Framework& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Framework& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Framework& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Framework& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Framework& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Framework& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Framework& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the framework. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Framework& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Framework& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Framework& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the framework is a standard framework or a custom
     * framework.</p>
     */
    inline const FrameworkType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FrameworkType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FrameworkType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Framework& WithType(const FrameworkType& value) { SetType(value); return *this;}
    inline Framework& WithType(FrameworkType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compliance type that the framework supports, such as CIS or HIPAA. </p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }
    inline Framework& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}
    inline Framework& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}
    inline Framework& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the framework. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Framework& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Framework& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Framework& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The logo that's associated with the framework. </p>
     */
    inline const Aws::String& GetLogo() const{ return m_logo; }
    inline bool LogoHasBeenSet() const { return m_logoHasBeenSet; }
    inline void SetLogo(const Aws::String& value) { m_logoHasBeenSet = true; m_logo = value; }
    inline void SetLogo(Aws::String&& value) { m_logoHasBeenSet = true; m_logo = std::move(value); }
    inline void SetLogo(const char* value) { m_logoHasBeenSet = true; m_logo.assign(value); }
    inline Framework& WithLogo(const Aws::String& value) { SetLogo(value); return *this;}
    inline Framework& WithLogo(Aws::String&& value) { SetLogo(std::move(value)); return *this;}
    inline Framework& WithLogo(const char* value) { SetLogo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The control data sources where Audit Manager collects evidence from.</p>
     */
    inline const Aws::String& GetControlSources() const{ return m_controlSources; }
    inline bool ControlSourcesHasBeenSet() const { return m_controlSourcesHasBeenSet; }
    inline void SetControlSources(const Aws::String& value) { m_controlSourcesHasBeenSet = true; m_controlSources = value; }
    inline void SetControlSources(Aws::String&& value) { m_controlSourcesHasBeenSet = true; m_controlSources = std::move(value); }
    inline void SetControlSources(const char* value) { m_controlSourcesHasBeenSet = true; m_controlSources.assign(value); }
    inline Framework& WithControlSources(const Aws::String& value) { SetControlSources(value); return *this;}
    inline Framework& WithControlSources(Aws::String&& value) { SetControlSources(std::move(value)); return *this;}
    inline Framework& WithControlSources(const char* value) { SetControlSources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline const Aws::Vector<ControlSet>& GetControlSets() const{ return m_controlSets; }
    inline bool ControlSetsHasBeenSet() const { return m_controlSetsHasBeenSet; }
    inline void SetControlSets(const Aws::Vector<ControlSet>& value) { m_controlSetsHasBeenSet = true; m_controlSets = value; }
    inline void SetControlSets(Aws::Vector<ControlSet>&& value) { m_controlSetsHasBeenSet = true; m_controlSets = std::move(value); }
    inline Framework& WithControlSets(const Aws::Vector<ControlSet>& value) { SetControlSets(value); return *this;}
    inline Framework& WithControlSets(Aws::Vector<ControlSet>&& value) { SetControlSets(std::move(value)); return *this;}
    inline Framework& AddControlSets(const ControlSet& value) { m_controlSetsHasBeenSet = true; m_controlSets.push_back(value); return *this; }
    inline Framework& AddControlSets(ControlSet&& value) { m_controlSetsHasBeenSet = true; m_controlSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time when the framework was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Framework& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Framework& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the framework was most recently updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline Framework& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline Framework& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user or role that created the framework. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline Framework& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline Framework& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline Framework& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user or role that most recently updated the framework. </p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }
    inline Framework& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}
    inline Framework& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}
    inline Framework& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tags that are associated with the framework. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Framework& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Framework& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Framework& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Framework& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Framework& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Framework& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Framework& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Framework& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Framework& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FrameworkType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_logo;
    bool m_logoHasBeenSet = false;

    Aws::String m_controlSources;
    bool m_controlSourcesHasBeenSet = false;

    Aws::Vector<ControlSet> m_controlSets;
    bool m_controlSetsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
