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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/EncryptionOption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Athena
{
namespace Model
{

  /**
   * <p>If query results are encrypted in Amazon S3, indicates the Amazon S3
   * encryption option used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API EncryptionConfiguration
  {
  public:
    EncryptionConfiguration();
    EncryptionConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    EncryptionConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether Amazon S3 server-side encryption with Amazon S3-managed
     * keys (<code>SSE-S3</code>), server-side encryption with KMS-managed keys
     * (<code>SSE-KMS</code>), or client-side encryption with KMS-managed keys
     * (CSE-KMS) is used.</p>
     */
    inline const EncryptionOption& GetEncryptionOption() const{ return m_encryptionOption; }

    /**
     * <p>Indicates whether Amazon S3 server-side encryption with Amazon S3-managed
     * keys (<code>SSE-S3</code>), server-side encryption with KMS-managed keys
     * (<code>SSE-KMS</code>), or client-side encryption with KMS-managed keys
     * (CSE-KMS) is used.</p>
     */
    inline void SetEncryptionOption(const EncryptionOption& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = value; }

    /**
     * <p>Indicates whether Amazon S3 server-side encryption with Amazon S3-managed
     * keys (<code>SSE-S3</code>), server-side encryption with KMS-managed keys
     * (<code>SSE-KMS</code>), or client-side encryption with KMS-managed keys
     * (CSE-KMS) is used.</p>
     */
    inline void SetEncryptionOption(EncryptionOption&& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = std::move(value); }

    /**
     * <p>Indicates whether Amazon S3 server-side encryption with Amazon S3-managed
     * keys (<code>SSE-S3</code>), server-side encryption with KMS-managed keys
     * (<code>SSE-KMS</code>), or client-side encryption with KMS-managed keys
     * (CSE-KMS) is used.</p>
     */
    inline EncryptionConfiguration& WithEncryptionOption(const EncryptionOption& value) { SetEncryptionOption(value); return *this;}

    /**
     * <p>Indicates whether Amazon S3 server-side encryption with Amazon S3-managed
     * keys (<code>SSE-S3</code>), server-side encryption with KMS-managed keys
     * (<code>SSE-KMS</code>), or client-side encryption with KMS-managed keys
     * (CSE-KMS) is used.</p>
     */
    inline EncryptionConfiguration& WithEncryptionOption(EncryptionOption&& value) { SetEncryptionOption(std::move(value)); return *this;}


    /**
     * <p>For <code>SSE-KMS</code> and <code>CSE-KMS</code>, this is the KMS key ARN or
     * ID.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p>For <code>SSE-KMS</code> and <code>CSE-KMS</code>, this is the KMS key ARN or
     * ID.</p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

    /**
     * <p>For <code>SSE-KMS</code> and <code>CSE-KMS</code>, this is the KMS key ARN or
     * ID.</p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

    /**
     * <p>For <code>SSE-KMS</code> and <code>CSE-KMS</code>, this is the KMS key ARN or
     * ID.</p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }

    /**
     * <p>For <code>SSE-KMS</code> and <code>CSE-KMS</code>, this is the KMS key ARN or
     * ID.</p>
     */
    inline EncryptionConfiguration& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p>For <code>SSE-KMS</code> and <code>CSE-KMS</code>, this is the KMS key ARN or
     * ID.</p>
     */
    inline EncryptionConfiguration& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p>For <code>SSE-KMS</code> and <code>CSE-KMS</code>, this is the KMS key ARN or
     * ID.</p>
     */
    inline EncryptionConfiguration& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}

  private:

    EncryptionOption m_encryptionOption;
    bool m_encryptionOptionHasBeenSet;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
