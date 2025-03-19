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
    AWS_IOT_API GetCardinalityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCardinality"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the index to search.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    GetCardinalityRequest& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search query string.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    GetCardinalityRequest& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to aggregate.</p>
     */
    inline const Aws::String& GetAggregationField() const { return m_aggregationField; }
    inline bool AggregationFieldHasBeenSet() const { return m_aggregationFieldHasBeenSet; }
    template<typename AggregationFieldT = Aws::String>
    void SetAggregationField(AggregationFieldT&& value) { m_aggregationFieldHasBeenSet = true; m_aggregationField = std::forward<AggregationFieldT>(value); }
    template<typename AggregationFieldT = Aws::String>
    GetCardinalityRequest& WithAggregationField(AggregationFieldT&& value) { SetAggregationField(std::forward<AggregationFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query version.</p>
     */
    inline const Aws::String& GetQueryVersion() const { return m_queryVersion; }
    inline bool QueryVersionHasBeenSet() const { return m_queryVersionHasBeenSet; }
    template<typename QueryVersionT = Aws::String>
    void SetQueryVersion(QueryVersionT&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::forward<QueryVersionT>(value); }
    template<typename QueryVersionT = Aws::String>
    GetCardinalityRequest& WithQueryVersion(QueryVersionT&& value) { SetQueryVersion(std::forward<QueryVersionT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
