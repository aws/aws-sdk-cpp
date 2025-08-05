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
    AWS_AUDITMANAGER_API Framework() = default;
    AWS_AUDITMANAGER_API Framework(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Framework& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Framework& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Framework& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the framework. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Framework& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the framework is a standard framework or a custom
     * framework.</p>
     */
    inline FrameworkType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FrameworkType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Framework& WithType(FrameworkType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compliance type that the framework supports, such as CIS or HIPAA. </p>
     */
    inline const Aws::String& GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    template<typename ComplianceTypeT = Aws::String>
    void SetComplianceType(ComplianceTypeT&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::forward<ComplianceTypeT>(value); }
    template<typename ComplianceTypeT = Aws::String>
    Framework& WithComplianceType(ComplianceTypeT&& value) { SetComplianceType(std::forward<ComplianceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the framework. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Framework& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The logo that's associated with the framework. </p>
     */
    inline const Aws::String& GetLogo() const { return m_logo; }
    inline bool LogoHasBeenSet() const { return m_logoHasBeenSet; }
    template<typename LogoT = Aws::String>
    void SetLogo(LogoT&& value) { m_logoHasBeenSet = true; m_logo = std::forward<LogoT>(value); }
    template<typename LogoT = Aws::String>
    Framework& WithLogo(LogoT&& value) { SetLogo(std::forward<LogoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The control sets that are associated with the framework. </p>  <p>The
     * <code>Controls</code> object returns a partial response when called through
     * Framework APIs. For a complete <code>Controls</code> object, use
     * <code>GetControl</code>.</p> 
     */
    inline const Aws::Vector<ControlSet>& GetControlSets() const { return m_controlSets; }
    inline bool ControlSetsHasBeenSet() const { return m_controlSetsHasBeenSet; }
    template<typename ControlSetsT = Aws::Vector<ControlSet>>
    void SetControlSets(ControlSetsT&& value) { m_controlSetsHasBeenSet = true; m_controlSets = std::forward<ControlSetsT>(value); }
    template<typename ControlSetsT = Aws::Vector<ControlSet>>
    Framework& WithControlSets(ControlSetsT&& value) { SetControlSets(std::forward<ControlSetsT>(value)); return *this;}
    template<typename ControlSetsT = ControlSet>
    Framework& AddControlSets(ControlSetsT&& value) { m_controlSetsHasBeenSet = true; m_controlSets.emplace_back(std::forward<ControlSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time when the framework was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Framework& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the framework was most recently updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    Framework& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user or role that created the framework. </p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    Framework& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user or role that most recently updated the framework. </p>
     */
    inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    template<typename LastUpdatedByT = Aws::String>
    void SetLastUpdatedBy(LastUpdatedByT&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::forward<LastUpdatedByT>(value); }
    template<typename LastUpdatedByT = Aws::String>
    Framework& WithLastUpdatedBy(LastUpdatedByT&& value) { SetLastUpdatedBy(std::forward<LastUpdatedByT>(value)); return *this;}
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
    Framework& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Framework& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FrameworkType m_type{FrameworkType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_logo;
    bool m_logoHasBeenSet = false;

    Aws::Vector<ControlSet> m_controlSets;
    bool m_controlSetsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
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
