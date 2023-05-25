/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackComplianceType.h>
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
   * <p>Filters the conformance packs based on an account ID, region, compliance
   * type, and the name of the conformance pack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregateConformancePackComplianceFilters">AWS
   * API Reference</a></p>
   */
  class AggregateConformancePackComplianceFilters
  {
  public:
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceFilters();
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline AggregateConformancePackComplianceFilters& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline AggregateConformancePackComplianceFilters& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline AggregateConformancePackComplianceFilters& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline const ConformancePackComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline void SetComplianceType(const ConformancePackComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline void SetComplianceType(ConformancePackComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline AggregateConformancePackComplianceFilters& WithComplianceType(const ConformancePackComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>The compliance status of the conformance pack.</p>
     */
    inline AggregateConformancePackComplianceFilters& WithComplianceType(ConformancePackComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}


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
    inline AggregateConformancePackComplianceFilters& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account ID of the source account.</p>
     */
    inline AggregateConformancePackComplianceFilters& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account ID of the source account.</p>
     */
    inline AggregateConformancePackComplianceFilters& WithAccountId(const char* value) { SetAccountId(value); return *this;}


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
    inline AggregateConformancePackComplianceFilters& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The source Amazon Web Services Region from where the data is aggregated.</p>
     */
    inline AggregateConformancePackComplianceFilters& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The source Amazon Web Services Region from where the data is aggregated.</p>
     */
    inline AggregateConformancePackComplianceFilters& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}

  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    ConformancePackComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
