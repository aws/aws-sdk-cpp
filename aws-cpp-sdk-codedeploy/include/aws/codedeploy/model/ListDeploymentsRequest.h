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
#include <aws/codedeploy/codedeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/TimeRange.h>
#include <aws/codedeploy/model/DeploymentStatus.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
  */
  class AWS_CODEDEPLOY_API ListDeploymentsRequest : public codedeployRequest
  {
  public:
    ListDeploymentsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    
    inline ListDeploymentsRequest&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    
    inline ListDeploymentsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }
    
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    
    inline ListDeploymentsRequest&  WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    
    inline ListDeploymentsRequest& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

    
    inline const Aws::Vector<DeploymentStatus>& GetIncludeOnlyStatuses() const{ return m_includeOnlyStatuses; }
    
    inline void SetIncludeOnlyStatuses(const Aws::Vector<DeploymentStatus>& value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses = value; }

    
    inline ListDeploymentsRequest&  WithIncludeOnlyStatuses(const Aws::Vector<DeploymentStatus>& value) { SetIncludeOnlyStatuses(value); return *this;}

    
    inline ListDeploymentsRequest& AddIncludeOnlyStatuses(const DeploymentStatus& value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses.push_back(value); return *this; }

    
    inline const TimeRange& GetCreateTimeRange() const{ return m_createTimeRange; }
    
    inline void SetCreateTimeRange(const TimeRange& value) { m_createTimeRangeHasBeenSet = true; m_createTimeRange = value; }

    
    inline ListDeploymentsRequest&  WithCreateTimeRange(const TimeRange& value) { SetCreateTimeRange(value); return *this;}

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListDeploymentsRequest&  WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListDeploymentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet;
    Aws::Vector<DeploymentStatus> m_includeOnlyStatuses;
    bool m_includeOnlyStatusesHasBeenSet;
    TimeRange m_createTimeRange;
    bool m_createTimeRangeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
