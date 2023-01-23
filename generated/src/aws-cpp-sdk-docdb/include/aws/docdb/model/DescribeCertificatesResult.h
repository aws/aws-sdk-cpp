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
    AWS_DOCDB_API DescribeCertificatesResult();
    AWS_DOCDB_API DescribeCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API DescribeCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of certificates for this Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>A list of certificates for this Amazon Web Services account.</p>
     */
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificates = value; }

    /**
     * <p>A list of certificates for this Amazon Web Services account.</p>
     */
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificates = std::move(value); }

    /**
     * <p>A list of certificates for this Amazon Web Services account.</p>
     */
    inline DescribeCertificatesResult& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}

    /**
     * <p>A list of certificates for this Amazon Web Services account.</p>
     */
    inline DescribeCertificatesResult& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(std::move(value)); return *this;}

    /**
     * <p>A list of certificates for this Amazon Web Services account.</p>
     */
    inline DescribeCertificatesResult& AddCertificates(const Certificate& value) { m_certificates.push_back(value); return *this; }

    /**
     * <p>A list of certificates for this Amazon Web Services account.</p>
     */
    inline DescribeCertificatesResult& AddCertificates(Certificate&& value) { m_certificates.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided if the number of records retrieved is
     * greater than <code>MaxRecords</code>. If this parameter is specified, the marker
     * specifies the next record in the list. Including the value of
     * <code>Marker</code> in the next call to <code>DescribeCertificates</code>
     * results in the next page of certificates.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided if the number of records retrieved is
     * greater than <code>MaxRecords</code>. If this parameter is specified, the marker
     * specifies the next record in the list. Including the value of
     * <code>Marker</code> in the next call to <code>DescribeCertificates</code>
     * results in the next page of certificates.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided if the number of records retrieved is
     * greater than <code>MaxRecords</code>. If this parameter is specified, the marker
     * specifies the next record in the list. Including the value of
     * <code>Marker</code> in the next call to <code>DescribeCertificates</code>
     * results in the next page of certificates.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided if the number of records retrieved is
     * greater than <code>MaxRecords</code>. If this parameter is specified, the marker
     * specifies the next record in the list. Including the value of
     * <code>Marker</code> in the next call to <code>DescribeCertificates</code>
     * results in the next page of certificates.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided if the number of records retrieved is
     * greater than <code>MaxRecords</code>. If this parameter is specified, the marker
     * specifies the next record in the list. Including the value of
     * <code>Marker</code> in the next call to <code>DescribeCertificates</code>
     * results in the next page of certificates.</p>
     */
    inline DescribeCertificatesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided if the number of records retrieved is
     * greater than <code>MaxRecords</code>. If this parameter is specified, the marker
     * specifies the next record in the list. Including the value of
     * <code>Marker</code> in the next call to <code>DescribeCertificates</code>
     * results in the next page of certificates.</p>
     */
    inline DescribeCertificatesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided if the number of records retrieved is
     * greater than <code>MaxRecords</code>. If this parameter is specified, the marker
     * specifies the next record in the list. Including the value of
     * <code>Marker</code> in the next call to <code>DescribeCertificates</code>
     * results in the next page of certificates.</p>
     */
    inline DescribeCertificatesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeCertificatesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeCertificatesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Certificate> m_certificates;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
