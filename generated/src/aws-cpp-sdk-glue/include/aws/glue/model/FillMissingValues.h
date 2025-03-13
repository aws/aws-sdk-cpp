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
   * <p>Specifies a transform that locates records in the dataset that have missing
   * values and adds a new field with a value determined by imputation. The input
   * data set is used to train the machine learning model that determines what the
   * missing value should be.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FillMissingValues">AWS
   * API Reference</a></p>
   */
  class FillMissingValues
  {
  public:
    AWS_GLUE_API FillMissingValues() = default;
    AWS_GLUE_API FillMissingValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FillMissingValues& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    FillMissingValues& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    FillMissingValues& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    FillMissingValues& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A JSON path to a variable in the data structure for the dataset that is
     * imputed.</p>
     */
    inline const Aws::String& GetImputedPath() const { return m_imputedPath; }
    inline bool ImputedPathHasBeenSet() const { return m_imputedPathHasBeenSet; }
    template<typename ImputedPathT = Aws::String>
    void SetImputedPath(ImputedPathT&& value) { m_imputedPathHasBeenSet = true; m_imputedPath = std::forward<ImputedPathT>(value); }
    template<typename ImputedPathT = Aws::String>
    FillMissingValues& WithImputedPath(ImputedPathT&& value) { SetImputedPath(std::forward<ImputedPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON path to a variable in the data structure for the dataset that is
     * filled.</p>
     */
    inline const Aws::String& GetFilledPath() const { return m_filledPath; }
    inline bool FilledPathHasBeenSet() const { return m_filledPathHasBeenSet; }
    template<typename FilledPathT = Aws::String>
    void SetFilledPath(FilledPathT&& value) { m_filledPathHasBeenSet = true; m_filledPath = std::forward<FilledPathT>(value); }
    template<typename FilledPathT = Aws::String>
    FillMissingValues& WithFilledPath(FilledPathT&& value) { SetFilledPath(std::forward<FilledPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_imputedPath;
    bool m_imputedPathHasBeenSet = false;

    Aws::String m_filledPath;
    bool m_filledPathHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
