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
    AWS_GLUE_API RenameField();
    AWS_GLUE_API RenameField(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RenameField& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline RenameField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline RenameField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline RenameField& WithName(const char* value) { SetName(value); return *this;}


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
    inline RenameField& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline RenameField& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline RenameField& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline RenameField& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline RenameField& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>A JSON path to a variable in the data structure for the source data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourcePath() const{ return m_sourcePath; }

    /**
     * <p>A JSON path to a variable in the data structure for the source data.</p>
     */
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }

    /**
     * <p>A JSON path to a variable in the data structure for the source data.</p>
     */
    inline void SetSourcePath(const Aws::Vector<Aws::String>& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * <p>A JSON path to a variable in the data structure for the source data.</p>
     */
    inline void SetSourcePath(Aws::Vector<Aws::String>&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }

    /**
     * <p>A JSON path to a variable in the data structure for the source data.</p>
     */
    inline RenameField& WithSourcePath(const Aws::Vector<Aws::String>& value) { SetSourcePath(value); return *this;}

    /**
     * <p>A JSON path to a variable in the data structure for the source data.</p>
     */
    inline RenameField& WithSourcePath(Aws::Vector<Aws::String>&& value) { SetSourcePath(std::move(value)); return *this;}

    /**
     * <p>A JSON path to a variable in the data structure for the source data.</p>
     */
    inline RenameField& AddSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath.push_back(value); return *this; }

    /**
     * <p>A JSON path to a variable in the data structure for the source data.</p>
     */
    inline RenameField& AddSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath.push_back(std::move(value)); return *this; }

    /**
     * <p>A JSON path to a variable in the data structure for the source data.</p>
     */
    inline RenameField& AddSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.push_back(value); return *this; }


    /**
     * <p>A JSON path to a variable in the data structure for the target data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetPath() const{ return m_targetPath; }

    /**
     * <p>A JSON path to a variable in the data structure for the target data.</p>
     */
    inline bool TargetPathHasBeenSet() const { return m_targetPathHasBeenSet; }

    /**
     * <p>A JSON path to a variable in the data structure for the target data.</p>
     */
    inline void SetTargetPath(const Aws::Vector<Aws::String>& value) { m_targetPathHasBeenSet = true; m_targetPath = value; }

    /**
     * <p>A JSON path to a variable in the data structure for the target data.</p>
     */
    inline void SetTargetPath(Aws::Vector<Aws::String>&& value) { m_targetPathHasBeenSet = true; m_targetPath = std::move(value); }

    /**
     * <p>A JSON path to a variable in the data structure for the target data.</p>
     */
    inline RenameField& WithTargetPath(const Aws::Vector<Aws::String>& value) { SetTargetPath(value); return *this;}

    /**
     * <p>A JSON path to a variable in the data structure for the target data.</p>
     */
    inline RenameField& WithTargetPath(Aws::Vector<Aws::String>&& value) { SetTargetPath(std::move(value)); return *this;}

    /**
     * <p>A JSON path to a variable in the data structure for the target data.</p>
     */
    inline RenameField& AddTargetPath(const Aws::String& value) { m_targetPathHasBeenSet = true; m_targetPath.push_back(value); return *this; }

    /**
     * <p>A JSON path to a variable in the data structure for the target data.</p>
     */
    inline RenameField& AddTargetPath(Aws::String&& value) { m_targetPathHasBeenSet = true; m_targetPath.push_back(std::move(value)); return *this; }

    /**
     * <p>A JSON path to a variable in the data structure for the target data.</p>
     */
    inline RenameField& AddTargetPath(const char* value) { m_targetPathHasBeenSet = true; m_targetPath.push_back(value); return *this; }

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
