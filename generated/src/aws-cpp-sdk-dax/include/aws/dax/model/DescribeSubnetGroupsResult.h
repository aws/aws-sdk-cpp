/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/SubnetGroup.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DAX
{
namespace Model
{
  class DescribeSubnetGroupsResult
  {
  public:
    AWS_DAX_API DescribeSubnetGroupsResult() = default;
    AWS_DAX_API DescribeSubnetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API DescribeSubnetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSubnetGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of subnet groups. Each element in the array represents a single
     * subnet group.</p>
     */
    inline const Aws::Vector<SubnetGroup>& GetSubnetGroups() const { return m_subnetGroups; }
    template<typename SubnetGroupsT = Aws::Vector<SubnetGroup>>
    void SetSubnetGroups(SubnetGroupsT&& value) { m_subnetGroupsHasBeenSet = true; m_subnetGroups = std::forward<SubnetGroupsT>(value); }
    template<typename SubnetGroupsT = Aws::Vector<SubnetGroup>>
    DescribeSubnetGroupsResult& WithSubnetGroups(SubnetGroupsT&& value) { SetSubnetGroups(std::forward<SubnetGroupsT>(value)); return *this;}
    template<typename SubnetGroupsT = SubnetGroup>
    DescribeSubnetGroupsResult& AddSubnetGroups(SubnetGroupsT&& value) { m_subnetGroupsHasBeenSet = true; m_subnetGroups.emplace_back(std::forward<SubnetGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSubnetGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SubnetGroup> m_subnetGroups;
    bool m_subnetGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
