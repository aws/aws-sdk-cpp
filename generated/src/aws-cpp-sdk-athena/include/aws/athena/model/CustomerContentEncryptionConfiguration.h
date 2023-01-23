/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Specifies the KMS key that is used to encrypt the user's data stores in
   * Athena.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CustomerContentEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomerContentEncryptionConfiguration
  {
  public:
    AWS_ATHENA_API CustomerContentEncryptionConfiguration();
    AWS_ATHENA_API CustomerContentEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CustomerContentEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The KMS key that is used to encrypt the user's data stores in Athena.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p>The KMS key that is used to encrypt the user's data stores in Athena.</p>
     */
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }

    /**
     * <p>The KMS key that is used to encrypt the user's data stores in Athena.</p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

    /**
     * <p>The KMS key that is used to encrypt the user's data stores in Athena.</p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

    /**
     * <p>The KMS key that is used to encrypt the user's data stores in Athena.</p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }

    /**
     * <p>The KMS key that is used to encrypt the user's data stores in Athena.</p>
     */
    inline CustomerContentEncryptionConfiguration& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p>The KMS key that is used to encrypt the user's data stores in Athena.</p>
     */
    inline CustomerContentEncryptionConfiguration& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p>The KMS key that is used to encrypt the user's data stores in Athena.</p>
     */
    inline CustomerContentEncryptionConfiguration& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}

  private:

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
