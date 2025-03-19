/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/model/ResponseMetadata.h>
#include <aws/docdb/model/Certificate.h>
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
namespace DocDB
{
namespace Model
{
  class DescribeCertificatesResult
  {
  public:
    AWS_DOCDB_API DescribeCertificatesResult() = default;
    AWS_DOCDB_API DescribeCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API DescribeCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of certificates for this Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const { return m_certificates; }
    template<typename CertificatesT = Aws::Vector<Certificate>>
    void SetCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates = std::forward<CertificatesT>(value); }
    template<typename CertificatesT = Aws::Vector<Certificate>>
    DescribeCertificatesResult& WithCertificates(CertificatesT&& value) { SetCertificates(std::forward<CertificatesT>(value)); return *this;}
    template<typename CertificatesT = Certificate>
    DescribeCertificatesResult& AddCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates.emplace_back(std::forward<CertificatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided if the number of records retrieved is
     * greater than <code>MaxRecords</code>. If this parameter is specified, the marker
     * specifies the next record in the list. Including the value of
     * <code>Marker</code> in the next call to <code>DescribeCertificates</code>
     * results in the next page of certificates.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeCertificatesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCertificatesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Certificate> m_certificates;
    bool m_certificatesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
