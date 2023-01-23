/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_CONFIGSERVICE_API GetComplianceSummaryByResourceTypeResult();
    AWS_CONFIGSERVICE_API GetComplianceSummaryByResourceTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetComplianceSummaryByResourceTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of resources that are compliant and the number that are
     * noncompliant. If one or more resource types were provided with the request, the
     * numbers are returned for each resource type. The maximum number returned is
     * 100.</p>
     */
    inline const Aws::Vector<ComplianceSummaryByResourceType>& GetComplianceSummariesByResourceType() const{ return m_complianceSummariesByResourceType; }

    /**
     * <p>The number of resources that are compliant and the number that are
     * noncompliant. If one or more resource types were provided with the request, the
     * numbers are returned for each resource type. The maximum number returned is
     * 100.</p>
     */
    inline void SetComplianceSummariesByResourceType(const Aws::Vector<ComplianceSummaryByResourceType>& value) { m_complianceSummariesByResourceType = value; }

    /**
     * <p>The number of resources that are compliant and the number that are
     * noncompliant. If one or more resource types were provided with the request, the
     * numbers are returned for each resource type. The maximum number returned is
     * 100.</p>
     */
    inline void SetComplianceSummariesByResourceType(Aws::Vector<ComplianceSummaryByResourceType>&& value) { m_complianceSummariesByResourceType = std::move(value); }

    /**
     * <p>The number of resources that are compliant and the number that are
     * noncompliant. If one or more resource types were provided with the request, the
     * numbers are returned for each resource type. The maximum number returned is
     * 100.</p>
     */
    inline GetComplianceSummaryByResourceTypeResult& WithComplianceSummariesByResourceType(const Aws::Vector<ComplianceSummaryByResourceType>& value) { SetComplianceSummariesByResourceType(value); return *this;}

    /**
     * <p>The number of resources that are compliant and the number that are
     * noncompliant. If one or more resource types were provided with the request, the
     * numbers are returned for each resource type. The maximum number returned is
     * 100.</p>
     */
    inline GetComplianceSummaryByResourceTypeResult& WithComplianceSummariesByResourceType(Aws::Vector<ComplianceSummaryByResourceType>&& value) { SetComplianceSummariesByResourceType(std::move(value)); return *this;}

    /**
     * <p>The number of resources that are compliant and the number that are
     * noncompliant. If one or more resource types were provided with the request, the
     * numbers are returned for each resource type. The maximum number returned is
     * 100.</p>
     */
    inline GetComplianceSummaryByResourceTypeResult& AddComplianceSummariesByResourceType(const ComplianceSummaryByResourceType& value) { m_complianceSummariesByResourceType.push_back(value); return *this; }

    /**
     * <p>The number of resources that are compliant and the number that are
     * noncompliant. If one or more resource types were provided with the request, the
     * numbers are returned for each resource type. The maximum number returned is
     * 100.</p>
     */
    inline GetComplianceSummaryByResourceTypeResult& AddComplianceSummariesByResourceType(ComplianceSummaryByResourceType&& value) { m_complianceSummariesByResourceType.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ComplianceSummaryByResourceType> m_complianceSummariesByResourceType;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
