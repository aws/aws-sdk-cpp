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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DataProviderDescriptor">AWS
   * API Reference</a></p>
   */
  class DataProviderDescriptor
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderDescriptor();
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DataProviderDescriptor& WithSecretsManagerSecretId(const Aws::String& value) { SetSecretsManagerSecretId(value); return *this;}
    inline DataProviderDescriptor& WithSecretsManagerSecretId(Aws::String&& value) { SetSecretsManagerSecretId(std::move(value)); return *this;}
    inline DataProviderDescriptor& WithSecretsManagerSecretId(const char* value) { SetSecretsManagerSecretId(value); return *this;}
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
    inline DataProviderDescriptor& WithSecretsManagerAccessRoleArn(const Aws::String& value) { SetSecretsManagerAccessRoleArn(value); return *this;}
    inline DataProviderDescriptor& WithSecretsManagerAccessRoleArn(Aws::String&& value) { SetSecretsManagerAccessRoleArn(std::move(value)); return *this;}
    inline DataProviderDescriptor& WithSecretsManagerAccessRoleArn(const char* value) { SetSecretsManagerAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the data provider.</p>
     */
    inline const Aws::String& GetDataProviderName() const{ return m_dataProviderName; }
    inline bool DataProviderNameHasBeenSet() const { return m_dataProviderNameHasBeenSet; }
    inline void SetDataProviderName(const Aws::String& value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName = value; }
    inline void SetDataProviderName(Aws::String&& value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName = std::move(value); }
    inline void SetDataProviderName(const char* value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName.assign(value); }
    inline DataProviderDescriptor& WithDataProviderName(const Aws::String& value) { SetDataProviderName(value); return *this;}
    inline DataProviderDescriptor& WithDataProviderName(Aws::String&& value) { SetDataProviderName(std::move(value)); return *this;}
    inline DataProviderDescriptor& WithDataProviderName(const char* value) { SetDataProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data provider.</p>
     */
    inline const Aws::String& GetDataProviderArn() const{ return m_dataProviderArn; }
    inline bool DataProviderArnHasBeenSet() const { return m_dataProviderArnHasBeenSet; }
    inline void SetDataProviderArn(const Aws::String& value) { m_dataProviderArnHasBeenSet = true; m_dataProviderArn = value; }
    inline void SetDataProviderArn(Aws::String&& value) { m_dataProviderArnHasBeenSet = true; m_dataProviderArn = std::move(value); }
    inline void SetDataProviderArn(const char* value) { m_dataProviderArnHasBeenSet = true; m_dataProviderArn.assign(value); }
    inline DataProviderDescriptor& WithDataProviderArn(const Aws::String& value) { SetDataProviderArn(value); return *this;}
    inline DataProviderDescriptor& WithDataProviderArn(Aws::String&& value) { SetDataProviderArn(std::move(value)); return *this;}
    inline DataProviderDescriptor& WithDataProviderArn(const char* value) { SetDataProviderArn(value); return *this;}
    ///@}
  private:

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;

    Aws::String m_dataProviderName;
    bool m_dataProviderNameHasBeenSet = false;

    Aws::String m_dataProviderArn;
    bool m_dataProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
