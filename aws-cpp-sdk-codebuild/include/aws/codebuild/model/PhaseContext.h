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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Additional information about a build phase that has an error, which you can
   * use to help troubleshoot a failed build.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/PhaseContext">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API PhaseContext
  {
  public:
    PhaseContext();
    PhaseContext(const Aws::Utils::Json::JsonValue& jsonValue);
    PhaseContext& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline PhaseContext& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline PhaseContext& WithStatusCode(Aws::String&& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline PhaseContext& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}

    /**
     * <p>An explanation of the build phase's context. This explanation may include a
     * command ID and an exit code.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>An explanation of the build phase's context. This explanation may include a
     * command ID and an exit code.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>An explanation of the build phase's context. This explanation may include a
     * command ID and an exit code.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>An explanation of the build phase's context. This explanation may include a
     * command ID and an exit code.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>An explanation of the build phase's context. This explanation may include a
     * command ID and an exit code.</p>
     */
    inline PhaseContext& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>An explanation of the build phase's context. This explanation may include a
     * command ID and an exit code.</p>
     */
    inline PhaseContext& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>An explanation of the build phase's context. This explanation may include a
     * command ID and an exit code.</p>
     */
    inline PhaseContext& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
