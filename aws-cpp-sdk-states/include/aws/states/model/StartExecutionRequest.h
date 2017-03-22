/*
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
  class AWS_SFN_API StartExecutionRequest : public SFNRequest
  {
  public:
    StartExecutionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline StartExecutionRequest& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline StartExecutionRequest& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline StartExecutionRequest& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The name of the execution. This name must be unique for your AWS account and
     * region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the execution. This name must be unique for your AWS account and
     * region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the execution. This name must be unique for your AWS account and
     * region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the execution. This name must be unique for your AWS account and
     * region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the execution. This name must be unique for your AWS account and
     * region.</p>
     */
    inline StartExecutionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the execution. This name must be unique for your AWS account and
     * region.</p>
     */
    inline StartExecutionRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the execution. This name must be unique for your AWS account and
     * region.</p>
     */
    inline StartExecutionRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The JSON input data for the execution.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The JSON input data for the execution.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The JSON input data for the execution.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The JSON input data for the execution.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The JSON input data for the execution.</p>
     */
    inline StartExecutionRequest& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The JSON input data for the execution.</p>
     */
    inline StartExecutionRequest& WithInput(Aws::String&& value) { SetInput(value); return *this;}

    /**
     * <p>The JSON input data for the execution.</p>
     */
    inline StartExecutionRequest& WithInput(const char* value) { SetInput(value); return *this;}

  private:
    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_input;
    bool m_inputHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
