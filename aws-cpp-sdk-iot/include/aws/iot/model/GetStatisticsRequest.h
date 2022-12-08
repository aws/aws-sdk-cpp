/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class GetStatisticsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API GetStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetStatistics"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the index to search. The default value is
     * <code>AWS_Things</code>.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the index to search. The default value is
     * <code>AWS_Things</code>.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the index to search. The default value is
     * <code>AWS_Things</code>.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the index to search. The default value is
     * <code>AWS_Things</code>.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the index to search. The default value is
     * <code>AWS_Things</code>.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the index to search. The default value is
     * <code>AWS_Things</code>.</p>
     */
    inline GetStatisticsRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the index to search. The default value is
     * <code>AWS_Things</code>.</p>
     */
    inline GetStatisticsRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the index to search. The default value is
     * <code>AWS_Things</code>.</p>
     */
    inline GetStatisticsRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The query used to search. You can specify "*" for the query string to get the
     * count of all indexed things in your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The query used to search. You can specify "*" for the query string to get the
     * count of all indexed things in your Amazon Web Services account.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The query used to search. You can specify "*" for the query string to get the
     * count of all indexed things in your Amazon Web Services account.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The query used to search. You can specify "*" for the query string to get the
     * count of all indexed things in your Amazon Web Services account.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The query used to search. You can specify "*" for the query string to get the
     * count of all indexed things in your Amazon Web Services account.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The query used to search. You can specify "*" for the query string to get the
     * count of all indexed things in your Amazon Web Services account.</p>
     */
    inline GetStatisticsRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The query used to search. You can specify "*" for the query string to get the
     * count of all indexed things in your Amazon Web Services account.</p>
     */
    inline GetStatisticsRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The query used to search. You can specify "*" for the query string to get the
     * count of all indexed things in your Amazon Web Services account.</p>
     */
    inline GetStatisticsRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The aggregation field name.</p>
     */
    inline const Aws::String& GetAggregationField() const{ return m_aggregationField; }

    /**
     * <p>The aggregation field name.</p>
     */
    inline bool AggregationFieldHasBeenSet() const { return m_aggregationFieldHasBeenSet; }

    /**
     * <p>The aggregation field name.</p>
     */
    inline void SetAggregationField(const Aws::String& value) { m_aggregationFieldHasBeenSet = true; m_aggregationField = value; }

    /**
     * <p>The aggregation field name.</p>
     */
    inline void SetAggregationField(Aws::String&& value) { m_aggregationFieldHasBeenSet = true; m_aggregationField = std::move(value); }

    /**
     * <p>The aggregation field name.</p>
     */
    inline void SetAggregationField(const char* value) { m_aggregationFieldHasBeenSet = true; m_aggregationField.assign(value); }

    /**
     * <p>The aggregation field name.</p>
     */
    inline GetStatisticsRequest& WithAggregationField(const Aws::String& value) { SetAggregationField(value); return *this;}

    /**
     * <p>The aggregation field name.</p>
     */
    inline GetStatisticsRequest& WithAggregationField(Aws::String&& value) { SetAggregationField(std::move(value)); return *this;}

    /**
     * <p>The aggregation field name.</p>
     */
    inline GetStatisticsRequest& WithAggregationField(const char* value) { SetAggregationField(value); return *this;}


    /**
     * <p>The version of the query used to search.</p>
     */
    inline const Aws::String& GetQueryVersion() const{ return m_queryVersion; }

    /**
     * <p>The version of the query used to search.</p>
     */
    inline bool QueryVersionHasBeenSet() const { return m_queryVersionHasBeenSet; }

    /**
     * <p>The version of the query used to search.</p>
     */
    inline void SetQueryVersion(const Aws::String& value) { m_queryVersionHasBeenSet = true; m_queryVersion = value; }

    /**
     * <p>The version of the query used to search.</p>
     */
    inline void SetQueryVersion(Aws::String&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::move(value); }

    /**
     * <p>The version of the query used to search.</p>
     */
    inline void SetQueryVersion(const char* value) { m_queryVersionHasBeenSet = true; m_queryVersion.assign(value); }

    /**
     * <p>The version of the query used to search.</p>
     */
    inline GetStatisticsRequest& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}

    /**
     * <p>The version of the query used to search.</p>
     */
    inline GetStatisticsRequest& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the query used to search.</p>
     */
    inline GetStatisticsRequest& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_aggregationField;
    bool m_aggregationFieldHasBeenSet = false;

    Aws::String m_queryVersion;
    bool m_queryVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
