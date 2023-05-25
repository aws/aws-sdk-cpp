/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregateConformancePackCompliance.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Provides aggregate compliance of the conformance pack. Indicates whether a
   * conformance pack is compliant based on the name of the conformance pack, account
   * ID, and region.</p> <p>A conformance pack is compliant if all of the rules in a
   * conformance packs are compliant. It is noncompliant if any of the rules are not
   * compliant. The compliance status of a conformance pack is INSUFFICIENT_DATA only
   * if all rules within a conformance pack cannot be evaluated due to insufficient
   * data. If some of the rules in a conformance pack are compliant but the
   * compliance status of other rules in that same conformance pack is
   * INSUFFICIENT_DATA, the conformance pack shows compliant.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregateComplianceByConformancePack">AWS
   * API Reference</a></p>
   */
  class AggregateComplianceByConformancePack
  {
  public:
    AWS_CONFIGSERVICE_API AggregateComplianceByConformancePack();
    AWS_CONFIGSERVICE_API AggregateComplianceByConformancePack(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregateComplianceByConformancePack& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline AggregateComplianceByConformancePack& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline AggregateComplianceByConformancePack& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline AggregateComplianceByConformancePack& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline const AggregateConformancePackCompliance& GetCompliance() const{ return m_compliance; }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline void SetCompliance(const AggregateConformancePackCompliance& value) { m_complianceHasBeenSet = true; m_compliance = value; }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline void SetCompliance(AggregateConformancePackCompliance&& value) { m_complianceHasBeenSet = true; m_compliance = std::move(value); }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline AggregateComplianceByConformancePack& WithCompliance(const AggregateConformancePackCompliance& value) { SetCompliance(value); return *this;}

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline AggregateComplianceByConformancePack& WithCompliance(AggregateConformancePackCompliance&& value) { SetCompliance(std::move(value)); return *this;}


    /**
     * <p>The 12-digit Amazon Web Services account ID of the source account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The 12-digit Amazon Web Services account ID of the source account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The 12-digit Amazon Web Services account ID of the source account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The 12-digit Amazon Web Services account ID of the source account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The 12-digit Amazon Web Services account ID of the source account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The 12-digit Amazon Web Services account ID of the source account.</p>
     */
    inline AggregateComplianceByConformancePack& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account ID of the source account.</p>
     */
    inline AggregateComplianceByConformancePack& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account ID of the source account.</p>
     */
    inline AggregateComplianceByConformancePack& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The source Amazon Web Services Region from where the data is aggregated.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The source Amazon Web Services Region from where the data is aggregated.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The source Amazon Web Services Region from where the data is aggregated.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The source Amazon Web Services Region from where the data is aggregated.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The source Amazon Web Services Region from where the data is aggregated.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The source Amazon Web Services Region from where the data is aggregated.</p>
     */
    inline AggregateComplianceByConformancePack& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The source Amazon Web Services Region from where the data is aggregated.</p>
     */
    inline AggregateComplianceByConformancePack& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The source Amazon Web Services Region from where the data is aggregated.</p>
     */
    inline AggregateComplianceByConformancePack& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}

  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    AggregateConformancePackCompliance m_compliance;
    bool m_complianceHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
