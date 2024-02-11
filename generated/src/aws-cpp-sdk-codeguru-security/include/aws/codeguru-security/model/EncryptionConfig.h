/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>Information about account-level configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/EncryptionConfig">AWS
   * API Reference</a></p>
   */
  class EncryptionConfig
  {
  public:
    AWS_CODEGURUSECURITY_API EncryptionConfig();
    AWS_CODEGURUSECURITY_API EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The KMS key ARN to use for encryption. This must be provided as a header when
     * uploading your code resource.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The KMS key ARN to use for encryption. This must be provided as a header when
     * uploading your code resource.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The KMS key ARN to use for encryption. This must be provided as a header when
     * uploading your code resource.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The KMS key ARN to use for encryption. This must be provided as a header when
     * uploading your code resource.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The KMS key ARN to use for encryption. This must be provided as a header when
     * uploading your code resource.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The KMS key ARN to use for encryption. This must be provided as a header when
     * uploading your code resource.</p>
     */
    inline EncryptionConfig& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The KMS key ARN to use for encryption. This must be provided as a header when
     * uploading your code resource.</p>
     */
    inline EncryptionConfig& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS key ARN to use for encryption. This must be provided as a header when
     * uploading your code resource.</p>
     */
    inline EncryptionConfig& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
