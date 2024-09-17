/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/SecurityPolicyResourceType.h>
#include <aws/awstransfer/model/SecurityPolicyProtocol.h>
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
   * <p>Describes the properties of a security policy that you specify. For more
   * information about security policies, see <a
   * href="https://docs.aws.amazon.com/transfer/latest/userguide/security-policies.html">Working
   * with security policies for servers</a> or <a
   * href="https://docs.aws.amazon.com/transfer/latest/userguide/security-policies-connectors.html">Working
   * with security policies for SFTP connectors</a>.</p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>Specifies whether this policy enables Federal Information Processing
     * Standards (FIPS). This parameter applies to both server and connector security
     * policies.</p>
     */
    inline bool GetFips() const{ return m_fips; }
    inline bool FipsHasBeenSet() const { return m_fipsHasBeenSet; }
    inline void SetFips(bool value) { m_fipsHasBeenSet = true; m_fips = value; }
    inline DescribedSecurityPolicy& WithFips(bool value) { SetFips(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text name of the specified security policy.</p>
     */
    inline const Aws::String& GetSecurityPolicyName() const{ return m_securityPolicyName; }
    inline bool SecurityPolicyNameHasBeenSet() const { return m_securityPolicyNameHasBeenSet; }
    inline void SetSecurityPolicyName(const Aws::String& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = value; }
    inline void SetSecurityPolicyName(Aws::String&& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = std::move(value); }
    inline void SetSecurityPolicyName(const char* value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName.assign(value); }
    inline DescribedSecurityPolicy& WithSecurityPolicyName(const Aws::String& value) { SetSecurityPolicyName(value); return *this;}
    inline DescribedSecurityPolicy& WithSecurityPolicyName(Aws::String&& value) { SetSecurityPolicyName(std::move(value)); return *this;}
    inline DescribedSecurityPolicy& WithSecurityPolicyName(const char* value) { SetSecurityPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the enabled Secure Shell (SSH) cipher encryption algorithms in the
     * security policy that is attached to the server or connector. This parameter
     * applies to both server and connector security policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSshCiphers() const{ return m_sshCiphers; }
    inline bool SshCiphersHasBeenSet() const { return m_sshCiphersHasBeenSet; }
    inline void SetSshCiphers(const Aws::Vector<Aws::String>& value) { m_sshCiphersHasBeenSet = true; m_sshCiphers = value; }
    inline void SetSshCiphers(Aws::Vector<Aws::String>&& value) { m_sshCiphersHasBeenSet = true; m_sshCiphers = std::move(value); }
    inline DescribedSecurityPolicy& WithSshCiphers(const Aws::Vector<Aws::String>& value) { SetSshCiphers(value); return *this;}
    inline DescribedSecurityPolicy& WithSshCiphers(Aws::Vector<Aws::String>&& value) { SetSshCiphers(std::move(value)); return *this;}
    inline DescribedSecurityPolicy& AddSshCiphers(const Aws::String& value) { m_sshCiphersHasBeenSet = true; m_sshCiphers.push_back(value); return *this; }
    inline DescribedSecurityPolicy& AddSshCiphers(Aws::String&& value) { m_sshCiphersHasBeenSet = true; m_sshCiphers.push_back(std::move(value)); return *this; }
    inline DescribedSecurityPolicy& AddSshCiphers(const char* value) { m_sshCiphersHasBeenSet = true; m_sshCiphers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the enabled SSH key exchange (KEX) encryption algorithms in the
     * security policy that is attached to the server or connector. This parameter
     * applies to both server and connector security policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSshKexs() const{ return m_sshKexs; }
    inline bool SshKexsHasBeenSet() const { return m_sshKexsHasBeenSet; }
    inline void SetSshKexs(const Aws::Vector<Aws::String>& value) { m_sshKexsHasBeenSet = true; m_sshKexs = value; }
    inline void SetSshKexs(Aws::Vector<Aws::String>&& value) { m_sshKexsHasBeenSet = true; m_sshKexs = std::move(value); }
    inline DescribedSecurityPolicy& WithSshKexs(const Aws::Vector<Aws::String>& value) { SetSshKexs(value); return *this;}
    inline DescribedSecurityPolicy& WithSshKexs(Aws::Vector<Aws::String>&& value) { SetSshKexs(std::move(value)); return *this;}
    inline DescribedSecurityPolicy& AddSshKexs(const Aws::String& value) { m_sshKexsHasBeenSet = true; m_sshKexs.push_back(value); return *this; }
    inline DescribedSecurityPolicy& AddSshKexs(Aws::String&& value) { m_sshKexsHasBeenSet = true; m_sshKexs.push_back(std::move(value)); return *this; }
    inline DescribedSecurityPolicy& AddSshKexs(const char* value) { m_sshKexsHasBeenSet = true; m_sshKexs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the enabled SSH message authentication code (MAC) encryption algorithms
     * in the security policy that is attached to the server or connector. This
     * parameter applies to both server and connector security policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSshMacs() const{ return m_sshMacs; }
    inline bool SshMacsHasBeenSet() const { return m_sshMacsHasBeenSet; }
    inline void SetSshMacs(const Aws::Vector<Aws::String>& value) { m_sshMacsHasBeenSet = true; m_sshMacs = value; }
    inline void SetSshMacs(Aws::Vector<Aws::String>&& value) { m_sshMacsHasBeenSet = true; m_sshMacs = std::move(value); }
    inline DescribedSecurityPolicy& WithSshMacs(const Aws::Vector<Aws::String>& value) { SetSshMacs(value); return *this;}
    inline DescribedSecurityPolicy& WithSshMacs(Aws::Vector<Aws::String>&& value) { SetSshMacs(std::move(value)); return *this;}
    inline DescribedSecurityPolicy& AddSshMacs(const Aws::String& value) { m_sshMacsHasBeenSet = true; m_sshMacs.push_back(value); return *this; }
    inline DescribedSecurityPolicy& AddSshMacs(Aws::String&& value) { m_sshMacsHasBeenSet = true; m_sshMacs.push_back(std::move(value)); return *this; }
    inline DescribedSecurityPolicy& AddSshMacs(const char* value) { m_sshMacsHasBeenSet = true; m_sshMacs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the enabled Transport Layer Security (TLS) cipher encryption algorithms
     * in the security policy that is attached to the server.</p>  <p>This
     * parameter only applies to security policies for servers.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetTlsCiphers() const{ return m_tlsCiphers; }
    inline bool TlsCiphersHasBeenSet() const { return m_tlsCiphersHasBeenSet; }
    inline void SetTlsCiphers(const Aws::Vector<Aws::String>& value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers = value; }
    inline void SetTlsCiphers(Aws::Vector<Aws::String>&& value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers = std::move(value); }
    inline DescribedSecurityPolicy& WithTlsCiphers(const Aws::Vector<Aws::String>& value) { SetTlsCiphers(value); return *this;}
    inline DescribedSecurityPolicy& WithTlsCiphers(Aws::Vector<Aws::String>&& value) { SetTlsCiphers(std::move(value)); return *this;}
    inline DescribedSecurityPolicy& AddTlsCiphers(const Aws::String& value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers.push_back(value); return *this; }
    inline DescribedSecurityPolicy& AddTlsCiphers(Aws::String&& value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers.push_back(std::move(value)); return *this; }
    inline DescribedSecurityPolicy& AddTlsCiphers(const char* value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the host key algorithms for the security policy.</p>  <p>This
     * parameter only applies to security policies for connectors.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSshHostKeyAlgorithms() const{ return m_sshHostKeyAlgorithms; }
    inline bool SshHostKeyAlgorithmsHasBeenSet() const { return m_sshHostKeyAlgorithmsHasBeenSet; }
    inline void SetSshHostKeyAlgorithms(const Aws::Vector<Aws::String>& value) { m_sshHostKeyAlgorithmsHasBeenSet = true; m_sshHostKeyAlgorithms = value; }
    inline void SetSshHostKeyAlgorithms(Aws::Vector<Aws::String>&& value) { m_sshHostKeyAlgorithmsHasBeenSet = true; m_sshHostKeyAlgorithms = std::move(value); }
    inline DescribedSecurityPolicy& WithSshHostKeyAlgorithms(const Aws::Vector<Aws::String>& value) { SetSshHostKeyAlgorithms(value); return *this;}
    inline DescribedSecurityPolicy& WithSshHostKeyAlgorithms(Aws::Vector<Aws::String>&& value) { SetSshHostKeyAlgorithms(std::move(value)); return *this;}
    inline DescribedSecurityPolicy& AddSshHostKeyAlgorithms(const Aws::String& value) { m_sshHostKeyAlgorithmsHasBeenSet = true; m_sshHostKeyAlgorithms.push_back(value); return *this; }
    inline DescribedSecurityPolicy& AddSshHostKeyAlgorithms(Aws::String&& value) { m_sshHostKeyAlgorithmsHasBeenSet = true; m_sshHostKeyAlgorithms.push_back(std::move(value)); return *this; }
    inline DescribedSecurityPolicy& AddSshHostKeyAlgorithms(const char* value) { m_sshHostKeyAlgorithmsHasBeenSet = true; m_sshHostKeyAlgorithms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource type to which the security policy applies, either server or
     * connector.</p>
     */
    inline const SecurityPolicyResourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SecurityPolicyResourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SecurityPolicyResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DescribedSecurityPolicy& WithType(const SecurityPolicyResourceType& value) { SetType(value); return *this;}
    inline DescribedSecurityPolicy& WithType(SecurityPolicyResourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the file transfer protocols that the security policy applies to.</p>
     */
    inline const Aws::Vector<SecurityPolicyProtocol>& GetProtocols() const{ return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    inline void SetProtocols(const Aws::Vector<SecurityPolicyProtocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }
    inline void SetProtocols(Aws::Vector<SecurityPolicyProtocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }
    inline DescribedSecurityPolicy& WithProtocols(const Aws::Vector<SecurityPolicyProtocol>& value) { SetProtocols(value); return *this;}
    inline DescribedSecurityPolicy& WithProtocols(Aws::Vector<SecurityPolicyProtocol>&& value) { SetProtocols(std::move(value)); return *this;}
    inline DescribedSecurityPolicy& AddProtocols(const SecurityPolicyProtocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    inline DescribedSecurityPolicy& AddProtocols(SecurityPolicyProtocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }
    ///@}
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

    Aws::Vector<Aws::String> m_sshHostKeyAlgorithms;
    bool m_sshHostKeyAlgorithmsHasBeenSet = false;

    SecurityPolicyResourceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<SecurityPolicyProtocol> m_protocols;
    bool m_protocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
