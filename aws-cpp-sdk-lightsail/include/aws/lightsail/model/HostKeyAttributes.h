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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the public SSH host keys or the RDP certificate.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/HostKeyAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API HostKeyAttributes
  {
  public:
    HostKeyAttributes();
    HostKeyAttributes(Aws::Utils::Json::JsonView jsonValue);
    HostKeyAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SSH host key algorithm or the RDP certificate format.</p> <p>For SSH host
     * keys, the algorithm may be <code>ssh-rsa</code>,
     * <code>ecdsa-sha2-nistp256</code>, <code>ssh-ed25519</code>, etc. For RDP
     * certificates, the algorithm is always <code>x509-cert</code>.</p>
     */
    inline const Aws::String& GetAlgorithm() const{ return m_algorithm; }

    /**
     * <p>The SSH host key algorithm or the RDP certificate format.</p> <p>For SSH host
     * keys, the algorithm may be <code>ssh-rsa</code>,
     * <code>ecdsa-sha2-nistp256</code>, <code>ssh-ed25519</code>, etc. For RDP
     * certificates, the algorithm is always <code>x509-cert</code>.</p>
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * <p>The SSH host key algorithm or the RDP certificate format.</p> <p>For SSH host
     * keys, the algorithm may be <code>ssh-rsa</code>,
     * <code>ecdsa-sha2-nistp256</code>, <code>ssh-ed25519</code>, etc. For RDP
     * certificates, the algorithm is always <code>x509-cert</code>.</p>
     */
    inline void SetAlgorithm(const Aws::String& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * <p>The SSH host key algorithm or the RDP certificate format.</p> <p>For SSH host
     * keys, the algorithm may be <code>ssh-rsa</code>,
     * <code>ecdsa-sha2-nistp256</code>, <code>ssh-ed25519</code>, etc. For RDP
     * certificates, the algorithm is always <code>x509-cert</code>.</p>
     */
    inline void SetAlgorithm(Aws::String&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    /**
     * <p>The SSH host key algorithm or the RDP certificate format.</p> <p>For SSH host
     * keys, the algorithm may be <code>ssh-rsa</code>,
     * <code>ecdsa-sha2-nistp256</code>, <code>ssh-ed25519</code>, etc. For RDP
     * certificates, the algorithm is always <code>x509-cert</code>.</p>
     */
    inline void SetAlgorithm(const char* value) { m_algorithmHasBeenSet = true; m_algorithm.assign(value); }

    /**
     * <p>The SSH host key algorithm or the RDP certificate format.</p> <p>For SSH host
     * keys, the algorithm may be <code>ssh-rsa</code>,
     * <code>ecdsa-sha2-nistp256</code>, <code>ssh-ed25519</code>, etc. For RDP
     * certificates, the algorithm is always <code>x509-cert</code>.</p>
     */
    inline HostKeyAttributes& WithAlgorithm(const Aws::String& value) { SetAlgorithm(value); return *this;}

    /**
     * <p>The SSH host key algorithm or the RDP certificate format.</p> <p>For SSH host
     * keys, the algorithm may be <code>ssh-rsa</code>,
     * <code>ecdsa-sha2-nistp256</code>, <code>ssh-ed25519</code>, etc. For RDP
     * certificates, the algorithm is always <code>x509-cert</code>.</p>
     */
    inline HostKeyAttributes& WithAlgorithm(Aws::String&& value) { SetAlgorithm(std::move(value)); return *this;}

    /**
     * <p>The SSH host key algorithm or the RDP certificate format.</p> <p>For SSH host
     * keys, the algorithm may be <code>ssh-rsa</code>,
     * <code>ecdsa-sha2-nistp256</code>, <code>ssh-ed25519</code>, etc. For RDP
     * certificates, the algorithm is always <code>x509-cert</code>.</p>
     */
    inline HostKeyAttributes& WithAlgorithm(const char* value) { SetAlgorithm(value); return *this;}


    /**
     * <p>The public SSH host key or the RDP certificate.</p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The public SSH host key or the RDP certificate.</p>
     */
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }

    /**
     * <p>The public SSH host key or the RDP certificate.</p>
     */
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }

    /**
     * <p>The public SSH host key or the RDP certificate.</p>
     */
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }

    /**
     * <p>The public SSH host key or the RDP certificate.</p>
     */
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }

    /**
     * <p>The public SSH host key or the RDP certificate.</p>
     */
    inline HostKeyAttributes& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public SSH host key or the RDP certificate.</p>
     */
    inline HostKeyAttributes& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public SSH host key or the RDP certificate.</p>
     */
    inline HostKeyAttributes& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}


    /**
     * <p>The time that the SSH host key or RDP certificate was recorded by
     * Lightsail.</p>
     */
    inline const Aws::Utils::DateTime& GetWitnessedAt() const{ return m_witnessedAt; }

    /**
     * <p>The time that the SSH host key or RDP certificate was recorded by
     * Lightsail.</p>
     */
    inline bool WitnessedAtHasBeenSet() const { return m_witnessedAtHasBeenSet; }

    /**
     * <p>The time that the SSH host key or RDP certificate was recorded by
     * Lightsail.</p>
     */
    inline void SetWitnessedAt(const Aws::Utils::DateTime& value) { m_witnessedAtHasBeenSet = true; m_witnessedAt = value; }

    /**
     * <p>The time that the SSH host key or RDP certificate was recorded by
     * Lightsail.</p>
     */
    inline void SetWitnessedAt(Aws::Utils::DateTime&& value) { m_witnessedAtHasBeenSet = true; m_witnessedAt = std::move(value); }

    /**
     * <p>The time that the SSH host key or RDP certificate was recorded by
     * Lightsail.</p>
     */
    inline HostKeyAttributes& WithWitnessedAt(const Aws::Utils::DateTime& value) { SetWitnessedAt(value); return *this;}

    /**
     * <p>The time that the SSH host key or RDP certificate was recorded by
     * Lightsail.</p>
     */
    inline HostKeyAttributes& WithWitnessedAt(Aws::Utils::DateTime&& value) { SetWitnessedAt(std::move(value)); return *this;}


    /**
     * <p>The SHA-1 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-1 SSH fingerprint:</p> <p>
     * <code>SHA1:1CHH6FaAaXjtFOsR/t83vf91SR0</code> </p> </li> <li> <p>Example of an
     * SHA-1 RDP fingerprint:</p> <p>
     * <code>af:34:51:fe:09:f0:e0:da:b8:4e:56:ca:60:c2:10:ff:38:06:db:45</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetFingerprintSHA1() const{ return m_fingerprintSHA1; }

    /**
     * <p>The SHA-1 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-1 SSH fingerprint:</p> <p>
     * <code>SHA1:1CHH6FaAaXjtFOsR/t83vf91SR0</code> </p> </li> <li> <p>Example of an
     * SHA-1 RDP fingerprint:</p> <p>
     * <code>af:34:51:fe:09:f0:e0:da:b8:4e:56:ca:60:c2:10:ff:38:06:db:45</code> </p>
     * </li> </ul>
     */
    inline bool FingerprintSHA1HasBeenSet() const { return m_fingerprintSHA1HasBeenSet; }

    /**
     * <p>The SHA-1 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-1 SSH fingerprint:</p> <p>
     * <code>SHA1:1CHH6FaAaXjtFOsR/t83vf91SR0</code> </p> </li> <li> <p>Example of an
     * SHA-1 RDP fingerprint:</p> <p>
     * <code>af:34:51:fe:09:f0:e0:da:b8:4e:56:ca:60:c2:10:ff:38:06:db:45</code> </p>
     * </li> </ul>
     */
    inline void SetFingerprintSHA1(const Aws::String& value) { m_fingerprintSHA1HasBeenSet = true; m_fingerprintSHA1 = value; }

    /**
     * <p>The SHA-1 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-1 SSH fingerprint:</p> <p>
     * <code>SHA1:1CHH6FaAaXjtFOsR/t83vf91SR0</code> </p> </li> <li> <p>Example of an
     * SHA-1 RDP fingerprint:</p> <p>
     * <code>af:34:51:fe:09:f0:e0:da:b8:4e:56:ca:60:c2:10:ff:38:06:db:45</code> </p>
     * </li> </ul>
     */
    inline void SetFingerprintSHA1(Aws::String&& value) { m_fingerprintSHA1HasBeenSet = true; m_fingerprintSHA1 = std::move(value); }

    /**
     * <p>The SHA-1 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-1 SSH fingerprint:</p> <p>
     * <code>SHA1:1CHH6FaAaXjtFOsR/t83vf91SR0</code> </p> </li> <li> <p>Example of an
     * SHA-1 RDP fingerprint:</p> <p>
     * <code>af:34:51:fe:09:f0:e0:da:b8:4e:56:ca:60:c2:10:ff:38:06:db:45</code> </p>
     * </li> </ul>
     */
    inline void SetFingerprintSHA1(const char* value) { m_fingerprintSHA1HasBeenSet = true; m_fingerprintSHA1.assign(value); }

    /**
     * <p>The SHA-1 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-1 SSH fingerprint:</p> <p>
     * <code>SHA1:1CHH6FaAaXjtFOsR/t83vf91SR0</code> </p> </li> <li> <p>Example of an
     * SHA-1 RDP fingerprint:</p> <p>
     * <code>af:34:51:fe:09:f0:e0:da:b8:4e:56:ca:60:c2:10:ff:38:06:db:45</code> </p>
     * </li> </ul>
     */
    inline HostKeyAttributes& WithFingerprintSHA1(const Aws::String& value) { SetFingerprintSHA1(value); return *this;}

    /**
     * <p>The SHA-1 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-1 SSH fingerprint:</p> <p>
     * <code>SHA1:1CHH6FaAaXjtFOsR/t83vf91SR0</code> </p> </li> <li> <p>Example of an
     * SHA-1 RDP fingerprint:</p> <p>
     * <code>af:34:51:fe:09:f0:e0:da:b8:4e:56:ca:60:c2:10:ff:38:06:db:45</code> </p>
     * </li> </ul>
     */
    inline HostKeyAttributes& WithFingerprintSHA1(Aws::String&& value) { SetFingerprintSHA1(std::move(value)); return *this;}

    /**
     * <p>The SHA-1 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-1 SSH fingerprint:</p> <p>
     * <code>SHA1:1CHH6FaAaXjtFOsR/t83vf91SR0</code> </p> </li> <li> <p>Example of an
     * SHA-1 RDP fingerprint:</p> <p>
     * <code>af:34:51:fe:09:f0:e0:da:b8:4e:56:ca:60:c2:10:ff:38:06:db:45</code> </p>
     * </li> </ul>
     */
    inline HostKeyAttributes& WithFingerprintSHA1(const char* value) { SetFingerprintSHA1(value); return *this;}


    /**
     * <p>The SHA-256 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-256 SSH fingerprint:</p> <p>
     * <code>SHA256:KTsMnRBh1IhD17HpdfsbzeGA4jOijm5tyXsMjKVbB8o</code> </p> </li> <li>
     * <p>Example of an SHA-256 RDP fingerprint:</p> <p>
     * <code>03:9b:36:9f:4b:de:4e:61:70:fc:7c:c9:78:e7:d2:1a:1c:25:a8:0c:91:f6:7c:e4:d6:a0:85:c8:b4:53:99:68</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetFingerprintSHA256() const{ return m_fingerprintSHA256; }

    /**
     * <p>The SHA-256 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-256 SSH fingerprint:</p> <p>
     * <code>SHA256:KTsMnRBh1IhD17HpdfsbzeGA4jOijm5tyXsMjKVbB8o</code> </p> </li> <li>
     * <p>Example of an SHA-256 RDP fingerprint:</p> <p>
     * <code>03:9b:36:9f:4b:de:4e:61:70:fc:7c:c9:78:e7:d2:1a:1c:25:a8:0c:91:f6:7c:e4:d6:a0:85:c8:b4:53:99:68</code>
     * </p> </li> </ul>
     */
    inline bool FingerprintSHA256HasBeenSet() const { return m_fingerprintSHA256HasBeenSet; }

    /**
     * <p>The SHA-256 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-256 SSH fingerprint:</p> <p>
     * <code>SHA256:KTsMnRBh1IhD17HpdfsbzeGA4jOijm5tyXsMjKVbB8o</code> </p> </li> <li>
     * <p>Example of an SHA-256 RDP fingerprint:</p> <p>
     * <code>03:9b:36:9f:4b:de:4e:61:70:fc:7c:c9:78:e7:d2:1a:1c:25:a8:0c:91:f6:7c:e4:d6:a0:85:c8:b4:53:99:68</code>
     * </p> </li> </ul>
     */
    inline void SetFingerprintSHA256(const Aws::String& value) { m_fingerprintSHA256HasBeenSet = true; m_fingerprintSHA256 = value; }

    /**
     * <p>The SHA-256 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-256 SSH fingerprint:</p> <p>
     * <code>SHA256:KTsMnRBh1IhD17HpdfsbzeGA4jOijm5tyXsMjKVbB8o</code> </p> </li> <li>
     * <p>Example of an SHA-256 RDP fingerprint:</p> <p>
     * <code>03:9b:36:9f:4b:de:4e:61:70:fc:7c:c9:78:e7:d2:1a:1c:25:a8:0c:91:f6:7c:e4:d6:a0:85:c8:b4:53:99:68</code>
     * </p> </li> </ul>
     */
    inline void SetFingerprintSHA256(Aws::String&& value) { m_fingerprintSHA256HasBeenSet = true; m_fingerprintSHA256 = std::move(value); }

    /**
     * <p>The SHA-256 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-256 SSH fingerprint:</p> <p>
     * <code>SHA256:KTsMnRBh1IhD17HpdfsbzeGA4jOijm5tyXsMjKVbB8o</code> </p> </li> <li>
     * <p>Example of an SHA-256 RDP fingerprint:</p> <p>
     * <code>03:9b:36:9f:4b:de:4e:61:70:fc:7c:c9:78:e7:d2:1a:1c:25:a8:0c:91:f6:7c:e4:d6:a0:85:c8:b4:53:99:68</code>
     * </p> </li> </ul>
     */
    inline void SetFingerprintSHA256(const char* value) { m_fingerprintSHA256HasBeenSet = true; m_fingerprintSHA256.assign(value); }

    /**
     * <p>The SHA-256 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-256 SSH fingerprint:</p> <p>
     * <code>SHA256:KTsMnRBh1IhD17HpdfsbzeGA4jOijm5tyXsMjKVbB8o</code> </p> </li> <li>
     * <p>Example of an SHA-256 RDP fingerprint:</p> <p>
     * <code>03:9b:36:9f:4b:de:4e:61:70:fc:7c:c9:78:e7:d2:1a:1c:25:a8:0c:91:f6:7c:e4:d6:a0:85:c8:b4:53:99:68</code>
     * </p> </li> </ul>
     */
    inline HostKeyAttributes& WithFingerprintSHA256(const Aws::String& value) { SetFingerprintSHA256(value); return *this;}

    /**
     * <p>The SHA-256 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-256 SSH fingerprint:</p> <p>
     * <code>SHA256:KTsMnRBh1IhD17HpdfsbzeGA4jOijm5tyXsMjKVbB8o</code> </p> </li> <li>
     * <p>Example of an SHA-256 RDP fingerprint:</p> <p>
     * <code>03:9b:36:9f:4b:de:4e:61:70:fc:7c:c9:78:e7:d2:1a:1c:25:a8:0c:91:f6:7c:e4:d6:a0:85:c8:b4:53:99:68</code>
     * </p> </li> </ul>
     */
    inline HostKeyAttributes& WithFingerprintSHA256(Aws::String&& value) { SetFingerprintSHA256(std::move(value)); return *this;}

    /**
     * <p>The SHA-256 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-256 SSH fingerprint:</p> <p>
     * <code>SHA256:KTsMnRBh1IhD17HpdfsbzeGA4jOijm5tyXsMjKVbB8o</code> </p> </li> <li>
     * <p>Example of an SHA-256 RDP fingerprint:</p> <p>
     * <code>03:9b:36:9f:4b:de:4e:61:70:fc:7c:c9:78:e7:d2:1a:1c:25:a8:0c:91:f6:7c:e4:d6:a0:85:c8:b4:53:99:68</code>
     * </p> </li> </ul>
     */
    inline HostKeyAttributes& WithFingerprintSHA256(const char* value) { SetFingerprintSHA256(value); return *this;}


    /**
     * <p>The returned RDP certificate is valid after this point in time.</p> <p>This
     * value is listed only for RDP certificates.</p>
     */
    inline const Aws::Utils::DateTime& GetNotValidBefore() const{ return m_notValidBefore; }

    /**
     * <p>The returned RDP certificate is valid after this point in time.</p> <p>This
     * value is listed only for RDP certificates.</p>
     */
    inline bool NotValidBeforeHasBeenSet() const { return m_notValidBeforeHasBeenSet; }

    /**
     * <p>The returned RDP certificate is valid after this point in time.</p> <p>This
     * value is listed only for RDP certificates.</p>
     */
    inline void SetNotValidBefore(const Aws::Utils::DateTime& value) { m_notValidBeforeHasBeenSet = true; m_notValidBefore = value; }

    /**
     * <p>The returned RDP certificate is valid after this point in time.</p> <p>This
     * value is listed only for RDP certificates.</p>
     */
    inline void SetNotValidBefore(Aws::Utils::DateTime&& value) { m_notValidBeforeHasBeenSet = true; m_notValidBefore = std::move(value); }

    /**
     * <p>The returned RDP certificate is valid after this point in time.</p> <p>This
     * value is listed only for RDP certificates.</p>
     */
    inline HostKeyAttributes& WithNotValidBefore(const Aws::Utils::DateTime& value) { SetNotValidBefore(value); return *this;}

    /**
     * <p>The returned RDP certificate is valid after this point in time.</p> <p>This
     * value is listed only for RDP certificates.</p>
     */
    inline HostKeyAttributes& WithNotValidBefore(Aws::Utils::DateTime&& value) { SetNotValidBefore(std::move(value)); return *this;}


    /**
     * <p>The returned RDP certificate is not valid after this point in time.</p>
     * <p>This value is listed only for RDP certificates.</p>
     */
    inline const Aws::Utils::DateTime& GetNotValidAfter() const{ return m_notValidAfter; }

    /**
     * <p>The returned RDP certificate is not valid after this point in time.</p>
     * <p>This value is listed only for RDP certificates.</p>
     */
    inline bool NotValidAfterHasBeenSet() const { return m_notValidAfterHasBeenSet; }

    /**
     * <p>The returned RDP certificate is not valid after this point in time.</p>
     * <p>This value is listed only for RDP certificates.</p>
     */
    inline void SetNotValidAfter(const Aws::Utils::DateTime& value) { m_notValidAfterHasBeenSet = true; m_notValidAfter = value; }

    /**
     * <p>The returned RDP certificate is not valid after this point in time.</p>
     * <p>This value is listed only for RDP certificates.</p>
     */
    inline void SetNotValidAfter(Aws::Utils::DateTime&& value) { m_notValidAfterHasBeenSet = true; m_notValidAfter = std::move(value); }

    /**
     * <p>The returned RDP certificate is not valid after this point in time.</p>
     * <p>This value is listed only for RDP certificates.</p>
     */
    inline HostKeyAttributes& WithNotValidAfter(const Aws::Utils::DateTime& value) { SetNotValidAfter(value); return *this;}

    /**
     * <p>The returned RDP certificate is not valid after this point in time.</p>
     * <p>This value is listed only for RDP certificates.</p>
     */
    inline HostKeyAttributes& WithNotValidAfter(Aws::Utils::DateTime&& value) { SetNotValidAfter(std::move(value)); return *this;}

  private:

    Aws::String m_algorithm;
    bool m_algorithmHasBeenSet;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet;

    Aws::Utils::DateTime m_witnessedAt;
    bool m_witnessedAtHasBeenSet;

    Aws::String m_fingerprintSHA1;
    bool m_fingerprintSHA1HasBeenSet;

    Aws::String m_fingerprintSHA256;
    bool m_fingerprintSHA256HasBeenSet;

    Aws::Utils::DateTime m_notValidBefore;
    bool m_notValidBeforeHasBeenSet;

    Aws::Utils::DateTime m_notValidAfter;
    bool m_notValidAfterHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
