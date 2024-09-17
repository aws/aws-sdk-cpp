/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the product code for the EC2
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ProductCode">AWS
   * API Reference</a></p>
   */
  class ProductCode
  {
  public:
    AWS_GUARDDUTY_API ProductCode();
    AWS_GUARDDUTY_API ProductCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ProductCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The product code information.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline ProductCode& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline ProductCode& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline ProductCode& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code type.</p>
     */
    inline const Aws::String& GetProductType() const{ return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(const Aws::String& value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline void SetProductType(Aws::String&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }
    inline void SetProductType(const char* value) { m_productTypeHasBeenSet = true; m_productType.assign(value); }
    inline ProductCode& WithProductType(const Aws::String& value) { SetProductType(value); return *this;}
    inline ProductCode& WithProductType(Aws::String&& value) { SetProductType(std::move(value)); return *this;}
    inline ProductCode& WithProductType(const char* value) { SetProductType(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_productType;
    bool m_productTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
