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


    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The framework type, such as a standard framework or a custom framework. </p>
     */
    inline const FrameworkType& GetType() const{ return m_type; }

    /**
     * <p> The framework type, such as a standard framework or a custom framework. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The framework type, such as a standard framework or a custom framework. </p>
     */
    inline void SetType(const FrameworkType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The framework type, such as a standard framework or a custom framework. </p>
     */
    inline void SetType(FrameworkType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The framework type, such as a standard framework or a custom framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithType(const FrameworkType& value) { SetType(value); return *this;}

    /**
     * <p> The framework type, such as a standard framework or a custom framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithType(FrameworkType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The name of the framework. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the framework. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the framework. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the framework. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the framework. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the framework. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the framework. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the framework. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the framework. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the framework. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The logo that's associated with the framework. </p>
     */
    inline const Aws::String& GetLogo() const{ return m_logo; }

    /**
     * <p> The logo that's associated with the framework. </p>
     */
    inline bool LogoHasBeenSet() const { return m_logoHasBeenSet; }

    /**
     * <p> The logo that's associated with the framework. </p>
     */
    inline void SetLogo(const Aws::String& value) { m_logoHasBeenSet = true; m_logo = value; }

    /**
     * <p> The logo that's associated with the framework. </p>
     */
    inline void SetLogo(Aws::String&& value) { m_logoHasBeenSet = true; m_logo = std::move(value); }

    /**
     * <p> The logo that's associated with the framework. </p>
     */
    inline void SetLogo(const char* value) { m_logoHasBeenSet = true; m_logo.assign(value); }

    /**
     * <p> The logo that's associated with the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithLogo(const Aws::String& value) { SetLogo(value); return *this;}

    /**
     * <p> The logo that's associated with the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithLogo(Aws::String&& value) { SetLogo(std::move(value)); return *this;}

    /**
     * <p> The logo that's associated with the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithLogo(const char* value) { SetLogo(value); return *this;}


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
    inline AssessmentFrameworkMetadata& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline AssessmentFrameworkMetadata& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline AssessmentFrameworkMetadata& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}


    /**
     * <p> The number of controls that are associated with the framework. </p>
     */
    inline int GetControlsCount() const{ return m_controlsCount; }

    /**
     * <p> The number of controls that are associated with the framework. </p>
     */
    inline bool ControlsCountHasBeenSet() const { return m_controlsCountHasBeenSet; }

    /**
     * <p> The number of controls that are associated with the framework. </p>
     */
    inline void SetControlsCount(int value) { m_controlsCountHasBeenSet = true; m_controlsCount = value; }

    /**
     * <p> The number of controls that are associated with the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithControlsCount(int value) { SetControlsCount(value); return *this;}


    /**
     * <p> The number of control sets that are associated with the framework. </p>
     */
    inline int GetControlSetsCount() const{ return m_controlSetsCount; }

    /**
     * <p> The number of control sets that are associated with the framework. </p>
     */
    inline bool ControlSetsCountHasBeenSet() const { return m_controlSetsCountHasBeenSet; }

    /**
     * <p> The number of control sets that are associated with the framework. </p>
     */
    inline void SetControlSetsCount(int value) { m_controlSetsCountHasBeenSet = true; m_controlSetsCount = value; }

    /**
     * <p> The number of control sets that are associated with the framework. </p>
     */
    inline AssessmentFrameworkMetadata& WithControlSetsCount(int value) { SetControlSetsCount(value); return *this;}


    /**
     * <p> Specifies when the framework was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> Specifies when the framework was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p> Specifies when the framework was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p> Specifies when the framework was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p> Specifies when the framework was created. </p>
     */
    inline AssessmentFrameworkMetadata& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> Specifies when the framework was created. </p>
     */
    inline AssessmentFrameworkMetadata& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p> Specifies when the framework was most recently updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p> Specifies when the framework was most recently updated. </p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p> Specifies when the framework was most recently updated. </p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p> Specifies when the framework was most recently updated. </p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p> Specifies when the framework was most recently updated. </p>
     */
    inline AssessmentFrameworkMetadata& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p> Specifies when the framework was most recently updated. </p>
     */
    inline AssessmentFrameworkMetadata& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}

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
