/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an app's SSL configuration.</p>
   */
  class AWS_OPSWORKS_API SslConfiguration
  {
  public:
    SslConfiguration();
    SslConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    SslConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The contents of the certificate's domain.crt file.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The contents of the certificate's domain.crt file.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The contents of the certificate's domain.crt file.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The contents of the certificate's domain.crt file.</p>
     */
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }

    /**
     * <p>The contents of the certificate's domain.crt file.</p>
     */
    inline SslConfiguration& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The contents of the certificate's domain.crt file.</p>
     */
    inline SslConfiguration& WithCertificate(Aws::String&& value) { SetCertificate(value); return *this;}

    /**
     * <p>The contents of the certificate's domain.crt file.</p>
     */
    inline SslConfiguration& WithCertificate(const char* value) { SetCertificate(value); return *this;}

    /**
     * <p>The private key; the contents of the certificate's domain.kex file.</p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }

    /**
     * <p>The private key; the contents of the certificate's domain.kex file.</p>
     */
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>The private key; the contents of the certificate's domain.kex file.</p>
     */
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>The private key; the contents of the certificate's domain.kex file.</p>
     */
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }

    /**
     * <p>The private key; the contents of the certificate's domain.kex file.</p>
     */
    inline SslConfiguration& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The private key; the contents of the certificate's domain.kex file.</p>
     */
    inline SslConfiguration& WithPrivateKey(Aws::String&& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The private key; the contents of the certificate's domain.kex file.</p>
     */
    inline SslConfiguration& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}

    /**
     * <p>Optional. Can be used to specify an intermediate certificate authority key or
     * client authentication.</p>
     */
    inline const Aws::String& GetChain() const{ return m_chain; }

    /**
     * <p>Optional. Can be used to specify an intermediate certificate authority key or
     * client authentication.</p>
     */
    inline void SetChain(const Aws::String& value) { m_chainHasBeenSet = true; m_chain = value; }

    /**
     * <p>Optional. Can be used to specify an intermediate certificate authority key or
     * client authentication.</p>
     */
    inline void SetChain(Aws::String&& value) { m_chainHasBeenSet = true; m_chain = value; }

    /**
     * <p>Optional. Can be used to specify an intermediate certificate authority key or
     * client authentication.</p>
     */
    inline void SetChain(const char* value) { m_chainHasBeenSet = true; m_chain.assign(value); }

    /**
     * <p>Optional. Can be used to specify an intermediate certificate authority key or
     * client authentication.</p>
     */
    inline SslConfiguration& WithChain(const Aws::String& value) { SetChain(value); return *this;}

    /**
     * <p>Optional. Can be used to specify an intermediate certificate authority key or
     * client authentication.</p>
     */
    inline SslConfiguration& WithChain(Aws::String&& value) { SetChain(value); return *this;}

    /**
     * <p>Optional. Can be used to specify an intermediate certificate authority key or
     * client authentication.</p>
     */
    inline SslConfiguration& WithChain(const char* value) { SetChain(value); return *this;}

  private:
    Aws::String m_certificate;
    bool m_certificateHasBeenSet;
    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet;
    Aws::String m_chain;
    bool m_chainHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
