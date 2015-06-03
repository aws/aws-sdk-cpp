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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /*
  */
  class AWS_AUTOSCALING_API CompleteLifecycleActionRequest : public AutoScalingRequest
  {
  public:
    CompleteLifecycleActionRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name of the lifecycle hook.</p>
    */
    inline const Aws::String& GetLifecycleHookName() const{ return m_lifecycleHookName; }
    /*
     <p>The name of the lifecycle hook.</p>
    */
    inline void SetLifecycleHookName(const Aws::String& value) { m_lifecycleHookName = value; }

    /*
     <p>The name of the lifecycle hook.</p>
    */
    inline void SetLifecycleHookName(const char* value) { m_lifecycleHookName.assign(value); }

    /*
     <p>The name of the lifecycle hook.</p>
    */
    inline CompleteLifecycleActionRequest&  WithLifecycleHookName(const Aws::String& value) { SetLifecycleHookName(value); return *this;}

    /*
     <p>The name of the lifecycle hook.</p>
    */
    inline CompleteLifecycleActionRequest& WithLifecycleHookName(const char* value) { SetLifecycleHookName(value); return *this;}

    /*
     <p>The name of the group for the lifecycle hook.</p>
    */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    /*
     <p>The name of the group for the lifecycle hook.</p>
    */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupName = value; }

    /*
     <p>The name of the group for the lifecycle hook.</p>
    */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupName.assign(value); }

    /*
     <p>The name of the group for the lifecycle hook.</p>
    */
    inline CompleteLifecycleActionRequest&  WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The name of the group for the lifecycle hook.</p>
    */
    inline CompleteLifecycleActionRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>A universally unique identifier (UUID) that identifies a specific lifecycle action associated with an instance. Auto Scaling sends this token to the notification target you specified when you created the lifecycle hook.</p>
    */
    inline const Aws::String& GetLifecycleActionToken() const{ return m_lifecycleActionToken; }
    /*
     <p>A universally unique identifier (UUID) that identifies a specific lifecycle action associated with an instance. Auto Scaling sends this token to the notification target you specified when you created the lifecycle hook.</p>
    */
    inline void SetLifecycleActionToken(const Aws::String& value) { m_lifecycleActionToken = value; }

    /*
     <p>A universally unique identifier (UUID) that identifies a specific lifecycle action associated with an instance. Auto Scaling sends this token to the notification target you specified when you created the lifecycle hook.</p>
    */
    inline void SetLifecycleActionToken(const char* value) { m_lifecycleActionToken.assign(value); }

    /*
     <p>A universally unique identifier (UUID) that identifies a specific lifecycle action associated with an instance. Auto Scaling sends this token to the notification target you specified when you created the lifecycle hook.</p>
    */
    inline CompleteLifecycleActionRequest&  WithLifecycleActionToken(const Aws::String& value) { SetLifecycleActionToken(value); return *this;}

    /*
     <p>A universally unique identifier (UUID) that identifies a specific lifecycle action associated with an instance. Auto Scaling sends this token to the notification target you specified when you created the lifecycle hook.</p>
    */
    inline CompleteLifecycleActionRequest& WithLifecycleActionToken(const char* value) { SetLifecycleActionToken(value); return *this;}

    /*
     <p>The action for the group to take. This parameter can be either <code>CONTINUE</code> or <code>ABANDON</code>.</p>
    */
    inline const Aws::String& GetLifecycleActionResult() const{ return m_lifecycleActionResult; }
    /*
     <p>The action for the group to take. This parameter can be either <code>CONTINUE</code> or <code>ABANDON</code>.</p>
    */
    inline void SetLifecycleActionResult(const Aws::String& value) { m_lifecycleActionResult = value; }

    /*
     <p>The action for the group to take. This parameter can be either <code>CONTINUE</code> or <code>ABANDON</code>.</p>
    */
    inline void SetLifecycleActionResult(const char* value) { m_lifecycleActionResult.assign(value); }

    /*
     <p>The action for the group to take. This parameter can be either <code>CONTINUE</code> or <code>ABANDON</code>.</p>
    */
    inline CompleteLifecycleActionRequest&  WithLifecycleActionResult(const Aws::String& value) { SetLifecycleActionResult(value); return *this;}

    /*
     <p>The action for the group to take. This parameter can be either <code>CONTINUE</code> or <code>ABANDON</code>.</p>
    */
    inline CompleteLifecycleActionRequest& WithLifecycleActionResult(const char* value) { SetLifecycleActionResult(value); return *this;}

  private:
    Aws::String m_lifecycleHookName;
    Aws::String m_autoScalingGroupName;
    Aws::String m_lifecycleActionToken;
    Aws::String m_lifecycleActionResult;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
