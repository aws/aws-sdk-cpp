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
    AWS_EFS_API DescribeReplicationConfigurationsResult();
    AWS_EFS_API DescribeReplicationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeReplicationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The collection of replication configurations that is returned.</p>
     */
    inline const Aws::Vector<ReplicationConfigurationDescription>& GetReplications() const{ return m_replications; }

    /**
     * <p>The collection of replication configurations that is returned.</p>
     */
    inline void SetReplications(const Aws::Vector<ReplicationConfigurationDescription>& value) { m_replications = value; }

    /**
     * <p>The collection of replication configurations that is returned.</p>
     */
    inline void SetReplications(Aws::Vector<ReplicationConfigurationDescription>&& value) { m_replications = std::move(value); }

    /**
     * <p>The collection of replication configurations that is returned.</p>
     */
    inline DescribeReplicationConfigurationsResult& WithReplications(const Aws::Vector<ReplicationConfigurationDescription>& value) { SetReplications(value); return *this;}

    /**
     * <p>The collection of replication configurations that is returned.</p>
     */
    inline DescribeReplicationConfigurationsResult& WithReplications(Aws::Vector<ReplicationConfigurationDescription>&& value) { SetReplications(std::move(value)); return *this;}

    /**
     * <p>The collection of replication configurations that is returned.</p>
     */
    inline DescribeReplicationConfigurationsResult& AddReplications(const ReplicationConfigurationDescription& value) { m_replications.push_back(value); return *this; }

    /**
     * <p>The collection of replication configurations that is returned.</p>
     */
    inline DescribeReplicationConfigurationsResult& AddReplications(ReplicationConfigurationDescription&& value) { m_replications.push_back(std::move(value)); return *this; }


    /**
     * <p>You can use the <code>NextToken</code> from the previous response in a
     * subsequent request to fetch the additional descriptions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>You can use the <code>NextToken</code> from the previous response in a
     * subsequent request to fetch the additional descriptions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>You can use the <code>NextToken</code> from the previous response in a
     * subsequent request to fetch the additional descriptions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>You can use the <code>NextToken</code> from the previous response in a
     * subsequent request to fetch the additional descriptions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>You can use the <code>NextToken</code> from the previous response in a
     * subsequent request to fetch the additional descriptions.</p>
     */
    inline DescribeReplicationConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use the <code>NextToken</code> from the previous response in a
     * subsequent request to fetch the additional descriptions.</p>
     */
    inline DescribeReplicationConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>You can use the <code>NextToken</code> from the previous response in a
     * subsequent request to fetch the additional descriptions.</p>
     */
    inline DescribeReplicationConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ReplicationConfigurationDescription> m_replications;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
