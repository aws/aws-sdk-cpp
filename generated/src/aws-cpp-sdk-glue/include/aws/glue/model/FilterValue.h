/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/FilterValueType.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Represents a single entry in the list of values for a
   * <code>FilterExpression</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FilterValue">AWS
   * API Reference</a></p>
   */
  class FilterValue
  {
  public:
    AWS_GLUE_API FilterValue();
    AWS_GLUE_API FilterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of filter value.</p>
     */
    inline const FilterValueType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FilterValueType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FilterValueType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FilterValue& WithType(const FilterValueType& value) { SetType(value); return *this;}
    inline FilterValue& WithType(FilterValueType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to be associated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::Vector<Aws::String>& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::Vector<Aws::String>&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline FilterValue& WithValue(const Aws::Vector<Aws::String>& value) { SetValue(value); return *this;}
    inline FilterValue& WithValue(Aws::Vector<Aws::String>&& value) { SetValue(std::move(value)); return *this;}
    inline FilterValue& AddValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }
    inline FilterValue& AddValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value.push_back(std::move(value)); return *this; }
    inline FilterValue& AddValue(const char* value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }
    ///@}
  private:

    FilterValueType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
