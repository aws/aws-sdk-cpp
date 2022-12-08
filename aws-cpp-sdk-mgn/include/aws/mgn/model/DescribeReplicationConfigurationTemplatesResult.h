/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ReplicationConfigurationTemplate.h>
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
namespace mgn
{
namespace Model
{
  class DescribeReplicationConfigurationTemplatesResult
  {
  public:
    AWS_MGN_API DescribeReplicationConfigurationTemplatesResult();
    AWS_MGN_API DescribeReplicationConfigurationTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API DescribeReplicationConfigurationTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Request to describe Replication Configuration template by items.</p>
     */
    inline const Aws::Vector<ReplicationConfigurationTemplate>& GetItems() const{ return m_items; }

    /**
     * <p>Request to describe Replication Configuration template by items.</p>
     */
    inline void SetItems(const Aws::Vector<ReplicationConfigurationTemplate>& value) { m_items = value; }

    /**
     * <p>Request to describe Replication Configuration template by items.</p>
     */
    inline void SetItems(Aws::Vector<ReplicationConfigurationTemplate>&& value) { m_items = std::move(value); }

    /**
     * <p>Request to describe Replication Configuration template by items.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& WithItems(const Aws::Vector<ReplicationConfigurationTemplate>& value) { SetItems(value); return *this;}

    /**
     * <p>Request to describe Replication Configuration template by items.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& WithItems(Aws::Vector<ReplicationConfigurationTemplate>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Request to describe Replication Configuration template by items.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& AddItems(const ReplicationConfigurationTemplate& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Request to describe Replication Configuration template by items.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& AddItems(ReplicationConfigurationTemplate&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Request to describe Replication Configuration template by next token.</p>
     */
    inline DescribeReplicationConfigurationTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ReplicationConfigurationTemplate> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
