/**
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
  class DescribeSourceServersRequest : public DrsRequest
  {
  public:
    AWS_DRS_API DescribeSourceServersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSourceServers"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A set of filters by which to return Source Servers.</p>
     */
    inline const DescribeSourceServersRequestFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const DescribeSourceServersRequestFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(DescribeSourceServersRequestFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeSourceServersRequest& WithFilters(const DescribeSourceServersRequestFilters& value) { SetFilters(value); return *this;}
    inline DescribeSourceServersRequest& WithFilters(DescribeSourceServersRequestFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of Source Servers to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeSourceServersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token of the next Source Server to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeSourceServersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSourceServersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSourceServersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    DescribeSourceServersRequestFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
