/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class DescribeStateMachineForExecutionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API DescribeStateMachineForExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStateMachineForExecution"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the execution you want state machine
     * information for.</p>
     */
    inline const Aws::String& GetExecutionArn() const{ return m_executionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution you want state machine
     * information for.</p>
     */
    inline bool ExecutionArnHasBeenSet() const { return m_executionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution you want state machine
     * information for.</p>
     */
    inline void SetExecutionArn(const Aws::String& value) { m_executionArnHasBeenSet = true; m_executionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution you want state machine
     * information for.</p>
     */
    inline void SetExecutionArn(Aws::String&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution you want state machine
     * information for.</p>
     */
    inline void SetExecutionArn(const char* value) { m_executionArnHasBeenSet = true; m_executionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution you want state machine
     * information for.</p>
     */
    inline DescribeStateMachineForExecutionRequest& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution you want state machine
     * information for.</p>
     */
    inline DescribeStateMachineForExecutionRequest& WithExecutionArn(Aws::String&& value) { SetExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution you want state machine
     * information for.</p>
     */
    inline DescribeStateMachineForExecutionRequest& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}

  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
