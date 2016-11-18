﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about an error in AWS CodePipeline.</p>
   */
  class AWS_CODEPIPELINE_API ErrorDetails
  {
  public:
    ErrorDetails();
    ErrorDetails(const Aws::Utils::Json::JsonValue& jsonValue);
    ErrorDetails& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The system ID or error number code of the error.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The system ID or error number code of the error.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The system ID or error number code of the error.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The system ID or error number code of the error.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The system ID or error number code of the error.</p>
     */
    inline ErrorDetails& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The system ID or error number code of the error.</p>
     */
    inline ErrorDetails& WithCode(Aws::String&& value) { SetCode(value); return *this;}

    /**
     * <p>The system ID or error number code of the error.</p>
     */
    inline ErrorDetails& WithCode(const char* value) { SetCode(value); return *this;}

    /**
     * <p>The text of the error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The text of the error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The text of the error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The text of the error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The text of the error message.</p>
     */
    inline ErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The text of the error message.</p>
     */
    inline ErrorDetails& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>The text of the error message.</p>
     */
    inline ErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    Aws::String m_code;
    bool m_codeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
