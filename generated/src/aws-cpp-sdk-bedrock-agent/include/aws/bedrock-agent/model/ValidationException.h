/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/ValidationExceptionField.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Input validation failed. Check your request parameters and retry the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_BEDROCKAGENT_API ValidationException();
    AWS_BEDROCKAGENT_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of objects containing fields that caused validation errors and their
     * corresponding validation error messages.</p>
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFieldList() const{ return m_fieldList; }

    /**
     * <p>A list of objects containing fields that caused validation errors and their
     * corresponding validation error messages.</p>
     */
    inline bool FieldListHasBeenSet() const { return m_fieldListHasBeenSet; }

    /**
     * <p>A list of objects containing fields that caused validation errors and their
     * corresponding validation error messages.</p>
     */
    inline void SetFieldList(const Aws::Vector<ValidationExceptionField>& value) { m_fieldListHasBeenSet = true; m_fieldList = value; }

    /**
     * <p>A list of objects containing fields that caused validation errors and their
     * corresponding validation error messages.</p>
     */
    inline void SetFieldList(Aws::Vector<ValidationExceptionField>&& value) { m_fieldListHasBeenSet = true; m_fieldList = std::move(value); }

    /**
     * <p>A list of objects containing fields that caused validation errors and their
     * corresponding validation error messages.</p>
     */
    inline ValidationException& WithFieldList(const Aws::Vector<ValidationExceptionField>& value) { SetFieldList(value); return *this;}

    /**
     * <p>A list of objects containing fields that caused validation errors and their
     * corresponding validation error messages.</p>
     */
    inline ValidationException& WithFieldList(Aws::Vector<ValidationExceptionField>&& value) { SetFieldList(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing fields that caused validation errors and their
     * corresponding validation error messages.</p>
     */
    inline ValidationException& AddFieldList(const ValidationExceptionField& value) { m_fieldListHasBeenSet = true; m_fieldList.push_back(value); return *this; }

    /**
     * <p>A list of objects containing fields that caused validation errors and their
     * corresponding validation error messages.</p>
     */
    inline ValidationException& AddFieldList(ValidationExceptionField&& value) { m_fieldListHasBeenSet = true; m_fieldList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::Vector<ValidationExceptionField> m_fieldList;
    bool m_fieldListHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
