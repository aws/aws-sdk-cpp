/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationConformancePackDetailedStatus.h>
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
  class GetOrganizationConformancePackDetailedStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API GetOrganizationConformancePackDetailedStatusResult() = default;
    AWS_CONFIGSERVICE_API GetOrganizationConformancePackDetailedStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetOrganizationConformancePackDetailedStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>OrganizationConformancePackDetailedStatus</code> objects.
     * </p>
     */
    inline const Aws::Vector<OrganizationConformancePackDetailedStatus>& GetOrganizationConformancePackDetailedStatuses() const { return m_organizationConformancePackDetailedStatuses; }
    template<typename OrganizationConformancePackDetailedStatusesT = Aws::Vector<OrganizationConformancePackDetailedStatus>>
    void SetOrganizationConformancePackDetailedStatuses(OrganizationConformancePackDetailedStatusesT&& value) { m_organizationConformancePackDetailedStatusesHasBeenSet = true; m_organizationConformancePackDetailedStatuses = std::forward<OrganizationConformancePackDetailedStatusesT>(value); }
    template<typename OrganizationConformancePackDetailedStatusesT = Aws::Vector<OrganizationConformancePackDetailedStatus>>
    GetOrganizationConformancePackDetailedStatusResult& WithOrganizationConformancePackDetailedStatuses(OrganizationConformancePackDetailedStatusesT&& value) { SetOrganizationConformancePackDetailedStatuses(std::forward<OrganizationConformancePackDetailedStatusesT>(value)); return *this;}
    template<typename OrganizationConformancePackDetailedStatusesT = OrganizationConformancePackDetailedStatus>
    GetOrganizationConformancePackDetailedStatusResult& AddOrganizationConformancePackDetailedStatuses(OrganizationConformancePackDetailedStatusesT&& value) { m_organizationConformancePackDetailedStatusesHasBeenSet = true; m_organizationConformancePackDetailedStatuses.emplace_back(std::forward<OrganizationConformancePackDetailedStatusesT>(value)); return *this; }
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
    GetOrganizationConformancePackDetailedStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOrganizationConformancePackDetailedStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationConformancePackDetailedStatus> m_organizationConformancePackDetailedStatuses;
    bool m_organizationConformancePackDetailedStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
