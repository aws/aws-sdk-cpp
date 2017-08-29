/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_HEALTH_API DescribeEntityAggregatesResult
  {
  public:
    DescribeEntityAggregatesResult();
    DescribeEntityAggregatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEntityAggregatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::Vector<EntityAggregate> m_entityAggregates;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
