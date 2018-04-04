/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API GetSecretValueRequest : public SecretsManagerRequest
  {
  public:
    GetSecretValueRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSecretValue"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the secret containing the version that you want to retrieve. You
     * can specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Specifies the secret containing the version that you want to retrieve. You
     * can specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Specifies the secret containing the version that you want to retrieve. You
     * can specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Specifies the secret containing the version that you want to retrieve. You
     * can specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Specifies the secret containing the version that you want to retrieve. You
     * can specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline GetSecretValueRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Specifies the secret containing the version that you want to retrieve. You
     * can specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline GetSecretValueRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret containing the version that you want to retrieve. You
     * can specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline GetSecretValueRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>Specifies the unique identifier of the version of the secret that you want to
     * retrieve. If you specify this parameter then don't specify
     * <code>VersionStage</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code> then the default is to
     * perform the operation on the version with the <code>VersionStage</code> value of
     * <code>AWSCURRENT</code>.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>Specifies the unique identifier of the version of the secret that you want to
     * retrieve. If you specify this parameter then don't specify
     * <code>VersionStage</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code> then the default is to
     * perform the operation on the version with the <code>VersionStage</code> value of
     * <code>AWSCURRENT</code>.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>Specifies the unique identifier of the version of the secret that you want to
     * retrieve. If you specify this parameter then don't specify
     * <code>VersionStage</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code> then the default is to
     * perform the operation on the version with the <code>VersionStage</code> value of
     * <code>AWSCURRENT</code>.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>Specifies the unique identifier of the version of the secret that you want to
     * retrieve. If you specify this parameter then don't specify
     * <code>VersionStage</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code> then the default is to
     * perform the operation on the version with the <code>VersionStage</code> value of
     * <code>AWSCURRENT</code>.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>Specifies the unique identifier of the version of the secret that you want to
     * retrieve. If you specify this parameter then don't specify
     * <code>VersionStage</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code> then the default is to
     * perform the operation on the version with the <code>VersionStage</code> value of
     * <code>AWSCURRENT</code>.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline GetSecretValueRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>Specifies the unique identifier of the version of the secret that you want to
     * retrieve. If you specify this parameter then don't specify
     * <code>VersionStage</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code> then the default is to
     * perform the operation on the version with the <code>VersionStage</code> value of
     * <code>AWSCURRENT</code>.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline GetSecretValueRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique identifier of the version of the secret that you want to
     * retrieve. If you specify this parameter then don't specify
     * <code>VersionStage</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code> then the default is to
     * perform the operation on the version with the <code>VersionStage</code> value of
     * <code>AWSCURRENT</code>.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline GetSecretValueRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>Specifies the secret version that you want to retrieve by the staging label
     * attached to the version.</p> <p>Staging labels are used to keep track of
     * different versions during the rotation process. If you use this parameter then
     * don't specify <code>SecretVersionId</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code>, then the default is
     * to perform the operation on the version with the <code>VersionStage</code> value
     * of <code>AWSCURRENT</code>.</p>
     */
    inline const Aws::String& GetVersionStage() const{ return m_versionStage; }

    /**
     * <p>Specifies the secret version that you want to retrieve by the staging label
     * attached to the version.</p> <p>Staging labels are used to keep track of
     * different versions during the rotation process. If you use this parameter then
     * don't specify <code>SecretVersionId</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code>, then the default is
     * to perform the operation on the version with the <code>VersionStage</code> value
     * of <code>AWSCURRENT</code>.</p>
     */
    inline void SetVersionStage(const Aws::String& value) { m_versionStageHasBeenSet = true; m_versionStage = value; }

    /**
     * <p>Specifies the secret version that you want to retrieve by the staging label
     * attached to the version.</p> <p>Staging labels are used to keep track of
     * different versions during the rotation process. If you use this parameter then
     * don't specify <code>SecretVersionId</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code>, then the default is
     * to perform the operation on the version with the <code>VersionStage</code> value
     * of <code>AWSCURRENT</code>.</p>
     */
    inline void SetVersionStage(Aws::String&& value) { m_versionStageHasBeenSet = true; m_versionStage = std::move(value); }

    /**
     * <p>Specifies the secret version that you want to retrieve by the staging label
     * attached to the version.</p> <p>Staging labels are used to keep track of
     * different versions during the rotation process. If you use this parameter then
     * don't specify <code>SecretVersionId</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code>, then the default is
     * to perform the operation on the version with the <code>VersionStage</code> value
     * of <code>AWSCURRENT</code>.</p>
     */
    inline void SetVersionStage(const char* value) { m_versionStageHasBeenSet = true; m_versionStage.assign(value); }

    /**
     * <p>Specifies the secret version that you want to retrieve by the staging label
     * attached to the version.</p> <p>Staging labels are used to keep track of
     * different versions during the rotation process. If you use this parameter then
     * don't specify <code>SecretVersionId</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code>, then the default is
     * to perform the operation on the version with the <code>VersionStage</code> value
     * of <code>AWSCURRENT</code>.</p>
     */
    inline GetSecretValueRequest& WithVersionStage(const Aws::String& value) { SetVersionStage(value); return *this;}

    /**
     * <p>Specifies the secret version that you want to retrieve by the staging label
     * attached to the version.</p> <p>Staging labels are used to keep track of
     * different versions during the rotation process. If you use this parameter then
     * don't specify <code>SecretVersionId</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code>, then the default is
     * to perform the operation on the version with the <code>VersionStage</code> value
     * of <code>AWSCURRENT</code>.</p>
     */
    inline GetSecretValueRequest& WithVersionStage(Aws::String&& value) { SetVersionStage(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret version that you want to retrieve by the staging label
     * attached to the version.</p> <p>Staging labels are used to keep track of
     * different versions during the rotation process. If you use this parameter then
     * don't specify <code>SecretVersionId</code>. If you don't specify either a
     * <code>VersionStage</code> or <code>SecretVersionId</code>, then the default is
     * to perform the operation on the version with the <code>VersionStage</code> value
     * of <code>AWSCURRENT</code>.</p>
     */
    inline GetSecretValueRequest& WithVersionStage(const char* value) { SetVersionStage(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;

    Aws::String m_versionStage;
    bool m_versionStageHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
