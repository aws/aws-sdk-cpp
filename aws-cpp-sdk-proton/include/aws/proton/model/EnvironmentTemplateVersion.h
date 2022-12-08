/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/TemplateVersionStatus.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>The environment template version data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/EnvironmentTemplateVersion">AWS
   * API Reference</a></p>
   */
  class EnvironmentTemplateVersion
  {
  public:
    AWS_PROTON_API EnvironmentTemplateVersion();
    AWS_PROTON_API EnvironmentTemplateVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API EnvironmentTemplateVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the version of an environment template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the version of an environment template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the version of an environment template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the version of an environment template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the version of an environment template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time when the version of an environment template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the version of an environment template was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the version of an environment template was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the version of an environment template was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the version of an environment template was created.</p>
     */
    inline EnvironmentTemplateVersion& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the version of an environment template was created.</p>
     */
    inline EnvironmentTemplateVersion& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A description of the minor version of an environment template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the minor version of an environment template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the minor version of an environment template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the minor version of an environment template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the minor version of an environment template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the minor version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the minor version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the minor version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time when the version of an environment template was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>The time when the version of an environment template was last modified.</p>
     */
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }

    /**
     * <p>The time when the version of an environment template was last modified.</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }

    /**
     * <p>The time when the version of an environment template was last modified.</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }

    /**
     * <p>The time when the version of an environment template was last modified.</p>
     */
    inline EnvironmentTemplateVersion& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>The time when the version of an environment template was last modified.</p>
     */
    inline EnvironmentTemplateVersion& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The latest major version that's associated with the version of an environment
     * template.</p>
     */
    inline const Aws::String& GetMajorVersion() const{ return m_majorVersion; }

    /**
     * <p>The latest major version that's associated with the version of an environment
     * template.</p>
     */
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }

    /**
     * <p>The latest major version that's associated with the version of an environment
     * template.</p>
     */
    inline void SetMajorVersion(const Aws::String& value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }

    /**
     * <p>The latest major version that's associated with the version of an environment
     * template.</p>
     */
    inline void SetMajorVersion(Aws::String&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::move(value); }

    /**
     * <p>The latest major version that's associated with the version of an environment
     * template.</p>
     */
    inline void SetMajorVersion(const char* value) { m_majorVersionHasBeenSet = true; m_majorVersion.assign(value); }

    /**
     * <p>The latest major version that's associated with the version of an environment
     * template.</p>
     */
    inline EnvironmentTemplateVersion& WithMajorVersion(const Aws::String& value) { SetMajorVersion(value); return *this;}

    /**
     * <p>The latest major version that's associated with the version of an environment
     * template.</p>
     */
    inline EnvironmentTemplateVersion& WithMajorVersion(Aws::String&& value) { SetMajorVersion(std::move(value)); return *this;}

    /**
     * <p>The latest major version that's associated with the version of an environment
     * template.</p>
     */
    inline EnvironmentTemplateVersion& WithMajorVersion(const char* value) { SetMajorVersion(value); return *this;}


    /**
     * <p>The minor version of an environment template.</p>
     */
    inline const Aws::String& GetMinorVersion() const{ return m_minorVersion; }

    /**
     * <p>The minor version of an environment template.</p>
     */
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }

    /**
     * <p>The minor version of an environment template.</p>
     */
    inline void SetMinorVersion(const Aws::String& value) { m_minorVersionHasBeenSet = true; m_minorVersion = value; }

    /**
     * <p>The minor version of an environment template.</p>
     */
    inline void SetMinorVersion(Aws::String&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::move(value); }

    /**
     * <p>The minor version of an environment template.</p>
     */
    inline void SetMinorVersion(const char* value) { m_minorVersionHasBeenSet = true; m_minorVersion.assign(value); }

    /**
     * <p>The minor version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithMinorVersion(const Aws::String& value) { SetMinorVersion(value); return *this;}

    /**
     * <p>The minor version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithMinorVersion(Aws::String&& value) { SetMinorVersion(std::move(value)); return *this;}

    /**
     * <p>The minor version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithMinorVersion(const char* value) { SetMinorVersion(value); return *this;}


    /**
     * <p>The recommended minor version of the environment template.</p>
     */
    inline const Aws::String& GetRecommendedMinorVersion() const{ return m_recommendedMinorVersion; }

    /**
     * <p>The recommended minor version of the environment template.</p>
     */
    inline bool RecommendedMinorVersionHasBeenSet() const { return m_recommendedMinorVersionHasBeenSet; }

    /**
     * <p>The recommended minor version of the environment template.</p>
     */
    inline void SetRecommendedMinorVersion(const Aws::String& value) { m_recommendedMinorVersionHasBeenSet = true; m_recommendedMinorVersion = value; }

    /**
     * <p>The recommended minor version of the environment template.</p>
     */
    inline void SetRecommendedMinorVersion(Aws::String&& value) { m_recommendedMinorVersionHasBeenSet = true; m_recommendedMinorVersion = std::move(value); }

    /**
     * <p>The recommended minor version of the environment template.</p>
     */
    inline void SetRecommendedMinorVersion(const char* value) { m_recommendedMinorVersionHasBeenSet = true; m_recommendedMinorVersion.assign(value); }

    /**
     * <p>The recommended minor version of the environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithRecommendedMinorVersion(const Aws::String& value) { SetRecommendedMinorVersion(value); return *this;}

    /**
     * <p>The recommended minor version of the environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithRecommendedMinorVersion(Aws::String&& value) { SetRecommendedMinorVersion(std::move(value)); return *this;}

    /**
     * <p>The recommended minor version of the environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithRecommendedMinorVersion(const char* value) { SetRecommendedMinorVersion(value); return *this;}


    /**
     * <p>The schema of the version of an environment template.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema of the version of an environment template.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The schema of the version of an environment template.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The schema of the version of an environment template.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The schema of the version of an environment template.</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>The schema of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The status of the version of an environment template.</p>
     */
    inline const TemplateVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the version of an environment template.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the version of an environment template.</p>
     */
    inline void SetStatus(const TemplateVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the version of an environment template.</p>
     */
    inline void SetStatus(TemplateVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithStatus(const TemplateVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithStatus(TemplateVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message of the version of an environment template.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message of the version of an environment template.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message of the version of an environment template.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message of the version of an environment template.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message of the version of an environment template.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The name of the version of an environment template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the version of an environment template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the version of an environment template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the version of an environment template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the version of an environment template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the version of an environment template.</p>
     */
    inline EnvironmentTemplateVersion& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet = false;

    Aws::String m_minorVersion;
    bool m_minorVersionHasBeenSet = false;

    Aws::String m_recommendedMinorVersion;
    bool m_recommendedMinorVersionHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    TemplateVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
