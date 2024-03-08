/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Contains the metadata required to introspect the RDS cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/RdsDataApiConfig">AWS
   * API Reference</a></p>
   */
  class RdsDataApiConfig
  {
  public:
    AWS_APPSYNC_API RdsDataApiConfig();
    AWS_APPSYNC_API RdsDataApiConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API RdsDataApiConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource ARN of the RDS cluster.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The resource ARN of the RDS cluster.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The resource ARN of the RDS cluster.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The resource ARN of the RDS cluster.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The resource ARN of the RDS cluster.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The resource ARN of the RDS cluster.</p>
     */
    inline RdsDataApiConfig& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The resource ARN of the RDS cluster.</p>
     */
    inline RdsDataApiConfig& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The resource ARN of the RDS cluster.</p>
     */
    inline RdsDataApiConfig& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The secret's ARN that was obtained from Secrets Manager. A secret consists of
     * secret information, the secret value, plus metadata about the secret. A secret
     * value can be a string or binary. It typically includes the ARN, secret name and
     * description, policies, tags, encryption key from the Key Management Service, and
     * key rotation data.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The secret's ARN that was obtained from Secrets Manager. A secret consists of
     * secret information, the secret value, plus metadata about the secret. A secret
     * value can be a string or binary. It typically includes the ARN, secret name and
     * description, policies, tags, encryption key from the Key Management Service, and
     * key rotation data.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The secret's ARN that was obtained from Secrets Manager. A secret consists of
     * secret information, the secret value, plus metadata about the secret. A secret
     * value can be a string or binary. It typically includes the ARN, secret name and
     * description, policies, tags, encryption key from the Key Management Service, and
     * key rotation data.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The secret's ARN that was obtained from Secrets Manager. A secret consists of
     * secret information, the secret value, plus metadata about the secret. A secret
     * value can be a string or binary. It typically includes the ARN, secret name and
     * description, policies, tags, encryption key from the Key Management Service, and
     * key rotation data.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The secret's ARN that was obtained from Secrets Manager. A secret consists of
     * secret information, the secret value, plus metadata about the secret. A secret
     * value can be a string or binary. It typically includes the ARN, secret name and
     * description, policies, tags, encryption key from the Key Management Service, and
     * key rotation data.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The secret's ARN that was obtained from Secrets Manager. A secret consists of
     * secret information, the secret value, plus metadata about the secret. A secret
     * value can be a string or binary. It typically includes the ARN, secret name and
     * description, policies, tags, encryption key from the Key Management Service, and
     * key rotation data.</p>
     */
    inline RdsDataApiConfig& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The secret's ARN that was obtained from Secrets Manager. A secret consists of
     * secret information, the secret value, plus metadata about the secret. A secret
     * value can be a string or binary. It typically includes the ARN, secret name and
     * description, policies, tags, encryption key from the Key Management Service, and
     * key rotation data.</p>
     */
    inline RdsDataApiConfig& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The secret's ARN that was obtained from Secrets Manager. A secret consists of
     * secret information, the secret value, plus metadata about the secret. A secret
     * value can be a string or binary. It typically includes the ARN, secret name and
     * description, policies, tags, encryption key from the Key Management Service, and
     * key rotation data.</p>
     */
    inline RdsDataApiConfig& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>The name of the database in the cluster.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database in the cluster.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database in the cluster.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database in the cluster.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database in the cluster.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database in the cluster.</p>
     */
    inline RdsDataApiConfig& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database in the cluster.</p>
     */
    inline RdsDataApiConfig& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database in the cluster.</p>
     */
    inline RdsDataApiConfig& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
