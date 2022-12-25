/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/EncryptionType.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>Encryption config for Connect Instance. Note that sensitive data will always
   * be encrypted. If disabled, service will perform encryption with its own key. If
   * enabled, a KMS key id needs to be provided and KMS charges will apply. KMS is
   * only type supported</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/EncryptionConfig">AWS
   * API Reference</a></p>
   */
  class EncryptionConfig
  {
  public:
    AWS_CONNECTCAMPAIGNS_API EncryptionConfig();
    AWS_CONNECTCAMPAIGNS_API EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline bool GetEnabled() const{ return m_enabled; }

    
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    
    inline EncryptionConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}


    
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    
    inline EncryptionConfig& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}

    
    inline EncryptionConfig& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}


    
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }

    
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }

    
    inline void SetKeyArn(const Aws::String& value) { m_keyArnHasBeenSet = true; m_keyArn = value; }

    
    inline void SetKeyArn(Aws::String&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::move(value); }

    
    inline void SetKeyArn(const char* value) { m_keyArnHasBeenSet = true; m_keyArn.assign(value); }

    
    inline EncryptionConfig& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    
    inline EncryptionConfig& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    
    inline EncryptionConfig& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
