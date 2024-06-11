﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/DAXRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DAX
{
namespace Model
{

  /**
   */
  class DescribeSubnetGroupsRequest : public DAXRequest
  {
  public:
    AWS_DAX_API DescribeSubnetGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSubnetGroups"; }

    AWS_DAX_API Aws::String SerializePayload() const override;

    AWS_DAX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the subnet group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetGroupNames() const{ return m_subnetGroupNames; }
    inline bool SubnetGroupNamesHasBeenSet() const { return m_subnetGroupNamesHasBeenSet; }
    inline void SetSubnetGroupNames(const Aws::Vector<Aws::String>& value) { m_subnetGroupNamesHasBeenSet = true; m_subnetGroupNames = value; }
    inline void SetSubnetGroupNames(Aws::Vector<Aws::String>&& value) { m_subnetGroupNamesHasBeenSet = true; m_subnetGroupNames = std::move(value); }
    inline DescribeSubnetGroupsRequest& WithSubnetGroupNames(const Aws::Vector<Aws::String>& value) { SetSubnetGroupNames(value); return *this;}
    inline DescribeSubnetGroupsRequest& WithSubnetGroupNames(Aws::Vector<Aws::String>&& value) { SetSubnetGroupNames(std::move(value)); return *this;}
    inline DescribeSubnetGroupsRequest& AddSubnetGroupNames(const Aws::String& value) { m_subnetGroupNamesHasBeenSet = true; m_subnetGroupNames.push_back(value); return *this; }
    inline DescribeSubnetGroupsRequest& AddSubnetGroupNames(Aws::String&& value) { m_subnetGroupNamesHasBeenSet = true; m_subnetGroupNames.push_back(std::move(value)); return *this; }
    inline DescribeSubnetGroupsRequest& AddSubnetGroupNames(const char* value) { m_subnetGroupNamesHasBeenSet = true; m_subnetGroupNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p> <p>The value
     * for <code>MaxResults</code> must be between 20 and 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeSubnetGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeSubnetGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSubnetGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSubnetGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetGroupNames;
    bool m_subnetGroupNamesHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
