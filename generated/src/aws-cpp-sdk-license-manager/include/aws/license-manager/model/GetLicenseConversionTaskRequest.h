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
  class GetLicenseConversionTaskRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API GetLicenseConversionTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLicenseConversionTask"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ID of the license type conversion task to retrieve information on.</p>
     */
    inline const Aws::String& GetLicenseConversionTaskId() const { return m_licenseConversionTaskId; }
    inline bool LicenseConversionTaskIdHasBeenSet() const { return m_licenseConversionTaskIdHasBeenSet; }
    template<typename LicenseConversionTaskIdT = Aws::String>
    void SetLicenseConversionTaskId(LicenseConversionTaskIdT&& value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId = std::forward<LicenseConversionTaskIdT>(value); }
    template<typename LicenseConversionTaskIdT = Aws::String>
    GetLicenseConversionTaskRequest& WithLicenseConversionTaskId(LicenseConversionTaskIdT&& value) { SetLicenseConversionTaskId(std::forward<LicenseConversionTaskIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseConversionTaskId;
    bool m_licenseConversionTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
