﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ComplianceSummaryByResourceType.h>

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
   * <p/>
   */
  class AWS_CONFIGSERVICE_API GetComplianceSummaryByResourceTypeResult
  {
  public:
    GetComplianceSummaryByResourceTypeResult();
    GetComplianceSummaryByResourceTypeResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetComplianceSummaryByResourceTypeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetComplianceSummariesByResourceType(Aws::Vector<ComplianceSummaryByResourceType>&& value) { m_complianceSummariesByResourceType = value; }

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
    inline GetComplianceSummaryByResourceTypeResult& WithComplianceSummariesByResourceType(Aws::Vector<ComplianceSummaryByResourceType>&& value) { SetComplianceSummariesByResourceType(value); return *this;}

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
    inline GetComplianceSummaryByResourceTypeResult& AddComplianceSummariesByResourceType(ComplianceSummaryByResourceType&& value) { m_complianceSummariesByResourceType.push_back(value); return *this; }

  private:
    Aws::Vector<ComplianceSummaryByResourceType> m_complianceSummariesByResourceType;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
