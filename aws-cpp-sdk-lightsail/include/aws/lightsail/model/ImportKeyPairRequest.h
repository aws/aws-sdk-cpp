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
  class AWS_LIGHTSAIL_API ImportKeyPairRequest : public LightsailRequest
  {
  public:
    ImportKeyPairRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportKeyPair"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the key pair for which you want to import the public key.</p>
     */
    inline const Aws::String& GetKeyPairName() const{ return m_keyPairName; }

    /**
     * <p>The name of the key pair for which you want to import the public key.</p>
     */
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }

    /**
     * <p>The name of the key pair for which you want to import the public key.</p>
     */
    inline void SetKeyPairName(const Aws::String& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }

    /**
     * <p>The name of the key pair for which you want to import the public key.</p>
     */
    inline void SetKeyPairName(Aws::String&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::move(value); }

    /**
     * <p>The name of the key pair for which you want to import the public key.</p>
     */
    inline void SetKeyPairName(const char* value) { m_keyPairNameHasBeenSet = true; m_keyPairName.assign(value); }

    /**
     * <p>The name of the key pair for which you want to import the public key.</p>
     */
    inline ImportKeyPairRequest& WithKeyPairName(const Aws::String& value) { SetKeyPairName(value); return *this;}

    /**
     * <p>The name of the key pair for which you want to import the public key.</p>
     */
    inline ImportKeyPairRequest& WithKeyPairName(Aws::String&& value) { SetKeyPairName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair for which you want to import the public key.</p>
     */
    inline ImportKeyPairRequest& WithKeyPairName(const char* value) { SetKeyPairName(value); return *this;}


    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline const Aws::String& GetPublicKeyBase64() const{ return m_publicKeyBase64; }

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline bool PublicKeyBase64HasBeenSet() const { return m_publicKeyBase64HasBeenSet; }

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline void SetPublicKeyBase64(const Aws::String& value) { m_publicKeyBase64HasBeenSet = true; m_publicKeyBase64 = value; }

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline void SetPublicKeyBase64(Aws::String&& value) { m_publicKeyBase64HasBeenSet = true; m_publicKeyBase64 = std::move(value); }

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline void SetPublicKeyBase64(const char* value) { m_publicKeyBase64HasBeenSet = true; m_publicKeyBase64.assign(value); }

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline ImportKeyPairRequest& WithPublicKeyBase64(const Aws::String& value) { SetPublicKeyBase64(value); return *this;}

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline ImportKeyPairRequest& WithPublicKeyBase64(Aws::String&& value) { SetPublicKeyBase64(std::move(value)); return *this;}

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline ImportKeyPairRequest& WithPublicKeyBase64(const char* value) { SetPublicKeyBase64(value); return *this;}

  private:

    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet;

    Aws::String m_publicKeyBase64;
    bool m_publicKeyBase64HasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
