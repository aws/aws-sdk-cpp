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


    /**
     * <p>The name or Amazon Resource Name (ARN) of the data provider.</p>
     */
    inline const Aws::String& GetDataProviderIdentifier() const{ return m_dataProviderIdentifier; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the data provider.</p>
     */
    inline bool DataProviderIdentifierHasBeenSet() const { return m_dataProviderIdentifierHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the data provider.</p>
     */
    inline void SetDataProviderIdentifier(const Aws::String& value) { m_dataProviderIdentifierHasBeenSet = true; m_dataProviderIdentifier = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the data provider.</p>
     */
    inline void SetDataProviderIdentifier(Aws::String&& value) { m_dataProviderIdentifierHasBeenSet = true; m_dataProviderIdentifier = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the data provider.</p>
     */
    inline void SetDataProviderIdentifier(const char* value) { m_dataProviderIdentifierHasBeenSet = true; m_dataProviderIdentifier.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the data provider.</p>
     */
    inline DataProviderDescriptorDefinition& WithDataProviderIdentifier(const Aws::String& value) { SetDataProviderIdentifier(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the data provider.</p>
     */
    inline DataProviderDescriptorDefinition& WithDataProviderIdentifier(Aws::String&& value) { SetDataProviderIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the data provider.</p>
     */
    inline DataProviderDescriptorDefinition& WithDataProviderIdentifier(const char* value) { SetDataProviderIdentifier(value); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services Secrets Manager Secret used to
     * store access credentials for the data provider.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const{ return m_secretsManagerSecretId; }

    /**
     * <p>The identifier of the Amazon Web Services Secrets Manager Secret used to
     * store access credentials for the data provider.</p>
     */
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services Secrets Manager Secret used to
     * store access credentials for the data provider.</p>
     */
    inline void SetSecretsManagerSecretId(const Aws::String& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = value; }

    /**
     * <p>The identifier of the Amazon Web Services Secrets Manager Secret used to
     * store access credentials for the data provider.</p>
     */
    inline void SetSecretsManagerSecretId(Aws::String&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services Secrets Manager Secret used to
     * store access credentials for the data provider.</p>
     */
    inline void SetSecretsManagerSecretId(const char* value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services Secrets Manager Secret used to
     * store access credentials for the data provider.</p>
     */
    inline DataProviderDescriptorDefinition& WithSecretsManagerSecretId(const Aws::String& value) { SetSecretsManagerSecretId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services Secrets Manager Secret used to
     * store access credentials for the data provider.</p>
     */
    inline DataProviderDescriptorDefinition& WithSecretsManagerSecretId(Aws::String&& value) { SetSecretsManagerSecretId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services Secrets Manager Secret used to
     * store access credentials for the data provider.</p>
     */
    inline DataProviderDescriptorDefinition& WithSecretsManagerSecretId(const char* value) { SetSecretsManagerSecretId(value); return *this;}


    /**
     * <p>The ARN of the role used to access Amazon Web Services Secrets Manager.</p>
     */
    inline const Aws::String& GetSecretsManagerAccessRoleArn() const{ return m_secretsManagerAccessRoleArn; }

    /**
     * <p>The ARN of the role used to access Amazon Web Services Secrets Manager.</p>
     */
    inline bool SecretsManagerAccessRoleArnHasBeenSet() const { return m_secretsManagerAccessRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the role used to access Amazon Web Services Secrets Manager.</p>
     */
    inline void SetSecretsManagerAccessRoleArn(const Aws::String& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = value; }

    /**
     * <p>The ARN of the role used to access Amazon Web Services Secrets Manager.</p>
     */
    inline void SetSecretsManagerAccessRoleArn(Aws::String&& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = std::move(value); }

    /**
     * <p>The ARN of the role used to access Amazon Web Services Secrets Manager.</p>
     */
    inline void SetSecretsManagerAccessRoleArn(const char* value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn.assign(value); }

    /**
     * <p>The ARN of the role used to access Amazon Web Services Secrets Manager.</p>
     */
    inline DataProviderDescriptorDefinition& WithSecretsManagerAccessRoleArn(const Aws::String& value) { SetSecretsManagerAccessRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role used to access Amazon Web Services Secrets Manager.</p>
     */
    inline DataProviderDescriptorDefinition& WithSecretsManagerAccessRoleArn(Aws::String&& value) { SetSecretsManagerAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role used to access Amazon Web Services Secrets Manager.</p>
     */
    inline DataProviderDescriptorDefinition& WithSecretsManagerAccessRoleArn(const char* value) { SetSecretsManagerAccessRoleArn(value); return *this;}

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
