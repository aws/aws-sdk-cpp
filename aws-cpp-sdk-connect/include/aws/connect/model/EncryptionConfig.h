/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EncryptionType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The encryption configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EncryptionConfig">AWS
   * API Reference</a></p>
   */
  class EncryptionConfig
  {
  public:
    AWS_CONNECT_API EncryptionConfig();
    AWS_CONNECT_API EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of encryption.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The type of encryption.</p>
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * <p>The type of encryption.</p>
     */
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The type of encryption.</p>
     */
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The type of encryption.</p>
     */
    inline EncryptionConfig& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The type of encryption.</p>
     */
    inline EncryptionConfig& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}


    /**
     * <p>The full ARN of the encryption key. </p>  <p>Be sure to provide the
     * full ARN of the encryption key, not just the ID.</p> 
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The full ARN of the encryption key. </p>  <p>Be sure to provide the
     * full ARN of the encryption key, not just the ID.</p> 
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The full ARN of the encryption key. </p>  <p>Be sure to provide the
     * full ARN of the encryption key, not just the ID.</p> 
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The full ARN of the encryption key. </p>  <p>Be sure to provide the
     * full ARN of the encryption key, not just the ID.</p> 
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The full ARN of the encryption key. </p>  <p>Be sure to provide the
     * full ARN of the encryption key, not just the ID.</p> 
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The full ARN of the encryption key. </p>  <p>Be sure to provide the
     * full ARN of the encryption key, not just the ID.</p> 
     */
    inline EncryptionConfig& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The full ARN of the encryption key. </p>  <p>Be sure to provide the
     * full ARN of the encryption key, not just the ID.</p> 
     */
    inline EncryptionConfig& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The full ARN of the encryption key. </p>  <p>Be sure to provide the
     * full ARN of the encryption key, not just the ID.</p> 
     */
    inline EncryptionConfig& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
