/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>The key-value pair that represents the attribute by which the
   * <code>BillingGroupCostReportResults</code> are grouped. For example, if you want
   * a service-level breakdown for Amazon Simple Storage Service (Amazon S3) of the
   * billing group, the attribute will be a key-value pair of
   * <code>"PRODUCT_NAME"</code> and <code>"S3"</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/Attribute">AWS
   * API Reference</a></p>
   */
  class Attribute
  {
  public:
    AWS_BILLINGCONDUCTOR_API Attribute();
    AWS_BILLINGCONDUCTOR_API Attribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Attribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key in a key-value pair that describes the margin summary.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key in a key-value pair that describes the margin summary.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key in a key-value pair that describes the margin summary.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key in a key-value pair that describes the margin summary.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key in a key-value pair that describes the margin summary.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key in a key-value pair that describes the margin summary.</p>
     */
    inline Attribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key in a key-value pair that describes the margin summary.</p>
     */
    inline Attribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key in a key-value pair that describes the margin summary.</p>
     */
    inline Attribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value in a key-value pair that describes the margin summary.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value in a key-value pair that describes the margin summary.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value in a key-value pair that describes the margin summary.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value in a key-value pair that describes the margin summary.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value in a key-value pair that describes the margin summary.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value in a key-value pair that describes the margin summary.</p>
     */
    inline Attribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value in a key-value pair that describes the margin summary.</p>
     */
    inline Attribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value in a key-value pair that describes the margin summary.</p>
     */
    inline Attribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
