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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/ActiveDirectoryStatus.h>
#include <aws/storagegateway/model/SMBSecurityStrategy.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  class AWS_STORAGEGATEWAY_API DescribeSMBSettingsResult
  {
  public:
    DescribeSMBSettingsResult();
    DescribeSMBSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSMBSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeSMBSettingsResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeSMBSettingsResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline DescribeSMBSettingsResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The name of the domain that the gateway is joined to.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that the gateway is joined to.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The name of the domain that the gateway is joined to.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that the gateway is joined to.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The name of the domain that the gateway is joined to.</p>
     */
    inline DescribeSMBSettingsResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that the gateway is joined to.</p>
     */
    inline DescribeSMBSettingsResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that the gateway is joined to.</p>
     */
    inline DescribeSMBSettingsResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Indicates the status of a gateway that is a member of the Active Directory
     * domain.</p> <ul> <li> <p>ACCESS_DENIED: Indicates that the
     * <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p>DETACHED: Indicates that gateway is not joined to a domain.</p>
     * </li> <li> <p>JOINED: Indicates that the gateway has successfully joined a
     * domain.</p> </li> <li> <p>JOINING: Indicates that a <code>JoinDomain</code>
     * operation is in progress.</p> </li> <li> <p>NETWORK_ERROR: Indicates that
     * <code>JoinDomain</code> operation failed due to a network or connectivity
     * error.</p> </li> <li> <p>TIMEOUT: Indicates that the <code>JoinDomain</code>
     * operation failed because the operation didn't complete within the allotted
     * time.</p> </li> <li> <p>UNKNOWN_ERROR: Indicates that the
     * <code>JoinDomain</code> operation failed due to another type of error.</p> </li>
     * </ul>
     */
    inline const ActiveDirectoryStatus& GetActiveDirectoryStatus() const{ return m_activeDirectoryStatus; }

    /**
     * <p>Indicates the status of a gateway that is a member of the Active Directory
     * domain.</p> <ul> <li> <p>ACCESS_DENIED: Indicates that the
     * <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p>DETACHED: Indicates that gateway is not joined to a domain.</p>
     * </li> <li> <p>JOINED: Indicates that the gateway has successfully joined a
     * domain.</p> </li> <li> <p>JOINING: Indicates that a <code>JoinDomain</code>
     * operation is in progress.</p> </li> <li> <p>NETWORK_ERROR: Indicates that
     * <code>JoinDomain</code> operation failed due to a network or connectivity
     * error.</p> </li> <li> <p>TIMEOUT: Indicates that the <code>JoinDomain</code>
     * operation failed because the operation didn't complete within the allotted
     * time.</p> </li> <li> <p>UNKNOWN_ERROR: Indicates that the
     * <code>JoinDomain</code> operation failed due to another type of error.</p> </li>
     * </ul>
     */
    inline void SetActiveDirectoryStatus(const ActiveDirectoryStatus& value) { m_activeDirectoryStatus = value; }

    /**
     * <p>Indicates the status of a gateway that is a member of the Active Directory
     * domain.</p> <ul> <li> <p>ACCESS_DENIED: Indicates that the
     * <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p>DETACHED: Indicates that gateway is not joined to a domain.</p>
     * </li> <li> <p>JOINED: Indicates that the gateway has successfully joined a
     * domain.</p> </li> <li> <p>JOINING: Indicates that a <code>JoinDomain</code>
     * operation is in progress.</p> </li> <li> <p>NETWORK_ERROR: Indicates that
     * <code>JoinDomain</code> operation failed due to a network or connectivity
     * error.</p> </li> <li> <p>TIMEOUT: Indicates that the <code>JoinDomain</code>
     * operation failed because the operation didn't complete within the allotted
     * time.</p> </li> <li> <p>UNKNOWN_ERROR: Indicates that the
     * <code>JoinDomain</code> operation failed due to another type of error.</p> </li>
     * </ul>
     */
    inline void SetActiveDirectoryStatus(ActiveDirectoryStatus&& value) { m_activeDirectoryStatus = std::move(value); }

    /**
     * <p>Indicates the status of a gateway that is a member of the Active Directory
     * domain.</p> <ul> <li> <p>ACCESS_DENIED: Indicates that the
     * <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p>DETACHED: Indicates that gateway is not joined to a domain.</p>
     * </li> <li> <p>JOINED: Indicates that the gateway has successfully joined a
     * domain.</p> </li> <li> <p>JOINING: Indicates that a <code>JoinDomain</code>
     * operation is in progress.</p> </li> <li> <p>NETWORK_ERROR: Indicates that
     * <code>JoinDomain</code> operation failed due to a network or connectivity
     * error.</p> </li> <li> <p>TIMEOUT: Indicates that the <code>JoinDomain</code>
     * operation failed because the operation didn't complete within the allotted
     * time.</p> </li> <li> <p>UNKNOWN_ERROR: Indicates that the
     * <code>JoinDomain</code> operation failed due to another type of error.</p> </li>
     * </ul>
     */
    inline DescribeSMBSettingsResult& WithActiveDirectoryStatus(const ActiveDirectoryStatus& value) { SetActiveDirectoryStatus(value); return *this;}

    /**
     * <p>Indicates the status of a gateway that is a member of the Active Directory
     * domain.</p> <ul> <li> <p>ACCESS_DENIED: Indicates that the
     * <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p>DETACHED: Indicates that gateway is not joined to a domain.</p>
     * </li> <li> <p>JOINED: Indicates that the gateway has successfully joined a
     * domain.</p> </li> <li> <p>JOINING: Indicates that a <code>JoinDomain</code>
     * operation is in progress.</p> </li> <li> <p>NETWORK_ERROR: Indicates that
     * <code>JoinDomain</code> operation failed due to a network or connectivity
     * error.</p> </li> <li> <p>TIMEOUT: Indicates that the <code>JoinDomain</code>
     * operation failed because the operation didn't complete within the allotted
     * time.</p> </li> <li> <p>UNKNOWN_ERROR: Indicates that the
     * <code>JoinDomain</code> operation failed due to another type of error.</p> </li>
     * </ul>
     */
    inline DescribeSMBSettingsResult& WithActiveDirectoryStatus(ActiveDirectoryStatus&& value) { SetActiveDirectoryStatus(std::move(value)); return *this;}


    /**
     * <p>This value is true if a password for the guest user “smbguest” is set, and
     * otherwise false.</p>
     */
    inline bool GetSMBGuestPasswordSet() const{ return m_sMBGuestPasswordSet; }

    /**
     * <p>This value is true if a password for the guest user “smbguest” is set, and
     * otherwise false.</p>
     */
    inline void SetSMBGuestPasswordSet(bool value) { m_sMBGuestPasswordSet = value; }

    /**
     * <p>This value is true if a password for the guest user “smbguest” is set, and
     * otherwise false.</p>
     */
    inline DescribeSMBSettingsResult& WithSMBGuestPasswordSet(bool value) { SetSMBGuestPasswordSet(value); return *this;}


    /**
     * <p>The type of security strategy that was specified for file gateway.</p>
     * <p>ClientSpecified: if you use this option, requests are established based on
     * what is negotiated by the client. This option is recommended when you want to
     * maximize compatibility across different clients in your environment. </p>
     * <p>MandatorySigning: if you use this option, file gateway only allows
     * connections from SMBv2 or SMBv3 clients that have signing enabled. This option
     * works with SMB clients on Microsoft Windows Vista, Windows Server 2008 or newer.
     * </p> <p>MandatoryEncryption: if you use this option, file gateway only allows
     * connections from SMBv3 clients that have encryption enabled. This option is
     * highly recommended for environments that handle sensitive data. This option
     * works with SMB clients on Microsoft Windows 8, Windows Server 2012 or newer.
     * </p>
     */
    inline const SMBSecurityStrategy& GetSMBSecurityStrategy() const{ return m_sMBSecurityStrategy; }

    /**
     * <p>The type of security strategy that was specified for file gateway.</p>
     * <p>ClientSpecified: if you use this option, requests are established based on
     * what is negotiated by the client. This option is recommended when you want to
     * maximize compatibility across different clients in your environment. </p>
     * <p>MandatorySigning: if you use this option, file gateway only allows
     * connections from SMBv2 or SMBv3 clients that have signing enabled. This option
     * works with SMB clients on Microsoft Windows Vista, Windows Server 2008 or newer.
     * </p> <p>MandatoryEncryption: if you use this option, file gateway only allows
     * connections from SMBv3 clients that have encryption enabled. This option is
     * highly recommended for environments that handle sensitive data. This option
     * works with SMB clients on Microsoft Windows 8, Windows Server 2012 or newer.
     * </p>
     */
    inline void SetSMBSecurityStrategy(const SMBSecurityStrategy& value) { m_sMBSecurityStrategy = value; }

    /**
     * <p>The type of security strategy that was specified for file gateway.</p>
     * <p>ClientSpecified: if you use this option, requests are established based on
     * what is negotiated by the client. This option is recommended when you want to
     * maximize compatibility across different clients in your environment. </p>
     * <p>MandatorySigning: if you use this option, file gateway only allows
     * connections from SMBv2 or SMBv3 clients that have signing enabled. This option
     * works with SMB clients on Microsoft Windows Vista, Windows Server 2008 or newer.
     * </p> <p>MandatoryEncryption: if you use this option, file gateway only allows
     * connections from SMBv3 clients that have encryption enabled. This option is
     * highly recommended for environments that handle sensitive data. This option
     * works with SMB clients on Microsoft Windows 8, Windows Server 2012 or newer.
     * </p>
     */
    inline void SetSMBSecurityStrategy(SMBSecurityStrategy&& value) { m_sMBSecurityStrategy = std::move(value); }

    /**
     * <p>The type of security strategy that was specified for file gateway.</p>
     * <p>ClientSpecified: if you use this option, requests are established based on
     * what is negotiated by the client. This option is recommended when you want to
     * maximize compatibility across different clients in your environment. </p>
     * <p>MandatorySigning: if you use this option, file gateway only allows
     * connections from SMBv2 or SMBv3 clients that have signing enabled. This option
     * works with SMB clients on Microsoft Windows Vista, Windows Server 2008 or newer.
     * </p> <p>MandatoryEncryption: if you use this option, file gateway only allows
     * connections from SMBv3 clients that have encryption enabled. This option is
     * highly recommended for environments that handle sensitive data. This option
     * works with SMB clients on Microsoft Windows 8, Windows Server 2012 or newer.
     * </p>
     */
    inline DescribeSMBSettingsResult& WithSMBSecurityStrategy(const SMBSecurityStrategy& value) { SetSMBSecurityStrategy(value); return *this;}

    /**
     * <p>The type of security strategy that was specified for file gateway.</p>
     * <p>ClientSpecified: if you use this option, requests are established based on
     * what is negotiated by the client. This option is recommended when you want to
     * maximize compatibility across different clients in your environment. </p>
     * <p>MandatorySigning: if you use this option, file gateway only allows
     * connections from SMBv2 or SMBv3 clients that have signing enabled. This option
     * works with SMB clients on Microsoft Windows Vista, Windows Server 2008 or newer.
     * </p> <p>MandatoryEncryption: if you use this option, file gateway only allows
     * connections from SMBv3 clients that have encryption enabled. This option is
     * highly recommended for environments that handle sensitive data. This option
     * works with SMB clients on Microsoft Windows 8, Windows Server 2012 or newer.
     * </p>
     */
    inline DescribeSMBSettingsResult& WithSMBSecurityStrategy(SMBSecurityStrategy&& value) { SetSMBSecurityStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_gatewayARN;

    Aws::String m_domainName;

    ActiveDirectoryStatus m_activeDirectoryStatus;

    bool m_sMBGuestPasswordSet;

    SMBSecurityStrategy m_sMBSecurityStrategy;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
