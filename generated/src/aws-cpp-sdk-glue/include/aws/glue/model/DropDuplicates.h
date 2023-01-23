/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies a transform that removes rows of repeating data from a data set.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DropDuplicates">AWS
   * API Reference</a></p>
   */
  class DropDuplicates
  {
  public:
    AWS_GLUE_API DropDuplicates();
    AWS_GLUE_API DropDuplicates(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DropDuplicates& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline DropDuplicates& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline DropDuplicates& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline DropDuplicates& WithName(const char* value) { SetName(value); return *this;}


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
    inline DropDuplicates& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropDuplicates& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropDuplicates& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropDuplicates& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropDuplicates& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>The name of the columns to be merged or removed if repeating.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetColumns() const{ return m_columns; }

    /**
     * <p>The name of the columns to be merged or removed if repeating.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>The name of the columns to be merged or removed if repeating.</p>
     */
    inline void SetColumns(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>The name of the columns to be merged or removed if repeating.</p>
     */
    inline void SetColumns(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>The name of the columns to be merged or removed if repeating.</p>
     */
    inline DropDuplicates& WithColumns(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetColumns(value); return *this;}

    /**
     * <p>The name of the columns to be merged or removed if repeating.</p>
     */
    inline DropDuplicates& WithColumns(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>The name of the columns to be merged or removed if repeating.</p>
     */
    inline DropDuplicates& AddColumns(const Aws::Vector<Aws::String>& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>The name of the columns to be merged or removed if repeating.</p>
     */
    inline DropDuplicates& AddColumns(Aws::Vector<Aws::String>&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
