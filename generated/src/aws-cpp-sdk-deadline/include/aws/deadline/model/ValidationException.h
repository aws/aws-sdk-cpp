/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/ValidationExceptionReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/ValidationExceptionField.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The request isn't valid. This can occur if your request contains malformed
   * JSON or unsupported characters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_DEADLINE_API ValidationException();
    AWS_DEADLINE_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the request failed validation.</p>
     */
    inline const ValidationExceptionReason& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const ValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(ValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline ValidationException& WithReason(const ValidationExceptionReason& value) { SetReason(value); return *this;}
    inline ValidationException& WithReason(ValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of fields that failed validation.</p>
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFieldList() const{ return m_fieldList; }
    inline bool FieldListHasBeenSet() const { return m_fieldListHasBeenSet; }
    inline void SetFieldList(const Aws::Vector<ValidationExceptionField>& value) { m_fieldListHasBeenSet = true; m_fieldList = value; }
    inline void SetFieldList(Aws::Vector<ValidationExceptionField>&& value) { m_fieldListHasBeenSet = true; m_fieldList = std::move(value); }
    inline ValidationException& WithFieldList(const Aws::Vector<ValidationExceptionField>& value) { SetFieldList(value); return *this;}
    inline ValidationException& WithFieldList(Aws::Vector<ValidationExceptionField>&& value) { SetFieldList(std::move(value)); return *this;}
    inline ValidationException& AddFieldList(const ValidationExceptionField& value) { m_fieldListHasBeenSet = true; m_fieldList.push_back(value); return *this; }
    inline ValidationException& AddFieldList(ValidationExceptionField&& value) { m_fieldListHasBeenSet = true; m_fieldList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the resources in use when the exception was thrown.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline ValidationException& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}
    inline ValidationException& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}
    inline ValidationException& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
    inline ValidationException& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline ValidationException& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline ValidationException& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }
    inline ValidationException& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline ValidationException& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline ValidationException& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<ValidationExceptionField> m_fieldList;
    bool m_fieldListHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
