/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/Filter.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class DescribeRecommendationLimitationsRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationLimitationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRecommendationLimitations"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Filters applied to the limitations described in the form of key-value
     * pairs.</p> <p>Valid filter names: <code>database-id</code> |
     * <code>engine-name</code> </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeRecommendationLimitationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeRecommendationLimitationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, Fleet Advisor includes a
     * pagination token in the response so that you can retrieve the remaining
     * results.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeRecommendationLimitationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the unique pagination token that makes it possible to display the
     * next page of results. If this parameter is specified, the response includes only
     * records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p> <p>If <code>NextToken</code> is returned by a
     * previous response, there are more results available. The value of
     * <code>NextToken</code> is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRecommendationLimitationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
