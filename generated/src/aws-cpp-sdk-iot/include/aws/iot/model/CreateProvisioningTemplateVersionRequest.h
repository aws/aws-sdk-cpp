/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateProvisioningTemplateVersionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateProvisioningTemplateVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProvisioningTemplateVersion"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The JSON formatted contents of the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>Sets a fleet provision template version as the default version.</p>
     */
    inline bool GetSetAsDefault() const{ return m_setAsDefault; }

    /**
     * <p>Sets a fleet provision template version as the default version.</p>
     */
    inline bool SetAsDefaultHasBeenSet() const { return m_setAsDefaultHasBeenSet; }

    /**
     * <p>Sets a fleet provision template version as the default version.</p>
     */
    inline void SetSetAsDefault(bool value) { m_setAsDefaultHasBeenSet = true; m_setAsDefault = value; }

    /**
     * <p>Sets a fleet provision template version as the default version.</p>
     */
    inline CreateProvisioningTemplateVersionRequest& WithSetAsDefault(bool value) { SetSetAsDefault(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    bool m_setAsDefault;
    bool m_setAsDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
