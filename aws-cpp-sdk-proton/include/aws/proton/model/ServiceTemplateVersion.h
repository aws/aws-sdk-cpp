/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/TemplateVersionStatus.h>
#include <aws/proton/model/CompatibleEnvironmentTemplate.h>
#include <aws/proton/model/ServiceTemplateSupportedComponentSourceType.h>
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
   * <p>Detailed data of an Proton service template version resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ServiceTemplateVersion">AWS
   * API Reference</a></p>
   */
  class ServiceTemplateVersion
  {
  public:
    AWS_PROTON_API ServiceTemplateVersion();
    AWS_PROTON_API ServiceTemplateVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ServiceTemplateVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the version of a service template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the version of a service template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the version of a service template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the version of a service template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the version of a service template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An array of compatible environment template names for the major version of a
     * service template.</p>
     */
    inline const Aws::Vector<CompatibleEnvironmentTemplate>& GetCompatibleEnvironmentTemplates() const{ return m_compatibleEnvironmentTemplates; }

    /**
     * <p>An array of compatible environment template names for the major version of a
     * service template.</p>
     */
    inline bool CompatibleEnvironmentTemplatesHasBeenSet() const { return m_compatibleEnvironmentTemplatesHasBeenSet; }

    /**
     * <p>An array of compatible environment template names for the major version of a
     * service template.</p>
     */
    inline void SetCompatibleEnvironmentTemplates(const Aws::Vector<CompatibleEnvironmentTemplate>& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates = value; }

    /**
     * <p>An array of compatible environment template names for the major version of a
     * service template.</p>
     */
    inline void SetCompatibleEnvironmentTemplates(Aws::Vector<CompatibleEnvironmentTemplate>&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates = std::move(value); }

    /**
     * <p>An array of compatible environment template names for the major version of a
     * service template.</p>
     */
    inline ServiceTemplateVersion& WithCompatibleEnvironmentTemplates(const Aws::Vector<CompatibleEnvironmentTemplate>& value) { SetCompatibleEnvironmentTemplates(value); return *this;}

    /**
     * <p>An array of compatible environment template names for the major version of a
     * service template.</p>
     */
    inline ServiceTemplateVersion& WithCompatibleEnvironmentTemplates(Aws::Vector<CompatibleEnvironmentTemplate>&& value) { SetCompatibleEnvironmentTemplates(std::move(value)); return *this;}

    /**
     * <p>An array of compatible environment template names for the major version of a
     * service template.</p>
     */
    inline ServiceTemplateVersion& AddCompatibleEnvironmentTemplates(const CompatibleEnvironmentTemplate& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates.push_back(value); return *this; }

    /**
     * <p>An array of compatible environment template names for the major version of a
     * service template.</p>
     */
    inline ServiceTemplateVersion& AddCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplate&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when the version of a service template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the version of a service template was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the version of a service template was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the version of a service template was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the version of a service template was created.</p>
     */
    inline ServiceTemplateVersion& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the version of a service template was created.</p>
     */
    inline ServiceTemplateVersion& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A description of the version of a service template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the version of a service template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the version of a service template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the version of a service template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the version of a service template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time when the version of a service template was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>The time when the version of a service template was last modified.</p>
     */
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }

    /**
     * <p>The time when the version of a service template was last modified.</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }

    /**
     * <p>The time when the version of a service template was last modified.</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }

    /**
     * <p>The time when the version of a service template was last modified.</p>
     */
    inline ServiceTemplateVersion& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>The time when the version of a service template was last modified.</p>
     */
    inline ServiceTemplateVersion& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The latest major version that's associated with the version of a service
     * template.</p>
     */
    inline const Aws::String& GetMajorVersion() const{ return m_majorVersion; }

    /**
     * <p>The latest major version that's associated with the version of a service
     * template.</p>
     */
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }

    /**
     * <p>The latest major version that's associated with the version of a service
     * template.</p>
     */
    inline void SetMajorVersion(const Aws::String& value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }

    /**
     * <p>The latest major version that's associated with the version of a service
     * template.</p>
     */
    inline void SetMajorVersion(Aws::String&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::move(value); }

    /**
     * <p>The latest major version that's associated with the version of a service
     * template.</p>
     */
    inline void SetMajorVersion(const char* value) { m_majorVersionHasBeenSet = true; m_majorVersion.assign(value); }

    /**
     * <p>The latest major version that's associated with the version of a service
     * template.</p>
     */
    inline ServiceTemplateVersion& WithMajorVersion(const Aws::String& value) { SetMajorVersion(value); return *this;}

    /**
     * <p>The latest major version that's associated with the version of a service
     * template.</p>
     */
    inline ServiceTemplateVersion& WithMajorVersion(Aws::String&& value) { SetMajorVersion(std::move(value)); return *this;}

    /**
     * <p>The latest major version that's associated with the version of a service
     * template.</p>
     */
    inline ServiceTemplateVersion& WithMajorVersion(const char* value) { SetMajorVersion(value); return *this;}


    /**
     * <p>The minor version of a service template.</p>
     */
    inline const Aws::String& GetMinorVersion() const{ return m_minorVersion; }

    /**
     * <p>The minor version of a service template.</p>
     */
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }

    /**
     * <p>The minor version of a service template.</p>
     */
    inline void SetMinorVersion(const Aws::String& value) { m_minorVersionHasBeenSet = true; m_minorVersion = value; }

    /**
     * <p>The minor version of a service template.</p>
     */
    inline void SetMinorVersion(Aws::String&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::move(value); }

    /**
     * <p>The minor version of a service template.</p>
     */
    inline void SetMinorVersion(const char* value) { m_minorVersionHasBeenSet = true; m_minorVersion.assign(value); }

    /**
     * <p>The minor version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithMinorVersion(const Aws::String& value) { SetMinorVersion(value); return *this;}

    /**
     * <p>The minor version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithMinorVersion(Aws::String&& value) { SetMinorVersion(std::move(value)); return *this;}

    /**
     * <p>The minor version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithMinorVersion(const char* value) { SetMinorVersion(value); return *this;}


    /**
     * <p>The recommended minor version of the service template.</p>
     */
    inline const Aws::String& GetRecommendedMinorVersion() const{ return m_recommendedMinorVersion; }

    /**
     * <p>The recommended minor version of the service template.</p>
     */
    inline bool RecommendedMinorVersionHasBeenSet() const { return m_recommendedMinorVersionHasBeenSet; }

    /**
     * <p>The recommended minor version of the service template.</p>
     */
    inline void SetRecommendedMinorVersion(const Aws::String& value) { m_recommendedMinorVersionHasBeenSet = true; m_recommendedMinorVersion = value; }

    /**
     * <p>The recommended minor version of the service template.</p>
     */
    inline void SetRecommendedMinorVersion(Aws::String&& value) { m_recommendedMinorVersionHasBeenSet = true; m_recommendedMinorVersion = std::move(value); }

    /**
     * <p>The recommended minor version of the service template.</p>
     */
    inline void SetRecommendedMinorVersion(const char* value) { m_recommendedMinorVersionHasBeenSet = true; m_recommendedMinorVersion.assign(value); }

    /**
     * <p>The recommended minor version of the service template.</p>
     */
    inline ServiceTemplateVersion& WithRecommendedMinorVersion(const Aws::String& value) { SetRecommendedMinorVersion(value); return *this;}

    /**
     * <p>The recommended minor version of the service template.</p>
     */
    inline ServiceTemplateVersion& WithRecommendedMinorVersion(Aws::String&& value) { SetRecommendedMinorVersion(std::move(value)); return *this;}

    /**
     * <p>The recommended minor version of the service template.</p>
     */
    inline ServiceTemplateVersion& WithRecommendedMinorVersion(const char* value) { SetRecommendedMinorVersion(value); return *this;}


    /**
     * <p>The schema of the version of a service template.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema of the version of a service template.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The schema of the version of a service template.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The schema of the version of a service template.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The schema of the version of a service template.</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>The schema of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The service template version status.</p>
     */
    inline const TemplateVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The service template version status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The service template version status.</p>
     */
    inline void SetStatus(const TemplateVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The service template version status.</p>
     */
    inline void SetStatus(TemplateVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The service template version status.</p>
     */
    inline ServiceTemplateVersion& WithStatus(const TemplateVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The service template version status.</p>
     */
    inline ServiceTemplateVersion& WithStatus(TemplateVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A service template version status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A service template version status message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A service template version status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A service template version status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A service template version status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A service template version status message.</p>
     */
    inline ServiceTemplateVersion& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A service template version status message.</p>
     */
    inline ServiceTemplateVersion& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A service template version status message.</p>
     */
    inline ServiceTemplateVersion& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>An array of supported component sources. Components with supported sources
     * can be attached to service instances based on this service template version.</p>
     * <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<ServiceTemplateSupportedComponentSourceType>& GetSupportedComponentSources() const{ return m_supportedComponentSources; }

    /**
     * <p>An array of supported component sources. Components with supported sources
     * can be attached to service instances based on this service template version.</p>
     * <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool SupportedComponentSourcesHasBeenSet() const { return m_supportedComponentSourcesHasBeenSet; }

    /**
     * <p>An array of supported component sources. Components with supported sources
     * can be attached to service instances based on this service template version.</p>
     * <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetSupportedComponentSources(const Aws::Vector<ServiceTemplateSupportedComponentSourceType>& value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources = value; }

    /**
     * <p>An array of supported component sources. Components with supported sources
     * can be attached to service instances based on this service template version.</p>
     * <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetSupportedComponentSources(Aws::Vector<ServiceTemplateSupportedComponentSourceType>&& value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources = std::move(value); }

    /**
     * <p>An array of supported component sources. Components with supported sources
     * can be attached to service instances based on this service template version.</p>
     * <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline ServiceTemplateVersion& WithSupportedComponentSources(const Aws::Vector<ServiceTemplateSupportedComponentSourceType>& value) { SetSupportedComponentSources(value); return *this;}

    /**
     * <p>An array of supported component sources. Components with supported sources
     * can be attached to service instances based on this service template version.</p>
     * <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline ServiceTemplateVersion& WithSupportedComponentSources(Aws::Vector<ServiceTemplateSupportedComponentSourceType>&& value) { SetSupportedComponentSources(std::move(value)); return *this;}

    /**
     * <p>An array of supported component sources. Components with supported sources
     * can be attached to service instances based on this service template version.</p>
     * <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline ServiceTemplateVersion& AddSupportedComponentSources(const ServiceTemplateSupportedComponentSourceType& value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources.push_back(value); return *this; }

    /**
     * <p>An array of supported component sources. Components with supported sources
     * can be attached to service instances based on this service template version.</p>
     * <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline ServiceTemplateVersion& AddSupportedComponentSources(ServiceTemplateSupportedComponentSourceType&& value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the version of a service template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the version of a service template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the version of a service template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the version of a service template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the version of a service template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the version of a service template.</p>
     */
    inline ServiceTemplateVersion& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<CompatibleEnvironmentTemplate> m_compatibleEnvironmentTemplates;
    bool m_compatibleEnvironmentTemplatesHasBeenSet = false;

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

    Aws::Vector<ServiceTemplateSupportedComponentSourceType> m_supportedComponentSources;
    bool m_supportedComponentSourcesHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
