/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * The product code of the EC2 instance.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ProductCode">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API ProductCode
  {
  public:
    ProductCode();
    ProductCode(Aws::Utils::Json::JsonView jsonValue);
    ProductCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Product code information.
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * Product code information.
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * Product code information.
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * Product code information.
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * Product code information.
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * Product code information.
     */
    inline ProductCode& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * Product code information.
     */
    inline ProductCode& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * Product code information.
     */
    inline ProductCode& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * Product code type.
     */
    inline const Aws::String& GetProductType() const{ return m_productType; }

    /**
     * Product code type.
     */
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    /**
     * Product code type.
     */
    inline void SetProductType(const Aws::String& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    /**
     * Product code type.
     */
    inline void SetProductType(Aws::String&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    /**
     * Product code type.
     */
    inline void SetProductType(const char* value) { m_productTypeHasBeenSet = true; m_productType.assign(value); }

    /**
     * Product code type.
     */
    inline ProductCode& WithProductType(const Aws::String& value) { SetProductType(value); return *this;}

    /**
     * Product code type.
     */
    inline ProductCode& WithProductType(Aws::String&& value) { SetProductType(std::move(value)); return *this;}

    /**
     * Product code type.
     */
    inline ProductCode& WithProductType(const char* value) { SetProductType(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_productType;
    bool m_productTypeHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
