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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{

  /**
   * <p>An Active Directory Domain membership record associated with a DB
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DomainMembership">AWS
   * API Reference</a></p>
   */
  class AWS_NEPTUNE_API DomainMembership
  {
  public:
    DomainMembership();
    DomainMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    DomainMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of the Active Directory Domain.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The identifier of the Active Directory Domain.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The identifier of the Active Directory Domain.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The identifier of the Active Directory Domain.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The identifier of the Active Directory Domain.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The identifier of the Active Directory Domain.</p>
     */
    inline DomainMembership& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The identifier of the Active Directory Domain.</p>
     */
    inline DomainMembership& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Active Directory Domain.</p>
     */
    inline DomainMembership& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The status of the DB instance's Active Directory Domain membership, such as
     * joined, pending-join, failed etc).</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the DB instance's Active Directory Domain membership, such as
     * joined, pending-join, failed etc).</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the DB instance's Active Directory Domain membership, such as
     * joined, pending-join, failed etc).</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the DB instance's Active Directory Domain membership, such as
     * joined, pending-join, failed etc).</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the DB instance's Active Directory Domain membership, such as
     * joined, pending-join, failed etc).</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the DB instance's Active Directory Domain membership, such as
     * joined, pending-join, failed etc).</p>
     */
    inline DomainMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the DB instance's Active Directory Domain membership, such as
     * joined, pending-join, failed etc).</p>
     */
    inline DomainMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the DB instance's Active Directory Domain membership, such as
     * joined, pending-join, failed etc).</p>
     */
    inline DomainMembership& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The fully qualified domain name of the Active Directory Domain.</p>
     */
    inline const Aws::String& GetFQDN() const{ return m_fQDN; }

    /**
     * <p>The fully qualified domain name of the Active Directory Domain.</p>
     */
    inline bool FQDNHasBeenSet() const { return m_fQDNHasBeenSet; }

    /**
     * <p>The fully qualified domain name of the Active Directory Domain.</p>
     */
    inline void SetFQDN(const Aws::String& value) { m_fQDNHasBeenSet = true; m_fQDN = value; }

    /**
     * <p>The fully qualified domain name of the Active Directory Domain.</p>
     */
    inline void SetFQDN(Aws::String&& value) { m_fQDNHasBeenSet = true; m_fQDN = std::move(value); }

    /**
     * <p>The fully qualified domain name of the Active Directory Domain.</p>
     */
    inline void SetFQDN(const char* value) { m_fQDNHasBeenSet = true; m_fQDN.assign(value); }

    /**
     * <p>The fully qualified domain name of the Active Directory Domain.</p>
     */
    inline DomainMembership& WithFQDN(const Aws::String& value) { SetFQDN(value); return *this;}

    /**
     * <p>The fully qualified domain name of the Active Directory Domain.</p>
     */
    inline DomainMembership& WithFQDN(Aws::String&& value) { SetFQDN(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name of the Active Directory Domain.</p>
     */
    inline DomainMembership& WithFQDN(const char* value) { SetFQDN(value); return *this;}


    /**
     * <p>The name of the IAM role to be used when making API calls to the Directory
     * Service.</p>
     */
    inline const Aws::String& GetIAMRoleName() const{ return m_iAMRoleName; }

    /**
     * <p>The name of the IAM role to be used when making API calls to the Directory
     * Service.</p>
     */
    inline bool IAMRoleNameHasBeenSet() const { return m_iAMRoleNameHasBeenSet; }

    /**
     * <p>The name of the IAM role to be used when making API calls to the Directory
     * Service.</p>
     */
    inline void SetIAMRoleName(const Aws::String& value) { m_iAMRoleNameHasBeenSet = true; m_iAMRoleName = value; }

    /**
     * <p>The name of the IAM role to be used when making API calls to the Directory
     * Service.</p>
     */
    inline void SetIAMRoleName(Aws::String&& value) { m_iAMRoleNameHasBeenSet = true; m_iAMRoleName = std::move(value); }

    /**
     * <p>The name of the IAM role to be used when making API calls to the Directory
     * Service.</p>
     */
    inline void SetIAMRoleName(const char* value) { m_iAMRoleNameHasBeenSet = true; m_iAMRoleName.assign(value); }

    /**
     * <p>The name of the IAM role to be used when making API calls to the Directory
     * Service.</p>
     */
    inline DomainMembership& WithIAMRoleName(const Aws::String& value) { SetIAMRoleName(value); return *this;}

    /**
     * <p>The name of the IAM role to be used when making API calls to the Directory
     * Service.</p>
     */
    inline DomainMembership& WithIAMRoleName(Aws::String&& value) { SetIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role to be used when making API calls to the Directory
     * Service.</p>
     */
    inline DomainMembership& WithIAMRoleName(const char* value) { SetIAMRoleName(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_fQDN;
    bool m_fQDNHasBeenSet;

    Aws::String m_iAMRoleName;
    bool m_iAMRoleNameHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
