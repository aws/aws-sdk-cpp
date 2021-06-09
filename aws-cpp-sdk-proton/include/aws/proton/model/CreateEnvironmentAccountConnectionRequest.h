/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_PROTON_API CreateEnvironmentAccountConnectionRequest : public ProtonRequest
  {
  public:
    CreateEnvironmentAccountConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironmentAccountConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>When included, if two identicial requests are made with the same client
     * token, AWS Proton returns the environment account connection that the first
     * request created.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>When included, if two identicial requests are made with the same client
     * token, AWS Proton returns the environment account connection that the first
     * request created.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>When included, if two identicial requests are made with the same client
     * token, AWS Proton returns the environment account connection that the first
     * request created.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>When included, if two identicial requests are made with the same client
     * token, AWS Proton returns the environment account connection that the first
     * request created.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>When included, if two identicial requests are made with the same client
     * token, AWS Proton returns the environment account connection that the first
     * request created.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>When included, if two identicial requests are made with the same client
     * token, AWS Proton returns the environment account connection that the first
     * request created.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>When included, if two identicial requests are made with the same client
     * token, AWS Proton returns the environment account connection that the first
     * request created.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>When included, if two identicial requests are made with the same client
     * token, AWS Proton returns the environment account connection that the first
     * request created.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the AWS Proton environment that's created in the associated
     * management account.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the AWS Proton environment that's created in the associated
     * management account.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the AWS Proton environment that's created in the associated
     * management account.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the AWS Proton environment that's created in the associated
     * management account.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the AWS Proton environment that's created in the associated
     * management account.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the AWS Proton environment that's created in the associated
     * management account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the AWS Proton environment that's created in the associated
     * management account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Proton environment that's created in the associated
     * management account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create an manage the AWS Proton environment in this
     * account. If the management account accepts the environment account connection,
     * AWS Proton can use the associated IAM role to provision environment
     * infrastructure resources in the associated environment account.</p>
     */
    inline const Aws::String& GetManagementAccountId() const{ return m_managementAccountId; }

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create an manage the AWS Proton environment in this
     * account. If the management account accepts the environment account connection,
     * AWS Proton can use the associated IAM role to provision environment
     * infrastructure resources in the associated environment account.</p>
     */
    inline bool ManagementAccountIdHasBeenSet() const { return m_managementAccountIdHasBeenSet; }

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create an manage the AWS Proton environment in this
     * account. If the management account accepts the environment account connection,
     * AWS Proton can use the associated IAM role to provision environment
     * infrastructure resources in the associated environment account.</p>
     */
    inline void SetManagementAccountId(const Aws::String& value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId = value; }

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create an manage the AWS Proton environment in this
     * account. If the management account accepts the environment account connection,
     * AWS Proton can use the associated IAM role to provision environment
     * infrastructure resources in the associated environment account.</p>
     */
    inline void SetManagementAccountId(Aws::String&& value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId = std::move(value); }

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create an manage the AWS Proton environment in this
     * account. If the management account accepts the environment account connection,
     * AWS Proton can use the associated IAM role to provision environment
     * infrastructure resources in the associated environment account.</p>
     */
    inline void SetManagementAccountId(const char* value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId.assign(value); }

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create an manage the AWS Proton environment in this
     * account. If the management account accepts the environment account connection,
     * AWS Proton can use the associated IAM role to provision environment
     * infrastructure resources in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithManagementAccountId(const Aws::String& value) { SetManagementAccountId(value); return *this;}

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create an manage the AWS Proton environment in this
     * account. If the management account accepts the environment account connection,
     * AWS Proton can use the associated IAM role to provision environment
     * infrastructure resources in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithManagementAccountId(Aws::String&& value) { SetManagementAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the management account that accepts or rejects the environment
     * account connection. You create an manage the AWS Proton environment in this
     * account. If the management account accepts the environment account connection,
     * AWS Proton can use the associated IAM role to provision environment
     * infrastructure resources in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithManagementAccountId(const char* value) { SetManagementAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. AWS Proton uses this role to provision infrastructure
     * resources in the associated environment account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. AWS Proton uses this role to provision infrastructure
     * resources in the associated environment account.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. AWS Proton uses this role to provision infrastructure
     * resources in the associated environment account.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. AWS Proton uses this role to provision infrastructure
     * resources in the associated environment account.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. AWS Proton uses this role to provision infrastructure
     * resources in the associated environment account.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. AWS Proton uses this role to provision infrastructure
     * resources in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. AWS Proton uses this role to provision infrastructure
     * resources in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's created in the
     * environment account. AWS Proton uses this role to provision infrastructure
     * resources in the associated environment account.</p>
     */
    inline CreateEnvironmentAccountConnectionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;

    Aws::String m_managementAccountId;
    bool m_managementAccountIdHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
