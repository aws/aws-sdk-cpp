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
    AWS_LICENSEMANAGER_API GetLicenseConversionTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLicenseConversionTask"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID of the license type conversion task to retrieve information on.</p>
     */
    inline const Aws::String& GetLicenseConversionTaskId() const{ return m_licenseConversionTaskId; }

    /**
     * <p>ID of the license type conversion task to retrieve information on.</p>
     */
    inline bool LicenseConversionTaskIdHasBeenSet() const { return m_licenseConversionTaskIdHasBeenSet; }

    /**
     * <p>ID of the license type conversion task to retrieve information on.</p>
     */
    inline void SetLicenseConversionTaskId(const Aws::String& value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId = value; }

    /**
     * <p>ID of the license type conversion task to retrieve information on.</p>
     */
    inline void SetLicenseConversionTaskId(Aws::String&& value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId = std::move(value); }

    /**
     * <p>ID of the license type conversion task to retrieve information on.</p>
     */
    inline void SetLicenseConversionTaskId(const char* value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId.assign(value); }

    /**
     * <p>ID of the license type conversion task to retrieve information on.</p>
     */
    inline GetLicenseConversionTaskRequest& WithLicenseConversionTaskId(const Aws::String& value) { SetLicenseConversionTaskId(value); return *this;}

    /**
     * <p>ID of the license type conversion task to retrieve information on.</p>
     */
    inline GetLicenseConversionTaskRequest& WithLicenseConversionTaskId(Aws::String&& value) { SetLicenseConversionTaskId(std::move(value)); return *this;}

    /**
     * <p>ID of the license type conversion task to retrieve information on.</p>
     */
    inline GetLicenseConversionTaskRequest& WithLicenseConversionTaskId(const char* value) { SetLicenseConversionTaskId(value); return *this;}

  private:

    Aws::String m_licenseConversionTaskId;
    bool m_licenseConversionTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
