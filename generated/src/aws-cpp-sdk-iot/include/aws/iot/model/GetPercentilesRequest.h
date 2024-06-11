/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class GetPercentilesRequest : public IoTRequest
  {
  public:
    AWS_IOT_API GetPercentilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPercentiles"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the index to search.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline GetPercentilesRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline GetPercentilesRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline GetPercentilesRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search query string.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline GetPercentilesRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline GetPercentilesRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline GetPercentilesRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to aggregate.</p>
     */
    inline const Aws::String& GetAggregationField() const{ return m_aggregationField; }
    inline bool AggregationFieldHasBeenSet() const { return m_aggregationFieldHasBeenSet; }
    inline void SetAggregationField(const Aws::String& value) { m_aggregationFieldHasBeenSet = true; m_aggregationField = value; }
    inline void SetAggregationField(Aws::String&& value) { m_aggregationFieldHasBeenSet = true; m_aggregationField = std::move(value); }
    inline void SetAggregationField(const char* value) { m_aggregationFieldHasBeenSet = true; m_aggregationField.assign(value); }
    inline GetPercentilesRequest& WithAggregationField(const Aws::String& value) { SetAggregationField(value); return *this;}
    inline GetPercentilesRequest& WithAggregationField(Aws::String&& value) { SetAggregationField(std::move(value)); return *this;}
    inline GetPercentilesRequest& WithAggregationField(const char* value) { SetAggregationField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query version.</p>
     */
    inline const Aws::String& GetQueryVersion() const{ return m_queryVersion; }
    inline bool QueryVersionHasBeenSet() const { return m_queryVersionHasBeenSet; }
    inline void SetQueryVersion(const Aws::String& value) { m_queryVersionHasBeenSet = true; m_queryVersion = value; }
    inline void SetQueryVersion(Aws::String&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::move(value); }
    inline void SetQueryVersion(const char* value) { m_queryVersionHasBeenSet = true; m_queryVersion.assign(value); }
    inline GetPercentilesRequest& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}
    inline GetPercentilesRequest& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}
    inline GetPercentilesRequest& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentile groups returned.</p>
     */
    inline const Aws::Vector<double>& GetPercents() const{ return m_percents; }
    inline bool PercentsHasBeenSet() const { return m_percentsHasBeenSet; }
    inline void SetPercents(const Aws::Vector<double>& value) { m_percentsHasBeenSet = true; m_percents = value; }
    inline void SetPercents(Aws::Vector<double>&& value) { m_percentsHasBeenSet = true; m_percents = std::move(value); }
    inline GetPercentilesRequest& WithPercents(const Aws::Vector<double>& value) { SetPercents(value); return *this;}
    inline GetPercentilesRequest& WithPercents(Aws::Vector<double>&& value) { SetPercents(std::move(value)); return *this;}
    inline GetPercentilesRequest& AddPercents(double value) { m_percentsHasBeenSet = true; m_percents.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_aggregationField;
    bool m_aggregationFieldHasBeenSet = false;

    Aws::String m_queryVersion;
    bool m_queryVersionHasBeenSet = false;

    Aws::Vector<double> m_percents;
    bool m_percentsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
