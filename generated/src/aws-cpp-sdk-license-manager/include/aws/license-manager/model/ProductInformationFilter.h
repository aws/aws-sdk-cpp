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
    AWS_LICENSEMANAGER_API ProductInformationFilter();
    AWS_LICENSEMANAGER_API ProductInformationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ProductInformationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter name.</p>
     */
    inline const Aws::String& GetProductInformationFilterName() const{ return m_productInformationFilterName; }

    /**
     * <p>Filter name.</p>
     */
    inline bool ProductInformationFilterNameHasBeenSet() const { return m_productInformationFilterNameHasBeenSet; }

    /**
     * <p>Filter name.</p>
     */
    inline void SetProductInformationFilterName(const Aws::String& value) { m_productInformationFilterNameHasBeenSet = true; m_productInformationFilterName = value; }

    /**
     * <p>Filter name.</p>
     */
    inline void SetProductInformationFilterName(Aws::String&& value) { m_productInformationFilterNameHasBeenSet = true; m_productInformationFilterName = std::move(value); }

    /**
     * <p>Filter name.</p>
     */
    inline void SetProductInformationFilterName(const char* value) { m_productInformationFilterNameHasBeenSet = true; m_productInformationFilterName.assign(value); }

    /**
     * <p>Filter name.</p>
     */
    inline ProductInformationFilter& WithProductInformationFilterName(const Aws::String& value) { SetProductInformationFilterName(value); return *this;}

    /**
     * <p>Filter name.</p>
     */
    inline ProductInformationFilter& WithProductInformationFilterName(Aws::String&& value) { SetProductInformationFilterName(std::move(value)); return *this;}

    /**
     * <p>Filter name.</p>
     */
    inline ProductInformationFilter& WithProductInformationFilterName(const char* value) { SetProductInformationFilterName(value); return *this;}


    /**
     * <p>Filter value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductInformationFilterValue() const{ return m_productInformationFilterValue; }

    /**
     * <p>Filter value.</p>
     */
    inline bool ProductInformationFilterValueHasBeenSet() const { return m_productInformationFilterValueHasBeenSet; }

    /**
     * <p>Filter value.</p>
     */
    inline void SetProductInformationFilterValue(const Aws::Vector<Aws::String>& value) { m_productInformationFilterValueHasBeenSet = true; m_productInformationFilterValue = value; }

    /**
     * <p>Filter value.</p>
     */
    inline void SetProductInformationFilterValue(Aws::Vector<Aws::String>&& value) { m_productInformationFilterValueHasBeenSet = true; m_productInformationFilterValue = std::move(value); }

    /**
     * <p>Filter value.</p>
     */
    inline ProductInformationFilter& WithProductInformationFilterValue(const Aws::Vector<Aws::String>& value) { SetProductInformationFilterValue(value); return *this;}

    /**
     * <p>Filter value.</p>
     */
    inline ProductInformationFilter& WithProductInformationFilterValue(Aws::Vector<Aws::String>&& value) { SetProductInformationFilterValue(std::move(value)); return *this;}

    /**
     * <p>Filter value.</p>
     */
    inline ProductInformationFilter& AddProductInformationFilterValue(const Aws::String& value) { m_productInformationFilterValueHasBeenSet = true; m_productInformationFilterValue.push_back(value); return *this; }

    /**
     * <p>Filter value.</p>
     */
    inline ProductInformationFilter& AddProductInformationFilterValue(Aws::String&& value) { m_productInformationFilterValueHasBeenSet = true; m_productInformationFilterValue.push_back(std::move(value)); return *this; }

    /**
     * <p>Filter value.</p>
     */
    inline ProductInformationFilter& AddProductInformationFilterValue(const char* value) { m_productInformationFilterValueHasBeenSet = true; m_productInformationFilterValue.push_back(value); return *this; }


    /**
     * <p>Logical operator.</p>
     */
    inline const Aws::String& GetProductInformationFilterComparator() const{ return m_productInformationFilterComparator; }

    /**
     * <p>Logical operator.</p>
     */
    inline bool ProductInformationFilterComparatorHasBeenSet() const { return m_productInformationFilterComparatorHasBeenSet; }

    /**
     * <p>Logical operator.</p>
     */
    inline void SetProductInformationFilterComparator(const Aws::String& value) { m_productInformationFilterComparatorHasBeenSet = true; m_productInformationFilterComparator = value; }

    /**
     * <p>Logical operator.</p>
     */
    inline void SetProductInformationFilterComparator(Aws::String&& value) { m_productInformationFilterComparatorHasBeenSet = true; m_productInformationFilterComparator = std::move(value); }

    /**
     * <p>Logical operator.</p>
     */
    inline void SetProductInformationFilterComparator(const char* value) { m_productInformationFilterComparatorHasBeenSet = true; m_productInformationFilterComparator.assign(value); }

    /**
     * <p>Logical operator.</p>
     */
    inline ProductInformationFilter& WithProductInformationFilterComparator(const Aws::String& value) { SetProductInformationFilterComparator(value); return *this;}

    /**
     * <p>Logical operator.</p>
     */
    inline ProductInformationFilter& WithProductInformationFilterComparator(Aws::String&& value) { SetProductInformationFilterComparator(std::move(value)); return *this;}

    /**
     * <p>Logical operator.</p>
     */
    inline ProductInformationFilter& WithProductInformationFilterComparator(const char* value) { SetProductInformationFilterComparator(value); return *this;}

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
