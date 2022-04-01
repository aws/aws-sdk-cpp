/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/TemplateVersionStatus.h>
#include <aws/proton/model/CompatibleEnvironmentTemplateInput.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class AWS_PROTON_API UpdateServiceTemplateVersionRequest : public ProtonRequest
  {
  public:
    UpdateServiceTemplateVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceTemplateVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of compatible environment names for a service template major or
     * minor version to update.</p>
     */
    inline const Aws::Vector<CompatibleEnvironmentTemplateInput>& GetCompatibleEnvironmentTemplates() const{ return m_compatibleEnvironmentTemplates; }

    /**
     * <p>An array of compatible environment names for a service template major or
     * minor version to update.</p>
     */
    inline bool CompatibleEnvironmentTemplatesHasBeenSet() const { return m_compatibleEnvironmentTemplatesHasBeenSet; }

    /**
     * <p>An array of compatible environment names for a service template major or
     * minor version to update.</p>
     */
    inline void SetCompatibleEnvironmentTemplates(const Aws::Vector<CompatibleEnvironmentTemplateInput>& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates = value; }

    /**
     * <p>An array of compatible environment names for a service template major or
     * minor version to update.</p>
     */
    inline void SetCompatibleEnvironmentTemplates(Aws::Vector<CompatibleEnvironmentTemplateInput>&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates = std::move(value); }

    /**
     * <p>An array of compatible environment names for a service template major or
     * minor version to update.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithCompatibleEnvironmentTemplates(const Aws::Vector<CompatibleEnvironmentTemplateInput>& value) { SetCompatibleEnvironmentTemplates(value); return *this;}

    /**
     * <p>An array of compatible environment names for a service template major or
     * minor version to update.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithCompatibleEnvironmentTemplates(Aws::Vector<CompatibleEnvironmentTemplateInput>&& value) { SetCompatibleEnvironmentTemplates(std::move(value)); return *this;}

    /**
     * <p>An array of compatible environment names for a service template major or
     * minor version to update.</p>
     */
    inline UpdateServiceTemplateVersionRequest& AddCompatibleEnvironmentTemplates(const CompatibleEnvironmentTemplateInput& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates.push_back(value); return *this; }

    /**
     * <p>An array of compatible environment names for a service template major or
     * minor version to update.</p>
     */
    inline UpdateServiceTemplateVersionRequest& AddCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplateInput&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates.push_back(std::move(value)); return *this; }


    /**
     * <p>A description of a service template version to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of a service template version to update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of a service template version to update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of a service template version to update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of a service template version to update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of a service template version to update.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of a service template version to update.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of a service template version to update.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>To update a major version of a service template, include <code>major
     * Version</code>.</p>
     */
    inline const Aws::String& GetMajorVersion() const{ return m_majorVersion; }

    /**
     * <p>To update a major version of a service template, include <code>major
     * Version</code>.</p>
     */
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }

    /**
     * <p>To update a major version of a service template, include <code>major
     * Version</code>.</p>
     */
    inline void SetMajorVersion(const Aws::String& value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }

    /**
     * <p>To update a major version of a service template, include <code>major
     * Version</code>.</p>
     */
    inline void SetMajorVersion(Aws::String&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::move(value); }

    /**
     * <p>To update a major version of a service template, include <code>major
     * Version</code>.</p>
     */
    inline void SetMajorVersion(const char* value) { m_majorVersionHasBeenSet = true; m_majorVersion.assign(value); }

    /**
     * <p>To update a major version of a service template, include <code>major
     * Version</code>.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithMajorVersion(const Aws::String& value) { SetMajorVersion(value); return *this;}

    /**
     * <p>To update a major version of a service template, include <code>major
     * Version</code>.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithMajorVersion(Aws::String&& value) { SetMajorVersion(std::move(value)); return *this;}

    /**
     * <p>To update a major version of a service template, include <code>major
     * Version</code>.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithMajorVersion(const char* value) { SetMajorVersion(value); return *this;}


    /**
     * <p>To update a minor version of a service template, include
     * <code>minorVersion</code>.</p>
     */
    inline const Aws::String& GetMinorVersion() const{ return m_minorVersion; }

    /**
     * <p>To update a minor version of a service template, include
     * <code>minorVersion</code>.</p>
     */
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }

    /**
     * <p>To update a minor version of a service template, include
     * <code>minorVersion</code>.</p>
     */
    inline void SetMinorVersion(const Aws::String& value) { m_minorVersionHasBeenSet = true; m_minorVersion = value; }

    /**
     * <p>To update a minor version of a service template, include
     * <code>minorVersion</code>.</p>
     */
    inline void SetMinorVersion(Aws::String&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::move(value); }

    /**
     * <p>To update a minor version of a service template, include
     * <code>minorVersion</code>.</p>
     */
    inline void SetMinorVersion(const char* value) { m_minorVersionHasBeenSet = true; m_minorVersion.assign(value); }

    /**
     * <p>To update a minor version of a service template, include
     * <code>minorVersion</code>.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithMinorVersion(const Aws::String& value) { SetMinorVersion(value); return *this;}

    /**
     * <p>To update a minor version of a service template, include
     * <code>minorVersion</code>.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithMinorVersion(Aws::String&& value) { SetMinorVersion(std::move(value)); return *this;}

    /**
     * <p>To update a minor version of a service template, include
     * <code>minorVersion</code>.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithMinorVersion(const char* value) { SetMinorVersion(value); return *this;}


    /**
     * <p>The status of the service template minor version to update.</p>
     */
    inline const TemplateVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the service template minor version to update.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the service template minor version to update.</p>
     */
    inline void SetStatus(const TemplateVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the service template minor version to update.</p>
     */
    inline void SetStatus(TemplateVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the service template minor version to update.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithStatus(const TemplateVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the service template minor version to update.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithStatus(TemplateVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the service template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the service template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the service template.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the service template.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the service template.</p>
     */
    inline UpdateServiceTemplateVersionRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::Vector<CompatibleEnvironmentTemplateInput> m_compatibleEnvironmentTemplates;
    bool m_compatibleEnvironmentTemplatesHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet;

    Aws::String m_minorVersion;
    bool m_minorVersionHasBeenSet;

    TemplateVersionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
