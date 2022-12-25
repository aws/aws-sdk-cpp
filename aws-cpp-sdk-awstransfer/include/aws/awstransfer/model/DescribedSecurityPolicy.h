/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Describes the properties of a security policy that was specified. For more
   * information about security policies, see <a
   * href="https://docs.aws.amazon.com/transfer/latest/userguide/security-policies.html">Working
   * with security policies</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedSecurityPolicy">AWS
   * API Reference</a></p>
   */
  class DescribedSecurityPolicy
  {
  public:
    AWS_TRANSFER_API DescribedSecurityPolicy();
    AWS_TRANSFER_API DescribedSecurityPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedSecurityPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether this policy enables Federal Information Processing
     * Standards (FIPS).</p>
     */
    inline bool GetFips() const{ return m_fips; }

    /**
     * <p>Specifies whether this policy enables Federal Information Processing
     * Standards (FIPS).</p>
     */
    inline bool FipsHasBeenSet() const { return m_fipsHasBeenSet; }

    /**
     * <p>Specifies whether this policy enables Federal Information Processing
     * Standards (FIPS).</p>
     */
    inline void SetFips(bool value) { m_fipsHasBeenSet = true; m_fips = value; }

    /**
     * <p>Specifies whether this policy enables Federal Information Processing
     * Standards (FIPS).</p>
     */
    inline DescribedSecurityPolicy& WithFips(bool value) { SetFips(value); return *this;}


    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline const Aws::String& GetSecurityPolicyName() const{ return m_securityPolicyName; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline bool SecurityPolicyNameHasBeenSet() const { return m_securityPolicyNameHasBeenSet; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(const Aws::String& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = value; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(Aws::String&& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = std::move(value); }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(const char* value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName.assign(value); }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& WithSecurityPolicyName(const Aws::String& value) { SetSecurityPolicyName(value); return *this;}

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& WithSecurityPolicyName(Aws::String&& value) { SetSecurityPolicyName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& WithSecurityPolicyName(const char* value) { SetSecurityPolicyName(value); return *this;}


    /**
     * <p>Specifies the enabled Secure Shell (SSH) cipher encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSshCiphers() const{ return m_sshCiphers; }

    /**
     * <p>Specifies the enabled Secure Shell (SSH) cipher encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline bool SshCiphersHasBeenSet() const { return m_sshCiphersHasBeenSet; }

    /**
     * <p>Specifies the enabled Secure Shell (SSH) cipher encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline void SetSshCiphers(const Aws::Vector<Aws::String>& value) { m_sshCiphersHasBeenSet = true; m_sshCiphers = value; }

    /**
     * <p>Specifies the enabled Secure Shell (SSH) cipher encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline void SetSshCiphers(Aws::Vector<Aws::String>&& value) { m_sshCiphersHasBeenSet = true; m_sshCiphers = std::move(value); }

    /**
     * <p>Specifies the enabled Secure Shell (SSH) cipher encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& WithSshCiphers(const Aws::Vector<Aws::String>& value) { SetSshCiphers(value); return *this;}

    /**
     * <p>Specifies the enabled Secure Shell (SSH) cipher encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& WithSshCiphers(Aws::Vector<Aws::String>&& value) { SetSshCiphers(std::move(value)); return *this;}

    /**
     * <p>Specifies the enabled Secure Shell (SSH) cipher encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddSshCiphers(const Aws::String& value) { m_sshCiphersHasBeenSet = true; m_sshCiphers.push_back(value); return *this; }

    /**
     * <p>Specifies the enabled Secure Shell (SSH) cipher encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddSshCiphers(Aws::String&& value) { m_sshCiphersHasBeenSet = true; m_sshCiphers.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the enabled Secure Shell (SSH) cipher encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddSshCiphers(const char* value) { m_sshCiphersHasBeenSet = true; m_sshCiphers.push_back(value); return *this; }


    /**
     * <p>Specifies the enabled SSH key exchange (KEX) encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSshKexs() const{ return m_sshKexs; }

    /**
     * <p>Specifies the enabled SSH key exchange (KEX) encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline bool SshKexsHasBeenSet() const { return m_sshKexsHasBeenSet; }

    /**
     * <p>Specifies the enabled SSH key exchange (KEX) encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline void SetSshKexs(const Aws::Vector<Aws::String>& value) { m_sshKexsHasBeenSet = true; m_sshKexs = value; }

    /**
     * <p>Specifies the enabled SSH key exchange (KEX) encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline void SetSshKexs(Aws::Vector<Aws::String>&& value) { m_sshKexsHasBeenSet = true; m_sshKexs = std::move(value); }

    /**
     * <p>Specifies the enabled SSH key exchange (KEX) encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& WithSshKexs(const Aws::Vector<Aws::String>& value) { SetSshKexs(value); return *this;}

    /**
     * <p>Specifies the enabled SSH key exchange (KEX) encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& WithSshKexs(Aws::Vector<Aws::String>&& value) { SetSshKexs(std::move(value)); return *this;}

    /**
     * <p>Specifies the enabled SSH key exchange (KEX) encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddSshKexs(const Aws::String& value) { m_sshKexsHasBeenSet = true; m_sshKexs.push_back(value); return *this; }

    /**
     * <p>Specifies the enabled SSH key exchange (KEX) encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddSshKexs(Aws::String&& value) { m_sshKexsHasBeenSet = true; m_sshKexs.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the enabled SSH key exchange (KEX) encryption algorithms in the
     * security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddSshKexs(const char* value) { m_sshKexsHasBeenSet = true; m_sshKexs.push_back(value); return *this; }


    /**
     * <p>Specifies the enabled SSH message authentication code (MAC) encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSshMacs() const{ return m_sshMacs; }

    /**
     * <p>Specifies the enabled SSH message authentication code (MAC) encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline bool SshMacsHasBeenSet() const { return m_sshMacsHasBeenSet; }

    /**
     * <p>Specifies the enabled SSH message authentication code (MAC) encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline void SetSshMacs(const Aws::Vector<Aws::String>& value) { m_sshMacsHasBeenSet = true; m_sshMacs = value; }

    /**
     * <p>Specifies the enabled SSH message authentication code (MAC) encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline void SetSshMacs(Aws::Vector<Aws::String>&& value) { m_sshMacsHasBeenSet = true; m_sshMacs = std::move(value); }

    /**
     * <p>Specifies the enabled SSH message authentication code (MAC) encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& WithSshMacs(const Aws::Vector<Aws::String>& value) { SetSshMacs(value); return *this;}

    /**
     * <p>Specifies the enabled SSH message authentication code (MAC) encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& WithSshMacs(Aws::Vector<Aws::String>&& value) { SetSshMacs(std::move(value)); return *this;}

    /**
     * <p>Specifies the enabled SSH message authentication code (MAC) encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddSshMacs(const Aws::String& value) { m_sshMacsHasBeenSet = true; m_sshMacs.push_back(value); return *this; }

    /**
     * <p>Specifies the enabled SSH message authentication code (MAC) encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddSshMacs(Aws::String&& value) { m_sshMacsHasBeenSet = true; m_sshMacs.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the enabled SSH message authentication code (MAC) encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddSshMacs(const char* value) { m_sshMacsHasBeenSet = true; m_sshMacs.push_back(value); return *this; }


    /**
     * <p>Specifies the enabled Transport Layer Security (TLS) cipher encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTlsCiphers() const{ return m_tlsCiphers; }

    /**
     * <p>Specifies the enabled Transport Layer Security (TLS) cipher encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline bool TlsCiphersHasBeenSet() const { return m_tlsCiphersHasBeenSet; }

    /**
     * <p>Specifies the enabled Transport Layer Security (TLS) cipher encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline void SetTlsCiphers(const Aws::Vector<Aws::String>& value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers = value; }

    /**
     * <p>Specifies the enabled Transport Layer Security (TLS) cipher encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline void SetTlsCiphers(Aws::Vector<Aws::String>&& value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers = std::move(value); }

    /**
     * <p>Specifies the enabled Transport Layer Security (TLS) cipher encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& WithTlsCiphers(const Aws::Vector<Aws::String>& value) { SetTlsCiphers(value); return *this;}

    /**
     * <p>Specifies the enabled Transport Layer Security (TLS) cipher encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& WithTlsCiphers(Aws::Vector<Aws::String>&& value) { SetTlsCiphers(std::move(value)); return *this;}

    /**
     * <p>Specifies the enabled Transport Layer Security (TLS) cipher encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddTlsCiphers(const Aws::String& value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers.push_back(value); return *this; }

    /**
     * <p>Specifies the enabled Transport Layer Security (TLS) cipher encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddTlsCiphers(Aws::String&& value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the enabled Transport Layer Security (TLS) cipher encryption
     * algorithms in the security policy that is attached to the server.</p>
     */
    inline DescribedSecurityPolicy& AddTlsCiphers(const char* value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers.push_back(value); return *this; }

  private:

    bool m_fips;
    bool m_fipsHasBeenSet = false;

    Aws::String m_securityPolicyName;
    bool m_securityPolicyNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_sshCiphers;
    bool m_sshCiphersHasBeenSet = false;

    Aws::Vector<Aws::String> m_sshKexs;
    bool m_sshKexsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sshMacs;
    bool m_sshMacsHasBeenSet = false;

    Aws::Vector<Aws::String> m_tlsCiphers;
    bool m_tlsCiphersHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
