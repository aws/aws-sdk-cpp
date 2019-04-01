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
   * Kerberos Authentication</a> in the <i>EMR Management Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/KerberosAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API KerberosAttributes
  {
  public:
    KerberosAttributes();
    KerberosAttributes(Aws::Utils::Json::JsonView jsonValue);
    KerberosAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Kerberos realm to which all nodes in a cluster belong. For
     * example, <code>EC2.INTERNAL</code>. </p>
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }

    /**
     * <p>The name of the Kerberos realm to which all nodes in a cluster belong. For
     * example, <code>EC2.INTERNAL</code>. </p>
     */
    inline bool RealmHasBeenSet() const { return m_realmHasBeenSet; }

    /**
     * <p>The name of the Kerberos realm to which all nodes in a cluster belong. For
     * example, <code>EC2.INTERNAL</code>. </p>
     */
    inline void SetRealm(const Aws::String& value) { m_realmHasBeenSet = true; m_realm = value; }

    /**
     * <p>The name of the Kerberos realm to which all nodes in a cluster belong. For
     * example, <code>EC2.INTERNAL</code>. </p>
     */
    inline void SetRealm(Aws::String&& value) { m_realmHasBeenSet = true; m_realm = std::move(value); }

    /**
     * <p>The name of the Kerberos realm to which all nodes in a cluster belong. For
     * example, <code>EC2.INTERNAL</code>. </p>
     */
    inline void SetRealm(const char* value) { m_realmHasBeenSet = true; m_realm.assign(value); }

    /**
     * <p>The name of the Kerberos realm to which all nodes in a cluster belong. For
     * example, <code>EC2.INTERNAL</code>. </p>
     */
    inline KerberosAttributes& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}

    /**
     * <p>The name of the Kerberos realm to which all nodes in a cluster belong. For
     * example, <code>EC2.INTERNAL</code>. </p>
     */
    inline KerberosAttributes& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}

    /**
     * <p>The name of the Kerberos realm to which all nodes in a cluster belong. For
     * example, <code>EC2.INTERNAL</code>. </p>
     */
    inline KerberosAttributes& WithRealm(const char* value) { SetRealm(value); return *this;}


    /**
     * <p>The password used within the cluster for the kadmin service on the
     * cluster-dedicated KDC, which maintains Kerberos principals, password policies,
     * and keytabs for the cluster.</p>
     */
    inline const Aws::String& GetKdcAdminPassword() const{ return m_kdcAdminPassword; }

    /**
     * <p>The password used within the cluster for the kadmin service on the
     * cluster-dedicated KDC, which maintains Kerberos principals, password policies,
     * and keytabs for the cluster.</p>
     */
    inline bool KdcAdminPasswordHasBeenSet() const { return m_kdcAdminPasswordHasBeenSet; }

    /**
     * <p>The password used within the cluster for the kadmin service on the
     * cluster-dedicated KDC, which maintains Kerberos principals, password policies,
     * and keytabs for the cluster.</p>
     */
    inline void SetKdcAdminPassword(const Aws::String& value) { m_kdcAdminPasswordHasBeenSet = true; m_kdcAdminPassword = value; }

    /**
     * <p>The password used within the cluster for the kadmin service on the
     * cluster-dedicated KDC, which maintains Kerberos principals, password policies,
     * and keytabs for the cluster.</p>
     */
    inline void SetKdcAdminPassword(Aws::String&& value) { m_kdcAdminPasswordHasBeenSet = true; m_kdcAdminPassword = std::move(value); }

    /**
     * <p>The password used within the cluster for the kadmin service on the
     * cluster-dedicated KDC, which maintains Kerberos principals, password policies,
     * and keytabs for the cluster.</p>
     */
    inline void SetKdcAdminPassword(const char* value) { m_kdcAdminPasswordHasBeenSet = true; m_kdcAdminPassword.assign(value); }

    /**
     * <p>The password used within the cluster for the kadmin service on the
     * cluster-dedicated KDC, which maintains Kerberos principals, password policies,
     * and keytabs for the cluster.</p>
     */
    inline KerberosAttributes& WithKdcAdminPassword(const Aws::String& value) { SetKdcAdminPassword(value); return *this;}

    /**
     * <p>The password used within the cluster for the kadmin service on the
     * cluster-dedicated KDC, which maintains Kerberos principals, password policies,
     * and keytabs for the cluster.</p>
     */
    inline KerberosAttributes& WithKdcAdminPassword(Aws::String&& value) { SetKdcAdminPassword(std::move(value)); return *this;}

    /**
     * <p>The password used within the cluster for the kadmin service on the
     * cluster-dedicated KDC, which maintains Kerberos principals, password policies,
     * and keytabs for the cluster.</p>
     */
    inline KerberosAttributes& WithKdcAdminPassword(const char* value) { SetKdcAdminPassword(value); return *this;}


    /**
     * <p>Required only when establishing a cross-realm trust with a KDC in a different
     * realm. The cross-realm principal password, which must be identical across
     * realms.</p>
     */
    inline const Aws::String& GetCrossRealmTrustPrincipalPassword() const{ return m_crossRealmTrustPrincipalPassword; }

    /**
     * <p>Required only when establishing a cross-realm trust with a KDC in a different
     * realm. The cross-realm principal password, which must be identical across
     * realms.</p>
     */
    inline bool CrossRealmTrustPrincipalPasswordHasBeenSet() const { return m_crossRealmTrustPrincipalPasswordHasBeenSet; }

    /**
     * <p>Required only when establishing a cross-realm trust with a KDC in a different
     * realm. The cross-realm principal password, which must be identical across
     * realms.</p>
     */
    inline void SetCrossRealmTrustPrincipalPassword(const Aws::String& value) { m_crossRealmTrustPrincipalPasswordHasBeenSet = true; m_crossRealmTrustPrincipalPassword = value; }

    /**
     * <p>Required only when establishing a cross-realm trust with a KDC in a different
     * realm. The cross-realm principal password, which must be identical across
     * realms.</p>
     */
    inline void SetCrossRealmTrustPrincipalPassword(Aws::String&& value) { m_crossRealmTrustPrincipalPasswordHasBeenSet = true; m_crossRealmTrustPrincipalPassword = std::move(value); }

    /**
     * <p>Required only when establishing a cross-realm trust with a KDC in a different
     * realm. The cross-realm principal password, which must be identical across
     * realms.</p>
     */
    inline void SetCrossRealmTrustPrincipalPassword(const char* value) { m_crossRealmTrustPrincipalPasswordHasBeenSet = true; m_crossRealmTrustPrincipalPassword.assign(value); }

    /**
     * <p>Required only when establishing a cross-realm trust with a KDC in a different
     * realm. The cross-realm principal password, which must be identical across
     * realms.</p>
     */
    inline KerberosAttributes& WithCrossRealmTrustPrincipalPassword(const Aws::String& value) { SetCrossRealmTrustPrincipalPassword(value); return *this;}

    /**
     * <p>Required only when establishing a cross-realm trust with a KDC in a different
     * realm. The cross-realm principal password, which must be identical across
     * realms.</p>
     */
    inline KerberosAttributes& WithCrossRealmTrustPrincipalPassword(Aws::String&& value) { SetCrossRealmTrustPrincipalPassword(std::move(value)); return *this;}

    /**
     * <p>Required only when establishing a cross-realm trust with a KDC in a different
     * realm. The cross-realm principal password, which must be identical across
     * realms.</p>
     */
    inline KerberosAttributes& WithCrossRealmTrustPrincipalPassword(const char* value) { SetCrossRealmTrustPrincipalPassword(value); return *this;}


    /**
     * <p>Required only when establishing a cross-realm trust with an Active Directory
     * domain. A user with sufficient privileges to join resources to the domain.</p>
     */
    inline const Aws::String& GetADDomainJoinUser() const{ return m_aDDomainJoinUser; }

    /**
     * <p>Required only when establishing a cross-realm trust with an Active Directory
     * domain. A user with sufficient privileges to join resources to the domain.</p>
     */
    inline bool ADDomainJoinUserHasBeenSet() const { return m_aDDomainJoinUserHasBeenSet; }

    /**
     * <p>Required only when establishing a cross-realm trust with an Active Directory
     * domain. A user with sufficient privileges to join resources to the domain.</p>
     */
    inline void SetADDomainJoinUser(const Aws::String& value) { m_aDDomainJoinUserHasBeenSet = true; m_aDDomainJoinUser = value; }

    /**
     * <p>Required only when establishing a cross-realm trust with an Active Directory
     * domain. A user with sufficient privileges to join resources to the domain.</p>
     */
    inline void SetADDomainJoinUser(Aws::String&& value) { m_aDDomainJoinUserHasBeenSet = true; m_aDDomainJoinUser = std::move(value); }

    /**
     * <p>Required only when establishing a cross-realm trust with an Active Directory
     * domain. A user with sufficient privileges to join resources to the domain.</p>
     */
    inline void SetADDomainJoinUser(const char* value) { m_aDDomainJoinUserHasBeenSet = true; m_aDDomainJoinUser.assign(value); }

    /**
     * <p>Required only when establishing a cross-realm trust with an Active Directory
     * domain. A user with sufficient privileges to join resources to the domain.</p>
     */
    inline KerberosAttributes& WithADDomainJoinUser(const Aws::String& value) { SetADDomainJoinUser(value); return *this;}

    /**
     * <p>Required only when establishing a cross-realm trust with an Active Directory
     * domain. A user with sufficient privileges to join resources to the domain.</p>
     */
    inline KerberosAttributes& WithADDomainJoinUser(Aws::String&& value) { SetADDomainJoinUser(std::move(value)); return *this;}

    /**
     * <p>Required only when establishing a cross-realm trust with an Active Directory
     * domain. A user with sufficient privileges to join resources to the domain.</p>
     */
    inline KerberosAttributes& WithADDomainJoinUser(const char* value) { SetADDomainJoinUser(value); return *this;}


    /**
     * <p>The Active Directory password for <code>ADDomainJoinUser</code>.</p>
     */
    inline const Aws::String& GetADDomainJoinPassword() const{ return m_aDDomainJoinPassword; }

    /**
     * <p>The Active Directory password for <code>ADDomainJoinUser</code>.</p>
     */
    inline bool ADDomainJoinPasswordHasBeenSet() const { return m_aDDomainJoinPasswordHasBeenSet; }

    /**
     * <p>The Active Directory password for <code>ADDomainJoinUser</code>.</p>
     */
    inline void SetADDomainJoinPassword(const Aws::String& value) { m_aDDomainJoinPasswordHasBeenSet = true; m_aDDomainJoinPassword = value; }

    /**
     * <p>The Active Directory password for <code>ADDomainJoinUser</code>.</p>
     */
    inline void SetADDomainJoinPassword(Aws::String&& value) { m_aDDomainJoinPasswordHasBeenSet = true; m_aDDomainJoinPassword = std::move(value); }

    /**
     * <p>The Active Directory password for <code>ADDomainJoinUser</code>.</p>
     */
    inline void SetADDomainJoinPassword(const char* value) { m_aDDomainJoinPasswordHasBeenSet = true; m_aDDomainJoinPassword.assign(value); }

    /**
     * <p>The Active Directory password for <code>ADDomainJoinUser</code>.</p>
     */
    inline KerberosAttributes& WithADDomainJoinPassword(const Aws::String& value) { SetADDomainJoinPassword(value); return *this;}

    /**
     * <p>The Active Directory password for <code>ADDomainJoinUser</code>.</p>
     */
    inline KerberosAttributes& WithADDomainJoinPassword(Aws::String&& value) { SetADDomainJoinPassword(std::move(value)); return *this;}

    /**
     * <p>The Active Directory password for <code>ADDomainJoinUser</code>.</p>
     */
    inline KerberosAttributes& WithADDomainJoinPassword(const char* value) { SetADDomainJoinPassword(value); return *this;}

  private:

    Aws::String m_realm;
    bool m_realmHasBeenSet;

    Aws::String m_kdcAdminPassword;
    bool m_kdcAdminPasswordHasBeenSet;

    Aws::String m_crossRealmTrustPrincipalPassword;
    bool m_crossRealmTrustPrincipalPasswordHasBeenSet;

    Aws::String m_aDDomainJoinUser;
    bool m_aDDomainJoinUserHasBeenSet;

    Aws::String m_aDDomainJoinPassword;
    bool m_aDDomainJoinPasswordHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
