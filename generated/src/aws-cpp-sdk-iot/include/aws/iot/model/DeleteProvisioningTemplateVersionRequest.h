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
namespace IoT
{
namespace Model
{

  /**
   */
  class DeleteProvisioningTemplateVersionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteProvisioningTemplateVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProvisioningTemplateVersion"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the provisioning template version to delete.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the provisioning template version to delete.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the provisioning template version to delete.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the provisioning template version to delete.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the provisioning template version to delete.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the provisioning template version to delete.</p>
     */
    inline DeleteProvisioningTemplateVersionRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the provisioning template version to delete.</p>
     */
    inline DeleteProvisioningTemplateVersionRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioning template version to delete.</p>
     */
    inline DeleteProvisioningTemplateVersionRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The provisioning template version ID to delete.</p>
     */
    inline int GetVersionId() const{ return m_versionId; }

    /**
     * <p>The provisioning template version ID to delete.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The provisioning template version ID to delete.</p>
     */
    inline void SetVersionId(int value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The provisioning template version ID to delete.</p>
     */
    inline DeleteProvisioningTemplateVersionRequest& WithVersionId(int value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    int m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
