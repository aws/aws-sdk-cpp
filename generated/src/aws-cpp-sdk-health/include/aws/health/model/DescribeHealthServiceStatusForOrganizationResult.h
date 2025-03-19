/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
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
namespace Health
{
namespace Model
{
  class DescribeHealthServiceStatusForOrganizationResult
  {
  public:
    AWS_HEALTH_API DescribeHealthServiceStatusForOrganizationResult() = default;
    AWS_HEALTH_API DescribeHealthServiceStatusForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeHealthServiceStatusForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the status of enabling or disabling the Health
     * organizational view feature in your organization.</p> <p>Valid values are
     * <code>ENABLED | DISABLED | PENDING</code>. </p>
     */
    inline const Aws::String& GetHealthServiceAccessStatusForOrganization() const { return m_healthServiceAccessStatusForOrganization; }
    template<typename HealthServiceAccessStatusForOrganizationT = Aws::String>
    void SetHealthServiceAccessStatusForOrganization(HealthServiceAccessStatusForOrganizationT&& value) { m_healthServiceAccessStatusForOrganizationHasBeenSet = true; m_healthServiceAccessStatusForOrganization = std::forward<HealthServiceAccessStatusForOrganizationT>(value); }
    template<typename HealthServiceAccessStatusForOrganizationT = Aws::String>
    DescribeHealthServiceStatusForOrganizationResult& WithHealthServiceAccessStatusForOrganization(HealthServiceAccessStatusForOrganizationT&& value) { SetHealthServiceAccessStatusForOrganization(std::forward<HealthServiceAccessStatusForOrganizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeHealthServiceStatusForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_healthServiceAccessStatusForOrganization;
    bool m_healthServiceAccessStatusForOrganizationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
