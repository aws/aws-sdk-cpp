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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Algorithm.h>
#include <aws/mediaconnect/model/KeyType.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Information about the encryption of the flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateEncryption">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API UpdateEncryption
  {
  public:
    UpdateEncryption();
    UpdateEncryption(Aws::Utils::Json::JsonView jsonValue);
    UpdateEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline const Algorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline void SetAlgorithm(const Algorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline void SetAlgorithm(Algorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline UpdateEncryption& WithAlgorithm(const Algorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * The type of algorithm that is used for the encryption (such as aes128, aes192,
     * or aes256).
     */
    inline UpdateEncryption& WithAlgorithm(Algorithm&& value) { SetAlgorithm(std::move(value)); return *this;}


    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline const KeyType& GetKeyType() const{ return m_keyType; }

    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline void SetKeyType(const KeyType& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline void SetKeyType(KeyType&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline UpdateEncryption& WithKeyType(const KeyType& value) { SetKeyType(value); return *this;}

    /**
     * The type of key that is used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).
     */
    inline UpdateEncryption& WithKeyType(KeyType&& value) { SetKeyType(std::move(value)); return *this;}


    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline UpdateEncryption& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline UpdateEncryption& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the role that you created during setup (when you set up AWS Elemental
     * MediaConnect as a trusted entity).
     */
    inline UpdateEncryption& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * The ARN that was assigned to the secret that you created in AWS Secrets Manager
     * to store the encryption key.
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * The ARN that was assigned to the secret that you created in AWS Secrets Manager
     * to store the encryption key.
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * The ARN that was assigned to the secret that you created in AWS Secrets Manager
     * to store the encryption key.
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * The ARN that was assigned to the secret that you created in AWS Secrets Manager
     * to store the encryption key.
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * The ARN that was assigned to the secret that you created in AWS Secrets Manager
     * to store the encryption key.
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * The ARN that was assigned to the secret that you created in AWS Secrets Manager
     * to store the encryption key.
     */
    inline UpdateEncryption& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * The ARN that was assigned to the secret that you created in AWS Secrets Manager
     * to store the encryption key.
     */
    inline UpdateEncryption& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * The ARN that was assigned to the secret that you created in AWS Secrets Manager
     * to store the encryption key.
     */
    inline UpdateEncryption& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}

  private:

    Algorithm m_algorithm;
    bool m_algorithmHasBeenSet;

    KeyType m_keyType;
    bool m_keyTypeHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
