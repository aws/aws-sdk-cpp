/**
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
    AWS_LIGHTSAIL_API ImportKeyPairRequest() = default;

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
    inline const Aws::String& GetKeyPairName() const { return m_keyPairName; }
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }
    template<typename KeyPairNameT = Aws::String>
    void SetKeyPairName(KeyPairNameT&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::forward<KeyPairNameT>(value); }
    template<typename KeyPairNameT = Aws::String>
    ImportKeyPairRequest& WithKeyPairName(KeyPairNameT&& value) { SetKeyPairName(std::forward<KeyPairNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline const Aws::String& GetPublicKeyBase64() const { return m_publicKeyBase64; }
    inline bool PublicKeyBase64HasBeenSet() const { return m_publicKeyBase64HasBeenSet; }
    template<typename PublicKeyBase64T = Aws::String>
    void SetPublicKeyBase64(PublicKeyBase64T&& value) { m_publicKeyBase64HasBeenSet = true; m_publicKeyBase64 = std::forward<PublicKeyBase64T>(value); }
    template<typename PublicKeyBase64T = Aws::String>
    ImportKeyPairRequest& WithPublicKeyBase64(PublicKeyBase64T&& value) { SetPublicKeyBase64(std::forward<PublicKeyBase64T>(value)); return *this;}
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
