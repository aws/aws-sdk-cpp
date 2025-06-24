/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/ProductCodeListItem.h>
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
    AWS_LICENSEMANAGER_API LicenseConversionContext() = default;
    AWS_LICENSEMANAGER_API LicenseConversionContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseConversionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Usage operation value that corresponds to the license type you are
     * converting your resource from. For more information about which platforms
     * correspond to which usage operation values see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html#billing-info">Sample
     * data: usage operation by platform </a> </p>
     */
    inline const Aws::String& GetUsageOperation() const { return m_usageOperation; }
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }
    template<typename UsageOperationT = Aws::String>
    void SetUsageOperation(UsageOperationT&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::forward<UsageOperationT>(value); }
    template<typename UsageOperationT = Aws::String>
    LicenseConversionContext& WithUsageOperation(UsageOperationT&& value) { SetUsageOperation(std::forward<UsageOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Product codes referred to in the license conversion process.</p>
     */
    inline const Aws::Vector<ProductCodeListItem>& GetProductCodes() const { return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    template<typename ProductCodesT = Aws::Vector<ProductCodeListItem>>
    void SetProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::forward<ProductCodesT>(value); }
    template<typename ProductCodesT = Aws::Vector<ProductCodeListItem>>
    LicenseConversionContext& WithProductCodes(ProductCodesT&& value) { SetProductCodes(std::forward<ProductCodesT>(value)); return *this;}
    template<typename ProductCodesT = ProductCodeListItem>
    LicenseConversionContext& AddProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes.emplace_back(std::forward<ProductCodesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;

    Aws::Vector<ProductCodeListItem> m_productCodes;
    bool m_productCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
