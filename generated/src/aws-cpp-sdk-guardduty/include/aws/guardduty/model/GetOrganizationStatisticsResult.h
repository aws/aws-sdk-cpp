/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrganizationDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{
  class GetOrganizationStatisticsResult
  {
  public:
    AWS_GUARDDUTY_API GetOrganizationStatisticsResult() = default;
    AWS_GUARDDUTY_API GetOrganizationStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetOrganizationStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the statistics report for your organization.</p>
     */
    inline const OrganizationDetails& GetOrganizationDetails() const { return m_organizationDetails; }
    template<typename OrganizationDetailsT = OrganizationDetails>
    void SetOrganizationDetails(OrganizationDetailsT&& value) { m_organizationDetailsHasBeenSet = true; m_organizationDetails = std::forward<OrganizationDetailsT>(value); }
    template<typename OrganizationDetailsT = OrganizationDetails>
    GetOrganizationStatisticsResult& WithOrganizationDetails(OrganizationDetailsT&& value) { SetOrganizationDetails(std::forward<OrganizationDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOrganizationStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OrganizationDetails m_organizationDetails;
    bool m_organizationDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
