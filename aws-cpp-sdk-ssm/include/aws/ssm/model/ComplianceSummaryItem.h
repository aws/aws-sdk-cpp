﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/CompliantSummary.h>
#include <aws/ssm/model/NonCompliantSummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>A summary of compliance information by compliance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ComplianceSummaryItem">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ComplianceSummaryItem
  {
  public:
    ComplianceSummaryItem();
    ComplianceSummaryItem(Aws::Utils::Json::JsonView jsonValue);
    ComplianceSummaryItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of compliance item. For example, the compliance type can be
     * Association, Patch, or Custom:string.</p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>The type of compliance item. For example, the compliance type can be
     * Association, Patch, or Custom:string.</p>
     */
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>The type of compliance item. For example, the compliance type can be
     * Association, Patch, or Custom:string.</p>
     */
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>The type of compliance item. For example, the compliance type can be
     * Association, Patch, or Custom:string.</p>
     */
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }

    /**
     * <p>The type of compliance item. For example, the compliance type can be
     * Association, Patch, or Custom:string.</p>
     */
    inline ComplianceSummaryItem& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}

    /**
     * <p>The type of compliance item. For example, the compliance type can be
     * Association, Patch, or Custom:string.</p>
     */
    inline ComplianceSummaryItem& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}

    /**
     * <p>The type of compliance item. For example, the compliance type can be
     * Association, Patch, or Custom:string.</p>
     */
    inline ComplianceSummaryItem& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}


    /**
     * <p>A list of COMPLIANT items for the specified compliance type.</p>
     */
    inline const CompliantSummary& GetCompliantSummary() const{ return m_compliantSummary; }

    /**
     * <p>A list of COMPLIANT items for the specified compliance type.</p>
     */
    inline void SetCompliantSummary(const CompliantSummary& value) { m_compliantSummaryHasBeenSet = true; m_compliantSummary = value; }

    /**
     * <p>A list of COMPLIANT items for the specified compliance type.</p>
     */
    inline void SetCompliantSummary(CompliantSummary&& value) { m_compliantSummaryHasBeenSet = true; m_compliantSummary = std::move(value); }

    /**
     * <p>A list of COMPLIANT items for the specified compliance type.</p>
     */
    inline ComplianceSummaryItem& WithCompliantSummary(const CompliantSummary& value) { SetCompliantSummary(value); return *this;}

    /**
     * <p>A list of COMPLIANT items for the specified compliance type.</p>
     */
    inline ComplianceSummaryItem& WithCompliantSummary(CompliantSummary&& value) { SetCompliantSummary(std::move(value)); return *this;}


    /**
     * <p>A list of NON_COMPLIANT items for the specified compliance type.</p>
     */
    inline const NonCompliantSummary& GetNonCompliantSummary() const{ return m_nonCompliantSummary; }

    /**
     * <p>A list of NON_COMPLIANT items for the specified compliance type.</p>
     */
    inline void SetNonCompliantSummary(const NonCompliantSummary& value) { m_nonCompliantSummaryHasBeenSet = true; m_nonCompliantSummary = value; }

    /**
     * <p>A list of NON_COMPLIANT items for the specified compliance type.</p>
     */
    inline void SetNonCompliantSummary(NonCompliantSummary&& value) { m_nonCompliantSummaryHasBeenSet = true; m_nonCompliantSummary = std::move(value); }

    /**
     * <p>A list of NON_COMPLIANT items for the specified compliance type.</p>
     */
    inline ComplianceSummaryItem& WithNonCompliantSummary(const NonCompliantSummary& value) { SetNonCompliantSummary(value); return *this;}

    /**
     * <p>A list of NON_COMPLIANT items for the specified compliance type.</p>
     */
    inline ComplianceSummaryItem& WithNonCompliantSummary(NonCompliantSummary&& value) { SetNonCompliantSummary(std::move(value)); return *this;}

  private:

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet;

    CompliantSummary m_compliantSummary;
    bool m_compliantSummaryHasBeenSet;

    NonCompliantSummary m_nonCompliantSummary;
    bool m_nonCompliantSummaryHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
