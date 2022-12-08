/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StudioEncryptionConfigurationKeyType.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>Configuration of the encryption method that is used for the
   * studio.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StudioEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class StudioEncryptionConfiguration
  {
  public:
    AWS_NIMBLESTUDIO_API StudioEncryptionConfiguration();
    AWS_NIMBLESTUDIO_API StudioEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StudioEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for a KMS key that is used to encrypt studio data.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }

    /**
     * <p>The ARN for a KMS key that is used to encrypt studio data.</p>
     */
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }

    /**
     * <p>The ARN for a KMS key that is used to encrypt studio data.</p>
     */
    inline void SetKeyArn(const Aws::String& value) { m_keyArnHasBeenSet = true; m_keyArn = value; }

    /**
     * <p>The ARN for a KMS key that is used to encrypt studio data.</p>
     */
    inline void SetKeyArn(Aws::String&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::move(value); }

    /**
     * <p>The ARN for a KMS key that is used to encrypt studio data.</p>
     */
    inline void SetKeyArn(const char* value) { m_keyArnHasBeenSet = true; m_keyArn.assign(value); }

    /**
     * <p>The ARN for a KMS key that is used to encrypt studio data.</p>
     */
    inline StudioEncryptionConfiguration& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>The ARN for a KMS key that is used to encrypt studio data.</p>
     */
    inline StudioEncryptionConfiguration& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for a KMS key that is used to encrypt studio data.</p>
     */
    inline StudioEncryptionConfiguration& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}


    /**
     * <p>The type of KMS key that is used to encrypt studio data.</p>
     */
    inline const StudioEncryptionConfigurationKeyType& GetKeyType() const{ return m_keyType; }

    /**
     * <p>The type of KMS key that is used to encrypt studio data.</p>
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>The type of KMS key that is used to encrypt studio data.</p>
     */
    inline void SetKeyType(const StudioEncryptionConfigurationKeyType& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>The type of KMS key that is used to encrypt studio data.</p>
     */
    inline void SetKeyType(StudioEncryptionConfigurationKeyType&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>The type of KMS key that is used to encrypt studio data.</p>
     */
    inline StudioEncryptionConfiguration& WithKeyType(const StudioEncryptionConfigurationKeyType& value) { SetKeyType(value); return *this;}

    /**
     * <p>The type of KMS key that is used to encrypt studio data.</p>
     */
    inline StudioEncryptionConfiguration& WithKeyType(StudioEncryptionConfigurationKeyType&& value) { SetKeyType(std::move(value)); return *this;}

  private:

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;

    StudioEncryptionConfigurationKeyType m_keyType;
    bool m_keyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
