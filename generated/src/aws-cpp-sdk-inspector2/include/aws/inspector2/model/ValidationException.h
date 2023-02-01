/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ValidationExceptionReason.h>
#include <aws/inspector2/model/ValidationExceptionField.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The request has failed validation due to missing required fields or having
   * invalid inputs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_INSPECTOR2_API ValidationException();
    AWS_INSPECTOR2_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fields that failed validation.</p>
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFields() const{ return m_fields; }

    /**
     * <p>The fields that failed validation.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>The fields that failed validation.</p>
     */
    inline void SetFields(const Aws::Vector<ValidationExceptionField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>The fields that failed validation.</p>
     */
    inline void SetFields(Aws::Vector<ValidationExceptionField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>The fields that failed validation.</p>
     */
    inline ValidationException& WithFields(const Aws::Vector<ValidationExceptionField>& value) { SetFields(value); return *this;}

    /**
     * <p>The fields that failed validation.</p>
     */
    inline ValidationException& WithFields(Aws::Vector<ValidationExceptionField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>The fields that failed validation.</p>
     */
    inline ValidationException& AddFields(const ValidationExceptionField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>The fields that failed validation.</p>
     */
    inline ValidationException& AddFields(ValidationExceptionField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The reason for the validation failure.</p>
     */
    inline const ValidationExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the validation failure.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the validation failure.</p>
     */
    inline void SetReason(const ValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the validation failure.</p>
     */
    inline void SetReason(ValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the validation failure.</p>
     */
    inline ValidationException& WithReason(const ValidationExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the validation failure.</p>
     */
    inline ValidationException& WithReason(ValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::Vector<ValidationExceptionField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
