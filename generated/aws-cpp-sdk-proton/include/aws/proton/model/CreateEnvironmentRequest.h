﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/RepositoryBranchInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class AWS_PROTON_API CreateEnvironmentRequest : public ProtonRequest
  {
  public:
    CreateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A description of the environment that's being created and deployed.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the environment that's being created and deployed.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the environment that's being created and deployed.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the environment that's being created and deployed.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the environment that's being created and deployed.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the environment that's being created and deployed.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the environment that's being created and deployed.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the environment that's being created and deployed.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the environment account connection that you provide if you're
     * provisioning your environment infrastructure resources to an environment
     * account. You must include either the <code>environmentAccountConnectionId</code>
     * or <code>protonServiceRoleArn</code> parameter and value and omit the
     * <code>provisioningRepository</code> parameter and values. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment
     * account connections</a> in the <i>Proton Administrator guide</i>.</p>
     */
    inline const Aws::String& GetEnvironmentAccountConnectionId() const{ return m_environmentAccountConnectionId; }

    /**
     * <p>The ID of the environment account connection that you provide if you're
     * provisioning your environment infrastructure resources to an environment
     * account. You must include either the <code>environmentAccountConnectionId</code>
     * or <code>protonServiceRoleArn</code> parameter and value and omit the
     * <code>provisioningRepository</code> parameter and values. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment
     * account connections</a> in the <i>Proton Administrator guide</i>.</p>
     */
    inline bool EnvironmentAccountConnectionIdHasBeenSet() const { return m_environmentAccountConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the environment account connection that you provide if you're
     * provisioning your environment infrastructure resources to an environment
     * account. You must include either the <code>environmentAccountConnectionId</code>
     * or <code>protonServiceRoleArn</code> parameter and value and omit the
     * <code>provisioningRepository</code> parameter and values. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment
     * account connections</a> in the <i>Proton Administrator guide</i>.</p>
     */
    inline void SetEnvironmentAccountConnectionId(const Aws::String& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = value; }

    /**
     * <p>The ID of the environment account connection that you provide if you're
     * provisioning your environment infrastructure resources to an environment
     * account. You must include either the <code>environmentAccountConnectionId</code>
     * or <code>protonServiceRoleArn</code> parameter and value and omit the
     * <code>provisioningRepository</code> parameter and values. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment
     * account connections</a> in the <i>Proton Administrator guide</i>.</p>
     */
    inline void SetEnvironmentAccountConnectionId(Aws::String&& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = std::move(value); }

    /**
     * <p>The ID of the environment account connection that you provide if you're
     * provisioning your environment infrastructure resources to an environment
     * account. You must include either the <code>environmentAccountConnectionId</code>
     * or <code>protonServiceRoleArn</code> parameter and value and omit the
     * <code>provisioningRepository</code> parameter and values. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment
     * account connections</a> in the <i>Proton Administrator guide</i>.</p>
     */
    inline void SetEnvironmentAccountConnectionId(const char* value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId.assign(value); }

    /**
     * <p>The ID of the environment account connection that you provide if you're
     * provisioning your environment infrastructure resources to an environment
     * account. You must include either the <code>environmentAccountConnectionId</code>
     * or <code>protonServiceRoleArn</code> parameter and value and omit the
     * <code>provisioningRepository</code> parameter and values. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment
     * account connections</a> in the <i>Proton Administrator guide</i>.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentAccountConnectionId(const Aws::String& value) { SetEnvironmentAccountConnectionId(value); return *this;}

    /**
     * <p>The ID of the environment account connection that you provide if you're
     * provisioning your environment infrastructure resources to an environment
     * account. You must include either the <code>environmentAccountConnectionId</code>
     * or <code>protonServiceRoleArn</code> parameter and value and omit the
     * <code>provisioningRepository</code> parameter and values. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment
     * account connections</a> in the <i>Proton Administrator guide</i>.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentAccountConnectionId(Aws::String&& value) { SetEnvironmentAccountConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment account connection that you provide if you're
     * provisioning your environment infrastructure resources to an environment
     * account. You must include either the <code>environmentAccountConnectionId</code>
     * or <code>protonServiceRoleArn</code> parameter and value and omit the
     * <code>provisioningRepository</code> parameter and values. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment
     * account connections</a> in the <i>Proton Administrator guide</i>.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentAccountConnectionId(const char* value) { SetEnvironmentAccountConnectionId(value); return *this;}


    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf. You must include either the
     * <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code>
     * parameter and value and omit the <code>provisioningRepository</code> parameter
     * when you use standard provisioning.</p>
     */
    inline const Aws::String& GetProtonServiceRoleArn() const{ return m_protonServiceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf. You must include either the
     * <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code>
     * parameter and value and omit the <code>provisioningRepository</code> parameter
     * when you use standard provisioning.</p>
     */
    inline bool ProtonServiceRoleArnHasBeenSet() const { return m_protonServiceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf. You must include either the
     * <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code>
     * parameter and value and omit the <code>provisioningRepository</code> parameter
     * when you use standard provisioning.</p>
     */
    inline void SetProtonServiceRoleArn(const Aws::String& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf. You must include either the
     * <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code>
     * parameter and value and omit the <code>provisioningRepository</code> parameter
     * when you use standard provisioning.</p>
     */
    inline void SetProtonServiceRoleArn(Aws::String&& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf. You must include either the
     * <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code>
     * parameter and value and omit the <code>provisioningRepository</code> parameter
     * when you use standard provisioning.</p>
     */
    inline void SetProtonServiceRoleArn(const char* value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf. You must include either the
     * <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code>
     * parameter and value and omit the <code>provisioningRepository</code> parameter
     * when you use standard provisioning.</p>
     */
    inline CreateEnvironmentRequest& WithProtonServiceRoleArn(const Aws::String& value) { SetProtonServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf. You must include either the
     * <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code>
     * parameter and value and omit the <code>provisioningRepository</code> parameter
     * when you use standard provisioning.</p>
     */
    inline CreateEnvironmentRequest& WithProtonServiceRoleArn(Aws::String&& value) { SetProtonServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf. You must include either the
     * <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code>
     * parameter and value and omit the <code>provisioningRepository</code> parameter
     * when you use standard provisioning.</p>
     */
    inline CreateEnvironmentRequest& WithProtonServiceRoleArn(const char* value) { SetProtonServiceRoleArn(value); return *this;}


    /**
     * <p>The repository that you provide with pull request provisioning. If you
     * provide this parameter, you must omit the
     * <code>environmentAccountConnectionId</code> and
     * <code>protonServiceRoleArn</code> parameters.</p>  <p>Provisioning by
     * pull request is currently in feature preview and is only usable with Terraform
     * based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline const RepositoryBranchInput& GetProvisioningRepository() const{ return m_provisioningRepository; }

    /**
     * <p>The repository that you provide with pull request provisioning. If you
     * provide this parameter, you must omit the
     * <code>environmentAccountConnectionId</code> and
     * <code>protonServiceRoleArn</code> parameters.</p>  <p>Provisioning by
     * pull request is currently in feature preview and is only usable with Terraform
     * based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline bool ProvisioningRepositoryHasBeenSet() const { return m_provisioningRepositoryHasBeenSet; }

    /**
     * <p>The repository that you provide with pull request provisioning. If you
     * provide this parameter, you must omit the
     * <code>environmentAccountConnectionId</code> and
     * <code>protonServiceRoleArn</code> parameters.</p>  <p>Provisioning by
     * pull request is currently in feature preview and is only usable with Terraform
     * based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline void SetProvisioningRepository(const RepositoryBranchInput& value) { m_provisioningRepositoryHasBeenSet = true; m_provisioningRepository = value; }

    /**
     * <p>The repository that you provide with pull request provisioning. If you
     * provide this parameter, you must omit the
     * <code>environmentAccountConnectionId</code> and
     * <code>protonServiceRoleArn</code> parameters.</p>  <p>Provisioning by
     * pull request is currently in feature preview and is only usable with Terraform
     * based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline void SetProvisioningRepository(RepositoryBranchInput&& value) { m_provisioningRepositoryHasBeenSet = true; m_provisioningRepository = std::move(value); }

    /**
     * <p>The repository that you provide with pull request provisioning. If you
     * provide this parameter, you must omit the
     * <code>environmentAccountConnectionId</code> and
     * <code>protonServiceRoleArn</code> parameters.</p>  <p>Provisioning by
     * pull request is currently in feature preview and is only usable with Terraform
     * based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline CreateEnvironmentRequest& WithProvisioningRepository(const RepositoryBranchInput& value) { SetProvisioningRepository(value); return *this;}

    /**
     * <p>The repository that you provide with pull request provisioning. If you
     * provide this parameter, you must omit the
     * <code>environmentAccountConnectionId</code> and
     * <code>protonServiceRoleArn</code> parameters.</p>  <p>Provisioning by
     * pull request is currently in feature preview and is only usable with Terraform
     * based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline CreateEnvironmentRequest& WithProvisioningRepository(RepositoryBranchInput&& value) { SetProvisioningRepository(std::move(value)); return *this;}


    /**
     * <p>A link to a YAML formatted spec file that provides inputs as defined in the
     * environment template bundle schema file. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-environments.html">Environments</a>
     * in the <i>Proton Administrator Guide</i>.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }

    /**
     * <p>A link to a YAML formatted spec file that provides inputs as defined in the
     * environment template bundle schema file. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-environments.html">Environments</a>
     * in the <i>Proton Administrator Guide</i>.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>A link to a YAML formatted spec file that provides inputs as defined in the
     * environment template bundle schema file. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-environments.html">Environments</a>
     * in the <i>Proton Administrator Guide</i>.</p>
     */
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>A link to a YAML formatted spec file that provides inputs as defined in the
     * environment template bundle schema file. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-environments.html">Environments</a>
     * in the <i>Proton Administrator Guide</i>.</p>
     */
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>A link to a YAML formatted spec file that provides inputs as defined in the
     * environment template bundle schema file. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-environments.html">Environments</a>
     * in the <i>Proton Administrator Guide</i>.</p>
     */
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }

    /**
     * <p>A link to a YAML formatted spec file that provides inputs as defined in the
     * environment template bundle schema file. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-environments.html">Environments</a>
     * in the <i>Proton Administrator Guide</i>.</p>
     */
    inline CreateEnvironmentRequest& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}

    /**
     * <p>A link to a YAML formatted spec file that provides inputs as defined in the
     * environment template bundle schema file. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-environments.html">Environments</a>
     * in the <i>Proton Administrator Guide</i>.</p>
     */
    inline CreateEnvironmentRequest& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}

    /**
     * <p>A link to a YAML formatted spec file that provides inputs as defined in the
     * environment template bundle schema file. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-environments.html">Environments</a>
     * in the <i>Proton Administrator Guide</i>.</p>
     */
    inline CreateEnvironmentRequest& WithSpec(const char* value) { SetSpec(value); return *this;}


    /**
     * <p>Create tags for your environment. For more information, see <i>Proton
     * resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">Proton
     * Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * User Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Create tags for your environment. For more information, see <i>Proton
     * resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">Proton
     * Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * User Guide</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Create tags for your environment. For more information, see <i>Proton
     * resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">Proton
     * Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * User Guide</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Create tags for your environment. For more information, see <i>Proton
     * resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">Proton
     * Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * User Guide</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Create tags for your environment. For more information, see <i>Proton
     * resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">Proton
     * Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * User Guide</a>.</p>
     */
    inline CreateEnvironmentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Create tags for your environment. For more information, see <i>Proton
     * resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">Proton
     * Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * User Guide</a>.</p>
     */
    inline CreateEnvironmentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Create tags for your environment. For more information, see <i>Proton
     * resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">Proton
     * Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * User Guide</a>.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Create tags for your environment. For more information, see <i>Proton
     * resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">Proton
     * Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * User Guide</a>.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The major version of the environment template.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const{ return m_templateMajorVersion; }

    /**
     * <p>The major version of the environment template.</p>
     */
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }

    /**
     * <p>The major version of the environment template.</p>
     */
    inline void SetTemplateMajorVersion(const Aws::String& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = value; }

    /**
     * <p>The major version of the environment template.</p>
     */
    inline void SetTemplateMajorVersion(Aws::String&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::move(value); }

    /**
     * <p>The major version of the environment template.</p>
     */
    inline void SetTemplateMajorVersion(const char* value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion.assign(value); }

    /**
     * <p>The major version of the environment template.</p>
     */
    inline CreateEnvironmentRequest& WithTemplateMajorVersion(const Aws::String& value) { SetTemplateMajorVersion(value); return *this;}

    /**
     * <p>The major version of the environment template.</p>
     */
    inline CreateEnvironmentRequest& WithTemplateMajorVersion(Aws::String&& value) { SetTemplateMajorVersion(std::move(value)); return *this;}

    /**
     * <p>The major version of the environment template.</p>
     */
    inline CreateEnvironmentRequest& WithTemplateMajorVersion(const char* value) { SetTemplateMajorVersion(value); return *this;}


    /**
     * <p>The minor version of the environment template.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const{ return m_templateMinorVersion; }

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline void SetTemplateMinorVersion(const Aws::String& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = value; }

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline void SetTemplateMinorVersion(Aws::String&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::move(value); }

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline void SetTemplateMinorVersion(const char* value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion.assign(value); }

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline CreateEnvironmentRequest& WithTemplateMinorVersion(const Aws::String& value) { SetTemplateMinorVersion(value); return *this;}

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline CreateEnvironmentRequest& WithTemplateMinorVersion(Aws::String&& value) { SetTemplateMinorVersion(std::move(value)); return *this;}

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline CreateEnvironmentRequest& WithTemplateMinorVersion(const char* value) { SetTemplateMinorVersion(value); return *this;}


    /**
     * <p>The name of the environment template. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-templates.html">Environment
     * Templates</a> in the <i>Proton Administrator Guide</i>.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the environment template. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-templates.html">Environment
     * Templates</a> in the <i>Proton Administrator Guide</i>.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the environment template. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-templates.html">Environment
     * Templates</a> in the <i>Proton Administrator Guide</i>.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the environment template. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-templates.html">Environment
     * Templates</a> in the <i>Proton Administrator Guide</i>.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the environment template. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-templates.html">Environment
     * Templates</a> in the <i>Proton Administrator Guide</i>.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the environment template. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-templates.html">Environment
     * Templates</a> in the <i>Proton Administrator Guide</i>.</p>
     */
    inline CreateEnvironmentRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the environment template. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-templates.html">Environment
     * Templates</a> in the <i>Proton Administrator Guide</i>.</p>
     */
    inline CreateEnvironmentRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment template. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-templates.html">Environment
     * Templates</a> in the <i>Proton Administrator Guide</i>.</p>
     */
    inline CreateEnvironmentRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_environmentAccountConnectionId;
    bool m_environmentAccountConnectionIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_protonServiceRoleArn;
    bool m_protonServiceRoleArnHasBeenSet;

    RepositoryBranchInput m_provisioningRepository;
    bool m_provisioningRepositoryHasBeenSet;

    Aws::String m_spec;
    bool m_specHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_templateMajorVersion;
    bool m_templateMajorVersionHasBeenSet;

    Aws::String m_templateMinorVersion;
    bool m_templateMinorVersionHasBeenSet;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
