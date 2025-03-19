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
    AWS_EC2_API ExportClientVpnClientCertificateRevocationListResponse() = default;
    AWS_EC2_API ExportClientVpnClientCertificateRevocationListResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ExportClientVpnClientCertificateRevocationListResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the client certificate revocation list.</p>
     */
    inline const Aws::String& GetCertificateRevocationList() const { return m_certificateRevocationList; }
    template<typename CertificateRevocationListT = Aws::String>
    void SetCertificateRevocationList(CertificateRevocationListT&& value) { m_certificateRevocationListHasBeenSet = true; m_certificateRevocationList = std::forward<CertificateRevocationListT>(value); }
    template<typename CertificateRevocationListT = Aws::String>
    ExportClientVpnClientCertificateRevocationListResponse& WithCertificateRevocationList(CertificateRevocationListT&& value) { SetCertificateRevocationList(std::forward<CertificateRevocationListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the client certificate revocation list.</p>
     */
    inline const ClientCertificateRevocationListStatus& GetStatus() const { return m_status; }
    template<typename StatusT = ClientCertificateRevocationListStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ClientCertificateRevocationListStatus>
    ExportClientVpnClientCertificateRevocationListResponse& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ExportClientVpnClientCertificateRevocationListResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateRevocationList;
    bool m_certificateRevocationListHasBeenSet = false;

    ClientCertificateRevocationListStatus m_status;
    bool m_statusHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
