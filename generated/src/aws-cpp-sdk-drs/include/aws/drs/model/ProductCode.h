/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/ProductCodeMode.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Properties of a product code associated with a volume.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ProductCode">AWS API
   * Reference</a></p>
   */
  class ProductCode
  {
  public:
    AWS_DRS_API ProductCode() = default;
    AWS_DRS_API ProductCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API ProductCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Id of a product code associated with a volume.</p>
     */
    inline const Aws::String& GetProductCodeId() const { return m_productCodeId; }
    inline bool ProductCodeIdHasBeenSet() const { return m_productCodeIdHasBeenSet; }
    template<typename ProductCodeIdT = Aws::String>
    void SetProductCodeId(ProductCodeIdT&& value) { m_productCodeIdHasBeenSet = true; m_productCodeId = std::forward<ProductCodeIdT>(value); }
    template<typename ProductCodeIdT = Aws::String>
    ProductCode& WithProductCodeId(ProductCodeIdT&& value) { SetProductCodeId(std::forward<ProductCodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Mode of a product code associated with a volume.</p>
     */
    inline ProductCodeMode GetProductCodeMode() const { return m_productCodeMode; }
    inline bool ProductCodeModeHasBeenSet() const { return m_productCodeModeHasBeenSet; }
    inline void SetProductCodeMode(ProductCodeMode value) { m_productCodeModeHasBeenSet = true; m_productCodeMode = value; }
    inline ProductCode& WithProductCodeMode(ProductCodeMode value) { SetProductCodeMode(value); return *this;}
    ///@}
  private:

    Aws::String m_productCodeId;
    bool m_productCodeIdHasBeenSet = false;

    ProductCodeMode m_productCodeMode{ProductCodeMode::NOT_SET};
    bool m_productCodeModeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
