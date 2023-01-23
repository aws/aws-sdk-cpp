/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/Filter.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   */
  class DescribeCertificatesRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API DescribeCertificatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCertificates"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The user-supplied certificate identifier. If this parameter is specified,
     * information for only the specified certificate is returned. If this parameter is
     * omitted, a list of up to <code>MaxRecords</code> certificates is returned. This
     * parameter is not case sensitive.</p> <p>Constraints</p> <ul> <li> <p>Must match
     * an existing <code>CertificateIdentifier</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetCertificateIdentifier() const{ return m_certificateIdentifier; }

    /**
     * <p>The user-supplied certificate identifier. If this parameter is specified,
     * information for only the specified certificate is returned. If this parameter is
     * omitted, a list of up to <code>MaxRecords</code> certificates is returned. This
     * parameter is not case sensitive.</p> <p>Constraints</p> <ul> <li> <p>Must match
     * an existing <code>CertificateIdentifier</code>.</p> </li> </ul>
     */
    inline bool CertificateIdentifierHasBeenSet() const { return m_certificateIdentifierHasBeenSet; }

    /**
     * <p>The user-supplied certificate identifier. If this parameter is specified,
     * information for only the specified certificate is returned. If this parameter is
     * omitted, a list of up to <code>MaxRecords</code> certificates is returned. This
     * parameter is not case sensitive.</p> <p>Constraints</p> <ul> <li> <p>Must match
     * an existing <code>CertificateIdentifier</code>.</p> </li> </ul>
     */
    inline void SetCertificateIdentifier(const Aws::String& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = value; }

    /**
     * <p>The user-supplied certificate identifier. If this parameter is specified,
     * information for only the specified certificate is returned. If this parameter is
     * omitted, a list of up to <code>MaxRecords</code> certificates is returned. This
     * parameter is not case sensitive.</p> <p>Constraints</p> <ul> <li> <p>Must match
     * an existing <code>CertificateIdentifier</code>.</p> </li> </ul>
     */
    inline void SetCertificateIdentifier(Aws::String&& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = std::move(value); }

    /**
     * <p>The user-supplied certificate identifier. If this parameter is specified,
     * information for only the specified certificate is returned. If this parameter is
     * omitted, a list of up to <code>MaxRecords</code> certificates is returned. This
     * parameter is not case sensitive.</p> <p>Constraints</p> <ul> <li> <p>Must match
     * an existing <code>CertificateIdentifier</code>.</p> </li> </ul>
     */
    inline void SetCertificateIdentifier(const char* value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier.assign(value); }

    /**
     * <p>The user-supplied certificate identifier. If this parameter is specified,
     * information for only the specified certificate is returned. If this parameter is
     * omitted, a list of up to <code>MaxRecords</code> certificates is returned. This
     * parameter is not case sensitive.</p> <p>Constraints</p> <ul> <li> <p>Must match
     * an existing <code>CertificateIdentifier</code>.</p> </li> </ul>
     */
    inline DescribeCertificatesRequest& WithCertificateIdentifier(const Aws::String& value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The user-supplied certificate identifier. If this parameter is specified,
     * information for only the specified certificate is returned. If this parameter is
     * omitted, a list of up to <code>MaxRecords</code> certificates is returned. This
     * parameter is not case sensitive.</p> <p>Constraints</p> <ul> <li> <p>Must match
     * an existing <code>CertificateIdentifier</code>.</p> </li> </ul>
     */
    inline DescribeCertificatesRequest& WithCertificateIdentifier(Aws::String&& value) { SetCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-supplied certificate identifier. If this parameter is specified,
     * information for only the specified certificate is returned. If this parameter is
     * omitted, a list of up to <code>MaxRecords</code> certificates is returned. This
     * parameter is not case sensitive.</p> <p>Constraints</p> <ul> <li> <p>Must match
     * an existing <code>CertificateIdentifier</code>.</p> </li> </ul>
     */
    inline DescribeCertificatesRequest& WithCertificateIdentifier(const char* value) { SetCertificateIdentifier(value); return *this;}


    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeCertificatesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeCertificatesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeCertificatesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeCertificatesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints:</p> <ul> <li> <p>Minimum:
     * 20</p> </li> <li> <p>Maximum: 100</p> </li> </ul>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints:</p> <ul> <li> <p>Minimum:
     * 20</p> </li> <li> <p>Maximum: 100</p> </li> </ul>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints:</p> <ul> <li> <p>Minimum:
     * 20</p> </li> <li> <p>Maximum: 100</p> </li> </ul>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints:</p> <ul> <li> <p>Minimum:
     * 20</p> </li> <li> <p>Maximum: 100</p> </li> </ul>
     */
    inline DescribeCertificatesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeCertificatesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeCertificatesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeCertificatesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_certificateIdentifier;
    bool m_certificateIdentifierHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
