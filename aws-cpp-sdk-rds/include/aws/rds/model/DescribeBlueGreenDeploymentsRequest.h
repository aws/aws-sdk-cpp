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
  class DescribeBlueGreenDeploymentsRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeBlueGreenDeploymentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBlueGreenDeployments"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The blue/green deployment identifier. If this parameter is specified,
     * information from only the specific blue/green deployment is returned. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match an existing blue/green deployment identifier.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetBlueGreenDeploymentIdentifier() const{ return m_blueGreenDeploymentIdentifier; }

    /**
     * <p>The blue/green deployment identifier. If this parameter is specified,
     * information from only the specific blue/green deployment is returned. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match an existing blue/green deployment identifier.</p> </li>
     * </ul>
     */
    inline bool BlueGreenDeploymentIdentifierHasBeenSet() const { return m_blueGreenDeploymentIdentifierHasBeenSet; }

    /**
     * <p>The blue/green deployment identifier. If this parameter is specified,
     * information from only the specific blue/green deployment is returned. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match an existing blue/green deployment identifier.</p> </li>
     * </ul>
     */
    inline void SetBlueGreenDeploymentIdentifier(const Aws::String& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = value; }

    /**
     * <p>The blue/green deployment identifier. If this parameter is specified,
     * information from only the specific blue/green deployment is returned. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match an existing blue/green deployment identifier.</p> </li>
     * </ul>
     */
    inline void SetBlueGreenDeploymentIdentifier(Aws::String&& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = std::move(value); }

    /**
     * <p>The blue/green deployment identifier. If this parameter is specified,
     * information from only the specific blue/green deployment is returned. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match an existing blue/green deployment identifier.</p> </li>
     * </ul>
     */
    inline void SetBlueGreenDeploymentIdentifier(const char* value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier.assign(value); }

    /**
     * <p>The blue/green deployment identifier. If this parameter is specified,
     * information from only the specific blue/green deployment is returned. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match an existing blue/green deployment identifier.</p> </li>
     * </ul>
     */
    inline DescribeBlueGreenDeploymentsRequest& WithBlueGreenDeploymentIdentifier(const Aws::String& value) { SetBlueGreenDeploymentIdentifier(value); return *this;}

    /**
     * <p>The blue/green deployment identifier. If this parameter is specified,
     * information from only the specific blue/green deployment is returned. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match an existing blue/green deployment identifier.</p> </li>
     * </ul>
     */
    inline DescribeBlueGreenDeploymentsRequest& WithBlueGreenDeploymentIdentifier(Aws::String&& value) { SetBlueGreenDeploymentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The blue/green deployment identifier. If this parameter is specified,
     * information from only the specific blue/green deployment is returned. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match an existing blue/green deployment identifier.</p> </li>
     * </ul>
     */
    inline DescribeBlueGreenDeploymentsRequest& WithBlueGreenDeploymentIdentifier(const char* value) { SetBlueGreenDeploymentIdentifier(value); return *this;}


    /**
     * <p>A filter that specifies one or more blue/green deployments to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p>
     * <code>blue-green-deployment-identifier</code> - Accepts system-generated
     * identifiers for blue/green deployments. The results list only includes
     * information about the blue/green deployments with the specified identifiers.</p>
     * </li> <li> <p> <code>blue-green-deployment-name</code> - Accepts user-supplied
     * names for blue/green deployments. The results list only includes information
     * about the blue/green deployments with the specified names.</p> </li> <li> <p>
     * <code>source</code> - Accepts source databases for a blue/green deployment. The
     * results list only includes information about the blue/green deployments with the
     * specified source databases.</p> </li> <li> <p> <code>target</code> - Accepts
     * target databases for a blue/green deployment. The results list only includes
     * information about the blue/green deployments with the specified target
     * databases.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more blue/green deployments to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p>
     * <code>blue-green-deployment-identifier</code> - Accepts system-generated
     * identifiers for blue/green deployments. The results list only includes
     * information about the blue/green deployments with the specified identifiers.</p>
     * </li> <li> <p> <code>blue-green-deployment-name</code> - Accepts user-supplied
     * names for blue/green deployments. The results list only includes information
     * about the blue/green deployments with the specified names.</p> </li> <li> <p>
     * <code>source</code> - Accepts source databases for a blue/green deployment. The
     * results list only includes information about the blue/green deployments with the
     * specified source databases.</p> </li> <li> <p> <code>target</code> - Accepts
     * target databases for a blue/green deployment. The results list only includes
     * information about the blue/green deployments with the specified target
     * databases.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies one or more blue/green deployments to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p>
     * <code>blue-green-deployment-identifier</code> - Accepts system-generated
     * identifiers for blue/green deployments. The results list only includes
     * information about the blue/green deployments with the specified identifiers.</p>
     * </li> <li> <p> <code>blue-green-deployment-name</code> - Accepts user-supplied
     * names for blue/green deployments. The results list only includes information
     * about the blue/green deployments with the specified names.</p> </li> <li> <p>
     * <code>source</code> - Accepts source databases for a blue/green deployment. The
     * results list only includes information about the blue/green deployments with the
     * specified source databases.</p> </li> <li> <p> <code>target</code> - Accepts
     * target databases for a blue/green deployment. The results list only includes
     * information about the blue/green deployments with the specified target
     * databases.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more blue/green deployments to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p>
     * <code>blue-green-deployment-identifier</code> - Accepts system-generated
     * identifiers for blue/green deployments. The results list only includes
     * information about the blue/green deployments with the specified identifiers.</p>
     * </li> <li> <p> <code>blue-green-deployment-name</code> - Accepts user-supplied
     * names for blue/green deployments. The results list only includes information
     * about the blue/green deployments with the specified names.</p> </li> <li> <p>
     * <code>source</code> - Accepts source databases for a blue/green deployment. The
     * results list only includes information about the blue/green deployments with the
     * specified source databases.</p> </li> <li> <p> <code>target</code> - Accepts
     * target databases for a blue/green deployment. The results list only includes
     * information about the blue/green deployments with the specified target
     * databases.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies one or more blue/green deployments to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p>
     * <code>blue-green-deployment-identifier</code> - Accepts system-generated
     * identifiers for blue/green deployments. The results list only includes
     * information about the blue/green deployments with the specified identifiers.</p>
     * </li> <li> <p> <code>blue-green-deployment-name</code> - Accepts user-supplied
     * names for blue/green deployments. The results list only includes information
     * about the blue/green deployments with the specified names.</p> </li> <li> <p>
     * <code>source</code> - Accepts source databases for a blue/green deployment. The
     * results list only includes information about the blue/green deployments with the
     * specified source databases.</p> </li> <li> <p> <code>target</code> - Accepts
     * target databases for a blue/green deployment. The results list only includes
     * information about the blue/green deployments with the specified target
     * databases.</p> </li> </ul>
     */
    inline DescribeBlueGreenDeploymentsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more blue/green deployments to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p>
     * <code>blue-green-deployment-identifier</code> - Accepts system-generated
     * identifiers for blue/green deployments. The results list only includes
     * information about the blue/green deployments with the specified identifiers.</p>
     * </li> <li> <p> <code>blue-green-deployment-name</code> - Accepts user-supplied
     * names for blue/green deployments. The results list only includes information
     * about the blue/green deployments with the specified names.</p> </li> <li> <p>
     * <code>source</code> - Accepts source databases for a blue/green deployment. The
     * results list only includes information about the blue/green deployments with the
     * specified source databases.</p> </li> <li> <p> <code>target</code> - Accepts
     * target databases for a blue/green deployment. The results list only includes
     * information about the blue/green deployments with the specified target
     * databases.</p> </li> </ul>
     */
    inline DescribeBlueGreenDeploymentsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies one or more blue/green deployments to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p>
     * <code>blue-green-deployment-identifier</code> - Accepts system-generated
     * identifiers for blue/green deployments. The results list only includes
     * information about the blue/green deployments with the specified identifiers.</p>
     * </li> <li> <p> <code>blue-green-deployment-name</code> - Accepts user-supplied
     * names for blue/green deployments. The results list only includes information
     * about the blue/green deployments with the specified names.</p> </li> <li> <p>
     * <code>source</code> - Accepts source databases for a blue/green deployment. The
     * results list only includes information about the blue/green deployments with the
     * specified source databases.</p> </li> <li> <p> <code>target</code> - Accepts
     * target databases for a blue/green deployment. The results list only includes
     * information about the blue/green deployments with the specified target
     * databases.</p> </li> </ul>
     */
    inline DescribeBlueGreenDeploymentsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more blue/green deployments to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p>
     * <code>blue-green-deployment-identifier</code> - Accepts system-generated
     * identifiers for blue/green deployments. The results list only includes
     * information about the blue/green deployments with the specified identifiers.</p>
     * </li> <li> <p> <code>blue-green-deployment-name</code> - Accepts user-supplied
     * names for blue/green deployments. The results list only includes information
     * about the blue/green deployments with the specified names.</p> </li> <li> <p>
     * <code>source</code> - Accepts source databases for a blue/green deployment. The
     * results list only includes information about the blue/green deployments with the
     * specified source databases.</p> </li> <li> <p> <code>target</code> - Accepts
     * target databases for a blue/green deployment. The results list only includes
     * information about the blue/green deployments with the specified target
     * databases.</p> </li> </ul>
     */
    inline DescribeBlueGreenDeploymentsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeBlueGreenDeployments</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeBlueGreenDeployments</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeBlueGreenDeployments</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeBlueGreenDeployments</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeBlueGreenDeployments</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeBlueGreenDeployments</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeBlueGreenDeploymentsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeBlueGreenDeployments</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeBlueGreenDeploymentsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeBlueGreenDeployments</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeBlueGreenDeploymentsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeBlueGreenDeploymentsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:

    Aws::String m_blueGreenDeploymentIdentifier;
    bool m_blueGreenDeploymentIdentifierHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
