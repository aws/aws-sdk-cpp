/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/JobErrorCode.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains the details about the policy generation error.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/JobError">AWS
   * API Reference</a></p>
   */
  class JobError
  {
  public:
    AWS_ACCESSANALYZER_API JobError();
    AWS_ACCESSANALYZER_API JobError(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API JobError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job error code.</p>
     */
    inline const JobErrorCode& GetCode() const{ return m_code; }

    /**
     * <p>The job error code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The job error code.</p>
     */
    inline void SetCode(const JobErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The job error code.</p>
     */
    inline void SetCode(JobErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The job error code.</p>
     */
    inline JobError& WithCode(const JobErrorCode& value) { SetCode(value); return *this;}

    /**
     * <p>The job error code.</p>
     */
    inline JobError& WithCode(JobErrorCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>Specific information about the error. For example, which service quota was
     * exceeded or which resource was not found.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Specific information about the error. For example, which service quota was
     * exceeded or which resource was not found.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Specific information about the error. For example, which service quota was
     * exceeded or which resource was not found.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Specific information about the error. For example, which service quota was
     * exceeded or which resource was not found.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Specific information about the error. For example, which service quota was
     * exceeded or which resource was not found.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Specific information about the error. For example, which service quota was
     * exceeded or which resource was not found.</p>
     */
    inline JobError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Specific information about the error. For example, which service quota was
     * exceeded or which resource was not found.</p>
     */
    inline JobError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Specific information about the error. For example, which service quota was
     * exceeded or which resource was not found.</p>
     */
    inline JobError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    JobErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
