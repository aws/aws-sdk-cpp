/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ClientCertificateRevocationListStatus.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class ExportClientVpnClientCertificateRevocationListResponse
  {
  public:
    AWS_EC2_API ExportClientVpnClientCertificateRevocationListResponse();
    AWS_EC2_API ExportClientVpnClientCertificateRevocationListResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ExportClientVpnClientCertificateRevocationListResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the client certificate revocation list.</p>
     */
    inline const Aws::String& GetCertificateRevocationList() const{ return m_certificateRevocationList; }

    /**
     * <p>Information about the client certificate revocation list.</p>
     */
    inline void SetCertificateRevocationList(const Aws::String& value) { m_certificateRevocationList = value; }

    /**
     * <p>Information about the client certificate revocation list.</p>
     */
    inline void SetCertificateRevocationList(Aws::String&& value) { m_certificateRevocationList = std::move(value); }

    /**
     * <p>Information about the client certificate revocation list.</p>
     */
    inline void SetCertificateRevocationList(const char* value) { m_certificateRevocationList.assign(value); }

    /**
     * <p>Information about the client certificate revocation list.</p>
     */
    inline ExportClientVpnClientCertificateRevocationListResponse& WithCertificateRevocationList(const Aws::String& value) { SetCertificateRevocationList(value); return *this;}

    /**
     * <p>Information about the client certificate revocation list.</p>
     */
    inline ExportClientVpnClientCertificateRevocationListResponse& WithCertificateRevocationList(Aws::String&& value) { SetCertificateRevocationList(std::move(value)); return *this;}

    /**
     * <p>Information about the client certificate revocation list.</p>
     */
    inline ExportClientVpnClientCertificateRevocationListResponse& WithCertificateRevocationList(const char* value) { SetCertificateRevocationList(value); return *this;}


    /**
     * <p>The current state of the client certificate revocation list.</p>
     */
    inline const ClientCertificateRevocationListStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the client certificate revocation list.</p>
     */
    inline void SetStatus(const ClientCertificateRevocationListStatus& value) { m_status = value; }

    /**
     * <p>The current state of the client certificate revocation list.</p>
     */
    inline void SetStatus(ClientCertificateRevocationListStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current state of the client certificate revocation list.</p>
     */
    inline ExportClientVpnClientCertificateRevocationListResponse& WithStatus(const ClientCertificateRevocationListStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the client certificate revocation list.</p>
     */
    inline ExportClientVpnClientCertificateRevocationListResponse& WithStatus(ClientCertificateRevocationListStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ExportClientVpnClientCertificateRevocationListResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ExportClientVpnClientCertificateRevocationListResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_certificateRevocationList;

    ClientCertificateRevocationListStatus m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
