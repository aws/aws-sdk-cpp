/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/CisReportFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_INSPECTOR2_API GetCisScanReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCisScanReport"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The format of the report. Valid values are <code>PDF</code> and
     * <code>CSV</code>. If no value is specified, the report format defaults to
     * <code>PDF</code>. </p>
     */
    inline const CisReportFormat& GetReportFormat() const{ return m_reportFormat; }
    inline bool ReportFormatHasBeenSet() const { return m_reportFormatHasBeenSet; }
    inline void SetReportFormat(const CisReportFormat& value) { m_reportFormatHasBeenSet = true; m_reportFormat = value; }
    inline void SetReportFormat(CisReportFormat&& value) { m_reportFormatHasBeenSet = true; m_reportFormat = std::move(value); }
    inline GetCisScanReportRequest& WithReportFormat(const CisReportFormat& value) { SetReportFormat(value); return *this;}
    inline GetCisScanReportRequest& WithReportFormat(CisReportFormat&& value) { SetReportFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan ARN.</p>
     */
    inline const Aws::String& GetScanArn() const{ return m_scanArn; }
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }
    inline void SetScanArn(const Aws::String& value) { m_scanArnHasBeenSet = true; m_scanArn = value; }
    inline void SetScanArn(Aws::String&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::move(value); }
    inline void SetScanArn(const char* value) { m_scanArnHasBeenSet = true; m_scanArn.assign(value); }
    inline GetCisScanReportRequest& WithScanArn(const Aws::String& value) { SetScanArn(value); return *this;}
    inline GetCisScanReportRequest& WithScanArn(Aws::String&& value) { SetScanArn(std::move(value)); return *this;}
    inline GetCisScanReportRequest& WithScanArn(const char* value) { SetScanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetAccounts() const{ return m_targetAccounts; }
    inline bool TargetAccountsHasBeenSet() const { return m_targetAccountsHasBeenSet; }
    inline void SetTargetAccounts(const Aws::Vector<Aws::String>& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts = value; }
    inline void SetTargetAccounts(Aws::Vector<Aws::String>&& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts = std::move(value); }
    inline GetCisScanReportRequest& WithTargetAccounts(const Aws::Vector<Aws::String>& value) { SetTargetAccounts(value); return *this;}
    inline GetCisScanReportRequest& WithTargetAccounts(Aws::Vector<Aws::String>&& value) { SetTargetAccounts(std::move(value)); return *this;}
    inline GetCisScanReportRequest& AddTargetAccounts(const Aws::String& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts.push_back(value); return *this; }
    inline GetCisScanReportRequest& AddTargetAccounts(Aws::String&& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts.push_back(std::move(value)); return *this; }
    inline GetCisScanReportRequest& AddTargetAccounts(const char* value) { m_targetAccountsHasBeenSet = true; m_targetAccounts.push_back(value); return *this; }
    ///@}
  private:

    CisReportFormat m_reportFormat;
    bool m_reportFormatHasBeenSet = false;

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetAccounts;
    bool m_targetAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
