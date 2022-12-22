/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/DeploymentUpdateType.h>
#include <aws/proton/model/RepositoryBranchInput.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateEnvironmentRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that allows Proton to
     * provision infrastructure using CodeBuild-based provisioning on your behalf.</p>
     */
    inline const Aws::String& GetCodebuildRoleArn() const{ return m_codebuildRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that allows Proton to
     * provision infrastructure using CodeBuild-based provisioning on your behalf.</p>
     */
    inline bool CodebuildRoleArnHasBeenSet() const { return m_codebuildRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that allows Proton to
     * provision infrastructure using CodeBuild-based provisioning on your behalf.</p>
     */
    inline void SetCodebuildRoleArn(const Aws::String& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that allows Proton to
     * provision infrastructure using CodeBuild-based provisioning on your behalf.</p>
     */
    inline void SetCodebuildRoleArn(Aws::String&& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that allows Proton to
     * provision infrastructure using CodeBuild-based provisioning on your behalf.</p>
     */
    inline void SetCodebuildRoleArn(const char* value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that allows Proton to
     * provision infrastructure using CodeBuild-based provisioning on your behalf.</p>
     */
    inline UpdateEnvironmentRequest& WithCodebuildRoleArn(const Aws::String& value) { SetCodebuildRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that allows Proton to
     * provision infrastructure using CodeBuild-based provisioning on your behalf.</p>
     */
    inline UpdateEnvironmentRequest& WithCodebuildRoleArn(Aws::String&& value) { SetCodebuildRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that allows Proton to
     * provision infrastructure using CodeBuild-based provisioning on your behalf.</p>
     */
    inline UpdateEnvironmentRequest& WithCodebuildRoleArn(const char* value) { SetCodebuildRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetComponentRoleArn() const{ return m_componentRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool ComponentRoleArnHasBeenSet() const { return m_componentRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(const Aws::String& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(Aws::String&& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(const char* value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline UpdateEnvironmentRequest& WithComponentRoleArn(const Aws::String& value) { SetComponentRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline UpdateEnvironmentRequest& WithComponentRoleArn(Aws::String&& value) { SetComponentRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline UpdateEnvironmentRequest& WithComponentRoleArn(const char* value) { SetComponentRoleArn(value); return *this;}


    /**
     * <p>There are four modes for updating an environment. The
     * <code>deploymentType</code> field defines the mode.</p> <dl> <dt/> <dd> <p>
     * <code>NONE</code> </p> <p>In this mode, a deployment <i>doesn't</i> occur. Only
     * the requested metadata parameters are updated.</p> </dd> <dt/> <dd> <p>
     * <code>CURRENT_VERSION</code> </p> <p>In this mode, the environment is deployed
     * and updated with the new spec that you provide. Only requested parameters are
     * updated. <i>Don’t</i> include major or minor version parameters when you use
     * this <code>deployment-type</code>.</p> </dd> <dt/> <dd> <p>
     * <code>MINOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) minor version of the current
     * major version in use, by default. You can also specify a different minor version
     * of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) major and minor version of the
     * current template, by default. You can also specify a different major version
     * that is higher than the major version in use and a minor version (optional).</p>
     * </dd> </dl>
     */
    inline const DeploymentUpdateType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>There are four modes for updating an environment. The
     * <code>deploymentType</code> field defines the mode.</p> <dl> <dt/> <dd> <p>
     * <code>NONE</code> </p> <p>In this mode, a deployment <i>doesn't</i> occur. Only
     * the requested metadata parameters are updated.</p> </dd> <dt/> <dd> <p>
     * <code>CURRENT_VERSION</code> </p> <p>In this mode, the environment is deployed
     * and updated with the new spec that you provide. Only requested parameters are
     * updated. <i>Don’t</i> include major or minor version parameters when you use
     * this <code>deployment-type</code>.</p> </dd> <dt/> <dd> <p>
     * <code>MINOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) minor version of the current
     * major version in use, by default. You can also specify a different minor version
     * of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) major and minor version of the
     * current template, by default. You can also specify a different major version
     * that is higher than the major version in use and a minor version (optional).</p>
     * </dd> </dl>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>There are four modes for updating an environment. The
     * <code>deploymentType</code> field defines the mode.</p> <dl> <dt/> <dd> <p>
     * <code>NONE</code> </p> <p>In this mode, a deployment <i>doesn't</i> occur. Only
     * the requested metadata parameters are updated.</p> </dd> <dt/> <dd> <p>
     * <code>CURRENT_VERSION</code> </p> <p>In this mode, the environment is deployed
     * and updated with the new spec that you provide. Only requested parameters are
     * updated. <i>Don’t</i> include major or minor version parameters when you use
     * this <code>deployment-type</code>.</p> </dd> <dt/> <dd> <p>
     * <code>MINOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) minor version of the current
     * major version in use, by default. You can also specify a different minor version
     * of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) major and minor version of the
     * current template, by default. You can also specify a different major version
     * that is higher than the major version in use and a minor version (optional).</p>
     * </dd> </dl>
     */
    inline void SetDeploymentType(const DeploymentUpdateType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>There are four modes for updating an environment. The
     * <code>deploymentType</code> field defines the mode.</p> <dl> <dt/> <dd> <p>
     * <code>NONE</code> </p> <p>In this mode, a deployment <i>doesn't</i> occur. Only
     * the requested metadata parameters are updated.</p> </dd> <dt/> <dd> <p>
     * <code>CURRENT_VERSION</code> </p> <p>In this mode, the environment is deployed
     * and updated with the new spec that you provide. Only requested parameters are
     * updated. <i>Don’t</i> include major or minor version parameters when you use
     * this <code>deployment-type</code>.</p> </dd> <dt/> <dd> <p>
     * <code>MINOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) minor version of the current
     * major version in use, by default. You can also specify a different minor version
     * of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) major and minor version of the
     * current template, by default. You can also specify a different major version
     * that is higher than the major version in use and a minor version (optional).</p>
     * </dd> </dl>
     */
    inline void SetDeploymentType(DeploymentUpdateType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>There are four modes for updating an environment. The
     * <code>deploymentType</code> field defines the mode.</p> <dl> <dt/> <dd> <p>
     * <code>NONE</code> </p> <p>In this mode, a deployment <i>doesn't</i> occur. Only
     * the requested metadata parameters are updated.</p> </dd> <dt/> <dd> <p>
     * <code>CURRENT_VERSION</code> </p> <p>In this mode, the environment is deployed
     * and updated with the new spec that you provide. Only requested parameters are
     * updated. <i>Don’t</i> include major or minor version parameters when you use
     * this <code>deployment-type</code>.</p> </dd> <dt/> <dd> <p>
     * <code>MINOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) minor version of the current
     * major version in use, by default. You can also specify a different minor version
     * of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) major and minor version of the
     * current template, by default. You can also specify a different major version
     * that is higher than the major version in use and a minor version (optional).</p>
     * </dd> </dl>
     */
    inline UpdateEnvironmentRequest& WithDeploymentType(const DeploymentUpdateType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>There are four modes for updating an environment. The
     * <code>deploymentType</code> field defines the mode.</p> <dl> <dt/> <dd> <p>
     * <code>NONE</code> </p> <p>In this mode, a deployment <i>doesn't</i> occur. Only
     * the requested metadata parameters are updated.</p> </dd> <dt/> <dd> <p>
     * <code>CURRENT_VERSION</code> </p> <p>In this mode, the environment is deployed
     * and updated with the new spec that you provide. Only requested parameters are
     * updated. <i>Don’t</i> include major or minor version parameters when you use
     * this <code>deployment-type</code>.</p> </dd> <dt/> <dd> <p>
     * <code>MINOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) minor version of the current
     * major version in use, by default. You can also specify a different minor version
     * of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) major and minor version of the
     * current template, by default. You can also specify a different major version
     * that is higher than the major version in use and a minor version (optional).</p>
     * </dd> </dl>
     */
    inline UpdateEnvironmentRequest& WithDeploymentType(DeploymentUpdateType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>A description of the environment update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the environment update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the environment update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the environment update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the environment update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the environment update.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the environment update.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the environment update.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the environment account connection.</p> <p>You can only update to a
     * new environment account connection if it was created in the same environment
     * account that the current environment account connection was created in and is
     * associated with the current environment.</p>
     */
    inline const Aws::String& GetEnvironmentAccountConnectionId() const{ return m_environmentAccountConnectionId; }

    /**
     * <p>The ID of the environment account connection.</p> <p>You can only update to a
     * new environment account connection if it was created in the same environment
     * account that the current environment account connection was created in and is
     * associated with the current environment.</p>
     */
    inline bool EnvironmentAccountConnectionIdHasBeenSet() const { return m_environmentAccountConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the environment account connection.</p> <p>You can only update to a
     * new environment account connection if it was created in the same environment
     * account that the current environment account connection was created in and is
     * associated with the current environment.</p>
     */
    inline void SetEnvironmentAccountConnectionId(const Aws::String& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = value; }

    /**
     * <p>The ID of the environment account connection.</p> <p>You can only update to a
     * new environment account connection if it was created in the same environment
     * account that the current environment account connection was created in and is
     * associated with the current environment.</p>
     */
    inline void SetEnvironmentAccountConnectionId(Aws::String&& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = std::move(value); }

    /**
     * <p>The ID of the environment account connection.</p> <p>You can only update to a
     * new environment account connection if it was created in the same environment
     * account that the current environment account connection was created in and is
     * associated with the current environment.</p>
     */
    inline void SetEnvironmentAccountConnectionId(const char* value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId.assign(value); }

    /**
     * <p>The ID of the environment account connection.</p> <p>You can only update to a
     * new environment account connection if it was created in the same environment
     * account that the current environment account connection was created in and is
     * associated with the current environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentAccountConnectionId(const Aws::String& value) { SetEnvironmentAccountConnectionId(value); return *this;}

    /**
     * <p>The ID of the environment account connection.</p> <p>You can only update to a
     * new environment account connection if it was created in the same environment
     * account that the current environment account connection was created in and is
     * associated with the current environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentAccountConnectionId(Aws::String&& value) { SetEnvironmentAccountConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment account connection.</p> <p>You can only update to a
     * new environment account connection if it was created in the same environment
     * account that the current environment account connection was created in and is
     * associated with the current environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentAccountConnectionId(const char* value) { SetEnvironmentAccountConnectionId(value); return *this;}


    /**
     * <p>The name of the environment to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make API calls to other services your behalf.</p>
     */
    inline const Aws::String& GetProtonServiceRoleArn() const{ return m_protonServiceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make API calls to other services your behalf.</p>
     */
    inline bool ProtonServiceRoleArnHasBeenSet() const { return m_protonServiceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make API calls to other services your behalf.</p>
     */
    inline void SetProtonServiceRoleArn(const Aws::String& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make API calls to other services your behalf.</p>
     */
    inline void SetProtonServiceRoleArn(Aws::String&& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make API calls to other services your behalf.</p>
     */
    inline void SetProtonServiceRoleArn(const char* value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make API calls to other services your behalf.</p>
     */
    inline UpdateEnvironmentRequest& WithProtonServiceRoleArn(const Aws::String& value) { SetProtonServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make API calls to other services your behalf.</p>
     */
    inline UpdateEnvironmentRequest& WithProtonServiceRoleArn(Aws::String&& value) { SetProtonServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make API calls to other services your behalf.</p>
     */
    inline UpdateEnvironmentRequest& WithProtonServiceRoleArn(const char* value) { SetProtonServiceRoleArn(value); return *this;}


    /**
     * <p>The linked repository that you use to host your rendered infrastructure
     * templates for self-managed provisioning. A linked repository is a repository
     * that has been registered with Proton. For more information, see
     * <a>CreateRepository</a>.</p>
     */
    inline const RepositoryBranchInput& GetProvisioningRepository() const{ return m_provisioningRepository; }

    /**
     * <p>The linked repository that you use to host your rendered infrastructure
     * templates for self-managed provisioning. A linked repository is a repository
     * that has been registered with Proton. For more information, see
     * <a>CreateRepository</a>.</p>
     */
    inline bool ProvisioningRepositoryHasBeenSet() const { return m_provisioningRepositoryHasBeenSet; }

    /**
     * <p>The linked repository that you use to host your rendered infrastructure
     * templates for self-managed provisioning. A linked repository is a repository
     * that has been registered with Proton. For more information, see
     * <a>CreateRepository</a>.</p>
     */
    inline void SetProvisioningRepository(const RepositoryBranchInput& value) { m_provisioningRepositoryHasBeenSet = true; m_provisioningRepository = value; }

    /**
     * <p>The linked repository that you use to host your rendered infrastructure
     * templates for self-managed provisioning. A linked repository is a repository
     * that has been registered with Proton. For more information, see
     * <a>CreateRepository</a>.</p>
     */
    inline void SetProvisioningRepository(RepositoryBranchInput&& value) { m_provisioningRepositoryHasBeenSet = true; m_provisioningRepository = std::move(value); }

    /**
     * <p>The linked repository that you use to host your rendered infrastructure
     * templates for self-managed provisioning. A linked repository is a repository
     * that has been registered with Proton. For more information, see
     * <a>CreateRepository</a>.</p>
     */
    inline UpdateEnvironmentRequest& WithProvisioningRepository(const RepositoryBranchInput& value) { SetProvisioningRepository(value); return *this;}

    /**
     * <p>The linked repository that you use to host your rendered infrastructure
     * templates for self-managed provisioning. A linked repository is a repository
     * that has been registered with Proton. For more information, see
     * <a>CreateRepository</a>.</p>
     */
    inline UpdateEnvironmentRequest& WithProvisioningRepository(RepositoryBranchInput&& value) { SetProvisioningRepository(std::move(value)); return *this;}


    /**
     * <p>The formatted specification that defines the update.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }

    /**
     * <p>The formatted specification that defines the update.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The formatted specification that defines the update.</p>
     */
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The formatted specification that defines the update.</p>
     */
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The formatted specification that defines the update.</p>
     */
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }

    /**
     * <p>The formatted specification that defines the update.</p>
     */
    inline UpdateEnvironmentRequest& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}

    /**
     * <p>The formatted specification that defines the update.</p>
     */
    inline UpdateEnvironmentRequest& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}

    /**
     * <p>The formatted specification that defines the update.</p>
     */
    inline UpdateEnvironmentRequest& WithSpec(const char* value) { SetSpec(value); return *this;}


    /**
     * <p>The major version of the environment to update.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const{ return m_templateMajorVersion; }

    /**
     * <p>The major version of the environment to update.</p>
     */
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }

    /**
     * <p>The major version of the environment to update.</p>
     */
    inline void SetTemplateMajorVersion(const Aws::String& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = value; }

    /**
     * <p>The major version of the environment to update.</p>
     */
    inline void SetTemplateMajorVersion(Aws::String&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::move(value); }

    /**
     * <p>The major version of the environment to update.</p>
     */
    inline void SetTemplateMajorVersion(const char* value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion.assign(value); }

    /**
     * <p>The major version of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithTemplateMajorVersion(const Aws::String& value) { SetTemplateMajorVersion(value); return *this;}

    /**
     * <p>The major version of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithTemplateMajorVersion(Aws::String&& value) { SetTemplateMajorVersion(std::move(value)); return *this;}

    /**
     * <p>The major version of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithTemplateMajorVersion(const char* value) { SetTemplateMajorVersion(value); return *this;}


    /**
     * <p>The minor version of the environment to update.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const{ return m_templateMinorVersion; }

    /**
     * <p>The minor version of the environment to update.</p>
     */
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }

    /**
     * <p>The minor version of the environment to update.</p>
     */
    inline void SetTemplateMinorVersion(const Aws::String& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = value; }

    /**
     * <p>The minor version of the environment to update.</p>
     */
    inline void SetTemplateMinorVersion(Aws::String&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::move(value); }

    /**
     * <p>The minor version of the environment to update.</p>
     */
    inline void SetTemplateMinorVersion(const char* value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion.assign(value); }

    /**
     * <p>The minor version of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithTemplateMinorVersion(const Aws::String& value) { SetTemplateMinorVersion(value); return *this;}

    /**
     * <p>The minor version of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithTemplateMinorVersion(Aws::String&& value) { SetTemplateMinorVersion(std::move(value)); return *this;}

    /**
     * <p>The minor version of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithTemplateMinorVersion(const char* value) { SetTemplateMinorVersion(value); return *this;}

  private:

    Aws::String m_codebuildRoleArn;
    bool m_codebuildRoleArnHasBeenSet = false;

    Aws::String m_componentRoleArn;
    bool m_componentRoleArnHasBeenSet = false;

    DeploymentUpdateType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_environmentAccountConnectionId;
    bool m_environmentAccountConnectionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_protonServiceRoleArn;
    bool m_protonServiceRoleArnHasBeenSet = false;

    RepositoryBranchInput m_provisioningRepository;
    bool m_provisioningRepositoryHasBeenSet = false;

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
