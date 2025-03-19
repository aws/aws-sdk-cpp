/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class GetLicenseManagerReportGeneratorRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API GetLicenseManagerReportGeneratorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLicenseManagerReportGenerator"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the report generator.</p>
     */
    inline const Aws::String& GetLicenseManagerReportGeneratorArn() const { return m_licenseManagerReportGeneratorArn; }
    inline bool LicenseManagerReportGeneratorArnHasBeenSet() const { return m_licenseManagerReportGeneratorArnHasBeenSet; }
    template<typename LicenseManagerReportGeneratorArnT = Aws::String>
    void SetLicenseManagerReportGeneratorArn(LicenseManagerReportGeneratorArnT&& value) { m_licenseManagerReportGeneratorArnHasBeenSet = true; m_licenseManagerReportGeneratorArn = std::forward<LicenseManagerReportGeneratorArnT>(value); }
    template<typename LicenseManagerReportGeneratorArnT = Aws::String>
    GetLicenseManagerReportGeneratorRequest& WithLicenseManagerReportGeneratorArn(LicenseManagerReportGeneratorArnT&& value) { SetLicenseManagerReportGeneratorArn(std::forward<LicenseManagerReportGeneratorArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseManagerReportGeneratorArn;
    bool m_licenseManagerReportGeneratorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
