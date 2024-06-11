/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/TemplateType.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A summary of information about a provisioning template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ProvisioningTemplateSummary">AWS
   * API Reference</a></p>
   */
  class ProvisioningTemplateSummary
  {
  public:
    AWS_IOT_API ProvisioningTemplateSummary();
    AWS_IOT_API ProvisioningTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ProvisioningTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline ProvisioningTemplateSummary& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline ProvisioningTemplateSummary& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline ProvisioningTemplateSummary& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline ProvisioningTemplateSummary& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline ProvisioningTemplateSummary& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline ProvisioningTemplateSummary& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the provisioning template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ProvisioningTemplateSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ProvisioningTemplateSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ProvisioningTemplateSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the provisioning template summary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ProvisioningTemplateSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ProvisioningTemplateSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the provisioning template summary was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline ProvisioningTemplateSummary& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline ProvisioningTemplateSummary& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the fleet provision template is enabled, otherwise false.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ProvisioningTemplateSummary& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type you define in a provisioning template. You can create a template
     * with only one type. You can't change the template type after its creation. The
     * default value is <code>FLEET_PROVISIONING</code>. For more information about
     * provisioning template, see: <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * template</a>. </p>
     */
    inline const TemplateType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TemplateType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TemplateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ProvisioningTemplateSummary& WithType(const TemplateType& value) { SetType(value); return *this;}
    inline ProvisioningTemplateSummary& WithType(TemplateType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    TemplateType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
