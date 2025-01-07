/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/RedshiftProvisionedAuthType.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains configurations for authentication to an Amazon Redshift provisioned
   * data warehouse. Specify the type of authentication to use in the
   * <code>type</code> field and include the corresponding field. If you specify IAM
   * authentication, you don't need to include another field.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RedshiftProvisionedAuthConfiguration">AWS
   * API Reference</a></p>
   */
  class RedshiftProvisionedAuthConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RedshiftProvisionedAuthConfiguration();
    AWS_BEDROCKAGENT_API RedshiftProvisionedAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedshiftProvisionedAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The database username for authentication to an Amazon Redshift provisioned
     * data warehouse.</p>
     */
    inline const Aws::String& GetDatabaseUser() const{ return m_databaseUser; }
    inline bool DatabaseUserHasBeenSet() const { return m_databaseUserHasBeenSet; }
    inline void SetDatabaseUser(const Aws::String& value) { m_databaseUserHasBeenSet = true; m_databaseUser = value; }
    inline void SetDatabaseUser(Aws::String&& value) { m_databaseUserHasBeenSet = true; m_databaseUser = std::move(value); }
    inline void SetDatabaseUser(const char* value) { m_databaseUserHasBeenSet = true; m_databaseUser.assign(value); }
    inline RedshiftProvisionedAuthConfiguration& WithDatabaseUser(const Aws::String& value) { SetDatabaseUser(value); return *this;}
    inline RedshiftProvisionedAuthConfiguration& WithDatabaseUser(Aws::String&& value) { SetDatabaseUser(std::move(value)); return *this;}
    inline RedshiftProvisionedAuthConfiguration& WithDatabaseUser(const char* value) { SetDatabaseUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication to use.</p>
     */
    inline const RedshiftProvisionedAuthType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RedshiftProvisionedAuthType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RedshiftProvisionedAuthType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RedshiftProvisionedAuthConfiguration& WithType(const RedshiftProvisionedAuthType& value) { SetType(value); return *this;}
    inline RedshiftProvisionedAuthConfiguration& WithType(RedshiftProvisionedAuthType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an Secrets Manager secret for authentication.</p>
     */
    inline const Aws::String& GetUsernamePasswordSecretArn() const{ return m_usernamePasswordSecretArn; }
    inline bool UsernamePasswordSecretArnHasBeenSet() const { return m_usernamePasswordSecretArnHasBeenSet; }
    inline void SetUsernamePasswordSecretArn(const Aws::String& value) { m_usernamePasswordSecretArnHasBeenSet = true; m_usernamePasswordSecretArn = value; }
    inline void SetUsernamePasswordSecretArn(Aws::String&& value) { m_usernamePasswordSecretArnHasBeenSet = true; m_usernamePasswordSecretArn = std::move(value); }
    inline void SetUsernamePasswordSecretArn(const char* value) { m_usernamePasswordSecretArnHasBeenSet = true; m_usernamePasswordSecretArn.assign(value); }
    inline RedshiftProvisionedAuthConfiguration& WithUsernamePasswordSecretArn(const Aws::String& value) { SetUsernamePasswordSecretArn(value); return *this;}
    inline RedshiftProvisionedAuthConfiguration& WithUsernamePasswordSecretArn(Aws::String&& value) { SetUsernamePasswordSecretArn(std::move(value)); return *this;}
    inline RedshiftProvisionedAuthConfiguration& WithUsernamePasswordSecretArn(const char* value) { SetUsernamePasswordSecretArn(value); return *this;}
    ///@}
  private:

    Aws::String m_databaseUser;
    bool m_databaseUserHasBeenSet = false;

    RedshiftProvisionedAuthType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_usernamePasswordSecretArn;
    bool m_usernamePasswordSecretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
