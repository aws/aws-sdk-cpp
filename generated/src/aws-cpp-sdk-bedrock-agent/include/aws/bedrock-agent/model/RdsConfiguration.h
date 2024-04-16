/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/RdsFieldMapping.h>
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
   * <p>Contains details about the storage configuration of the knowledge base in
   * Amazon RDS. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-rds.html">Create
   * a vector index in Amazon RDS</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RdsConfiguration">AWS
   * API Reference</a></p>
   */
  class RdsConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RdsConfiguration();
    AWS_BEDROCKAGENT_API RdsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RdsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Amazon RDS database.</p>
     */
    inline const Aws::String& GetCredentialsSecretArn() const{ return m_credentialsSecretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Amazon RDS database.</p>
     */
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Amazon RDS database.</p>
     */
    inline void SetCredentialsSecretArn(const Aws::String& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Amazon RDS database.</p>
     */
    inline void SetCredentialsSecretArn(Aws::String&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Amazon RDS database.</p>
     */
    inline void SetCredentialsSecretArn(const char* value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Amazon RDS database.</p>
     */
    inline RdsConfiguration& WithCredentialsSecretArn(const Aws::String& value) { SetCredentialsSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Amazon RDS database.</p>
     */
    inline RdsConfiguration& WithCredentialsSecretArn(Aws::String&& value) { SetCredentialsSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Amazon RDS database.</p>
     */
    inline RdsConfiguration& WithCredentialsSecretArn(const char* value) { SetCredentialsSecretArn(value); return *this;}


    /**
     * <p>The name of your Amazon RDS database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of your Amazon RDS database.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of your Amazon RDS database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of your Amazon RDS database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of your Amazon RDS database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of your Amazon RDS database.</p>
     */
    inline RdsConfiguration& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of your Amazon RDS database.</p>
     */
    inline RdsConfiguration& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of your Amazon RDS database.</p>
     */
    inline RdsConfiguration& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const RdsFieldMapping& GetFieldMapping() const{ return m_fieldMapping; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline void SetFieldMapping(const RdsFieldMapping& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = value; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline void SetFieldMapping(RdsFieldMapping&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::move(value); }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline RdsConfiguration& WithFieldMapping(const RdsFieldMapping& value) { SetFieldMapping(value); return *this;}

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline RdsConfiguration& WithFieldMapping(RdsFieldMapping&& value) { SetFieldMapping(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the vector store.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vector store.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vector store.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vector store.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vector store.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vector store.</p>
     */
    inline RdsConfiguration& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vector store.</p>
     */
    inline RdsConfiguration& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vector store.</p>
     */
    inline RdsConfiguration& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The name of the table in the database.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table in the database.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table in the database.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table in the database.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table in the database.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table in the database.</p>
     */
    inline RdsConfiguration& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table in the database.</p>
     */
    inline RdsConfiguration& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table in the database.</p>
     */
    inline RdsConfiguration& WithTableName(const char* value) { SetTableName(value); return *this;}

  private:

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    RdsFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
