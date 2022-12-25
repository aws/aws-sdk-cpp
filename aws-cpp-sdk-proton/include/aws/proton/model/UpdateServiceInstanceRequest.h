/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/proton/model/DeploymentUpdateType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateServiceInstanceRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateServiceInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceInstance"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The deployment type. It defines the mode for updating a service instance, as
     * follows:</p> <dl> <dt/> <dd> <p> <code>NONE</code> </p> <p>In this mode, a
     * deployment <i>doesn't</i> occur. Only the requested metadata parameters are
     * updated.</p> </dd> <dt/> <dd> <p> <code>CURRENT_VERSION</code> </p> <p>In this
     * mode, the service instance is deployed and updated with the new spec that you
     * provide. Only requested parameters are updated. <i>Don’t</i> include major or
     * minor version parameters when you use this deployment type.</p> </dd> <dt/> <dd>
     * <p> <code>MINOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) minor version of
     * the current major version in use, by default. You can also specify a different
     * minor version of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) major and minor
     * version of the current template, by default. You can specify a different major
     * version that's higher than the major version in use and a minor version.</p>
     * </dd> </dl>
     */
    inline const DeploymentUpdateType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>The deployment type. It defines the mode for updating a service instance, as
     * follows:</p> <dl> <dt/> <dd> <p> <code>NONE</code> </p> <p>In this mode, a
     * deployment <i>doesn't</i> occur. Only the requested metadata parameters are
     * updated.</p> </dd> <dt/> <dd> <p> <code>CURRENT_VERSION</code> </p> <p>In this
     * mode, the service instance is deployed and updated with the new spec that you
     * provide. Only requested parameters are updated. <i>Don’t</i> include major or
     * minor version parameters when you use this deployment type.</p> </dd> <dt/> <dd>
     * <p> <code>MINOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) minor version of
     * the current major version in use, by default. You can also specify a different
     * minor version of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) major and minor
     * version of the current template, by default. You can specify a different major
     * version that's higher than the major version in use and a minor version.</p>
     * </dd> </dl>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>The deployment type. It defines the mode for updating a service instance, as
     * follows:</p> <dl> <dt/> <dd> <p> <code>NONE</code> </p> <p>In this mode, a
     * deployment <i>doesn't</i> occur. Only the requested metadata parameters are
     * updated.</p> </dd> <dt/> <dd> <p> <code>CURRENT_VERSION</code> </p> <p>In this
     * mode, the service instance is deployed and updated with the new spec that you
     * provide. Only requested parameters are updated. <i>Don’t</i> include major or
     * minor version parameters when you use this deployment type.</p> </dd> <dt/> <dd>
     * <p> <code>MINOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) minor version of
     * the current major version in use, by default. You can also specify a different
     * minor version of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) major and minor
     * version of the current template, by default. You can specify a different major
     * version that's higher than the major version in use and a minor version.</p>
     * </dd> </dl>
     */
    inline void SetDeploymentType(const DeploymentUpdateType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>The deployment type. It defines the mode for updating a service instance, as
     * follows:</p> <dl> <dt/> <dd> <p> <code>NONE</code> </p> <p>In this mode, a
     * deployment <i>doesn't</i> occur. Only the requested metadata parameters are
     * updated.</p> </dd> <dt/> <dd> <p> <code>CURRENT_VERSION</code> </p> <p>In this
     * mode, the service instance is deployed and updated with the new spec that you
     * provide. Only requested parameters are updated. <i>Don’t</i> include major or
     * minor version parameters when you use this deployment type.</p> </dd> <dt/> <dd>
     * <p> <code>MINOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) minor version of
     * the current major version in use, by default. You can also specify a different
     * minor version of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) major and minor
     * version of the current template, by default. You can specify a different major
     * version that's higher than the major version in use and a minor version.</p>
     * </dd> </dl>
     */
    inline void SetDeploymentType(DeploymentUpdateType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>The deployment type. It defines the mode for updating a service instance, as
     * follows:</p> <dl> <dt/> <dd> <p> <code>NONE</code> </p> <p>In this mode, a
     * deployment <i>doesn't</i> occur. Only the requested metadata parameters are
     * updated.</p> </dd> <dt/> <dd> <p> <code>CURRENT_VERSION</code> </p> <p>In this
     * mode, the service instance is deployed and updated with the new spec that you
     * provide. Only requested parameters are updated. <i>Don’t</i> include major or
     * minor version parameters when you use this deployment type.</p> </dd> <dt/> <dd>
     * <p> <code>MINOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) minor version of
     * the current major version in use, by default. You can also specify a different
     * minor version of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) major and minor
     * version of the current template, by default. You can specify a different major
     * version that's higher than the major version in use and a minor version.</p>
     * </dd> </dl>
     */
    inline UpdateServiceInstanceRequest& WithDeploymentType(const DeploymentUpdateType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>The deployment type. It defines the mode for updating a service instance, as
     * follows:</p> <dl> <dt/> <dd> <p> <code>NONE</code> </p> <p>In this mode, a
     * deployment <i>doesn't</i> occur. Only the requested metadata parameters are
     * updated.</p> </dd> <dt/> <dd> <p> <code>CURRENT_VERSION</code> </p> <p>In this
     * mode, the service instance is deployed and updated with the new spec that you
     * provide. Only requested parameters are updated. <i>Don’t</i> include major or
     * minor version parameters when you use this deployment type.</p> </dd> <dt/> <dd>
     * <p> <code>MINOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) minor version of
     * the current major version in use, by default. You can also specify a different
     * minor version of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the service instance is
     * deployed and updated with the published, recommended (latest) major and minor
     * version of the current template, by default. You can specify a different major
     * version that's higher than the major version in use and a minor version.</p>
     * </dd> </dl>
     */
    inline UpdateServiceInstanceRequest& WithDeploymentType(DeploymentUpdateType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>The name of the service instance to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service instance to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service instance to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service instance to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service instance to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service instance to update.</p>
     */
    inline UpdateServiceInstanceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service instance to update.</p>
     */
    inline UpdateServiceInstanceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service instance to update.</p>
     */
    inline UpdateServiceInstanceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline UpdateServiceInstanceRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline UpdateServiceInstanceRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline UpdateServiceInstanceRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The formatted specification that defines the service instance update.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }

    /**
     * <p>The formatted specification that defines the service instance update.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The formatted specification that defines the service instance update.</p>
     */
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The formatted specification that defines the service instance update.</p>
     */
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The formatted specification that defines the service instance update.</p>
     */
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }

    /**
     * <p>The formatted specification that defines the service instance update.</p>
     */
    inline UpdateServiceInstanceRequest& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}

    /**
     * <p>The formatted specification that defines the service instance update.</p>
     */
    inline UpdateServiceInstanceRequest& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}

    /**
     * <p>The formatted specification that defines the service instance update.</p>
     */
    inline UpdateServiceInstanceRequest& WithSpec(const char* value) { SetSpec(value); return *this;}


    /**
     * <p>The major version of the service template to update.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const{ return m_templateMajorVersion; }

    /**
     * <p>The major version of the service template to update.</p>
     */
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }

    /**
     * <p>The major version of the service template to update.</p>
     */
    inline void SetTemplateMajorVersion(const Aws::String& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = value; }

    /**
     * <p>The major version of the service template to update.</p>
     */
    inline void SetTemplateMajorVersion(Aws::String&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::move(value); }

    /**
     * <p>The major version of the service template to update.</p>
     */
    inline void SetTemplateMajorVersion(const char* value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion.assign(value); }

    /**
     * <p>The major version of the service template to update.</p>
     */
    inline UpdateServiceInstanceRequest& WithTemplateMajorVersion(const Aws::String& value) { SetTemplateMajorVersion(value); return *this;}

    /**
     * <p>The major version of the service template to update.</p>
     */
    inline UpdateServiceInstanceRequest& WithTemplateMajorVersion(Aws::String&& value) { SetTemplateMajorVersion(std::move(value)); return *this;}

    /**
     * <p>The major version of the service template to update.</p>
     */
    inline UpdateServiceInstanceRequest& WithTemplateMajorVersion(const char* value) { SetTemplateMajorVersion(value); return *this;}


    /**
     * <p>The minor version of the service template to update.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const{ return m_templateMinorVersion; }

    /**
     * <p>The minor version of the service template to update.</p>
     */
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }

    /**
     * <p>The minor version of the service template to update.</p>
     */
    inline void SetTemplateMinorVersion(const Aws::String& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = value; }

    /**
     * <p>The minor version of the service template to update.</p>
     */
    inline void SetTemplateMinorVersion(Aws::String&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::move(value); }

    /**
     * <p>The minor version of the service template to update.</p>
     */
    inline void SetTemplateMinorVersion(const char* value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion.assign(value); }

    /**
     * <p>The minor version of the service template to update.</p>
     */
    inline UpdateServiceInstanceRequest& WithTemplateMinorVersion(const Aws::String& value) { SetTemplateMinorVersion(value); return *this;}

    /**
     * <p>The minor version of the service template to update.</p>
     */
    inline UpdateServiceInstanceRequest& WithTemplateMinorVersion(Aws::String&& value) { SetTemplateMinorVersion(std::move(value)); return *this;}

    /**
     * <p>The minor version of the service template to update.</p>
     */
    inline UpdateServiceInstanceRequest& WithTemplateMinorVersion(const char* value) { SetTemplateMinorVersion(value); return *this;}

  private:

    DeploymentUpdateType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_spec;
    bool m_specHasBeenSet = false;

    Aws::String m_templateMajorVersion;
    bool m_templateMajorVersionHasBeenSet = false;

    Aws::String m_templateMinorVersion;
    bool m_templateMinorVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
