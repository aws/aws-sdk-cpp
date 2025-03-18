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
    AWS_TRANSFER_API DescribedSecurityPolicy() = default;
    AWS_TRANSFER_API DescribedSecurityPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedSecurityPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether this policy enables Federal Information Processing
     * Standards (FIPS). This parameter applies to both server and connector security
     * policies.</p>
     */
    inline bool GetFips() const { return m_fips; }
    inline bool FipsHasBeenSet() const { return m_fipsHasBeenSet; }
    inline void SetFips(bool value) { m_fipsHasBeenSet = true; m_fips = value; }
    inline DescribedSecurityPolicy& WithFips(bool value) { SetFips(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text name of the specified security policy.</p>
     */
    inline const Aws::String& GetSecurityPolicyName() const { return m_securityPolicyName; }
    inline bool SecurityPolicyNameHasBeenSet() const { return m_securityPolicyNameHasBeenSet; }
    template<typename SecurityPolicyNameT = Aws::String>
    void SetSecurityPolicyName(SecurityPolicyNameT&& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = std::forward<SecurityPolicyNameT>(value); }
    template<typename SecurityPolicyNameT = Aws::String>
    DescribedSecurityPolicy& WithSecurityPolicyName(SecurityPolicyNameT&& value) { SetSecurityPolicyName(std::forward<SecurityPolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the enabled Secure Shell (SSH) cipher encryption algorithms in the
     * security policy that is attached to the server or connector. This parameter
     * applies to both server and connector security policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSshCiphers() const { return m_sshCiphers; }
    inline bool SshCiphersHasBeenSet() const { return m_sshCiphersHasBeenSet; }
    template<typename SshCiphersT = Aws::Vector<Aws::String>>
    void SetSshCiphers(SshCiphersT&& value) { m_sshCiphersHasBeenSet = true; m_sshCiphers = std::forward<SshCiphersT>(value); }
    template<typename SshCiphersT = Aws::Vector<Aws::String>>
    DescribedSecurityPolicy& WithSshCiphers(SshCiphersT&& value) { SetSshCiphers(std::forward<SshCiphersT>(value)); return *this;}
    template<typename SshCiphersT = Aws::String>
    DescribedSecurityPolicy& AddSshCiphers(SshCiphersT&& value) { m_sshCiphersHasBeenSet = true; m_sshCiphers.emplace_back(std::forward<SshCiphersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the enabled SSH key exchange (KEX) encryption algorithms in the
     * security policy that is attached to the server or connector. This parameter
     * applies to both server and connector security policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSshKexs() const { return m_sshKexs; }
    inline bool SshKexsHasBeenSet() const { return m_sshKexsHasBeenSet; }
    template<typename SshKexsT = Aws::Vector<Aws::String>>
    void SetSshKexs(SshKexsT&& value) { m_sshKexsHasBeenSet = true; m_sshKexs = std::forward<SshKexsT>(value); }
    template<typename SshKexsT = Aws::Vector<Aws::String>>
    DescribedSecurityPolicy& WithSshKexs(SshKexsT&& value) { SetSshKexs(std::forward<SshKexsT>(value)); return *this;}
    template<typename SshKexsT = Aws::String>
    DescribedSecurityPolicy& AddSshKexs(SshKexsT&& value) { m_sshKexsHasBeenSet = true; m_sshKexs.emplace_back(std::forward<SshKexsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the enabled SSH message authentication code (MAC) encryption algorithms
     * in the security policy that is attached to the server or connector. This
     * parameter applies to both server and connector security policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSshMacs() const { return m_sshMacs; }
    inline bool SshMacsHasBeenSet() const { return m_sshMacsHasBeenSet; }
    template<typename SshMacsT = Aws::Vector<Aws::String>>
    void SetSshMacs(SshMacsT&& value) { m_sshMacsHasBeenSet = true; m_sshMacs = std::forward<SshMacsT>(value); }
    template<typename SshMacsT = Aws::Vector<Aws::String>>
    DescribedSecurityPolicy& WithSshMacs(SshMacsT&& value) { SetSshMacs(std::forward<SshMacsT>(value)); return *this;}
    template<typename SshMacsT = Aws::String>
    DescribedSecurityPolicy& AddSshMacs(SshMacsT&& value) { m_sshMacsHasBeenSet = true; m_sshMacs.emplace_back(std::forward<SshMacsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the enabled Transport Layer Security (TLS) cipher encryption algorithms
     * in the security policy that is attached to the server.</p>  <p>This
     * parameter only applies to security policies for servers.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetTlsCiphers() const { return m_tlsCiphers; }
    inline bool TlsCiphersHasBeenSet() const { return m_tlsCiphersHasBeenSet; }
    template<typename TlsCiphersT = Aws::Vector<Aws::String>>
    void SetTlsCiphers(TlsCiphersT&& value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers = std::forward<TlsCiphersT>(value); }
    template<typename TlsCiphersT = Aws::Vector<Aws::String>>
    DescribedSecurityPolicy& WithTlsCiphers(TlsCiphersT&& value) { SetTlsCiphers(std::forward<TlsCiphersT>(value)); return *this;}
    template<typename TlsCiphersT = Aws::String>
    DescribedSecurityPolicy& AddTlsCiphers(TlsCiphersT&& value) { m_tlsCiphersHasBeenSet = true; m_tlsCiphers.emplace_back(std::forward<TlsCiphersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the host key algorithms for the security policy.</p>  <p>This
     * parameter only applies to security policies for connectors.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSshHostKeyAlgorithms() const { return m_sshHostKeyAlgorithms; }
    inline bool SshHostKeyAlgorithmsHasBeenSet() const { return m_sshHostKeyAlgorithmsHasBeenSet; }
    template<typename SshHostKeyAlgorithmsT = Aws::Vector<Aws::String>>
    void SetSshHostKeyAlgorithms(SshHostKeyAlgorithmsT&& value) { m_sshHostKeyAlgorithmsHasBeenSet = true; m_sshHostKeyAlgorithms = std::forward<SshHostKeyAlgorithmsT>(value); }
    template<typename SshHostKeyAlgorithmsT = Aws::Vector<Aws::String>>
    DescribedSecurityPolicy& WithSshHostKeyAlgorithms(SshHostKeyAlgorithmsT&& value) { SetSshHostKeyAlgorithms(std::forward<SshHostKeyAlgorithmsT>(value)); return *this;}
    template<typename SshHostKeyAlgorithmsT = Aws::String>
    DescribedSecurityPolicy& AddSshHostKeyAlgorithms(SshHostKeyAlgorithmsT&& value) { m_sshHostKeyAlgorithmsHasBeenSet = true; m_sshHostKeyAlgorithms.emplace_back(std::forward<SshHostKeyAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource type to which the security policy applies, either server or
     * connector.</p>
     */
    inline SecurityPolicyResourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SecurityPolicyResourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribedSecurityPolicy& WithType(SecurityPolicyResourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the file transfer protocols that the security policy applies to.</p>
     */
    inline const Aws::Vector<SecurityPolicyProtocol>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<SecurityPolicyProtocol>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<SecurityPolicyProtocol>>
    DescribedSecurityPolicy& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    inline DescribedSecurityPolicy& AddProtocols(SecurityPolicyProtocol value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}
  private:

    bool m_fips{false};
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

    SecurityPolicyResourceType m_type{SecurityPolicyResourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<SecurityPolicyProtocol> m_protocols;
    bool m_protocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
