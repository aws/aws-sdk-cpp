﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/FlowTemplateFilter.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API SearchFlowTemplatesRequest : public IoTThingsGraphRequest
  {
  public:
    SearchFlowTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchFlowTemplates"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of objects that limit the result set. The only valid filter is
     * <code>DEVICE_MODEL_ID</code>.</p>
     */
    inline const Aws::Vector<FlowTemplateFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of objects that limit the result set. The only valid filter is
     * <code>DEVICE_MODEL_ID</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of objects that limit the result set. The only valid filter is
     * <code>DEVICE_MODEL_ID</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<FlowTemplateFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of objects that limit the result set. The only valid filter is
     * <code>DEVICE_MODEL_ID</code>.</p>
     */
    inline void SetFilters(Aws::Vector<FlowTemplateFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of objects that limit the result set. The only valid filter is
     * <code>DEVICE_MODEL_ID</code>.</p>
     */
    inline SearchFlowTemplatesRequest& WithFilters(const Aws::Vector<FlowTemplateFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of objects that limit the result set. The only valid filter is
     * <code>DEVICE_MODEL_ID</code>.</p>
     */
    inline SearchFlowTemplatesRequest& WithFilters(Aws::Vector<FlowTemplateFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of objects that limit the result set. The only valid filter is
     * <code>DEVICE_MODEL_ID</code>.</p>
     */
    inline SearchFlowTemplatesRequest& AddFilters(const FlowTemplateFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of objects that limit the result set. The only valid filter is
     * <code>DEVICE_MODEL_ID</code>.</p>
     */
    inline SearchFlowTemplatesRequest& AddFilters(FlowTemplateFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchFlowTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchFlowTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchFlowTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline SearchFlowTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<FlowTemplateFilter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
