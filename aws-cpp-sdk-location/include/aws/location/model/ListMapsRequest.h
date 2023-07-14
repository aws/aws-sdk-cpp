﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class AWS_LOCATIONSERVICE_API ListMapsRequest : public LocationServiceRequest
  {
  public:
    ListMapsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMaps"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>An optional limit for the number of resources returned in a single call. </p>
     * <p>Default value: <code>100</code> </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional limit for the number of resources returned in a single call. </p>
     * <p>Default value: <code>100</code> </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional limit for the number of resources returned in a single call. </p>
     * <p>Default value: <code>100</code> </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional limit for the number of resources returned in a single call. </p>
     * <p>Default value: <code>100</code> </p>
     */
    inline ListMapsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline ListMapsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline ListMapsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline ListMapsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
