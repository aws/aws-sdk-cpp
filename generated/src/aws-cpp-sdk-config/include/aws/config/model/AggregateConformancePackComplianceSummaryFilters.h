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
   * <p>Filters the results based on account ID and region. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregateConformancePackComplianceSummaryFilters">AWS
   * API Reference</a></p>
   */
  class AggregateConformancePackComplianceSummaryFilters
  {
  public:
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceSummaryFilters();
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceSummaryFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceSummaryFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 12-digit Amazon Web Services account ID of the source account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AggregateConformancePackComplianceSummaryFilters& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AggregateConformancePackComplianceSummaryFilters& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AggregateConformancePackComplianceSummaryFilters& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source Amazon Web Services Region from where the data is aggregated.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline AggregateConformancePackComplianceSummaryFilters& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline AggregateConformancePackComplianceSummaryFilters& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline AggregateConformancePackComplianceSummaryFilters& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
