/**
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
    AWS_DAX_API DescribeSubnetGroupsRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetSubnetGroupNames() const { return m_subnetGroupNames; }
    inline bool SubnetGroupNamesHasBeenSet() const { return m_subnetGroupNamesHasBeenSet; }
    template<typename SubnetGroupNamesT = Aws::Vector<Aws::String>>
    void SetSubnetGroupNames(SubnetGroupNamesT&& value) { m_subnetGroupNamesHasBeenSet = true; m_subnetGroupNames = std::forward<SubnetGroupNamesT>(value); }
    template<typename SubnetGroupNamesT = Aws::Vector<Aws::String>>
    DescribeSubnetGroupsRequest& WithSubnetGroupNames(SubnetGroupNamesT&& value) { SetSubnetGroupNames(std::forward<SubnetGroupNamesT>(value)); return *this;}
    template<typename SubnetGroupNamesT = Aws::String>
    DescribeSubnetGroupsRequest& AddSubnetGroupNames(SubnetGroupNamesT&& value) { m_subnetGroupNamesHasBeenSet = true; m_subnetGroupNames.emplace_back(std::forward<SubnetGroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p> <p>The value
     * for <code>MaxResults</code> must be between 20 and 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSubnetGroupsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetGroupNames;
    bool m_subnetGroupNamesHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
