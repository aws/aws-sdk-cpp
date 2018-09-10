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

  private:

    Aws::String m_gatewayARN;

    Aws::String m_domainName;

    bool m_sMBGuestPasswordSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
