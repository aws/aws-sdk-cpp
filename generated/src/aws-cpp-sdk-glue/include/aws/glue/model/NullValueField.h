/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Datatype.h>
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
   * <p>Represents a custom null value such as a zeros or other value being used as a
   * null placeholder unique to the dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/NullValueField">AWS
   * API Reference</a></p>
   */
  class NullValueField
  {
  public:
    AWS_GLUE_API NullValueField() = default;
    AWS_GLUE_API NullValueField(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API NullValueField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the null placeholder.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    NullValueField& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datatype of the value.</p>
     */
    inline const Datatype& GetDatatype() const { return m_datatype; }
    inline bool DatatypeHasBeenSet() const { return m_datatypeHasBeenSet; }
    template<typename DatatypeT = Datatype>
    void SetDatatype(DatatypeT&& value) { m_datatypeHasBeenSet = true; m_datatype = std::forward<DatatypeT>(value); }
    template<typename DatatypeT = Datatype>
    NullValueField& WithDatatype(DatatypeT&& value) { SetDatatype(std::forward<DatatypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Datatype m_datatype;
    bool m_datatypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
