/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/ReplicationConfigurationDescription.h>
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
namespace EFS
{
namespace Model
{
  class DescribeReplicationConfigurationsResult
  {
  public:
    AWS_EFS_API DescribeReplicationConfigurationsResult() = default;
    AWS_EFS_API DescribeReplicationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeReplicationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The collection of replication configurations that is returned.</p>
     */
    inline const Aws::Vector<ReplicationConfigurationDescription>& GetReplications() const { return m_replications; }
    template<typename ReplicationsT = Aws::Vector<ReplicationConfigurationDescription>>
    void SetReplications(ReplicationsT&& value) { m_replicationsHasBeenSet = true; m_replications = std::forward<ReplicationsT>(value); }
    template<typename ReplicationsT = Aws::Vector<ReplicationConfigurationDescription>>
    DescribeReplicationConfigurationsResult& WithReplications(ReplicationsT&& value) { SetReplications(std::forward<ReplicationsT>(value)); return *this;}
    template<typename ReplicationsT = ReplicationConfigurationDescription>
    DescribeReplicationConfigurationsResult& AddReplications(ReplicationsT&& value) { m_replicationsHasBeenSet = true; m_replications.emplace_back(std::forward<ReplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can use the <code>NextToken</code> from the previous response in a
     * subsequent request to fetch the additional descriptions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReplicationConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReplicationConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReplicationConfigurationDescription> m_replications;
    bool m_replicationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
