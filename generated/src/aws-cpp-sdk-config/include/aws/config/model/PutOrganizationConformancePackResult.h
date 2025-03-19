/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{
  class PutOrganizationConformancePackResult
  {
  public:
    AWS_CONFIGSERVICE_API PutOrganizationConformancePackResult() = default;
    AWS_CONFIGSERVICE_API PutOrganizationConformancePackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutOrganizationConformancePackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the organization conformance pack.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackArn() const { return m_organizationConformancePackArn; }
    template<typename OrganizationConformancePackArnT = Aws::String>
    void SetOrganizationConformancePackArn(OrganizationConformancePackArnT&& value) { m_organizationConformancePackArnHasBeenSet = true; m_organizationConformancePackArn = std::forward<OrganizationConformancePackArnT>(value); }
    template<typename OrganizationConformancePackArnT = Aws::String>
    PutOrganizationConformancePackResult& WithOrganizationConformancePackArn(OrganizationConformancePackArnT&& value) { SetOrganizationConformancePackArn(std::forward<OrganizationConformancePackArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutOrganizationConformancePackResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationConformancePackArn;
    bool m_organizationConformancePackArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
