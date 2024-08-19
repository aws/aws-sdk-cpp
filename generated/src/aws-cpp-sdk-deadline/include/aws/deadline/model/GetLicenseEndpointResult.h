/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/LicenseEndpointStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace deadline
{
namespace Model
{
  class GetLicenseEndpointResult
  {
  public:
    AWS_DEADLINE_API GetLicenseEndpointResult();
    AWS_DEADLINE_API GetLicenseEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetLicenseEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The license endpoint ID.</p>
     */
    inline const Aws::String& GetLicenseEndpointId() const{ return m_licenseEndpointId; }
    inline void SetLicenseEndpointId(const Aws::String& value) { m_licenseEndpointId = value; }
    inline void SetLicenseEndpointId(Aws::String&& value) { m_licenseEndpointId = std::move(value); }
    inline void SetLicenseEndpointId(const char* value) { m_licenseEndpointId.assign(value); }
    inline GetLicenseEndpointResult& WithLicenseEndpointId(const Aws::String& value) { SetLicenseEndpointId(value); return *this;}
    inline GetLicenseEndpointResult& WithLicenseEndpointId(Aws::String&& value) { SetLicenseEndpointId(std::move(value)); return *this;}
    inline GetLicenseEndpointResult& WithLicenseEndpointId(const char* value) { SetLicenseEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the license endpoint.</p>
     */
    inline const LicenseEndpointStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const LicenseEndpointStatus& value) { m_status = value; }
    inline void SetStatus(LicenseEndpointStatus&& value) { m_status = std::move(value); }
    inline GetLicenseEndpointResult& WithStatus(const LicenseEndpointStatus& value) { SetStatus(value); return *this;}
    inline GetLicenseEndpointResult& WithStatus(LicenseEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the license endpoint.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetLicenseEndpointResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetLicenseEndpointResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetLicenseEndpointResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VCP(virtual private cloud) ID associated with the license endpoint.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline GetLicenseEndpointResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline GetLicenseEndpointResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline GetLicenseEndpointResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }
    inline void SetDnsName(const Aws::String& value) { m_dnsName = value; }
    inline void SetDnsName(Aws::String&& value) { m_dnsName = std::move(value); }
    inline void SetDnsName(const char* value) { m_dnsName.assign(value); }
    inline GetLicenseEndpointResult& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}
    inline GetLicenseEndpointResult& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}
    inline GetLicenseEndpointResult& WithDnsName(const char* value) { SetDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }
    inline GetLicenseEndpointResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline GetLicenseEndpointResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline GetLicenseEndpointResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }
    inline GetLicenseEndpointResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }
    inline GetLicenseEndpointResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security group IDs for the license endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIds = std::move(value); }
    inline GetLicenseEndpointResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline GetLicenseEndpointResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline GetLicenseEndpointResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }
    inline GetLicenseEndpointResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline GetLicenseEndpointResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLicenseEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLicenseEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLicenseEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseEndpointId;

    LicenseEndpointStatus m_status;

    Aws::String m_statusMessage;

    Aws::String m_vpcId;

    Aws::String m_dnsName;

    Aws::Vector<Aws::String> m_subnetIds;

    Aws::Vector<Aws::String> m_securityGroupIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
