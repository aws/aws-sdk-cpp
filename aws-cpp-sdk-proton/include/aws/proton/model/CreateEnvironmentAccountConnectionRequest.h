/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class CreateEnvironmentAccountConnectionRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API CreateEnvironmentAccountConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironmentAccountConnection"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment account connection that the first request
     * created.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment account connection that the first request
     * created.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment account connection that the first request
     * created.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment account connection that the first request
     * created.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment account connection that the first request
     * created.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment account connection that the first request
     * created.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment account connection that the first request
     * created.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment account connection that the first request
     * created.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline const Aws::String& GetCodebuildRoleArn() const{ return m_codebuildRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline bool CodebuildRoleArnHasBeenSet() const { return m_codebuildRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline void SetCodebuildRoleArn(const Aws::String& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline void SetCodebuildRoleArn(Aws::String&& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline void SetCodebuildRoleArn(const char* value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithCodebuildRoleArn(const Aws::String& value) { SetCodebuildRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithCodebuildRoleArn(Aws::String&& value) { SetCodebuildRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithCodebuildRoleArn(const char* value) { SetCodebuildRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>You must specify <code>componentRoleArn</code> to allow directly
     * defined components to be associated with any environments running in this
     * account.</p> <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetComponentRoleArn() const{ return m_componentRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>You must specify <code>componentRoleArn</code> to allow directly
     * defined components to be associated with any environments running in this
     * account.</p> <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool ComponentRoleArnHasBeenSet() const { return m_componentRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>You must specify <code>componentRoleArn</code> to allow directly
     * defined components to be associated with any environments running in this
     * account.</p> <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(const Aws::String& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>You must specify <code>componentRoleArn</code> to allow directly
     * defined components to be associated with any environments running in this
     * account.</p> <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(Aws::String&& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>You must specify <code>componentRoleArn</code> to allow directly
     * defined components to be associated with any environments running in this
     * account.</p> <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(const char* value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>You must specify <code>componentRoleArn</code> to allow directly
     * defined components to be associated with any environments running in this
     * account.</p> <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithComponentRoleArn(const Aws::String& value) { SetComponentRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>You must specify <code>componentRoleArn</code> to allow directly
     * defined components to be associated with any environments running in this
     * account.</p> <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithComponentRoleArn(Aws::String&& value) { SetComponentRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>You must specify <code>componentRoleArn</code> to allow directly
     * defined components to be associated with any environments running in this
     * account.</p> <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithComponentRoleArn(const char* value) { SetComponentRoleArn(value); return *this;}


    /**
     * <p>The name of the Proton environment that's created in the associated
     * management account.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the Proton environment that's created in the associated
     * management account.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the Proton environment that's created in the associated
     * management account.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the Proton environment that's created in the associated
     * management account.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the Proton environment that's created in the associated
     * management account.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the Proton environment that's created in the associated
     * management account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the Proton environment that's created in the associated
     * management account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the Proton environment that's created in the associated
     * management account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create and manage the Proton environment in this
     * account. If the management account accepts the environment account connection,
     * Proton can use the associated IAM role to provision environment infrastructure
     * resources in the associated environment account.</p>
     */
    inline const Aws::String& GetManagementAccountId() const{ return m_managementAccountId; }

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create and manage the Proton environment in this
     * account. If the management account accepts the environment account connection,
     * Proton can use the associated IAM role to provision environment infrastructure
     * resources in the associated environment account.</p>
     */
    inline bool ManagementAccountIdHasBeenSet() const { return m_managementAccountIdHasBeenSet; }

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create and manage the Proton environment in this
     * account. If the management account accepts the environment account connection,
     * Proton can use the associated IAM role to provision environment infrastructure
     * resources in the associated environment account.</p>
     */
    inline void SetManagementAccountId(const Aws::String& value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId = value; }

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create and manage the Proton environment in this
     * account. If the management account accepts the environment account connection,
     * Proton can use the associated IAM role to provision environment infrastructure
     * resources in the associated environment account.</p>
     */
    inline void SetManagementAccountId(Aws::String&& value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId = std::move(value); }

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create and manage the Proton environment in this
     * account. If the management account accepts the environment account connection,
     * Proton can use the associated IAM role to provision environment infrastructure
     * resources in the associated environment account.</p>
     */
    inline void SetManagementAccountId(const char* value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId.assign(value); }

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create and manage the Proton environment in this
     * account. If the management account accepts the environment account connection,
     * Proton can use the associated IAM role to provision environment infrastructure
     * resources in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithManagementAccountId(const Aws::String& value) { SetManagementAccountId(value); return *this;}

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create and manage the Proton environment in this
     * account. If the management account accepts the environment account connection,
     * Proton can use the associated IAM role to provision environment infrastructure
     * resources in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithManagementAccountId(Aws::String&& value) { SetManagementAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create and manage the Proton environment in this
     * account. If the management account accepts the environment account connection,
     * Proton can use the associated IAM role to provision environment infrastructure
     * resources in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithManagementAccountId(const char* value) { SetManagementAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. Proton uses this role to provision infrastructure resources
     * in the associated environment account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. Proton uses this role to provision infrastructure resources
     * in the associated environment account.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. Proton uses this role to provision infrastructure resources
     * in the associated environment account.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. Proton uses this role to provision infrastructure resources
     * in the associated environment account.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. Proton uses this role to provision infrastructure resources
     * in the associated environment account.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. Proton uses this role to provision infrastructure resources
     * in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. Proton uses this role to provision infrastructure resources
     * in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. Proton uses this role to provision infrastructure resources
     * in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment account connection. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment account connection. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment account connection. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment account connection. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment account connection. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment account connection. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment account connection. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment account connection. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_codebuildRoleArn;
    bool m_codebuildRoleArnHasBeenSet = false;

    Aws::String m_componentRoleArn;
    bool m_componentRoleArnHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_managementAccountId;
    bool m_managementAccountIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
