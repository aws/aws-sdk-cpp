﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/JobEntityErrorCode.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of a job error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobDetailsError">AWS
   * API Reference</a></p>
   */
  class JobDetailsError
  {
  public:
    AWS_DEADLINE_API JobDetailsError();
    AWS_DEADLINE_API JobDetailsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobDetailsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const JobEntityErrorCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const JobEntityErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(JobEntityErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline JobDetailsError& WithCode(const JobEntityErrorCode& value) { SetCode(value); return *this;}
    inline JobDetailsError& WithCode(JobEntityErrorCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline JobDetailsError& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline JobDetailsError& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline JobDetailsError& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message detailing the error's cause.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline JobDetailsError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline JobDetailsError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline JobDetailsError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    JobEntityErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
