/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/ValidationExceptionReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/ValidationExceptionField.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Contains information about data passed in to a field during a request that
   * is not valid. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_DEVOPSGURU_API ValidationException();
    AWS_DEVOPSGURU_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A message that describes the validation exception. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> A message that describes the validation exception. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p> A message that describes the validation exception. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p> A message that describes the validation exception. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p> A message that describes the validation exception. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p> A message that describes the validation exception. </p>
     */
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> A message that describes the validation exception. </p>
     */
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p> A message that describes the validation exception. </p>
     */
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p> The reason the validation exception was thrown. </p>
     */
    inline const ValidationExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p> The reason the validation exception was thrown. </p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p> The reason the validation exception was thrown. </p>
     */
    inline void SetReason(const ValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p> The reason the validation exception was thrown. </p>
     */
    inline void SetReason(ValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p> The reason the validation exception was thrown. </p>
     */
    inline ValidationException& WithReason(const ValidationExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p> The reason the validation exception was thrown. </p>
     */
    inline ValidationException& WithReason(ValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}


    
    inline const Aws::Vector<ValidationExceptionField>& GetFields() const{ return m_fields; }

    
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    
    inline void SetFields(const Aws::Vector<ValidationExceptionField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    
    inline void SetFields(Aws::Vector<ValidationExceptionField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    
    inline ValidationException& WithFields(const Aws::Vector<ValidationExceptionField>& value) { SetFields(value); return *this;}

    
    inline ValidationException& WithFields(Aws::Vector<ValidationExceptionField>&& value) { SetFields(std::move(value)); return *this;}

    
    inline ValidationException& AddFields(const ValidationExceptionField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    
    inline ValidationException& AddFields(ValidationExceptionField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<ValidationExceptionField> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
