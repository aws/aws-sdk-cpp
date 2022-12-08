/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ValidationError.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for UnprocessableEntityException<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UnprocessableEntityException">AWS
   * API Reference</a></p>
   */
  class UnprocessableEntityException
  {
  public:
    AWS_MEDIALIVE_API UnprocessableEntityException();
    AWS_MEDIALIVE_API UnprocessableEntityException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API UnprocessableEntityException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The error message.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * The error message.
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * The error message.
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * The error message.
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * The error message.
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * The error message.
     */
    inline UnprocessableEntityException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * The error message.
     */
    inline UnprocessableEntityException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * The error message.
     */
    inline UnprocessableEntityException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * A collection of validation error responses.
     */
    inline const Aws::Vector<ValidationError>& GetValidationErrors() const{ return m_validationErrors; }

    /**
     * A collection of validation error responses.
     */
    inline bool ValidationErrorsHasBeenSet() const { return m_validationErrorsHasBeenSet; }

    /**
     * A collection of validation error responses.
     */
    inline void SetValidationErrors(const Aws::Vector<ValidationError>& value) { m_validationErrorsHasBeenSet = true; m_validationErrors = value; }

    /**
     * A collection of validation error responses.
     */
    inline void SetValidationErrors(Aws::Vector<ValidationError>&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors = std::move(value); }

    /**
     * A collection of validation error responses.
     */
    inline UnprocessableEntityException& WithValidationErrors(const Aws::Vector<ValidationError>& value) { SetValidationErrors(value); return *this;}

    /**
     * A collection of validation error responses.
     */
    inline UnprocessableEntityException& WithValidationErrors(Aws::Vector<ValidationError>&& value) { SetValidationErrors(std::move(value)); return *this;}

    /**
     * A collection of validation error responses.
     */
    inline UnprocessableEntityException& AddValidationErrors(const ValidationError& value) { m_validationErrorsHasBeenSet = true; m_validationErrors.push_back(value); return *this; }

    /**
     * A collection of validation error responses.
     */
    inline UnprocessableEntityException& AddValidationErrors(ValidationError&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<ValidationError> m_validationErrors;
    bool m_validationErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
