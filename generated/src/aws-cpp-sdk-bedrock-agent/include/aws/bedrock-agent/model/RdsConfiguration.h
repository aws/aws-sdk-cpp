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
   * <p>Contains the configurations to use RDS to store knowledge base
   * data.</p><p><h3>See Also:</h3>   <a
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


    
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    
    inline RdsConfiguration& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    
    inline RdsConfiguration& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    
    inline RdsConfiguration& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    
    inline const Aws::String& GetCredentialsSecretArn() const{ return m_credentialsSecretArn; }

    
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }

    
    inline void SetCredentialsSecretArn(const Aws::String& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = value; }

    
    inline void SetCredentialsSecretArn(Aws::String&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::move(value); }

    
    inline void SetCredentialsSecretArn(const char* value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn.assign(value); }

    
    inline RdsConfiguration& WithCredentialsSecretArn(const Aws::String& value) { SetCredentialsSecretArn(value); return *this;}

    
    inline RdsConfiguration& WithCredentialsSecretArn(Aws::String&& value) { SetCredentialsSecretArn(std::move(value)); return *this;}

    
    inline RdsConfiguration& WithCredentialsSecretArn(const char* value) { SetCredentialsSecretArn(value); return *this;}


    
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    
    inline RdsConfiguration& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    
    inline RdsConfiguration& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    
    inline RdsConfiguration& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    
    inline RdsConfiguration& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    
    inline RdsConfiguration& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    
    inline RdsConfiguration& WithTableName(const char* value) { SetTableName(value); return *this;}


    
    inline const RdsFieldMapping& GetFieldMapping() const{ return m_fieldMapping; }

    
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }

    
    inline void SetFieldMapping(const RdsFieldMapping& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = value; }

    
    inline void SetFieldMapping(RdsFieldMapping&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::move(value); }

    
    inline RdsConfiguration& WithFieldMapping(const RdsFieldMapping& value) { SetFieldMapping(value); return *this;}

    
    inline RdsConfiguration& WithFieldMapping(RdsFieldMapping&& value) { SetFieldMapping(std::move(value)); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    RdsFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
