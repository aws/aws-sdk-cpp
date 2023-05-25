/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
namespace IoTWireless
{
namespace Model
{
  class AssociateWirelessGatewayWithCertificateResult
  {
  public:
    AWS_IOTWIRELESS_API AssociateWirelessGatewayWithCertificateResult();
    AWS_IOTWIRELESS_API AssociateWirelessGatewayWithCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API AssociateWirelessGatewayWithCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline const Aws::String& GetIotCertificateId() const{ return m_iotCertificateId; }

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline void SetIotCertificateId(const Aws::String& value) { m_iotCertificateId = value; }

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline void SetIotCertificateId(Aws::String&& value) { m_iotCertificateId = std::move(value); }

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline void SetIotCertificateId(const char* value) { m_iotCertificateId.assign(value); }

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline AssociateWirelessGatewayWithCertificateResult& WithIotCertificateId(const Aws::String& value) { SetIotCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline AssociateWirelessGatewayWithCertificateResult& WithIotCertificateId(Aws::String&& value) { SetIotCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline AssociateWirelessGatewayWithCertificateResult& WithIotCertificateId(const char* value) { SetIotCertificateId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateWirelessGatewayWithCertificateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateWirelessGatewayWithCertificateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateWirelessGatewayWithCertificateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_iotCertificateId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
