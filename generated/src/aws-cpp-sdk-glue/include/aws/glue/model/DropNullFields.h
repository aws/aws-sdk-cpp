/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/NullCheckBoxList.h>
#include <aws/glue/model/NullValueField.h>
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
   * <p>Specifies a transform that removes columns from the dataset if all values in
   * the column are 'null'. By default, Glue Studio will recognize null objects, but
   * some values such as empty strings, strings that are "null", -1 integers or other
   * placeholders such as zeros, are not automatically recognized as
   * nulls.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DropNullFields">AWS
   * API Reference</a></p>
   */
  class DropNullFields
  {
  public:
    AWS_GLUE_API DropNullFields() = default;
    AWS_GLUE_API DropNullFields(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DropNullFields& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DropNullFields& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    DropNullFields& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    DropNullFields& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that represents whether certain values are recognized as null
     * values for removal.</p>
     */
    inline const NullCheckBoxList& GetNullCheckBoxList() const { return m_nullCheckBoxList; }
    inline bool NullCheckBoxListHasBeenSet() const { return m_nullCheckBoxListHasBeenSet; }
    template<typename NullCheckBoxListT = NullCheckBoxList>
    void SetNullCheckBoxList(NullCheckBoxListT&& value) { m_nullCheckBoxListHasBeenSet = true; m_nullCheckBoxList = std::forward<NullCheckBoxListT>(value); }
    template<typename NullCheckBoxListT = NullCheckBoxList>
    DropNullFields& WithNullCheckBoxList(NullCheckBoxListT&& value) { SetNullCheckBoxList(std::forward<NullCheckBoxListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that specifies a list of NullValueField structures that represent
     * a custom null value such as zero or other value being used as a null placeholder
     * unique to the dataset.</p> <p>The <code>DropNullFields</code> transform removes
     * custom null values only if both the value of the null placeholder and the
     * datatype match the data.</p>
     */
    inline const Aws::Vector<NullValueField>& GetNullTextList() const { return m_nullTextList; }
    inline bool NullTextListHasBeenSet() const { return m_nullTextListHasBeenSet; }
    template<typename NullTextListT = Aws::Vector<NullValueField>>
    void SetNullTextList(NullTextListT&& value) { m_nullTextListHasBeenSet = true; m_nullTextList = std::forward<NullTextListT>(value); }
    template<typename NullTextListT = Aws::Vector<NullValueField>>
    DropNullFields& WithNullTextList(NullTextListT&& value) { SetNullTextList(std::forward<NullTextListT>(value)); return *this;}
    template<typename NullTextListT = NullValueField>
    DropNullFields& AddNullTextList(NullTextListT&& value) { m_nullTextListHasBeenSet = true; m_nullTextList.emplace_back(std::forward<NullTextListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    NullCheckBoxList m_nullCheckBoxList;
    bool m_nullCheckBoxListHasBeenSet = false;

    Aws::Vector<NullValueField> m_nullTextList;
    bool m_nullTextListHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
