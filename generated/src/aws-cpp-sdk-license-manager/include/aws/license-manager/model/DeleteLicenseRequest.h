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
  class DeleteLicenseRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API DeleteLicenseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLicense"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArnHasBeenSet = true; m_licenseArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const char* value) { m_licenseArnHasBeenSet = true; m_licenseArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline DeleteLicenseRequest& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline DeleteLicenseRequest& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline DeleteLicenseRequest& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}


    /**
     * <p>Current version of the license.</p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p>Current version of the license.</p>
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * <p>Current version of the license.</p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>Current version of the license.</p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * <p>Current version of the license.</p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p>Current version of the license.</p>
     */
    inline DeleteLicenseRequest& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>Current version of the license.</p>
     */
    inline DeleteLicenseRequest& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * <p>Current version of the license.</p>
     */
    inline DeleteLicenseRequest& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}

  private:

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
