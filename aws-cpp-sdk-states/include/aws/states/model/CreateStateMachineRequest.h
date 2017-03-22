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
  class AWS_SFN_API CreateStateMachineRequest : public SFNRequest
  {
  public:
    CreateStateMachineRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the state machine. This name must be unique for your AWS account
     * and region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the state machine. This name must be unique for your AWS account
     * and region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the state machine. This name must be unique for your AWS account
     * and region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the state machine. This name must be unique for your AWS account
     * and region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the state machine. This name must be unique for your AWS account
     * and region.</p>
     */
    inline CreateStateMachineRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the state machine. This name must be unique for your AWS account
     * and region.</p>
     */
    inline CreateStateMachineRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the state machine. This name must be unique for your AWS account
     * and region.</p>
     */
    inline CreateStateMachineRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The Amazon States Language definition of the state machine.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>The Amazon States Language definition of the state machine.</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The Amazon States Language definition of the state machine.</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The Amazon States Language definition of the state machine.</p>
     */
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }

    /**
     * <p>The Amazon States Language definition of the state machine.</p>
     */
    inline CreateStateMachineRequest& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The Amazon States Language definition of the state machine.</p>
     */
    inline CreateStateMachineRequest& WithDefinition(Aws::String&& value) { SetDefinition(value); return *this;}

    /**
     * <p>The Amazon States Language definition of the state machine.</p>
     */
    inline CreateStateMachineRequest& WithDefinition(const char* value) { SetDefinition(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline CreateStateMachineRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline CreateStateMachineRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to use for this state
     * machine.</p>
     */
    inline CreateStateMachineRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_definition;
    bool m_definitionHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
