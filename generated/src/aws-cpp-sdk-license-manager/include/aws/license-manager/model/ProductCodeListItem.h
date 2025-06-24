/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/ProductCodeType.h>
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
   * <p>A list item that contains a product code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ProductCodeListItem">AWS
   * API Reference</a></p>
   */
  class ProductCodeListItem
  {
  public:
    AWS_LICENSEMANAGER_API ProductCodeListItem() = default;
    AWS_LICENSEMANAGER_API ProductCodeListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ProductCodeListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The product code ID</p>
     */
    inline const Aws::String& GetProductCodeId() const { return m_productCodeId; }
    inline bool ProductCodeIdHasBeenSet() const { return m_productCodeIdHasBeenSet; }
    template<typename ProductCodeIdT = Aws::String>
    void SetProductCodeId(ProductCodeIdT&& value) { m_productCodeIdHasBeenSet = true; m_productCodeId = std::forward<ProductCodeIdT>(value); }
    template<typename ProductCodeIdT = Aws::String>
    ProductCodeListItem& WithProductCodeId(ProductCodeIdT&& value) { SetProductCodeId(std::forward<ProductCodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code type</p>
     */
    inline ProductCodeType GetProductCodeType() const { return m_productCodeType; }
    inline bool ProductCodeTypeHasBeenSet() const { return m_productCodeTypeHasBeenSet; }
    inline void SetProductCodeType(ProductCodeType value) { m_productCodeTypeHasBeenSet = true; m_productCodeType = value; }
    inline ProductCodeListItem& WithProductCodeType(ProductCodeType value) { SetProductCodeType(value); return *this;}
    ///@}
  private:

    Aws::String m_productCodeId;
    bool m_productCodeIdHasBeenSet = false;

    ProductCodeType m_productCodeType{ProductCodeType::NOT_SET};
    bool m_productCodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
