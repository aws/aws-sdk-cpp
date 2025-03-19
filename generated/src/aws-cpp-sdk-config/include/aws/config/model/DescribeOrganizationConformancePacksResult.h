/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationConformancePack.h>
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
  class DescribeOrganizationConformancePacksResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePacksResult() = default;
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of OrganizationConformancePacks objects.</p>
     */
    inline const Aws::Vector<OrganizationConformancePack>& GetOrganizationConformancePacks() const { return m_organizationConformancePacks; }
    template<typename OrganizationConformancePacksT = Aws::Vector<OrganizationConformancePack>>
    void SetOrganizationConformancePacks(OrganizationConformancePacksT&& value) { m_organizationConformancePacksHasBeenSet = true; m_organizationConformancePacks = std::forward<OrganizationConformancePacksT>(value); }
    template<typename OrganizationConformancePacksT = Aws::Vector<OrganizationConformancePack>>
    DescribeOrganizationConformancePacksResult& WithOrganizationConformancePacks(OrganizationConformancePacksT&& value) { SetOrganizationConformancePacks(std::forward<OrganizationConformancePacksT>(value)); return *this;}
    template<typename OrganizationConformancePacksT = OrganizationConformancePack>
    DescribeOrganizationConformancePacksResult& AddOrganizationConformancePacks(OrganizationConformancePacksT&& value) { m_organizationConformancePacksHasBeenSet = true; m_organizationConformancePacks.emplace_back(std::forward<OrganizationConformancePacksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeOrganizationConformancePacksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrganizationConformancePacksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationConformancePack> m_organizationConformancePacks;
    bool m_organizationConformancePacksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
