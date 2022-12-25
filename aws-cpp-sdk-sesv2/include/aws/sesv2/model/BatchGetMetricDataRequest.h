/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/BatchGetMetricDataQuery.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to retrieve a batch of metric data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/BatchGetMetricDataRequest">AWS
   * API Reference</a></p>
   */
  class BatchGetMetricDataRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API BatchGetMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetMetricData"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of queries for metrics to be retrieved.</p>
     */
    inline const Aws::Vector<BatchGetMetricDataQuery>& GetQueries() const{ return m_queries; }

    /**
     * <p>A list of queries for metrics to be retrieved.</p>
     */
    inline bool QueriesHasBeenSet() const { return m_queriesHasBeenSet; }

    /**
     * <p>A list of queries for metrics to be retrieved.</p>
     */
    inline void SetQueries(const Aws::Vector<BatchGetMetricDataQuery>& value) { m_queriesHasBeenSet = true; m_queries = value; }

    /**
     * <p>A list of queries for metrics to be retrieved.</p>
     */
    inline void SetQueries(Aws::Vector<BatchGetMetricDataQuery>&& value) { m_queriesHasBeenSet = true; m_queries = std::move(value); }

    /**
     * <p>A list of queries for metrics to be retrieved.</p>
     */
    inline BatchGetMetricDataRequest& WithQueries(const Aws::Vector<BatchGetMetricDataQuery>& value) { SetQueries(value); return *this;}

    /**
     * <p>A list of queries for metrics to be retrieved.</p>
     */
    inline BatchGetMetricDataRequest& WithQueries(Aws::Vector<BatchGetMetricDataQuery>&& value) { SetQueries(std::move(value)); return *this;}

    /**
     * <p>A list of queries for metrics to be retrieved.</p>
     */
    inline BatchGetMetricDataRequest& AddQueries(const BatchGetMetricDataQuery& value) { m_queriesHasBeenSet = true; m_queries.push_back(value); return *this; }

    /**
     * <p>A list of queries for metrics to be retrieved.</p>
     */
    inline BatchGetMetricDataRequest& AddQueries(BatchGetMetricDataQuery&& value) { m_queriesHasBeenSet = true; m_queries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchGetMetricDataQuery> m_queries;
    bool m_queriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
