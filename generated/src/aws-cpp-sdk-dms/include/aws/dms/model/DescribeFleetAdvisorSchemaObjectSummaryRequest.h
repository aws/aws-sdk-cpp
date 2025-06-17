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
  class DescribeFleetAdvisorSchemaObjectSummaryRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemaObjectSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFleetAdvisorSchemaObjectSummary"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> If you specify any of the following filters, the output includes information
     * for only those schema objects that meet the filter criteria:</p> <ul> <li> <p>
     * <code>schema-id</code> – The ID of the schema, for example
     * <code>d4610ac5-e323-4ad9-bc50-eaf7249dfe9d</code>.</p> </li> </ul> <p>Example:
     * <code>describe-fleet-advisor-schema-object-summary --filter
     * Name="schema-id",Values="50"</code> </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeFleetAdvisorSchemaObjectSummaryRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeFleetAdvisorSchemaObjectSummaryRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     *  <p> End of support notice: On May 20, 2026, Amazon Web Services will
     * end support for Amazon Web Services DMS Fleet Advisor;. After May 20, 2026, you
     * will no longer be able to access the Amazon Web Services DMS Fleet Advisor;
     * console or Amazon Web Services DMS Fleet Advisor; resources. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/dms_fleet.advisor-end-of-support.html">Amazon
     * Web Services DMS Fleet Advisor end of support</a>. </p>  <p>Sets the
     * maximum number of records returned in the response.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeFleetAdvisorSchemaObjectSummaryRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is returned by a previous response, there are more
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFleetAdvisorSchemaObjectSummaryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
