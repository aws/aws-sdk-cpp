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
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * Encryption options for the broker.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/EncryptionOptions">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API EncryptionOptions
  {
  public:
    EncryptionOptions();
    EncryptionOptions(Aws::Utils::Json::JsonView jsonValue);
    EncryptionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The customer master key (CMK) to use for the AWS Key Management Service (KMS).
     * This key is used to encrypt your data at rest. If not provided, Amazon MQ will
     * use a default CMK to encrypt your data.
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * The customer master key (CMK) to use for the AWS Key Management Service (KMS).
     * This key is used to encrypt your data at rest. If not provided, Amazon MQ will
     * use a default CMK to encrypt your data.
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * The customer master key (CMK) to use for the AWS Key Management Service (KMS).
     * This key is used to encrypt your data at rest. If not provided, Amazon MQ will
     * use a default CMK to encrypt your data.
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * The customer master key (CMK) to use for the AWS Key Management Service (KMS).
     * This key is used to encrypt your data at rest. If not provided, Amazon MQ will
     * use a default CMK to encrypt your data.
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * The customer master key (CMK) to use for the AWS Key Management Service (KMS).
     * This key is used to encrypt your data at rest. If not provided, Amazon MQ will
     * use a default CMK to encrypt your data.
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * The customer master key (CMK) to use for the AWS Key Management Service (KMS).
     * This key is used to encrypt your data at rest. If not provided, Amazon MQ will
     * use a default CMK to encrypt your data.
     */
    inline EncryptionOptions& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * The customer master key (CMK) to use for the AWS Key Management Service (KMS).
     * This key is used to encrypt your data at rest. If not provided, Amazon MQ will
     * use a default CMK to encrypt your data.
     */
    inline EncryptionOptions& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * The customer master key (CMK) to use for the AWS Key Management Service (KMS).
     * This key is used to encrypt your data at rest. If not provided, Amazon MQ will
     * use a default CMK to encrypt your data.
     */
    inline EncryptionOptions& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * Enables the use of an AWS owned CMK using AWS Key Management Service (KMS).
     */
    inline bool GetUseAwsOwnedKey() const{ return m_useAwsOwnedKey; }

    /**
     * Enables the use of an AWS owned CMK using AWS Key Management Service (KMS).
     */
    inline bool UseAwsOwnedKeyHasBeenSet() const { return m_useAwsOwnedKeyHasBeenSet; }

    /**
     * Enables the use of an AWS owned CMK using AWS Key Management Service (KMS).
     */
    inline void SetUseAwsOwnedKey(bool value) { m_useAwsOwnedKeyHasBeenSet = true; m_useAwsOwnedKey = value; }

    /**
     * Enables the use of an AWS owned CMK using AWS Key Management Service (KMS).
     */
    inline EncryptionOptions& WithUseAwsOwnedKey(bool value) { SetUseAwsOwnedKey(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    bool m_useAwsOwnedKey;
    bool m_useAwsOwnedKeyHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
