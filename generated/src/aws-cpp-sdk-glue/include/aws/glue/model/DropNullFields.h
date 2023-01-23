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
    AWS_GLUE_API DropNullFields();
    AWS_GLUE_API DropNullFields(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DropNullFields& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the transform node.</p>
     */
    inline DropNullFields& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline DropNullFields& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline DropNullFields& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropNullFields& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropNullFields& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropNullFields& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropNullFields& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropNullFields& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>A structure that represents whether certain values are recognized as null
     * values for removal.</p>
     */
    inline const NullCheckBoxList& GetNullCheckBoxList() const{ return m_nullCheckBoxList; }

    /**
     * <p>A structure that represents whether certain values are recognized as null
     * values for removal.</p>
     */
    inline bool NullCheckBoxListHasBeenSet() const { return m_nullCheckBoxListHasBeenSet; }

    /**
     * <p>A structure that represents whether certain values are recognized as null
     * values for removal.</p>
     */
    inline void SetNullCheckBoxList(const NullCheckBoxList& value) { m_nullCheckBoxListHasBeenSet = true; m_nullCheckBoxList = value; }

    /**
     * <p>A structure that represents whether certain values are recognized as null
     * values for removal.</p>
     */
    inline void SetNullCheckBoxList(NullCheckBoxList&& value) { m_nullCheckBoxListHasBeenSet = true; m_nullCheckBoxList = std::move(value); }

    /**
     * <p>A structure that represents whether certain values are recognized as null
     * values for removal.</p>
     */
    inline DropNullFields& WithNullCheckBoxList(const NullCheckBoxList& value) { SetNullCheckBoxList(value); return *this;}

    /**
     * <p>A structure that represents whether certain values are recognized as null
     * values for removal.</p>
     */
    inline DropNullFields& WithNullCheckBoxList(NullCheckBoxList&& value) { SetNullCheckBoxList(std::move(value)); return *this;}


    /**
     * <p>A structure that specifies a list of NullValueField structures that represent
     * a custom null value such as zero or other value being used as a null placeholder
     * unique to the dataset.</p> <p>The <code>DropNullFields</code> transform removes
     * custom null values only if both the value of the null placeholder and the
     * datatype match the data.</p>
     */
    inline const Aws::Vector<NullValueField>& GetNullTextList() const{ return m_nullTextList; }

    /**
     * <p>A structure that specifies a list of NullValueField structures that represent
     * a custom null value such as zero or other value being used as a null placeholder
     * unique to the dataset.</p> <p>The <code>DropNullFields</code> transform removes
     * custom null values only if both the value of the null placeholder and the
     * datatype match the data.</p>
     */
    inline bool NullTextListHasBeenSet() const { return m_nullTextListHasBeenSet; }

    /**
     * <p>A structure that specifies a list of NullValueField structures that represent
     * a custom null value such as zero or other value being used as a null placeholder
     * unique to the dataset.</p> <p>The <code>DropNullFields</code> transform removes
     * custom null values only if both the value of the null placeholder and the
     * datatype match the data.</p>
     */
    inline void SetNullTextList(const Aws::Vector<NullValueField>& value) { m_nullTextListHasBeenSet = true; m_nullTextList = value; }

    /**
     * <p>A structure that specifies a list of NullValueField structures that represent
     * a custom null value such as zero or other value being used as a null placeholder
     * unique to the dataset.</p> <p>The <code>DropNullFields</code> transform removes
     * custom null values only if both the value of the null placeholder and the
     * datatype match the data.</p>
     */
    inline void SetNullTextList(Aws::Vector<NullValueField>&& value) { m_nullTextListHasBeenSet = true; m_nullTextList = std::move(value); }

    /**
     * <p>A structure that specifies a list of NullValueField structures that represent
     * a custom null value such as zero or other value being used as a null placeholder
     * unique to the dataset.</p> <p>The <code>DropNullFields</code> transform removes
     * custom null values only if both the value of the null placeholder and the
     * datatype match the data.</p>
     */
    inline DropNullFields& WithNullTextList(const Aws::Vector<NullValueField>& value) { SetNullTextList(value); return *this;}

    /**
     * <p>A structure that specifies a list of NullValueField structures that represent
     * a custom null value such as zero or other value being used as a null placeholder
     * unique to the dataset.</p> <p>The <code>DropNullFields</code> transform removes
     * custom null values only if both the value of the null placeholder and the
     * datatype match the data.</p>
     */
    inline DropNullFields& WithNullTextList(Aws::Vector<NullValueField>&& value) { SetNullTextList(std::move(value)); return *this;}

    /**
     * <p>A structure that specifies a list of NullValueField structures that represent
     * a custom null value such as zero or other value being used as a null placeholder
     * unique to the dataset.</p> <p>The <code>DropNullFields</code> transform removes
     * custom null values only if both the value of the null placeholder and the
     * datatype match the data.</p>
     */
    inline DropNullFields& AddNullTextList(const NullValueField& value) { m_nullTextListHasBeenSet = true; m_nullTextList.push_back(value); return *this; }

    /**
     * <p>A structure that specifies a list of NullValueField structures that represent
     * a custom null value such as zero or other value being used as a null placeholder
     * unique to the dataset.</p> <p>The <code>DropNullFields</code> transform removes
     * custom null values only if both the value of the null placeholder and the
     * datatype match the data.</p>
     */
    inline DropNullFields& AddNullTextList(NullValueField&& value) { m_nullTextListHasBeenSet = true; m_nullTextList.push_back(std::move(value)); return *this; }

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
