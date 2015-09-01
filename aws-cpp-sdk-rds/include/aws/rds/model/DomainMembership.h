/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /*
    <p> An Active Directory Domain membership record associated with the DB instance. </p>
  */
  class AWS_RDS_API DomainMembership
  {
  public:
    DomainMembership();
    DomainMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    DomainMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p> The identifier of the Active Directory Domain. </p>
    */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /*
     <p> The identifier of the Active Directory Domain. </p>
    */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /*
     <p> The identifier of the Active Directory Domain. </p>
    */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /*
     <p> The identifier of the Active Directory Domain. </p>
    */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /*
     <p> The identifier of the Active Directory Domain. </p>
    */
    inline DomainMembership& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /*
     <p> The identifier of the Active Directory Domain. </p>
    */
    inline DomainMembership& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /*
     <p> The identifier of the Active Directory Domain. </p>
    */
    inline DomainMembership& WithDomain(const char* value) { SetDomain(value); return *this;}

    /*
     <p> The status of the DB instance's Active Directory Domain membership (e.g. joined, pending-join, failed etc). </p>
    */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /*
     <p> The status of the DB instance's Active Directory Domain membership (e.g. joined, pending-join, failed etc). </p>
    */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /*
     <p> The status of the DB instance's Active Directory Domain membership (e.g. joined, pending-join, failed etc). </p>
    */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /*
     <p> The status of the DB instance's Active Directory Domain membership (e.g. joined, pending-join, failed etc). </p>
    */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /*
     <p> The status of the DB instance's Active Directory Domain membership (e.g. joined, pending-join, failed etc). </p>
    */
    inline DomainMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /*
     <p> The status of the DB instance's Active Directory Domain membership (e.g. joined, pending-join, failed etc). </p>
    */
    inline DomainMembership& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /*
     <p> The status of the DB instance's Active Directory Domain membership (e.g. joined, pending-join, failed etc). </p>
    */
    inline DomainMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

    /*
     <p> The observed connectivity of the Active Directory Domain. </p>
    */
    inline const Aws::String& GetConnectivity() const{ return m_connectivity; }

    /*
     <p> The observed connectivity of the Active Directory Domain. </p>
    */
    inline void SetConnectivity(const Aws::String& value) { m_connectivityHasBeenSet = true; m_connectivity = value; }

    /*
     <p> The observed connectivity of the Active Directory Domain. </p>
    */
    inline void SetConnectivity(Aws::String&& value) { m_connectivityHasBeenSet = true; m_connectivity = value; }

    /*
     <p> The observed connectivity of the Active Directory Domain. </p>
    */
    inline void SetConnectivity(const char* value) { m_connectivityHasBeenSet = true; m_connectivity.assign(value); }

    /*
     <p> The observed connectivity of the Active Directory Domain. </p>
    */
    inline DomainMembership& WithConnectivity(const Aws::String& value) { SetConnectivity(value); return *this;}

    /*
     <p> The observed connectivity of the Active Directory Domain. </p>
    */
    inline DomainMembership& WithConnectivity(Aws::String&& value) { SetConnectivity(value); return *this;}

    /*
     <p> The observed connectivity of the Active Directory Domain. </p>
    */
    inline DomainMembership& WithConnectivity(const char* value) { SetConnectivity(value); return *this;}

  private:
    Aws::String m_domain;
    bool m_domainHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::String m_connectivity;
    bool m_connectivityHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
