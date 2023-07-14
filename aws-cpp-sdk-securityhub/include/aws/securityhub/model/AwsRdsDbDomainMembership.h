/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an Active Directory domain membership record associated
   * with the DB instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbDomainMembership">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsRdsDbDomainMembership
  {
  public:
    AwsRdsDbDomainMembership();
    AwsRdsDbDomainMembership(Aws::Utils::Json::JsonView jsonValue);
    AwsRdsDbDomainMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the Active Directory domain.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The identifier of the Active Directory domain.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The identifier of the Active Directory domain.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The identifier of the Active Directory domain.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The identifier of the Active Directory domain.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The identifier of the Active Directory domain.</p>
     */
    inline AwsRdsDbDomainMembership& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The identifier of the Active Directory domain.</p>
     */
    inline AwsRdsDbDomainMembership& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Active Directory domain.</p>
     */
    inline AwsRdsDbDomainMembership& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The status of the Active Directory Domain membership for the DB instance.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Active Directory Domain membership for the DB instance.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Active Directory Domain membership for the DB instance.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Active Directory Domain membership for the DB instance.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Active Directory Domain membership for the DB instance.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the Active Directory Domain membership for the DB instance.</p>
     */
    inline AwsRdsDbDomainMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Active Directory Domain membership for the DB instance.</p>
     */
    inline AwsRdsDbDomainMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Active Directory Domain membership for the DB instance.</p>
     */
    inline AwsRdsDbDomainMembership& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The fully qualified domain name of the Active Directory domain.</p>
     */
    inline const Aws::String& GetFqdn() const{ return m_fqdn; }

    /**
     * <p>The fully qualified domain name of the Active Directory domain.</p>
     */
    inline bool FqdnHasBeenSet() const { return m_fqdnHasBeenSet; }

    /**
     * <p>The fully qualified domain name of the Active Directory domain.</p>
     */
    inline void SetFqdn(const Aws::String& value) { m_fqdnHasBeenSet = true; m_fqdn = value; }

    /**
     * <p>The fully qualified domain name of the Active Directory domain.</p>
     */
    inline void SetFqdn(Aws::String&& value) { m_fqdnHasBeenSet = true; m_fqdn = std::move(value); }

    /**
     * <p>The fully qualified domain name of the Active Directory domain.</p>
     */
    inline void SetFqdn(const char* value) { m_fqdnHasBeenSet = true; m_fqdn.assign(value); }

    /**
     * <p>The fully qualified domain name of the Active Directory domain.</p>
     */
    inline AwsRdsDbDomainMembership& WithFqdn(const Aws::String& value) { SetFqdn(value); return *this;}

    /**
     * <p>The fully qualified domain name of the Active Directory domain.</p>
     */
    inline AwsRdsDbDomainMembership& WithFqdn(Aws::String&& value) { SetFqdn(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name of the Active Directory domain.</p>
     */
    inline AwsRdsDbDomainMembership& WithFqdn(const char* value) { SetFqdn(value); return *this;}


    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline const Aws::String& GetIamRoleName() const{ return m_iamRoleName; }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline bool IamRoleNameHasBeenSet() const { return m_iamRoleNameHasBeenSet; }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline void SetIamRoleName(const Aws::String& value) { m_iamRoleNameHasBeenSet = true; m_iamRoleName = value; }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline void SetIamRoleName(Aws::String&& value) { m_iamRoleNameHasBeenSet = true; m_iamRoleName = std::move(value); }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline void SetIamRoleName(const char* value) { m_iamRoleNameHasBeenSet = true; m_iamRoleName.assign(value); }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline AwsRdsDbDomainMembership& WithIamRoleName(const Aws::String& value) { SetIamRoleName(value); return *this;}

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline AwsRdsDbDomainMembership& WithIamRoleName(Aws::String&& value) { SetIamRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline AwsRdsDbDomainMembership& WithIamRoleName(const char* value) { SetIamRoleName(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_fqdn;
    bool m_fqdnHasBeenSet;

    Aws::String m_iamRoleName;
    bool m_iamRoleNameHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
