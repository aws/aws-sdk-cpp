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
  class AWS_AUTOSCALING_API RecordLifecycleActionHeartbeatRequest : public AutoScalingRequest
  {
  public:
    RecordLifecycleActionHeartbeatRequest();
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
    inline RecordLifecycleActionHeartbeatRequest&  WithLifecycleHookName(const Aws::String& value) { SetLifecycleHookName(value); return *this;}

    /*
     <p>The name of the lifecycle hook.</p>
    */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleHookName(const char* value) { SetLifecycleHookName(value); return *this;}

    /*
     <p>The name of the Auto Scaling group for the hook.</p>
    */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    /*
     <p>The name of the Auto Scaling group for the hook.</p>
    */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupName = value; }

    /*
     <p>The name of the Auto Scaling group for the hook.</p>
    */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupName.assign(value); }

    /*
     <p>The name of the Auto Scaling group for the hook.</p>
    */
    inline RecordLifecycleActionHeartbeatRequest&  WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The name of the Auto Scaling group for the hook.</p>
    */
    inline RecordLifecycleActionHeartbeatRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>A token that uniquely identifies a specific lifecycle action associated with an instance. Auto Scaling sends this token to the notification target you specified when you created the lifecycle hook.</p>
    */
    inline const Aws::String& GetLifecycleActionToken() const{ return m_lifecycleActionToken; }
    /*
     <p>A token that uniquely identifies a specific lifecycle action associated with an instance. Auto Scaling sends this token to the notification target you specified when you created the lifecycle hook.</p>
    */
    inline void SetLifecycleActionToken(const Aws::String& value) { m_lifecycleActionToken = value; }

    /*
     <p>A token that uniquely identifies a specific lifecycle action associated with an instance. Auto Scaling sends this token to the notification target you specified when you created the lifecycle hook.</p>
    */
    inline void SetLifecycleActionToken(const char* value) { m_lifecycleActionToken.assign(value); }

    /*
     <p>A token that uniquely identifies a specific lifecycle action associated with an instance. Auto Scaling sends this token to the notification target you specified when you created the lifecycle hook.</p>
    */
    inline RecordLifecycleActionHeartbeatRequest&  WithLifecycleActionToken(const Aws::String& value) { SetLifecycleActionToken(value); return *this;}

    /*
     <p>A token that uniquely identifies a specific lifecycle action associated with an instance. Auto Scaling sends this token to the notification target you specified when you created the lifecycle hook.</p>
    */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleActionToken(const char* value) { SetLifecycleActionToken(value); return *this;}

  private:
    Aws::String m_lifecycleHookName;
    Aws::String m_autoScalingGroupName;
    Aws::String m_lifecycleActionToken;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
