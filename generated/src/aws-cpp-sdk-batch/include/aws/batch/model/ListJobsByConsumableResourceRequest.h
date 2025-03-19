/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/KeyValuesPair.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class ListJobsByConsumableResourceRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API ListJobsByConsumableResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobsByConsumableResource"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or ARN of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResource() const { return m_consumableResource; }
    inline bool ConsumableResourceHasBeenSet() const { return m_consumableResourceHasBeenSet; }
    template<typename ConsumableResourceT = Aws::String>
    void SetConsumableResource(ConsumableResourceT&& value) { m_consumableResourceHasBeenSet = true; m_consumableResource = std::forward<ConsumableResourceT>(value); }
    template<typename ConsumableResourceT = Aws::String>
    ListJobsByConsumableResourceRequest& WithConsumableResource(ConsumableResourceT&& value) { SetConsumableResource(std::forward<ConsumableResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters to apply to the job list query. If used, only those jobs
     * requiring the specified consumable resource (<code>consumableResource</code>)
     * and that match the value of the filters are listed. The filter names and values
     * can be:</p> <ul> <li> <p>name: <code>JOB_STATUS</code> </p> <p>values:
     * <code>SUBMITTED | PENDING | RUNNABLE | STARTING | RUNNING | SUCCEEDED |
     * FAILED</code> </p> </li> <li> <p>name: <code>JOB_NAME </code> </p> <p>The values
     * are case-insensitive matches for the job name. If a filter value ends with an
     * asterisk (*), it matches any job name that begins with the string before the
     * '*'.</p> </li> </ul>
     */
    inline const Aws::Vector<KeyValuesPair>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<KeyValuesPair>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<KeyValuesPair>>
    ListJobsByConsumableResourceRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = KeyValuesPair>
    ListJobsByConsumableResourceRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned by
     * <code>ListJobsByConsumableResource</code> in paginated output. When this
     * parameter is used, <code>ListJobsByConsumableResource</code> only returns
     * <code>maxResults</code> results in a single page and a <code>nextToken</code>
     * response element. The remaining results of the initial request can be seen by
     * sending another <code>ListJobsByConsumableResource</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter isn't used, then <code>ListJobsByConsumableResource</code>
     * returns up to 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListJobsByConsumableResourceRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListJobsByConsumableResource</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p>  <p>Treat this token as an opaque identifier
     * that's only used to retrieve the next items in a list and not for other
     * programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobsByConsumableResourceRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_consumableResource;
    bool m_consumableResourceHasBeenSet = false;

    Aws::Vector<KeyValuesPair> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
