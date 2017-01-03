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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class AWS_SFN_API StopExecutionRequest : public SFNRequest
  {
  public:
    StopExecutionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to stop.</p>
     */
    inline const Aws::String& GetExecutionArn() const{ return m_executionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to stop.</p>
     */
    inline void SetExecutionArn(const Aws::String& value) { m_executionArnHasBeenSet = true; m_executionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to stop.</p>
     */
    inline void SetExecutionArn(Aws::String&& value) { m_executionArnHasBeenSet = true; m_executionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to stop.</p>
     */
    inline void SetExecutionArn(const char* value) { m_executionArnHasBeenSet = true; m_executionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to stop.</p>
     */
    inline StopExecutionRequest& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to stop.</p>
     */
    inline StopExecutionRequest& WithExecutionArn(Aws::String&& value) { SetExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to stop.</p>
     */
    inline StopExecutionRequest& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}

    /**
     * <p>An arbitrary error code that identifies the cause of the termination.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>An arbitrary error code that identifies the cause of the termination.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An arbitrary error code that identifies the cause of the termination.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An arbitrary error code that identifies the cause of the termination.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>An arbitrary error code that identifies the cause of the termination.</p>
     */
    inline StopExecutionRequest& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>An arbitrary error code that identifies the cause of the termination.</p>
     */
    inline StopExecutionRequest& WithError(Aws::String&& value) { SetError(value); return *this;}

    /**
     * <p>An arbitrary error code that identifies the cause of the termination.</p>
     */
    inline StopExecutionRequest& WithError(const char* value) { SetError(value); return *this;}

    /**
     * <p>A more detailed explanation of the cause of the termination.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }

    /**
     * <p>A more detailed explanation of the cause of the termination.</p>
     */
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>A more detailed explanation of the cause of the termination.</p>
     */
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>A more detailed explanation of the cause of the termination.</p>
     */
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }

    /**
     * <p>A more detailed explanation of the cause of the termination.</p>
     */
    inline StopExecutionRequest& WithCause(const Aws::String& value) { SetCause(value); return *this;}

    /**
     * <p>A more detailed explanation of the cause of the termination.</p>
     */
    inline StopExecutionRequest& WithCause(Aws::String&& value) { SetCause(value); return *this;}

    /**
     * <p>A more detailed explanation of the cause of the termination.</p>
     */
    inline StopExecutionRequest& WithCause(const char* value) { SetCause(value); return *this;}

  private:
    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet;
    Aws::String m_error;
    bool m_errorHasBeenSet;
    Aws::String m_cause;
    bool m_causeHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
