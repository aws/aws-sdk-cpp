/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Contains information about validation failures that occurred during the
   * processing of a program set in a quantum task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/ProgramSetValidationFailure">AWS
   * API Reference</a></p>
   */
  class ProgramSetValidationFailure
  {
  public:
    AWS_BRAKET_API ProgramSetValidationFailure() = default;
    AWS_BRAKET_API ProgramSetValidationFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API ProgramSetValidationFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The index of the program within the program set that failed validation.</p>
     */
    inline long long GetProgramIndex() const { return m_programIndex; }
    inline bool ProgramIndexHasBeenSet() const { return m_programIndexHasBeenSet; }
    inline void SetProgramIndex(long long value) { m_programIndexHasBeenSet = true; m_programIndex = value; }
    inline ProgramSetValidationFailure& WithProgramIndex(long long value) { SetProgramIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the input within the program set that failed validation.</p>
     */
    inline long long GetInputsIndex() const { return m_inputsIndex; }
    inline bool InputsIndexHasBeenSet() const { return m_inputsIndexHasBeenSet; }
    inline void SetInputsIndex(long long value) { m_inputsIndexHasBeenSet = true; m_inputsIndex = value; }
    inline ProgramSetValidationFailure& WithInputsIndex(long long value) { SetInputsIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of error messages describing the validation failures that
     * occurred.</p>
     */
    inline const Aws::Vector<Aws::String>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<Aws::String>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<Aws::String>>
    ProgramSetValidationFailure& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = Aws::String>
    ProgramSetValidationFailure& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}
  private:

    long long m_programIndex{0};
    bool m_programIndexHasBeenSet = false;

    long long m_inputsIndex{0};
    bool m_inputsIndexHasBeenSet = false;

    Aws::Vector<Aws::String> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
