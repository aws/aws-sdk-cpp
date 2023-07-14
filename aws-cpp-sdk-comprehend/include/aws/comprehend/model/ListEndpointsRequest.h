﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/comprehend/model/EndpointFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class AWS_COMPREHEND_API ListEndpointsRequest : public ComprehendRequest
  {
  public:
    ListEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEndpoints"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Filters the endpoints that are returned. You can filter endpoints on their
     * name, model, status, or the date and time that they were created. You can only
     * set one filter at a time. </p>
     */
    inline const EndpointFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters the endpoints that are returned. You can filter endpoints on their
     * name, model, status, or the date and time that they were created. You can only
     * set one filter at a time. </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters the endpoints that are returned. You can filter endpoints on their
     * name, model, status, or the date and time that they were created. You can only
     * set one filter at a time. </p>
     */
    inline void SetFilter(const EndpointFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters the endpoints that are returned. You can filter endpoints on their
     * name, model, status, or the date and time that they were created. You can only
     * set one filter at a time. </p>
     */
    inline void SetFilter(EndpointFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters the endpoints that are returned. You can filter endpoints on their
     * name, model, status, or the date and time that they were created. You can only
     * set one filter at a time. </p>
     */
    inline ListEndpointsRequest& WithFilter(const EndpointFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters the endpoints that are returned. You can filter endpoints on their
     * name, model, status, or the date and time that they were created. You can only
     * set one filter at a time. </p>
     */
    inline ListEndpointsRequest& WithFilter(EndpointFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline ListEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    EndpointFilter m_filter;
    bool m_filterHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
