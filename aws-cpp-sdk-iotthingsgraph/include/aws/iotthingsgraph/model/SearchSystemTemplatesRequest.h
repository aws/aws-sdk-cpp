/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/SystemTemplateFilter.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API SearchSystemTemplatesRequest : public IoTThingsGraphRequest
  {
  public:
    SearchSystemTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchSystemTemplates"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of filters that limit the result set. The only valid filter is
     * <code>FLOW_TEMPLATE_ID</code>.</p>
     */
    inline const Aws::Vector<SystemTemplateFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of filters that limit the result set. The only valid filter is
     * <code>FLOW_TEMPLATE_ID</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of filters that limit the result set. The only valid filter is
     * <code>FLOW_TEMPLATE_ID</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<SystemTemplateFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of filters that limit the result set. The only valid filter is
     * <code>FLOW_TEMPLATE_ID</code>.</p>
     */
    inline void SetFilters(Aws::Vector<SystemTemplateFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of filters that limit the result set. The only valid filter is
     * <code>FLOW_TEMPLATE_ID</code>.</p>
     */
    inline SearchSystemTemplatesRequest& WithFilters(const Aws::Vector<SystemTemplateFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of filters that limit the result set. The only valid filter is
     * <code>FLOW_TEMPLATE_ID</code>.</p>
     */
    inline SearchSystemTemplatesRequest& WithFilters(Aws::Vector<SystemTemplateFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of filters that limit the result set. The only valid filter is
     * <code>FLOW_TEMPLATE_ID</code>.</p>
     */
    inline SearchSystemTemplatesRequest& AddFilters(const SystemTemplateFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of filters that limit the result set. The only valid filter is
     * <code>FLOW_TEMPLATE_ID</code>.</p>
     */
    inline SearchSystemTemplatesRequest& AddFilters(SystemTemplateFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline SearchSystemTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchSystemTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchSystemTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline SearchSystemTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<SystemTemplateFilter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
