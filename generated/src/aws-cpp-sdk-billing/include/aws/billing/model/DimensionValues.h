/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/Dimension.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Billing
{
namespace Model
{

  /**
   * <p> The metadata that you can use to filter and group your results.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/DimensionValues">AWS
   * API Reference</a></p>
   */
  class DimensionValues
  {
  public:
    AWS_BILLING_API DimensionValues();
    AWS_BILLING_API DimensionValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API DimensionValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The names of the metadata types that you can use to filter and group your
     * results. </p>
     */
    inline const Dimension& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Dimension& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Dimension&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline DimensionValues& WithKey(const Dimension& value) { SetKey(value); return *this;}
    inline DimensionValues& WithKey(Dimension&& value) { SetKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The metadata values that you can use to filter and group your results. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline DimensionValues& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline DimensionValues& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline DimensionValues& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline DimensionValues& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline DimensionValues& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    Dimension m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
