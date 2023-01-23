/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Additional information about a build phase that has an error. You can use
   * this information for troubleshooting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/PhaseContext">AWS
   * API Reference</a></p>
   */
  class PhaseContext
  {
  public:
    AWS_CODEBUILD_API PhaseContext();
    AWS_CODEBUILD_API PhaseContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API PhaseContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

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
    inline PhaseContext& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>The status code for the context of the build phase.</p>
     */
    inline PhaseContext& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>An explanation of the build phase's context. This might include a command ID
     * and an exit code.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>An explanation of the build phase's context. This might include a command ID
     * and an exit code.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>An explanation of the build phase's context. This might include a command ID
     * and an exit code.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>An explanation of the build phase's context. This might include a command ID
     * and an exit code.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>An explanation of the build phase's context. This might include a command ID
     * and an exit code.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>An explanation of the build phase's context. This might include a command ID
     * and an exit code.</p>
     */
    inline PhaseContext& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>An explanation of the build phase's context. This might include a command ID
     * and an exit code.</p>
     */
    inline PhaseContext& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>An explanation of the build phase's context. This might include a command ID
     * and an exit code.</p>
     */
    inline PhaseContext& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
