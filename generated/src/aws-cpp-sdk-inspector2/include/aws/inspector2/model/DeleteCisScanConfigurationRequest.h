/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class DeleteCisScanConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API DeleteCisScanConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCisScanConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the CIS scan configuration.</p>
     */
    inline const Aws::String& GetScanConfigurationArn() const{ return m_scanConfigurationArn; }

    /**
     * <p>The ARN of the CIS scan configuration.</p>
     */
    inline bool ScanConfigurationArnHasBeenSet() const { return m_scanConfigurationArnHasBeenSet; }

    /**
     * <p>The ARN of the CIS scan configuration.</p>
     */
    inline void SetScanConfigurationArn(const Aws::String& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = value; }

    /**
     * <p>The ARN of the CIS scan configuration.</p>
     */
    inline void SetScanConfigurationArn(Aws::String&& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = std::move(value); }

    /**
     * <p>The ARN of the CIS scan configuration.</p>
     */
    inline void SetScanConfigurationArn(const char* value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn.assign(value); }

    /**
     * <p>The ARN of the CIS scan configuration.</p>
     */
    inline DeleteCisScanConfigurationRequest& WithScanConfigurationArn(const Aws::String& value) { SetScanConfigurationArn(value); return *this;}

    /**
     * <p>The ARN of the CIS scan configuration.</p>
     */
    inline DeleteCisScanConfigurationRequest& WithScanConfigurationArn(Aws::String&& value) { SetScanConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the CIS scan configuration.</p>
     */
    inline DeleteCisScanConfigurationRequest& WithScanConfigurationArn(const char* value) { SetScanConfigurationArn(value); return *this;}

  private:

    Aws::String m_scanConfigurationArn;
    bool m_scanConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
