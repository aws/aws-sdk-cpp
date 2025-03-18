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
    AWS_HEALTH_API DescribeEntityAggregatesForOrganizationResult() = default;
    AWS_HEALTH_API DescribeEntityAggregatesForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeEntityAggregatesForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of entity aggregates for each of the specified accounts that are
     * affected by each of the specified events.</p>
     */
    inline const Aws::Vector<OrganizationEntityAggregate>& GetOrganizationEntityAggregates() const { return m_organizationEntityAggregates; }
    template<typename OrganizationEntityAggregatesT = Aws::Vector<OrganizationEntityAggregate>>
    void SetOrganizationEntityAggregates(OrganizationEntityAggregatesT&& value) { m_organizationEntityAggregatesHasBeenSet = true; m_organizationEntityAggregates = std::forward<OrganizationEntityAggregatesT>(value); }
    template<typename OrganizationEntityAggregatesT = Aws::Vector<OrganizationEntityAggregate>>
    DescribeEntityAggregatesForOrganizationResult& WithOrganizationEntityAggregates(OrganizationEntityAggregatesT&& value) { SetOrganizationEntityAggregates(std::forward<OrganizationEntityAggregatesT>(value)); return *this;}
    template<typename OrganizationEntityAggregatesT = OrganizationEntityAggregate>
    DescribeEntityAggregatesForOrganizationResult& AddOrganizationEntityAggregates(OrganizationEntityAggregatesT&& value) { m_organizationEntityAggregatesHasBeenSet = true; m_organizationEntityAggregates.emplace_back(std::forward<OrganizationEntityAggregatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEntityAggregatesForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationEntityAggregate> m_organizationEntityAggregates;
    bool m_organizationEntityAggregatesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
