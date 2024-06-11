/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Information about a data provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DataProviderDescriptorDefinition">AWS
   * API Reference</a></p>
   */
  class DataProviderDescriptorDefinition
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderDescriptorDefinition();
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderDescriptorDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderDescriptorDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the data provider.</p>
     */
    inline const Aws::String& GetDataProviderIdentifier() const{ return m_dataProviderIdentifier; }
    inline bool DataProviderIdentifierHasBeenSet() const { return m_dataProviderIdentifierHasBeenSet; }
    inline void SetDataProviderIdentifier(const Aws::String& value) { m_dataProviderIdentifierHasBeenSet = true; m_dataProviderIdentifier = value; }
    inline void SetDataProviderIdentifier(Aws::String&& value) { m_dataProviderIdentifierHasBeenSet = true; m_dataProviderIdentifier = std::move(value); }
    inline void SetDataProviderIdentifier(const char* value) { m_dataProviderIdentifierHasBeenSet = true; m_dataProviderIdentifier.assign(value); }
    inline DataProviderDescriptorDefinition& WithDataProviderIdentifier(const Aws::String& value) { SetDataProviderIdentifier(value); return *this;}
    inline DataProviderDescriptorDefinition& WithDataProviderIdentifier(Aws::String&& value) { SetDataProviderIdentifier(std::move(value)); return *this;}
    inline DataProviderDescriptorDefinition& WithDataProviderIdentifier(const char* value) { SetDataProviderIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services Secrets Manager Secret used to
     * store access credentials for the data provider.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const{ return m_secretsManagerSecretId; }
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }
    inline void SetSecretsManagerSecretId(const Aws::String& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = value; }
    inline void SetSecretsManagerSecretId(Aws::String&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::move(value); }
    inline void SetSecretsManagerSecretId(const char* value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId.assign(value); }
    inline DataProviderDescriptorDefinition& WithSecretsManagerSecretId(const Aws::String& value) { SetSecretsManagerSecretId(value); return *this;}
    inline DataProviderDescriptorDefinition& WithSecretsManagerSecretId(Aws::String&& value) { SetSecretsManagerSecretId(std::move(value)); return *this;}
    inline DataProviderDescriptorDefinition& WithSecretsManagerSecretId(const char* value) { SetSecretsManagerSecretId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used to access Amazon Web Services Secrets Manager.</p>
     */
    inline const Aws::String& GetSecretsManagerAccessRoleArn() const{ return m_secretsManagerAccessRoleArn; }
    inline bool SecretsManagerAccessRoleArnHasBeenSet() const { return m_secretsManagerAccessRoleArnHasBeenSet; }
    inline void SetSecretsManagerAccessRoleArn(const Aws::String& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = value; }
    inline void SetSecretsManagerAccessRoleArn(Aws::String&& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = std::move(value); }
    inline void SetSecretsManagerAccessRoleArn(const char* value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn.assign(value); }
    inline DataProviderDescriptorDefinition& WithSecretsManagerAccessRoleArn(const Aws::String& value) { SetSecretsManagerAccessRoleArn(value); return *this;}
    inline DataProviderDescriptorDefinition& WithSecretsManagerAccessRoleArn(Aws::String&& value) { SetSecretsManagerAccessRoleArn(std::move(value)); return *this;}
    inline DataProviderDescriptorDefinition& WithSecretsManagerAccessRoleArn(const char* value) { SetSecretsManagerAccessRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_dataProviderIdentifier;
    bool m_dataProviderIdentifierHasBeenSet = false;

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
