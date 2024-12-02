/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ProductCodeType.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Information about a single product code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ProductCodeListItem">AWS
   * API Reference</a></p>
   */
  class ProductCodeListItem
  {
  public:
    AWS_IMAGEBUILDER_API ProductCodeListItem();
    AWS_IMAGEBUILDER_API ProductCodeListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ProductCodeListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For Amazon Web Services Marketplace components, this contains the product
     * code ID that can be stamped onto an EC2 AMI to ensure that components are billed
     * correctly. If this property is empty, it might mean that the component is not
     * published.</p>
     */
    inline const Aws::String& GetProductCodeId() const{ return m_productCodeId; }
    inline bool ProductCodeIdHasBeenSet() const { return m_productCodeIdHasBeenSet; }
    inline void SetProductCodeId(const Aws::String& value) { m_productCodeIdHasBeenSet = true; m_productCodeId = value; }
    inline void SetProductCodeId(Aws::String&& value) { m_productCodeIdHasBeenSet = true; m_productCodeId = std::move(value); }
    inline void SetProductCodeId(const char* value) { m_productCodeIdHasBeenSet = true; m_productCodeId.assign(value); }
    inline ProductCodeListItem& WithProductCodeId(const Aws::String& value) { SetProductCodeId(value); return *this;}
    inline ProductCodeListItem& WithProductCodeId(Aws::String&& value) { SetProductCodeId(std::move(value)); return *this;}
    inline ProductCodeListItem& WithProductCodeId(const char* value) { SetProductCodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the product code that's billed. If this property is empty, it
     * might mean that the component is not published.</p>
     */
    inline const ProductCodeType& GetProductCodeType() const{ return m_productCodeType; }
    inline bool ProductCodeTypeHasBeenSet() const { return m_productCodeTypeHasBeenSet; }
    inline void SetProductCodeType(const ProductCodeType& value) { m_productCodeTypeHasBeenSet = true; m_productCodeType = value; }
    inline void SetProductCodeType(ProductCodeType&& value) { m_productCodeTypeHasBeenSet = true; m_productCodeType = std::move(value); }
    inline ProductCodeListItem& WithProductCodeType(const ProductCodeType& value) { SetProductCodeType(value); return *this;}
    inline ProductCodeListItem& WithProductCodeType(ProductCodeType&& value) { SetProductCodeType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_productCodeId;
    bool m_productCodeIdHasBeenSet = false;

    ProductCodeType m_productCodeType;
    bool m_productCodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
