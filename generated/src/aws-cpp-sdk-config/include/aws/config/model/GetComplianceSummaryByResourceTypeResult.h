/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceSummaryByResourceType.h>
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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByResourceTypeResponse">AWS
   * API Reference</a></p>
   */
  class GetComplianceSummaryByResourceTypeResult
  {
  public:
    AWS_CONFIGSERVICE_API GetComplianceSummaryByResourceTypeResult() = default;
    AWS_CONFIGSERVICE_API GetComplianceSummaryByResourceTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetComplianceSummaryByResourceTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of resources that are compliant and the number that are
     * noncompliant. If one or more resource types were provided with the request, the
     * numbers are returned for each resource type. The maximum number returned is
     * 100.</p>
     */
    inline const Aws::Vector<ComplianceSummaryByResourceType>& GetComplianceSummariesByResourceType() const { return m_complianceSummariesByResourceType; }
    template<typename ComplianceSummariesByResourceTypeT = Aws::Vector<ComplianceSummaryByResourceType>>
    void SetComplianceSummariesByResourceType(ComplianceSummariesByResourceTypeT&& value) { m_complianceSummariesByResourceTypeHasBeenSet = true; m_complianceSummariesByResourceType = std::forward<ComplianceSummariesByResourceTypeT>(value); }
    template<typename ComplianceSummariesByResourceTypeT = Aws::Vector<ComplianceSummaryByResourceType>>
    GetComplianceSummaryByResourceTypeResult& WithComplianceSummariesByResourceType(ComplianceSummariesByResourceTypeT&& value) { SetComplianceSummariesByResourceType(std::forward<ComplianceSummariesByResourceTypeT>(value)); return *this;}
    template<typename ComplianceSummariesByResourceTypeT = ComplianceSummaryByResourceType>
    GetComplianceSummaryByResourceTypeResult& AddComplianceSummariesByResourceType(ComplianceSummariesByResourceTypeT&& value) { m_complianceSummariesByResourceTypeHasBeenSet = true; m_complianceSummariesByResourceType.emplace_back(std::forward<ComplianceSummariesByResourceTypeT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetComplianceSummaryByResourceTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComplianceSummaryByResourceType> m_complianceSummariesByResourceType;
    bool m_complianceSummariesByResourceTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
