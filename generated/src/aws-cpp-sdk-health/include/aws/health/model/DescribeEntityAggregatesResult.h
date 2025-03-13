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
    AWS_HEALTH_API DescribeEntityAggregatesResult() = default;
    AWS_HEALTH_API DescribeEntityAggregatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeEntityAggregatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of entities that are affected by each of the specified events.</p>
     */
    inline const Aws::Vector<EntityAggregate>& GetEntityAggregates() const { return m_entityAggregates; }
    template<typename EntityAggregatesT = Aws::Vector<EntityAggregate>>
    void SetEntityAggregates(EntityAggregatesT&& value) { m_entityAggregatesHasBeenSet = true; m_entityAggregates = std::forward<EntityAggregatesT>(value); }
    template<typename EntityAggregatesT = Aws::Vector<EntityAggregate>>
    DescribeEntityAggregatesResult& WithEntityAggregates(EntityAggregatesT&& value) { SetEntityAggregates(std::forward<EntityAggregatesT>(value)); return *this;}
    template<typename EntityAggregatesT = EntityAggregate>
    DescribeEntityAggregatesResult& AddEntityAggregates(EntityAggregatesT&& value) { m_entityAggregatesHasBeenSet = true; m_entityAggregates.emplace_back(std::forward<EntityAggregatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEntityAggregatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EntityAggregate> m_entityAggregates;
    bool m_entityAggregatesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
