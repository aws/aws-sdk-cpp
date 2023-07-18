﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/drs/model/DescribeSourceServersRequestFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class AWS_DRS_API DescribeSourceServersRequest : public DrsRequest
  {
  public:
    DescribeSourceServersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSourceServers"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A set of filters by which to return Source Servers.</p>
     */
    inline const DescribeSourceServersRequestFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>A set of filters by which to return Source Servers.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A set of filters by which to return Source Servers.</p>
     */
    inline void SetFilters(const DescribeSourceServersRequestFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A set of filters by which to return Source Servers.</p>
     */
    inline void SetFilters(DescribeSourceServersRequestFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A set of filters by which to return Source Servers.</p>
     */
    inline DescribeSourceServersRequest& WithFilters(const DescribeSourceServersRequestFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>A set of filters by which to return Source Servers.</p>
     */
    inline DescribeSourceServersRequest& WithFilters(DescribeSourceServersRequestFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Maximum number of Source Servers to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of Source Servers to retrieve.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of Source Servers to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of Source Servers to retrieve.</p>
     */
    inline DescribeSourceServersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token of the next Source Server to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token of the next Source Server to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token of the next Source Server to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token of the next Source Server to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token of the next Source Server to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token of the next Source Server to retrieve.</p>
     */
    inline DescribeSourceServersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token of the next Source Server to retrieve.</p>
     */
    inline DescribeSourceServersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token of the next Source Server to retrieve.</p>
     */
    inline DescribeSourceServersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    DescribeSourceServersRequestFilters m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
