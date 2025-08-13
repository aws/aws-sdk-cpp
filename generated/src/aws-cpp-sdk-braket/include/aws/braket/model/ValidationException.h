/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/ValidationExceptionReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/ProgramSetValidationFailure.h>
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
   * <p>The input request failed to satisfy constraints expected by Amazon
   * Braket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_BRAKET_API ValidationException() = default;
    AWS_BRAKET_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ValidationException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for validation failure.</p>
     */
    inline ValidationExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(ValidationExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline ValidationException& WithReason(ValidationExceptionReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation failures in the program set submitted in the request.</p>
     */
    inline const Aws::Vector<ProgramSetValidationFailure>& GetProgramSetValidationFailures() const { return m_programSetValidationFailures; }
    inline bool ProgramSetValidationFailuresHasBeenSet() const { return m_programSetValidationFailuresHasBeenSet; }
    template<typename ProgramSetValidationFailuresT = Aws::Vector<ProgramSetValidationFailure>>
    void SetProgramSetValidationFailures(ProgramSetValidationFailuresT&& value) { m_programSetValidationFailuresHasBeenSet = true; m_programSetValidationFailures = std::forward<ProgramSetValidationFailuresT>(value); }
    template<typename ProgramSetValidationFailuresT = Aws::Vector<ProgramSetValidationFailure>>
    ValidationException& WithProgramSetValidationFailures(ProgramSetValidationFailuresT&& value) { SetProgramSetValidationFailures(std::forward<ProgramSetValidationFailuresT>(value)); return *this;}
    template<typename ProgramSetValidationFailuresT = ProgramSetValidationFailure>
    ValidationException& AddProgramSetValidationFailures(ProgramSetValidationFailuresT&& value) { m_programSetValidationFailuresHasBeenSet = true; m_programSetValidationFailures.emplace_back(std::forward<ProgramSetValidationFailuresT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason{ValidationExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::Vector<ProgramSetValidationFailure> m_programSetValidationFailures;
    bool m_programSetValidationFailuresHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
