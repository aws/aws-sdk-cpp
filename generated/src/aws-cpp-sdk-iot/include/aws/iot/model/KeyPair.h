/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes a key pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/KeyPair">AWS API
   * Reference</a></p>
   */
  class KeyPair
  {
  public:
    AWS_IOT_API KeyPair();
    AWS_IOT_API KeyPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API KeyPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The public key.</p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The public key.</p>
     */
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }

    /**
     * <p>The public key.</p>
     */
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }

    /**
     * <p>The public key.</p>
     */
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }

    /**
     * <p>The public key.</p>
     */
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }

    /**
     * <p>The public key.</p>
     */
    inline KeyPair& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public key.</p>
     */
    inline KeyPair& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public key.</p>
     */
    inline KeyPair& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}


    /**
     * <p>The private key.</p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }

    /**
     * <p>The private key.</p>
     */
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }

    /**
     * <p>The private key.</p>
     */
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>The private key.</p>
     */
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }

    /**
     * <p>The private key.</p>
     */
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }

    /**
     * <p>The private key.</p>
     */
    inline KeyPair& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The private key.</p>
     */
    inline KeyPair& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}

    /**
     * <p>The private key.</p>
     */
    inline KeyPair& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}

  private:

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
