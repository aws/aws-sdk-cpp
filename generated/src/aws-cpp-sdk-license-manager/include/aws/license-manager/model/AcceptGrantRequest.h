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
  class AcceptGrantRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API AcceptGrantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptGrant"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline AcceptGrantRequest& WithGrantArn(const Aws::String& value) { SetGrantArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline AcceptGrantRequest& WithGrantArn(Aws::String&& value) { SetGrantArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline AcceptGrantRequest& WithGrantArn(const char* value) { SetGrantArn(value); return *this;}

  private:

    Aws::String m_grantArn;
    bool m_grantArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
