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

  class AWS_GUARDDUTY_API ProductCode
  {
  public:
    ProductCode();
    ProductCode(Aws::Utils::Json::JsonView jsonValue);
    ProductCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Product code information.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>Product code information.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>Product code information.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>Product code information.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>Product code information.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>Product code information.</p>
     */
    inline ProductCode& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>Product code information.</p>
     */
    inline ProductCode& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>Product code information.</p>
     */
    inline ProductCode& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Product code type.</p>
     */
    inline const Aws::String& GetProductType() const{ return m_productType; }

    /**
     * <p>Product code type.</p>
     */
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    /**
     * <p>Product code type.</p>
     */
    inline void SetProductType(const Aws::String& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    /**
     * <p>Product code type.</p>
     */
    inline void SetProductType(Aws::String&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    /**
     * <p>Product code type.</p>
     */
    inline void SetProductType(const char* value) { m_productTypeHasBeenSet = true; m_productType.assign(value); }

    /**
     * <p>Product code type.</p>
     */
    inline ProductCode& WithProductType(const Aws::String& value) { SetProductType(value); return *this;}

    /**
     * <p>Product code type.</p>
     */
    inline ProductCode& WithProductType(Aws::String&& value) { SetProductType(std::move(value)); return *this;}

    /**
     * <p>Product code type.</p>
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
