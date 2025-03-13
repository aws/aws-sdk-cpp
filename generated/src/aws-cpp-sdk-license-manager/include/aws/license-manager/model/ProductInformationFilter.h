/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes product information filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ProductInformationFilter">AWS
   * API Reference</a></p>
   */
  class ProductInformationFilter
  {
  public:
    AWS_LICENSEMANAGER_API ProductInformationFilter() = default;
    AWS_LICENSEMANAGER_API ProductInformationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ProductInformationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter name.</p>
     */
    inline const Aws::String& GetProductInformationFilterName() const { return m_productInformationFilterName; }
    inline bool ProductInformationFilterNameHasBeenSet() const { return m_productInformationFilterNameHasBeenSet; }
    template<typename ProductInformationFilterNameT = Aws::String>
    void SetProductInformationFilterName(ProductInformationFilterNameT&& value) { m_productInformationFilterNameHasBeenSet = true; m_productInformationFilterName = std::forward<ProductInformationFilterNameT>(value); }
    template<typename ProductInformationFilterNameT = Aws::String>
    ProductInformationFilter& WithProductInformationFilterName(ProductInformationFilterNameT&& value) { SetProductInformationFilterName(std::forward<ProductInformationFilterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductInformationFilterValue() const { return m_productInformationFilterValue; }
    inline bool ProductInformationFilterValueHasBeenSet() const { return m_productInformationFilterValueHasBeenSet; }
    template<typename ProductInformationFilterValueT = Aws::Vector<Aws::String>>
    void SetProductInformationFilterValue(ProductInformationFilterValueT&& value) { m_productInformationFilterValueHasBeenSet = true; m_productInformationFilterValue = std::forward<ProductInformationFilterValueT>(value); }
    template<typename ProductInformationFilterValueT = Aws::Vector<Aws::String>>
    ProductInformationFilter& WithProductInformationFilterValue(ProductInformationFilterValueT&& value) { SetProductInformationFilterValue(std::forward<ProductInformationFilterValueT>(value)); return *this;}
    template<typename ProductInformationFilterValueT = Aws::String>
    ProductInformationFilter& AddProductInformationFilterValue(ProductInformationFilterValueT&& value) { m_productInformationFilterValueHasBeenSet = true; m_productInformationFilterValue.emplace_back(std::forward<ProductInformationFilterValueT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Logical operator.</p>
     */
    inline const Aws::String& GetProductInformationFilterComparator() const { return m_productInformationFilterComparator; }
    inline bool ProductInformationFilterComparatorHasBeenSet() const { return m_productInformationFilterComparatorHasBeenSet; }
    template<typename ProductInformationFilterComparatorT = Aws::String>
    void SetProductInformationFilterComparator(ProductInformationFilterComparatorT&& value) { m_productInformationFilterComparatorHasBeenSet = true; m_productInformationFilterComparator = std::forward<ProductInformationFilterComparatorT>(value); }
    template<typename ProductInformationFilterComparatorT = Aws::String>
    ProductInformationFilter& WithProductInformationFilterComparator(ProductInformationFilterComparatorT&& value) { SetProductInformationFilterComparator(std::forward<ProductInformationFilterComparatorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productInformationFilterName;
    bool m_productInformationFilterNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_productInformationFilterValue;
    bool m_productInformationFilterValueHasBeenSet = false;

    Aws::String m_productInformationFilterComparator;
    bool m_productInformationFilterComparatorHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
