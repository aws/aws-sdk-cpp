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
  class GetCardinalityRequest : public IoTRequest
  {
  public:
    AWS_IOT_API GetCardinalityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCardinality"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the index to search.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the index to search.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the index to search.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the index to search.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the index to search.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the index to search.</p>
     */
    inline GetCardinalityRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the index to search.</p>
     */
    inline GetCardinalityRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the index to search.</p>
     */
    inline GetCardinalityRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The search query string.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The search query string.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The search query string.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The search query string.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The search query string.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The search query string.</p>
     */
    inline GetCardinalityRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The search query string.</p>
     */
    inline GetCardinalityRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The search query string.</p>
     */
    inline GetCardinalityRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The field to aggregate.</p>
     */
    inline const Aws::String& GetAggregationField() const{ return m_aggregationField; }

    /**
     * <p>The field to aggregate.</p>
     */
    inline bool AggregationFieldHasBeenSet() const { return m_aggregationFieldHasBeenSet; }

    /**
     * <p>The field to aggregate.</p>
     */
    inline void SetAggregationField(const Aws::String& value) { m_aggregationFieldHasBeenSet = true; m_aggregationField = value; }

    /**
     * <p>The field to aggregate.</p>
     */
    inline void SetAggregationField(Aws::String&& value) { m_aggregationFieldHasBeenSet = true; m_aggregationField = std::move(value); }

    /**
     * <p>The field to aggregate.</p>
     */
    inline void SetAggregationField(const char* value) { m_aggregationFieldHasBeenSet = true; m_aggregationField.assign(value); }

    /**
     * <p>The field to aggregate.</p>
     */
    inline GetCardinalityRequest& WithAggregationField(const Aws::String& value) { SetAggregationField(value); return *this;}

    /**
     * <p>The field to aggregate.</p>
     */
    inline GetCardinalityRequest& WithAggregationField(Aws::String&& value) { SetAggregationField(std::move(value)); return *this;}

    /**
     * <p>The field to aggregate.</p>
     */
    inline GetCardinalityRequest& WithAggregationField(const char* value) { SetAggregationField(value); return *this;}


    /**
     * <p>The query version.</p>
     */
    inline const Aws::String& GetQueryVersion() const{ return m_queryVersion; }

    /**
     * <p>The query version.</p>
     */
    inline bool QueryVersionHasBeenSet() const { return m_queryVersionHasBeenSet; }

    /**
     * <p>The query version.</p>
     */
    inline void SetQueryVersion(const Aws::String& value) { m_queryVersionHasBeenSet = true; m_queryVersion = value; }

    /**
     * <p>The query version.</p>
     */
    inline void SetQueryVersion(Aws::String&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::move(value); }

    /**
     * <p>The query version.</p>
     */
    inline void SetQueryVersion(const char* value) { m_queryVersionHasBeenSet = true; m_queryVersion.assign(value); }

    /**
     * <p>The query version.</p>
     */
    inline GetCardinalityRequest& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}

    /**
     * <p>The query version.</p>
     */
    inline GetCardinalityRequest& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}

    /**
     * <p>The query version.</p>
     */
    inline GetCardinalityRequest& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}

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
