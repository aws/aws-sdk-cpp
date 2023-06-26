/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Information about a license type conversion task.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseConversionContext">AWS
   * API Reference</a></p>
   */
  class LicenseConversionContext
  {
  public:
    AWS_LICENSEMANAGER_API LicenseConversionContext();
    AWS_LICENSEMANAGER_API LicenseConversionContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseConversionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Usage operation value that corresponds to the license type you are
     * converting your resource from. For more information about which platforms
     * correspond to which usage operation values see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html#billing-info">Sample
     * data: usage operation by platform </a> </p>
     */
    inline const Aws::String& GetUsageOperation() const{ return m_usageOperation; }

    /**
     * <p>The Usage operation value that corresponds to the license type you are
     * converting your resource from. For more information about which platforms
     * correspond to which usage operation values see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html#billing-info">Sample
     * data: usage operation by platform </a> </p>
     */
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }

    /**
     * <p>The Usage operation value that corresponds to the license type you are
     * converting your resource from. For more information about which platforms
     * correspond to which usage operation values see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html#billing-info">Sample
     * data: usage operation by platform </a> </p>
     */
    inline void SetUsageOperation(const Aws::String& value) { m_usageOperationHasBeenSet = true; m_usageOperation = value; }

    /**
     * <p>The Usage operation value that corresponds to the license type you are
     * converting your resource from. For more information about which platforms
     * correspond to which usage operation values see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html#billing-info">Sample
     * data: usage operation by platform </a> </p>
     */
    inline void SetUsageOperation(Aws::String&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::move(value); }

    /**
     * <p>The Usage operation value that corresponds to the license type you are
     * converting your resource from. For more information about which platforms
     * correspond to which usage operation values see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html#billing-info">Sample
     * data: usage operation by platform </a> </p>
     */
    inline void SetUsageOperation(const char* value) { m_usageOperationHasBeenSet = true; m_usageOperation.assign(value); }

    /**
     * <p>The Usage operation value that corresponds to the license type you are
     * converting your resource from. For more information about which platforms
     * correspond to which usage operation values see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html#billing-info">Sample
     * data: usage operation by platform </a> </p>
     */
    inline LicenseConversionContext& WithUsageOperation(const Aws::String& value) { SetUsageOperation(value); return *this;}

    /**
     * <p>The Usage operation value that corresponds to the license type you are
     * converting your resource from. For more information about which platforms
     * correspond to which usage operation values see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html#billing-info">Sample
     * data: usage operation by platform </a> </p>
     */
    inline LicenseConversionContext& WithUsageOperation(Aws::String&& value) { SetUsageOperation(std::move(value)); return *this;}

    /**
     * <p>The Usage operation value that corresponds to the license type you are
     * converting your resource from. For more information about which platforms
     * correspond to which usage operation values see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html#billing-info">Sample
     * data: usage operation by platform </a> </p>
     */
    inline LicenseConversionContext& WithUsageOperation(const char* value) { SetUsageOperation(value); return *this;}

  private:

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
