/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/ProvisioningHook.h>
#include <aws/iot/model/TemplateType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class DescribeProvisioningTemplateResult
  {
  public:
    AWS_IOT_API DescribeProvisioningTemplateResult();
    AWS_IOT_API DescribeProvisioningTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeProvisioningTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The ARN of the provisioning template.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArn = value; }

    /**
     * <p>The ARN of the provisioning template.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArn = std::move(value); }

    /**
     * <p>The ARN of the provisioning template.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArn.assign(value); }

    /**
     * <p>The ARN of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The ARN of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateName = value; }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateName = std::move(value); }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateName.assign(value); }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The description of the provisioning template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the provisioning template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the provisioning template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the provisioning template.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date when the provisioning template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date when the provisioning template was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date when the provisioning template was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date when the provisioning template was created.</p>
     */
    inline DescribeProvisioningTemplateResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date when the provisioning template was created.</p>
     */
    inline DescribeProvisioningTemplateResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date when the provisioning template was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date when the provisioning template was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The date when the provisioning template was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date when the provisioning template was last modified.</p>
     */
    inline DescribeProvisioningTemplateResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date when the provisioning template was last modified.</p>
     */
    inline DescribeProvisioningTemplateResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The default fleet template version ID.</p>
     */
    inline int GetDefaultVersionId() const{ return m_defaultVersionId; }

    /**
     * <p>The default fleet template version ID.</p>
     */
    inline void SetDefaultVersionId(int value) { m_defaultVersionId = value; }

    /**
     * <p>The default fleet template version ID.</p>
     */
    inline DescribeProvisioningTemplateResult& WithDefaultVersionId(int value) { SetDefaultVersionId(value); return *this;}


    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBody = value; }

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBody = std::move(value); }

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBody.assign(value); }

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline DescribeProvisioningTemplateResult& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>True if the provisioning template is enabled, otherwise false.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>True if the provisioning template is enabled, otherwise false.</p>
     */
    inline void SetEnabled(bool value) { m_enabled = value; }

    /**
     * <p>True if the provisioning template is enabled, otherwise false.</p>
     */
    inline DescribeProvisioningTemplateResult& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline const Aws::String& GetProvisioningRoleArn() const{ return m_provisioningRoleArn; }

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline void SetProvisioningRoleArn(const Aws::String& value) { m_provisioningRoleArn = value; }

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline void SetProvisioningRoleArn(Aws::String&& value) { m_provisioningRoleArn = std::move(value); }

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline void SetProvisioningRoleArn(const char* value) { m_provisioningRoleArn.assign(value); }

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline DescribeProvisioningTemplateResult& WithProvisioningRoleArn(const Aws::String& value) { SetProvisioningRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline DescribeProvisioningTemplateResult& WithProvisioningRoleArn(Aws::String&& value) { SetProvisioningRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role associated with the provisioning template. This IoT role
     * grants permission to provision a device.</p>
     */
    inline DescribeProvisioningTemplateResult& WithProvisioningRoleArn(const char* value) { SetProvisioningRoleArn(value); return *this;}


    /**
     * <p>Gets information about a pre-provisioned hook.</p>
     */
    inline const ProvisioningHook& GetPreProvisioningHook() const{ return m_preProvisioningHook; }

    /**
     * <p>Gets information about a pre-provisioned hook.</p>
     */
    inline void SetPreProvisioningHook(const ProvisioningHook& value) { m_preProvisioningHook = value; }

    /**
     * <p>Gets information about a pre-provisioned hook.</p>
     */
    inline void SetPreProvisioningHook(ProvisioningHook&& value) { m_preProvisioningHook = std::move(value); }

    /**
     * <p>Gets information about a pre-provisioned hook.</p>
     */
    inline DescribeProvisioningTemplateResult& WithPreProvisioningHook(const ProvisioningHook& value) { SetPreProvisioningHook(value); return *this;}

    /**
     * <p>Gets information about a pre-provisioned hook.</p>
     */
    inline DescribeProvisioningTemplateResult& WithPreProvisioningHook(ProvisioningHook&& value) { SetPreProvisioningHook(std::move(value)); return *this;}


    /**
     * <p>The type you define in a provisioning template. You can create a template
     * with only one type. You can't change the template type after its creation. The
     * default value is <code>FLEET_PROVISIONING</code>. For more information about
     * provisioning template, see: <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * template</a>. </p>
     */
    inline const TemplateType& GetType() const{ return m_type; }

    /**
     * <p>The type you define in a provisioning template. You can create a template
     * with only one type. You can't change the template type after its creation. The
     * default value is <code>FLEET_PROVISIONING</code>. For more information about
     * provisioning template, see: <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * template</a>. </p>
     */
    inline void SetType(const TemplateType& value) { m_type = value; }

    /**
     * <p>The type you define in a provisioning template. You can create a template
     * with only one type. You can't change the template type after its creation. The
     * default value is <code>FLEET_PROVISIONING</code>. For more information about
     * provisioning template, see: <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * template</a>. </p>
     */
    inline void SetType(TemplateType&& value) { m_type = std::move(value); }

    /**
     * <p>The type you define in a provisioning template. You can create a template
     * with only one type. You can't change the template type after its creation. The
     * default value is <code>FLEET_PROVISIONING</code>. For more information about
     * provisioning template, see: <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * template</a>. </p>
     */
    inline DescribeProvisioningTemplateResult& WithType(const TemplateType& value) { SetType(value); return *this;}

    /**
     * <p>The type you define in a provisioning template. You can create a template
     * with only one type. You can't change the template type after its creation. The
     * default value is <code>FLEET_PROVISIONING</code>. For more information about
     * provisioning template, see: <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * template</a>. </p>
     */
    inline DescribeProvisioningTemplateResult& WithType(TemplateType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_templateArn;

    Aws::String m_templateName;

    Aws::String m_description;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    int m_defaultVersionId;

    Aws::String m_templateBody;

    bool m_enabled;

    Aws::String m_provisioningRoleArn;

    ProvisioningHook m_preProvisioningHook;

    TemplateType m_type;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
