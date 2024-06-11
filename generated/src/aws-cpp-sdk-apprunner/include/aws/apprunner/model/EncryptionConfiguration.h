/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes a custom encryption key that App Runner uses to encrypt copies of
   * the source repository and service logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_APPRUNNER_API EncryptionConfiguration();
    AWS_APPRUNNER_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the KMS key that's used for encryption.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }
    inline EncryptionConfiguration& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}
    inline EncryptionConfiguration& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}
    inline EncryptionConfiguration& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
