/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/ReplicationConfigurationTemplate.h>
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
namespace drs
{
namespace Model
{
  class DescribeReplicationConfigurationTemplatesResult
  {
  public:
    AWS_DRS_API DescribeReplicationConfigurationTemplatesResult();
    AWS_DRS_API DescribeReplicationConfigurationTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API DescribeReplicationConfigurationTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of Replication Configuration Templates.</p>
     */
    inline const Aws::Vector<ReplicationConfigurationTemplate>& GetItems() const{ return m_items; }

    /**
     * <p>An array of Replication Configuration Templates.</p>
     */
    inline void SetItems(const Aws::Vector<ReplicationConfigurationTemplate>& value) { m_items = value; }

    /**
     * <p>An array of Replication Configuration Templates.</p>
     */
    inline void SetItems(Aws::Vector<ReplicationConfigurationTemplate>&& value) { m_items = std::move(value); }

    /**
     * <p>An array of Replication Configuration Templates.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& WithItems(const Aws::Vector<ReplicationConfigurationTemplate>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of Replication Configuration Templates.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& WithItems(Aws::Vector<ReplicationConfigurationTemplate>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>An array of Replication Configuration Templates.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& AddItems(const ReplicationConfigurationTemplate& value) { m_items.push_back(value); return *this; }

    /**
     * <p>An array of Replication Configuration Templates.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& AddItems(ReplicationConfigurationTemplate&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeReplicationConfigurationTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeReplicationConfigurationTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeReplicationConfigurationTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ReplicationConfigurationTemplate> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
