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
    AWS_GLUE_API SplitFields() = default;
    AWS_GLUE_API SplitFields(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SplitFields& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    SplitFields& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    SplitFields& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    SplitFields& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPaths() const { return m_paths; }
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
    template<typename PathsT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths = std::forward<PathsT>(value); }
    template<typename PathsT = Aws::Vector<Aws::Vector<Aws::String>>>
    SplitFields& WithPaths(PathsT&& value) { SetPaths(std::forward<PathsT>(value)); return *this;}
    template<typename PathsT = Aws::Vector<Aws::String>>
    SplitFields& AddPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths.emplace_back(std::forward<PathsT>(value)); return *this; }
    ///@}
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
