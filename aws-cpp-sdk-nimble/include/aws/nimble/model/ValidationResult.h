/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/LaunchProfileValidationState.h>
#include <aws/nimble/model/LaunchProfileValidationStatusCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/LaunchProfileValidationType.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>The launch profile validation result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ValidationResult">AWS
   * API Reference</a></p>
   */
  class ValidationResult
  {
  public:
    AWS_NIMBLESTUDIO_API ValidationResult();
    AWS_NIMBLESTUDIO_API ValidationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API ValidationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state.</p>
     */
    inline const LaunchProfileValidationState& GetState() const{ return m_state; }

    /**
     * <p>The current state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state.</p>
     */
    inline void SetState(const LaunchProfileValidationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state.</p>
     */
    inline void SetState(LaunchProfileValidationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state.</p>
     */
    inline ValidationResult& WithState(const LaunchProfileValidationState& value) { SetState(value); return *this;}

    /**
     * <p>The current state.</p>
     */
    inline ValidationResult& WithState(LaunchProfileValidationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The status code. This will contain the failure reason if the state is
     * <code>VALIDATION_FAILED</code>.</p>
     */
    inline const LaunchProfileValidationStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code. This will contain the failure reason if the state is
     * <code>VALIDATION_FAILED</code>.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The status code. This will contain the failure reason if the state is
     * <code>VALIDATION_FAILED</code>.</p>
     */
    inline void SetStatusCode(const LaunchProfileValidationStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code. This will contain the failure reason if the state is
     * <code>VALIDATION_FAILED</code>.</p>
     */
    inline void SetStatusCode(LaunchProfileValidationStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The status code. This will contain the failure reason if the state is
     * <code>VALIDATION_FAILED</code>.</p>
     */
    inline ValidationResult& WithStatusCode(const LaunchProfileValidationStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code. This will contain the failure reason if the state is
     * <code>VALIDATION_FAILED</code>.</p>
     */
    inline ValidationResult& WithStatusCode(LaunchProfileValidationStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>The status message for the validation result.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for the validation result.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for the validation result.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for the validation result.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for the validation result.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for the validation result.</p>
     */
    inline ValidationResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for the validation result.</p>
     */
    inline ValidationResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for the validation result.</p>
     */
    inline ValidationResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The type of the validation result.</p>
     */
    inline const LaunchProfileValidationType& GetType() const{ return m_type; }

    /**
     * <p>The type of the validation result.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the validation result.</p>
     */
    inline void SetType(const LaunchProfileValidationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the validation result.</p>
     */
    inline void SetType(LaunchProfileValidationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the validation result.</p>
     */
    inline ValidationResult& WithType(const LaunchProfileValidationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the validation result.</p>
     */
    inline ValidationResult& WithType(LaunchProfileValidationType&& value) { SetType(std::move(value)); return *this;}

  private:

    LaunchProfileValidationState m_state;
    bool m_stateHasBeenSet = false;

    LaunchProfileValidationStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    LaunchProfileValidationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
