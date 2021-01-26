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
  class AWS_LICENSEMANAGER_API DeleteGrantRequest : public LicenseManagerRequest
  {
  public:
    DeleteGrantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGrant"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline const Aws::String& GetGrantArn() const{ return m_grantArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline bool GrantArnHasBeenSet() const { return m_grantArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline void SetGrantArn(const Aws::String& value) { m_grantArnHasBeenSet = true; m_grantArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline void SetGrantArn(Aws::String&& value) { m_grantArnHasBeenSet = true; m_grantArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline void SetGrantArn(const char* value) { m_grantArnHasBeenSet = true; m_grantArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline DeleteGrantRequest& WithGrantArn(const Aws::String& value) { SetGrantArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline DeleteGrantRequest& WithGrantArn(Aws::String&& value) { SetGrantArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline DeleteGrantRequest& WithGrantArn(const char* value) { SetGrantArn(value); return *this;}


    /**
     * <p>Current version of the grant.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Current version of the grant.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Current version of the grant.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Current version of the grant.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Current version of the grant.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Current version of the grant.</p>
     */
    inline DeleteGrantRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Current version of the grant.</p>
     */
    inline DeleteGrantRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Current version of the grant.</p>
     */
    inline DeleteGrantRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_grantArn;
    bool m_grantArnHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
