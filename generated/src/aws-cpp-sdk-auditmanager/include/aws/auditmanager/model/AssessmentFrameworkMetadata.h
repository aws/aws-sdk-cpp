/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/FrameworkType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> The metadata that's associated with a standard framework or a custom
   * framework. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentFrameworkMetadata">AWS
   * API Reference</a></p>
   */
  class AssessmentFrameworkMetadata
  {
  public:
    AWS_AUDITMANAGER_API AssessmentFrameworkMetadata();
    AWS_AUDITMANAGER_API AssessmentFrameworkMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentFrameworkMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline AssessmentFrameworkMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AssessmentFrameworkMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AssessmentFrameworkMetadata& WithArn(const char* value) { SetArn(value); return *this;}
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
    inline AssessmentFrameworkMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssessmentFrameworkMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssessmentFrameworkMetadata& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The framework type, such as a standard framework or a custom framework. </p>
     */
    inline const FrameworkType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FrameworkType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FrameworkType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AssessmentFrameworkMetadata& WithType(const FrameworkType& value) { SetType(value); return *this;}
    inline AssessmentFrameworkMetadata& WithType(FrameworkType&& value) { SetType(std::move(value)); return *this;}
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
    inline AssessmentFrameworkMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssessmentFrameworkMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssessmentFrameworkMetadata& WithName(const char* value) { SetName(value); return *this;}
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
    inline AssessmentFrameworkMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AssessmentFrameworkMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AssessmentFrameworkMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline AssessmentFrameworkMetadata& WithLogo(const Aws::String& value) { SetLogo(value); return *this;}
    inline AssessmentFrameworkMetadata& WithLogo(Aws::String&& value) { SetLogo(std::move(value)); return *this;}
    inline AssessmentFrameworkMetadata& WithLogo(const char* value) { SetLogo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }
    inline AssessmentFrameworkMetadata& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}
    inline AssessmentFrameworkMetadata& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}
    inline AssessmentFrameworkMetadata& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of controls that are associated with the framework. </p>
     */
    inline int GetControlsCount() const{ return m_controlsCount; }
    inline bool ControlsCountHasBeenSet() const { return m_controlsCountHasBeenSet; }
    inline void SetControlsCount(int value) { m_controlsCountHasBeenSet = true; m_controlsCount = value; }
    inline AssessmentFrameworkMetadata& WithControlsCount(int value) { SetControlsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of control sets that are associated with the framework. </p>
     */
    inline int GetControlSetsCount() const{ return m_controlSetsCount; }
    inline bool ControlSetsCountHasBeenSet() const { return m_controlSetsCountHasBeenSet; }
    inline void SetControlSetsCount(int value) { m_controlSetsCountHasBeenSet = true; m_controlSetsCount = value; }
    inline AssessmentFrameworkMetadata& WithControlSetsCount(int value) { SetControlSetsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the framework was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline AssessmentFrameworkMetadata& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AssessmentFrameworkMetadata& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the framework was most recently updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline AssessmentFrameworkMetadata& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline AssessmentFrameworkMetadata& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    FrameworkType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_logo;
    bool m_logoHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    int m_controlsCount;
    bool m_controlsCountHasBeenSet = false;

    int m_controlSetsCount;
    bool m_controlSetsCountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
