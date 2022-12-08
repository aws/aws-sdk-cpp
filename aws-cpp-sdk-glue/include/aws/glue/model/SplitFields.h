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
   * <p>Specifies a transform that splits data property keys into two
   * <code>DynamicFrames</code>. The output is a collection of
   * <code>DynamicFrames</code>: one with selected data property keys, and one with
   * the remaining data property keys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SplitFields">AWS
   * API Reference</a></p>
   */
  class SplitFields
  {
  public:
    AWS_GLUE_API SplitFields();
    AWS_GLUE_API SplitFields(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SplitFields& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline SplitFields& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline SplitFields& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline SplitFields& WithName(const char* value) { SetName(value); return *this;}


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
    inline SplitFields& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline SplitFields& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline SplitFields& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline SplitFields& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline SplitFields& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPaths() const{ return m_paths; }

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline void SetPaths(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_pathsHasBeenSet = true; m_paths = value; }

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline void SetPaths(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline SplitFields& WithPaths(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetPaths(value); return *this;}

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline SplitFields& WithPaths(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetPaths(std::move(value)); return *this;}

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline SplitFields& AddPaths(const Aws::Vector<Aws::String>& value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline SplitFields& AddPaths(Aws::Vector<Aws::String>&& value) { m_pathsHasBeenSet = true; m_paths.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_paths;
    bool m_pathsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
