/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisReportFormat.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class GetCisScanReportRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API GetCisScanReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCisScanReport"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The scan ARN.</p>
     */
    inline const Aws::String& GetScanArn() const { return m_scanArn; }
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }
    template<typename ScanArnT = Aws::String>
    void SetScanArn(ScanArnT&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::forward<ScanArnT>(value); }
    template<typename ScanArnT = Aws::String>
    GetCisScanReportRequest& WithScanArn(ScanArnT&& value) { SetScanArn(std::forward<ScanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetAccounts() const { return m_targetAccounts; }
    inline bool TargetAccountsHasBeenSet() const { return m_targetAccountsHasBeenSet; }
    template<typename TargetAccountsT = Aws::Vector<Aws::String>>
    void SetTargetAccounts(TargetAccountsT&& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts = std::forward<TargetAccountsT>(value); }
    template<typename TargetAccountsT = Aws::Vector<Aws::String>>
    GetCisScanReportRequest& WithTargetAccounts(TargetAccountsT&& value) { SetTargetAccounts(std::forward<TargetAccountsT>(value)); return *this;}
    template<typename TargetAccountsT = Aws::String>
    GetCisScanReportRequest& AddTargetAccounts(TargetAccountsT&& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts.emplace_back(std::forward<TargetAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The format of the report. Valid values are <code>PDF</code> and
     * <code>CSV</code>. If no value is specified, the report format defaults to
     * <code>PDF</code>. </p>
     */
    inline CisReportFormat GetReportFormat() const { return m_reportFormat; }
    inline bool ReportFormatHasBeenSet() const { return m_reportFormatHasBeenSet; }
    inline void SetReportFormat(CisReportFormat value) { m_reportFormatHasBeenSet = true; m_reportFormat = value; }
    inline GetCisScanReportRequest& WithReportFormat(CisReportFormat value) { SetReportFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetAccounts;
    bool m_targetAccountsHasBeenSet = false;

    CisReportFormat m_reportFormat{CisReportFormat::NOT_SET};
    bool m_reportFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
