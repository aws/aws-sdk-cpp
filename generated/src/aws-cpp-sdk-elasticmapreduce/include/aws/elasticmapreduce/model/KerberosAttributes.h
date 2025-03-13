/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
   * using a security configuration. For more information see <a
   * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
   * Kerberos Authentication</a> in the <i>Amazon EMR Management
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/KerberosAttributes">AWS
   * API Reference</a></p>
   */
  class KerberosAttributes
  {
  public:
    AWS_EMR_API KerberosAttributes() = default;
    AWS_EMR_API KerberosAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API KerberosAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Kerberos realm to which all nodes in a cluster belong. For
     * example, <code>EC2.INTERNAL</code>. </p>
     */
    inline const Aws::String& GetRealm() const { return m_realm; }
    inline bool RealmHasBeenSet() const { return m_realmHasBeenSet; }
    template<typename RealmT = Aws::String>
    void SetRealm(RealmT&& value) { m_realmHasBeenSet = true; m_realm = std::forward<RealmT>(value); }
    template<typename RealmT = Aws::String>
    KerberosAttributes& WithRealm(RealmT&& value) { SetRealm(std::forward<RealmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password used within the cluster for the kadmin service on the
     * cluster-dedicated KDC, which maintains Kerberos principals, password policies,
     * and keytabs for the cluster.</p>
     */
    inline const Aws::String& GetKdcAdminPassword() const { return m_kdcAdminPassword; }
    inline bool KdcAdminPasswordHasBeenSet() const { return m_kdcAdminPasswordHasBeenSet; }
    template<typename KdcAdminPasswordT = Aws::String>
    void SetKdcAdminPassword(KdcAdminPasswordT&& value) { m_kdcAdminPasswordHasBeenSet = true; m_kdcAdminPassword = std::forward<KdcAdminPasswordT>(value); }
    template<typename KdcAdminPasswordT = Aws::String>
    KerberosAttributes& WithKdcAdminPassword(KdcAdminPasswordT&& value) { SetKdcAdminPassword(std::forward<KdcAdminPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required only when establishing a cross-realm trust with a KDC in a different
     * realm. The cross-realm principal password, which must be identical across
     * realms.</p>
     */
    inline const Aws::String& GetCrossRealmTrustPrincipalPassword() const { return m_crossRealmTrustPrincipalPassword; }
    inline bool CrossRealmTrustPrincipalPasswordHasBeenSet() const { return m_crossRealmTrustPrincipalPasswordHasBeenSet; }
    template<typename CrossRealmTrustPrincipalPasswordT = Aws::String>
    void SetCrossRealmTrustPrincipalPassword(CrossRealmTrustPrincipalPasswordT&& value) { m_crossRealmTrustPrincipalPasswordHasBeenSet = true; m_crossRealmTrustPrincipalPassword = std::forward<CrossRealmTrustPrincipalPasswordT>(value); }
    template<typename CrossRealmTrustPrincipalPasswordT = Aws::String>
    KerberosAttributes& WithCrossRealmTrustPrincipalPassword(CrossRealmTrustPrincipalPasswordT&& value) { SetCrossRealmTrustPrincipalPassword(std::forward<CrossRealmTrustPrincipalPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required only when establishing a cross-realm trust with an Active Directory
     * domain. A user with sufficient privileges to join resources to the domain.</p>
     */
    inline const Aws::String& GetADDomainJoinUser() const { return m_aDDomainJoinUser; }
    inline bool ADDomainJoinUserHasBeenSet() const { return m_aDDomainJoinUserHasBeenSet; }
    template<typename ADDomainJoinUserT = Aws::String>
    void SetADDomainJoinUser(ADDomainJoinUserT&& value) { m_aDDomainJoinUserHasBeenSet = true; m_aDDomainJoinUser = std::forward<ADDomainJoinUserT>(value); }
    template<typename ADDomainJoinUserT = Aws::String>
    KerberosAttributes& WithADDomainJoinUser(ADDomainJoinUserT&& value) { SetADDomainJoinUser(std::forward<ADDomainJoinUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory password for <code>ADDomainJoinUser</code>.</p>
     */
    inline const Aws::String& GetADDomainJoinPassword() const { return m_aDDomainJoinPassword; }
    inline bool ADDomainJoinPasswordHasBeenSet() const { return m_aDDomainJoinPasswordHasBeenSet; }
    template<typename ADDomainJoinPasswordT = Aws::String>
    void SetADDomainJoinPassword(ADDomainJoinPasswordT&& value) { m_aDDomainJoinPasswordHasBeenSet = true; m_aDDomainJoinPassword = std::forward<ADDomainJoinPasswordT>(value); }
    template<typename ADDomainJoinPasswordT = Aws::String>
    KerberosAttributes& WithADDomainJoinPassword(ADDomainJoinPasswordT&& value) { SetADDomainJoinPassword(std::forward<ADDomainJoinPasswordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_realm;
    bool m_realmHasBeenSet = false;

    Aws::String m_kdcAdminPassword;
    bool m_kdcAdminPasswordHasBeenSet = false;

    Aws::String m_crossRealmTrustPrincipalPassword;
    bool m_crossRealmTrustPrincipalPasswordHasBeenSet = false;

    Aws::String m_aDDomainJoinUser;
    bool m_aDDomainJoinUserHasBeenSet = false;

    Aws::String m_aDDomainJoinPassword;
    bool m_aDDomainJoinPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
