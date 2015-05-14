/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Client
{
enum class CoreErrors;

class AWS_CORE_API AWSErrorType
{

public:
    AWSErrorType(const char* name, bool shouldRetry) :
        m_shouldRetry(shouldRetry), m_name(name) 
    {} // Ideally private, perhaps protected

private:
    bool m_shouldRetry;
    const char* m_name;

public:
    inline bool ShouldRetry() const { return m_shouldRetry; }
    inline const char* GetName() const { return m_name; }
};

template<typename ERROR_TYPE>
class AWSError
{
public: 
    AWSError() : m_isRetryable(false) {}
    AWSError(ERROR_TYPE errorType, Aws::String exceptionName, const Aws::String message, bool isRetryable) :
        m_errorType(errorType), m_exceptionName(exceptionName), m_message(message), m_isRetryable(isRetryable) {}

    AWSError(ERROR_TYPE errorType, bool isRetryable) :
        m_errorType(errorType), m_isRetryable(isRetryable) {}

    //by policy we enforce all clients to contain a CoreErrors alignment for their Errors.
    AWSError(const AWSError<CoreErrors>& rhs) :
        m_errorType(static_cast<ERROR_TYPE>(rhs.GetErrorType())), m_exceptionName(rhs.GetExceptionName()), m_message(rhs.GetMessage()), m_isRetryable(rhs.ShouldRetry())
    {}

    inline const ERROR_TYPE GetErrorType() const { return m_errorType; }
    inline const Aws::String& GetExceptionName() const { return m_exceptionName; }
    inline void SetExceptionName(const Aws::String& exceptionName) { m_exceptionName = exceptionName; }
    inline const Aws::String& GetMessage() const { return m_message; }
    inline void SetMessage(const Aws::String& message) { m_message = message; }
    inline bool ShouldRetry() const { return m_isRetryable; }

private:
    ERROR_TYPE m_errorType;
    Aws::String m_exceptionName;
    Aws::String m_message;
    bool m_isRetryable;
};

} // namespace Client
} // namespace Aws
