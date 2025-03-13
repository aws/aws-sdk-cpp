/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationConformancePackStatus.h>
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
namespace ConfigService
{
namespace Model
{
  class DescribeOrganizationConformancePackStatusesResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePackStatusesResult() = default;
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePackStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePackStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>OrganizationConformancePackStatus</code> objects. </p>
     */
    inline const Aws::Vector<OrganizationConformancePackStatus>& GetOrganizationConformancePackStatuses() const { return m_organizationConformancePackStatuses; }
    template<typename OrganizationConformancePackStatusesT = Aws::Vector<OrganizationConformancePackStatus>>
    void SetOrganizationConformancePackStatuses(OrganizationConformancePackStatusesT&& value) { m_organizationConformancePackStatusesHasBeenSet = true; m_organizationConformancePackStatuses = std::forward<OrganizationConformancePackStatusesT>(value); }
    template<typename OrganizationConformancePackStatusesT = Aws::Vector<OrganizationConformancePackStatus>>
    DescribeOrganizationConformancePackStatusesResult& WithOrganizationConformancePackStatuses(OrganizationConformancePackStatusesT&& value) { SetOrganizationConformancePackStatuses(std::forward<OrganizationConformancePackStatusesT>(value)); return *this;}
    template<typename OrganizationConformancePackStatusesT = OrganizationConformancePackStatus>
    DescribeOrganizationConformancePackStatusesResult& AddOrganizationConformancePackStatuses(OrganizationConformancePackStatusesT&& value) { m_organizationConformancePackStatusesHasBeenSet = true; m_organizationConformancePackStatuses.emplace_back(std::forward<OrganizationConformancePackStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeOrganizationConformancePackStatusesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrganizationConformancePackStatusesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationConformancePackStatus> m_organizationConformancePackStatuses;
    bool m_organizationConformancePackStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
