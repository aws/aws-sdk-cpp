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
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/InstanceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/LifecycleEvent.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API InstanceSummary
  {
  public:
    InstanceSummary();
    InstanceSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    
    inline InstanceSummary&  WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    
    inline InstanceSummary& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

    
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    
    inline InstanceSummary&  WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    
    inline InstanceSummary& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    
    inline const InstanceStatus& GetStatus() const{ return m_status; }
    
    inline void SetStatus(const InstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline InstanceSummary&  WithStatus(const InstanceStatus& value) { SetStatus(value); return *this;}

    
    inline double GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    
    inline void SetLastUpdatedAt(double value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    
    inline InstanceSummary&  WithLastUpdatedAt(double value) { SetLastUpdatedAt(value); return *this;}

    
    inline const Aws::Vector<LifecycleEvent>& GetLifecycleEvents() const{ return m_lifecycleEvents; }
    
    inline void SetLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = value; }

    
    inline InstanceSummary&  WithLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { SetLifecycleEvents(value); return *this;}

    
    inline InstanceSummary& AddLifecycleEvents(const LifecycleEvent& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.push_back(value); return *this; }

  private:
    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    InstanceStatus m_status;
    bool m_statusHasBeenSet;
    double m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;
    Aws::Vector<LifecycleEvent> m_lifecycleEvents;
    bool m_lifecycleEventsHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
