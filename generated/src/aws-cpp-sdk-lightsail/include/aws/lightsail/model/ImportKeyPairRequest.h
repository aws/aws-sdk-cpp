﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class ImportKeyPairRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API ImportKeyPairRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportKeyPair"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the key pair for which you want to import the public key.</p>
     */
    inline const Aws::String& GetKeyPairName() const{ return m_keyPairName; }
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }
    inline void SetKeyPairName(const Aws::String& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }
    inline void SetKeyPairName(Aws::String&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::move(value); }
    inline void SetKeyPairName(const char* value) { m_keyPairNameHasBeenSet = true; m_keyPairName.assign(value); }
    inline ImportKeyPairRequest& WithKeyPairName(const Aws::String& value) { SetKeyPairName(value); return *this;}
    inline ImportKeyPairRequest& WithKeyPairName(Aws::String&& value) { SetKeyPairName(std::move(value)); return *this;}
    inline ImportKeyPairRequest& WithKeyPairName(const char* value) { SetKeyPairName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline const Aws::String& GetPublicKeyBase64() const{ return m_publicKeyBase64; }
    inline bool PublicKeyBase64HasBeenSet() const { return m_publicKeyBase64HasBeenSet; }
    inline void SetPublicKeyBase64(const Aws::String& value) { m_publicKeyBase64HasBeenSet = true; m_publicKeyBase64 = value; }
    inline void SetPublicKeyBase64(Aws::String&& value) { m_publicKeyBase64HasBeenSet = true; m_publicKeyBase64 = std::move(value); }
    inline void SetPublicKeyBase64(const char* value) { m_publicKeyBase64HasBeenSet = true; m_publicKeyBase64.assign(value); }
    inline ImportKeyPairRequest& WithPublicKeyBase64(const Aws::String& value) { SetPublicKeyBase64(value); return *this;}
    inline ImportKeyPairRequest& WithPublicKeyBase64(Aws::String&& value) { SetPublicKeyBase64(std::move(value)); return *this;}
    inline ImportKeyPairRequest& WithPublicKeyBase64(const char* value) { SetPublicKeyBase64(value); return *this;}
    ///@}
  private:

    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet = false;

    Aws::String m_publicKeyBase64;
    bool m_publicKeyBase64HasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
