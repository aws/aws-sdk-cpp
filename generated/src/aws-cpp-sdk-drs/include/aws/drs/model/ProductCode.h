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
    AWS_DRS_API ProductCode();
    AWS_DRS_API ProductCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API ProductCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Id of a product code associated with a volume.</p>
     */
    inline const Aws::String& GetProductCodeId() const{ return m_productCodeId; }

    /**
     * <p>Id of a product code associated with a volume.</p>
     */
    inline bool ProductCodeIdHasBeenSet() const { return m_productCodeIdHasBeenSet; }

    /**
     * <p>Id of a product code associated with a volume.</p>
     */
    inline void SetProductCodeId(const Aws::String& value) { m_productCodeIdHasBeenSet = true; m_productCodeId = value; }

    /**
     * <p>Id of a product code associated with a volume.</p>
     */
    inline void SetProductCodeId(Aws::String&& value) { m_productCodeIdHasBeenSet = true; m_productCodeId = std::move(value); }

    /**
     * <p>Id of a product code associated with a volume.</p>
     */
    inline void SetProductCodeId(const char* value) { m_productCodeIdHasBeenSet = true; m_productCodeId.assign(value); }

    /**
     * <p>Id of a product code associated with a volume.</p>
     */
    inline ProductCode& WithProductCodeId(const Aws::String& value) { SetProductCodeId(value); return *this;}

    /**
     * <p>Id of a product code associated with a volume.</p>
     */
    inline ProductCode& WithProductCodeId(Aws::String&& value) { SetProductCodeId(std::move(value)); return *this;}

    /**
     * <p>Id of a product code associated with a volume.</p>
     */
    inline ProductCode& WithProductCodeId(const char* value) { SetProductCodeId(value); return *this;}


    /**
     * <p>Mode of a product code associated with a volume.</p>
     */
    inline const ProductCodeMode& GetProductCodeMode() const{ return m_productCodeMode; }

    /**
     * <p>Mode of a product code associated with a volume.</p>
     */
    inline bool ProductCodeModeHasBeenSet() const { return m_productCodeModeHasBeenSet; }

    /**
     * <p>Mode of a product code associated with a volume.</p>
     */
    inline void SetProductCodeMode(const ProductCodeMode& value) { m_productCodeModeHasBeenSet = true; m_productCodeMode = value; }

    /**
     * <p>Mode of a product code associated with a volume.</p>
     */
    inline void SetProductCodeMode(ProductCodeMode&& value) { m_productCodeModeHasBeenSet = true; m_productCodeMode = std::move(value); }

    /**
     * <p>Mode of a product code associated with a volume.</p>
     */
    inline ProductCode& WithProductCodeMode(const ProductCodeMode& value) { SetProductCodeMode(value); return *this;}

    /**
     * <p>Mode of a product code associated with a volume.</p>
     */
    inline ProductCode& WithProductCodeMode(ProductCodeMode&& value) { SetProductCodeMode(std::move(value)); return *this;}

  private:

    Aws::String m_productCodeId;
    bool m_productCodeIdHasBeenSet = false;

    ProductCodeMode m_productCodeMode;
    bool m_productCodeModeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
