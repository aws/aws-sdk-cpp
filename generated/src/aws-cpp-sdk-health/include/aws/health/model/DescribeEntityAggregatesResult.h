/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/EntityAggregate.h>
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
namespace Health
{
namespace Model
{
  class DescribeEntityAggregatesResult
  {
  public:
    AWS_HEALTH_API DescribeEntityAggregatesResult();
    AWS_HEALTH_API DescribeEntityAggregatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeEntityAggregatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of entities that are affected by each of the specified events.</p>
     */
    inline const Aws::Vector<EntityAggregate>& GetEntityAggregates() const{ return m_entityAggregates; }

    /**
     * <p>The number of entities that are affected by each of the specified events.</p>
     */
    inline void SetEntityAggregates(const Aws::Vector<EntityAggregate>& value) { m_entityAggregates = value; }

    /**
     * <p>The number of entities that are affected by each of the specified events.</p>
     */
    inline void SetEntityAggregates(Aws::Vector<EntityAggregate>&& value) { m_entityAggregates = std::move(value); }

    /**
     * <p>The number of entities that are affected by each of the specified events.</p>
     */
    inline DescribeEntityAggregatesResult& WithEntityAggregates(const Aws::Vector<EntityAggregate>& value) { SetEntityAggregates(value); return *this;}

    /**
     * <p>The number of entities that are affected by each of the specified events.</p>
     */
    inline DescribeEntityAggregatesResult& WithEntityAggregates(Aws::Vector<EntityAggregate>&& value) { SetEntityAggregates(std::move(value)); return *this;}

    /**
     * <p>The number of entities that are affected by each of the specified events.</p>
     */
    inline DescribeEntityAggregatesResult& AddEntityAggregates(const EntityAggregate& value) { m_entityAggregates.push_back(value); return *this; }

    /**
     * <p>The number of entities that are affected by each of the specified events.</p>
     */
    inline DescribeEntityAggregatesResult& AddEntityAggregates(EntityAggregate&& value) { m_entityAggregates.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEntityAggregatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEntityAggregatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEntityAggregatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EntityAggregate> m_entityAggregates;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
