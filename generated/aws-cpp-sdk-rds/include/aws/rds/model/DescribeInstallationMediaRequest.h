/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API DescribeInstallationMediaRequest : public RDSRequest
  {
  public:
    DescribeInstallationMediaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstallationMedia"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The installation medium ID.</p>
     */
    inline const Aws::String& GetInstallationMediaId() const{ return m_installationMediaId; }

    /**
     * <p>The installation medium ID.</p>
     */
    inline bool InstallationMediaIdHasBeenSet() const { return m_installationMediaIdHasBeenSet; }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(const Aws::String& value) { m_installationMediaIdHasBeenSet = true; m_installationMediaId = value; }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(Aws::String&& value) { m_installationMediaIdHasBeenSet = true; m_installationMediaId = std::move(value); }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(const char* value) { m_installationMediaIdHasBeenSet = true; m_installationMediaId.assign(value); }

    /**
     * <p>The installation medium ID.</p>
     */
    inline DescribeInstallationMediaRequest& WithInstallationMediaId(const Aws::String& value) { SetInstallationMediaId(value); return *this;}

    /**
     * <p>The installation medium ID.</p>
     */
    inline DescribeInstallationMediaRequest& WithInstallationMediaId(Aws::String&& value) { SetInstallationMediaId(std::move(value)); return *this;}

    /**
     * <p>The installation medium ID.</p>
     */
    inline DescribeInstallationMediaRequest& WithInstallationMediaId(const char* value) { SetInstallationMediaId(value); return *this;}


    /**
     * <p>A filter that specifies one or more installation media to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>custom-availability-zone-id</code> - Accepts custom Availability Zone (AZ)
     * identifiers. The results list includes information about only the custom AZs
     * identified by these identifiers.</p> </li> <li> <p> <code>engine</code> -
     * Accepts database engines. The results list includes information about only the
     * database engines identified by these identifiers.</p> <p>For more information
     * about the valid engines for installation media, see
     * <a>ImportInstallationMedia</a>.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more installation media to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>custom-availability-zone-id</code> - Accepts custom Availability Zone (AZ)
     * identifiers. The results list includes information about only the custom AZs
     * identified by these identifiers.</p> </li> <li> <p> <code>engine</code> -
     * Accepts database engines. The results list includes information about only the
     * database engines identified by these identifiers.</p> <p>For more information
     * about the valid engines for installation media, see
     * <a>ImportInstallationMedia</a>.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies one or more installation media to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>custom-availability-zone-id</code> - Accepts custom Availability Zone (AZ)
     * identifiers. The results list includes information about only the custom AZs
     * identified by these identifiers.</p> </li> <li> <p> <code>engine</code> -
     * Accepts database engines. The results list includes information about only the
     * database engines identified by these identifiers.</p> <p>For more information
     * about the valid engines for installation media, see
     * <a>ImportInstallationMedia</a>.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more installation media to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>custom-availability-zone-id</code> - Accepts custom Availability Zone (AZ)
     * identifiers. The results list includes information about only the custom AZs
     * identified by these identifiers.</p> </li> <li> <p> <code>engine</code> -
     * Accepts database engines. The results list includes information about only the
     * database engines identified by these identifiers.</p> <p>For more information
     * about the valid engines for installation media, see
     * <a>ImportInstallationMedia</a>.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies one or more installation media to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>custom-availability-zone-id</code> - Accepts custom Availability Zone (AZ)
     * identifiers. The results list includes information about only the custom AZs
     * identified by these identifiers.</p> </li> <li> <p> <code>engine</code> -
     * Accepts database engines. The results list includes information about only the
     * database engines identified by these identifiers.</p> <p>For more information
     * about the valid engines for installation media, see
     * <a>ImportInstallationMedia</a>.</p> </li> </ul>
     */
    inline DescribeInstallationMediaRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more installation media to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>custom-availability-zone-id</code> - Accepts custom Availability Zone (AZ)
     * identifiers. The results list includes information about only the custom AZs
     * identified by these identifiers.</p> </li> <li> <p> <code>engine</code> -
     * Accepts database engines. The results list includes information about only the
     * database engines identified by these identifiers.</p> <p>For more information
     * about the valid engines for installation media, see
     * <a>ImportInstallationMedia</a>.</p> </li> </ul>
     */
    inline DescribeInstallationMediaRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies one or more installation media to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>custom-availability-zone-id</code> - Accepts custom Availability Zone (AZ)
     * identifiers. The results list includes information about only the custom AZs
     * identified by these identifiers.</p> </li> <li> <p> <code>engine</code> -
     * Accepts database engines. The results list includes information about only the
     * database engines identified by these identifiers.</p> <p>For more information
     * about the valid engines for installation media, see
     * <a>ImportInstallationMedia</a>.</p> </li> </ul>
     */
    inline DescribeInstallationMediaRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more installation media to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>custom-availability-zone-id</code> - Accepts custom Availability Zone (AZ)
     * identifiers. The results list includes information about only the custom AZs
     * identified by these identifiers.</p> </li> <li> <p> <code>engine</code> -
     * Accepts database engines. The results list includes information about only the
     * database engines identified by these identifiers.</p> <p>For more information
     * about the valid engines for installation media, see
     * <a>ImportInstallationMedia</a>.</p> </li> </ul>
     */
    inline DescribeInstallationMediaRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous DescribeInstallationMedia
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>An optional pagination token provided by a previous DescribeInstallationMedia
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous DescribeInstallationMedia
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>An optional pagination token provided by a previous DescribeInstallationMedia
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeInstallationMediaRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeInstallationMediaRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeInstallationMediaRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeInstallationMediaRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_installationMediaId;
    bool m_installationMediaIdHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
