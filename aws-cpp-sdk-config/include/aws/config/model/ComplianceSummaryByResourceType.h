/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceSummary.h>

namespace Aws
{
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
   * <p>The number of AWS resources of a specific type that are compliant or
   * noncompliant, up to a maximum of 100 for each compliance.</p>
   */
  class AWS_CONFIGSERVICE_API ComplianceSummaryByResourceType
  {
  public:
    ComplianceSummaryByResourceType();
    ComplianceSummaryByResourceType(const Aws::Utils::Json::JsonValue& jsonValue);
    ComplianceSummaryByResourceType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of AWS resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of AWS resource.</p>
     */
    inline ComplianceSummaryByResourceType& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of AWS resource.</p>
     */
    inline ComplianceSummaryByResourceType& WithResourceType(Aws::String&& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of AWS resource.</p>
     */
    inline ComplianceSummaryByResourceType& WithResourceType(const char* value) { SetResourceType(value); return *this;}

    /**
     * <p>The number of AWS resources that are compliant or noncompliant, up to a
     * maximum of 100 for each compliance.</p>
     */
    inline const ComplianceSummary& GetComplianceSummary() const{ return m_complianceSummary; }

    /**
     * <p>The number of AWS resources that are compliant or noncompliant, up to a
     * maximum of 100 for each compliance.</p>
     */
    inline void SetComplianceSummary(const ComplianceSummary& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = value; }

    /**
     * <p>The number of AWS resources that are compliant or noncompliant, up to a
     * maximum of 100 for each compliance.</p>
     */
    inline void SetComplianceSummary(ComplianceSummary&& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = value; }

    /**
     * <p>The number of AWS resources that are compliant or noncompliant, up to a
     * maximum of 100 for each compliance.</p>
     */
    inline ComplianceSummaryByResourceType& WithComplianceSummary(const ComplianceSummary& value) { SetComplianceSummary(value); return *this;}

    /**
     * <p>The number of AWS resources that are compliant or noncompliant, up to a
     * maximum of 100 for each compliance.</p>
     */
    inline ComplianceSummaryByResourceType& WithComplianceSummary(ComplianceSummary&& value) { SetComplianceSummary(value); return *this;}

  private:
    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
    ComplianceSummary m_complianceSummary;
    bool m_complianceSummaryHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
