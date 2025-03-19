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
   * <p>Specifies a transform that renames a single data property key.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RenameField">AWS
   * API Reference</a></p>
   */
  class RenameField
  {
  public:
    AWS_GLUE_API RenameField() = default;
    AWS_GLUE_API RenameField(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RenameField& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    RenameField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    RenameField& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    RenameField& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A JSON path to a variable in the data structure for the source data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourcePath() const { return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    template<typename SourcePathT = Aws::Vector<Aws::String>>
    void SetSourcePath(SourcePathT&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::forward<SourcePathT>(value); }
    template<typename SourcePathT = Aws::Vector<Aws::String>>
    RenameField& WithSourcePath(SourcePathT&& value) { SetSourcePath(std::forward<SourcePathT>(value)); return *this;}
    template<typename SourcePathT = Aws::String>
    RenameField& AddSourcePath(SourcePathT&& value) { m_sourcePathHasBeenSet = true; m_sourcePath.emplace_back(std::forward<SourcePathT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A JSON path to a variable in the data structure for the target data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetPath() const { return m_targetPath; }
    inline bool TargetPathHasBeenSet() const { return m_targetPathHasBeenSet; }
    template<typename TargetPathT = Aws::Vector<Aws::String>>
    void SetTargetPath(TargetPathT&& value) { m_targetPathHasBeenSet = true; m_targetPath = std::forward<TargetPathT>(value); }
    template<typename TargetPathT = Aws::Vector<Aws::String>>
    RenameField& WithTargetPath(TargetPathT&& value) { SetTargetPath(std::forward<TargetPathT>(value)); return *this;}
    template<typename TargetPathT = Aws::String>
    RenameField& AddTargetPath(TargetPathT&& value) { m_targetPathHasBeenSet = true; m_targetPath.emplace_back(std::forward<TargetPathT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourcePath;
    bool m_sourcePathHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetPath;
    bool m_targetPathHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
