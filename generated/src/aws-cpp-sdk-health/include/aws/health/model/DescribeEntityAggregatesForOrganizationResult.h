/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/OrganizationEntityAggregate.h>
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
  class DescribeEntityAggregatesForOrganizationResult
  {
  public:
    AWS_HEALTH_API DescribeEntityAggregatesForOrganizationResult();
    AWS_HEALTH_API DescribeEntityAggregatesForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeEntityAggregatesForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of entity aggregates for each of the specified accounts that are
     * affected by each of the specified events.</p>
     */
    inline const Aws::Vector<OrganizationEntityAggregate>& GetOrganizationEntityAggregates() const{ return m_organizationEntityAggregates; }

    /**
     * <p>The list of entity aggregates for each of the specified accounts that are
     * affected by each of the specified events.</p>
     */
    inline void SetOrganizationEntityAggregates(const Aws::Vector<OrganizationEntityAggregate>& value) { m_organizationEntityAggregates = value; }

    /**
     * <p>The list of entity aggregates for each of the specified accounts that are
     * affected by each of the specified events.</p>
     */
    inline void SetOrganizationEntityAggregates(Aws::Vector<OrganizationEntityAggregate>&& value) { m_organizationEntityAggregates = std::move(value); }

    /**
     * <p>The list of entity aggregates for each of the specified accounts that are
     * affected by each of the specified events.</p>
     */
    inline DescribeEntityAggregatesForOrganizationResult& WithOrganizationEntityAggregates(const Aws::Vector<OrganizationEntityAggregate>& value) { SetOrganizationEntityAggregates(value); return *this;}

    /**
     * <p>The list of entity aggregates for each of the specified accounts that are
     * affected by each of the specified events.</p>
     */
    inline DescribeEntityAggregatesForOrganizationResult& WithOrganizationEntityAggregates(Aws::Vector<OrganizationEntityAggregate>&& value) { SetOrganizationEntityAggregates(std::move(value)); return *this;}

    /**
     * <p>The list of entity aggregates for each of the specified accounts that are
     * affected by each of the specified events.</p>
     */
    inline DescribeEntityAggregatesForOrganizationResult& AddOrganizationEntityAggregates(const OrganizationEntityAggregate& value) { m_organizationEntityAggregates.push_back(value); return *this; }

    /**
     * <p>The list of entity aggregates for each of the specified accounts that are
     * affected by each of the specified events.</p>
     */
    inline DescribeEntityAggregatesForOrganizationResult& AddOrganizationEntityAggregates(OrganizationEntityAggregate&& value) { m_organizationEntityAggregates.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEntityAggregatesForOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEntityAggregatesForOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEntityAggregatesForOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<OrganizationEntityAggregate> m_organizationEntityAggregates;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
