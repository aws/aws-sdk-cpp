/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class HostKeyAttributes
  {
  public:
    AWS_LIGHTSAIL_API HostKeyAttributes() = default;
    AWS_LIGHTSAIL_API HostKeyAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API HostKeyAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SSH host key algorithm or the RDP certificate format.</p> <p>For SSH host
     * keys, the algorithm may be <code>ssh-rsa</code>,
     * <code>ecdsa-sha2-nistp256</code>, <code>ssh-ed25519</code>, etc. For RDP
     * certificates, the algorithm is always <code>x509-cert</code>.</p>
     */
    inline const Aws::String& GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    template<typename AlgorithmT = Aws::String>
    void SetAlgorithm(AlgorithmT&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::forward<AlgorithmT>(value); }
    template<typename AlgorithmT = Aws::String>
    HostKeyAttributes& WithAlgorithm(AlgorithmT&& value) { SetAlgorithm(std::forward<AlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public SSH host key or the RDP certificate.</p>
     */
    inline const Aws::String& GetPublicKey() const { return m_publicKey; }
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }
    template<typename PublicKeyT = Aws::String>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::String>
    HostKeyAttributes& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the SSH host key or RDP certificate was recorded by
     * Lightsail.</p>
     */
    inline const Aws::Utils::DateTime& GetWitnessedAt() const { return m_witnessedAt; }
    inline bool WitnessedAtHasBeenSet() const { return m_witnessedAtHasBeenSet; }
    template<typename WitnessedAtT = Aws::Utils::DateTime>
    void SetWitnessedAt(WitnessedAtT&& value) { m_witnessedAtHasBeenSet = true; m_witnessedAt = std::forward<WitnessedAtT>(value); }
    template<typename WitnessedAtT = Aws::Utils::DateTime>
    HostKeyAttributes& WithWitnessedAt(WitnessedAtT&& value) { SetWitnessedAt(std::forward<WitnessedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA-1 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-1 SSH fingerprint:</p> <p>
     * <code>SHA1:1CHH6FaAaXjtFOsR/t83vf91SR0</code> </p> </li> <li> <p>Example of an
     * SHA-1 RDP fingerprint:</p> <p>
     * <code>af:34:51:fe:09:f0:e0:da:b8:4e:56:ca:60:c2:10:ff:38:06:db:45</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetFingerprintSHA1() const { return m_fingerprintSHA1; }
    inline bool FingerprintSHA1HasBeenSet() const { return m_fingerprintSHA1HasBeenSet; }
    template<typename FingerprintSHA1T = Aws::String>
    void SetFingerprintSHA1(FingerprintSHA1T&& value) { m_fingerprintSHA1HasBeenSet = true; m_fingerprintSHA1 = std::forward<FingerprintSHA1T>(value); }
    template<typename FingerprintSHA1T = Aws::String>
    HostKeyAttributes& WithFingerprintSHA1(FingerprintSHA1T&& value) { SetFingerprintSHA1(std::forward<FingerprintSHA1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA-256 fingerprint of the returned SSH host key or RDP certificate.</p>
     * <ul> <li> <p>Example of an SHA-256 SSH fingerprint:</p> <p>
     * <code>SHA256:KTsMnRBh1IhD17HpdfsbzeGA4jOijm5tyXsMjKVbB8o</code> </p> </li> <li>
     * <p>Example of an SHA-256 RDP fingerprint:</p> <p>
     * <code>03:9b:36:9f:4b:de:4e:61:70:fc:7c:c9:78:e7:d2:1a:1c:25:a8:0c:91:f6:7c:e4:d6:a0:85:c8:b4:53:99:68</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetFingerprintSHA256() const { return m_fingerprintSHA256; }
    inline bool FingerprintSHA256HasBeenSet() const { return m_fingerprintSHA256HasBeenSet; }
    template<typename FingerprintSHA256T = Aws::String>
    void SetFingerprintSHA256(FingerprintSHA256T&& value) { m_fingerprintSHA256HasBeenSet = true; m_fingerprintSHA256 = std::forward<FingerprintSHA256T>(value); }
    template<typename FingerprintSHA256T = Aws::String>
    HostKeyAttributes& WithFingerprintSHA256(FingerprintSHA256T&& value) { SetFingerprintSHA256(std::forward<FingerprintSHA256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned RDP certificate is valid after this point in time.</p> <p>This
     * value is listed only for RDP certificates.</p>
     */
    inline const Aws::Utils::DateTime& GetNotValidBefore() const { return m_notValidBefore; }
    inline bool NotValidBeforeHasBeenSet() const { return m_notValidBeforeHasBeenSet; }
    template<typename NotValidBeforeT = Aws::Utils::DateTime>
    void SetNotValidBefore(NotValidBeforeT&& value) { m_notValidBeforeHasBeenSet = true; m_notValidBefore = std::forward<NotValidBeforeT>(value); }
    template<typename NotValidBeforeT = Aws::Utils::DateTime>
    HostKeyAttributes& WithNotValidBefore(NotValidBeforeT&& value) { SetNotValidBefore(std::forward<NotValidBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned RDP certificate is not valid after this point in time.</p>
     * <p>This value is listed only for RDP certificates.</p>
     */
    inline const Aws::Utils::DateTime& GetNotValidAfter() const { return m_notValidAfter; }
    inline bool NotValidAfterHasBeenSet() const { return m_notValidAfterHasBeenSet; }
    template<typename NotValidAfterT = Aws::Utils::DateTime>
    void SetNotValidAfter(NotValidAfterT&& value) { m_notValidAfterHasBeenSet = true; m_notValidAfter = std::forward<NotValidAfterT>(value); }
    template<typename NotValidAfterT = Aws::Utils::DateTime>
    HostKeyAttributes& WithNotValidAfter(NotValidAfterT&& value) { SetNotValidAfter(std::forward<NotValidAfterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_algorithm;
    bool m_algorithmHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;

    Aws::Utils::DateTime m_witnessedAt{};
    bool m_witnessedAtHasBeenSet = false;

    Aws::String m_fingerprintSHA1;
    bool m_fingerprintSHA1HasBeenSet = false;

    Aws::String m_fingerprintSHA256;
    bool m_fingerprintSHA256HasBeenSet = false;

    Aws::Utils::DateTime m_notValidBefore{};
    bool m_notValidBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notValidAfter{};
    bool m_notValidAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
