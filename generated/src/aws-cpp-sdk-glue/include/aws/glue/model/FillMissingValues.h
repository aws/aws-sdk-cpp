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
    AWS_GLUE_API FillMissingValues();
    AWS_GLUE_API FillMissingValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FillMissingValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FillMissingValues& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FillMissingValues& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FillMissingValues& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline FillMissingValues& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}
    inline FillMissingValues& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline FillMissingValues& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline FillMissingValues& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    inline FillMissingValues& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A JSON path to a variable in the data structure for the dataset that is
     * imputed.</p>
     */
    inline const Aws::String& GetImputedPath() const{ return m_imputedPath; }
    inline bool ImputedPathHasBeenSet() const { return m_imputedPathHasBeenSet; }
    inline void SetImputedPath(const Aws::String& value) { m_imputedPathHasBeenSet = true; m_imputedPath = value; }
    inline void SetImputedPath(Aws::String&& value) { m_imputedPathHasBeenSet = true; m_imputedPath = std::move(value); }
    inline void SetImputedPath(const char* value) { m_imputedPathHasBeenSet = true; m_imputedPath.assign(value); }
    inline FillMissingValues& WithImputedPath(const Aws::String& value) { SetImputedPath(value); return *this;}
    inline FillMissingValues& WithImputedPath(Aws::String&& value) { SetImputedPath(std::move(value)); return *this;}
    inline FillMissingValues& WithImputedPath(const char* value) { SetImputedPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON path to a variable in the data structure for the dataset that is
     * filled.</p>
     */
    inline const Aws::String& GetFilledPath() const{ return m_filledPath; }
    inline bool FilledPathHasBeenSet() const { return m_filledPathHasBeenSet; }
    inline void SetFilledPath(const Aws::String& value) { m_filledPathHasBeenSet = true; m_filledPath = value; }
    inline void SetFilledPath(Aws::String&& value) { m_filledPathHasBeenSet = true; m_filledPath = std::move(value); }
    inline void SetFilledPath(const char* value) { m_filledPathHasBeenSet = true; m_filledPath.assign(value); }
    inline FillMissingValues& WithFilledPath(const Aws::String& value) { SetFilledPath(value); return *this;}
    inline FillMissingValues& WithFilledPath(Aws::String&& value) { SetFilledPath(std::move(value)); return *this;}
    inline FillMissingValues& WithFilledPath(const char* value) { SetFilledPath(value); return *this;}
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
