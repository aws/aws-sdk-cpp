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
#include <aws/codedeploy/model/InstanceStatus.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
  */
  class AWS_CODEDEPLOY_API ListDeploymentInstancesRequest : public codedeployRequest
  {
  public:
    ListDeploymentInstancesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    
    inline ListDeploymentInstancesRequest&  WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    
    inline ListDeploymentInstancesRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListDeploymentInstancesRequest&  WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListDeploymentInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const Aws::Vector<InstanceStatus>& GetInstanceStatusFilter() const{ return m_instanceStatusFilter; }
    
    inline void SetInstanceStatusFilter(const Aws::Vector<InstanceStatus>& value) { m_instanceStatusFilterHasBeenSet = true; m_instanceStatusFilter = value; }

    
    inline ListDeploymentInstancesRequest&  WithInstanceStatusFilter(const Aws::Vector<InstanceStatus>& value) { SetInstanceStatusFilter(value); return *this;}

    
    inline ListDeploymentInstancesRequest& AddInstanceStatusFilter(const InstanceStatus& value) { m_instanceStatusFilterHasBeenSet = true; m_instanceStatusFilter.push_back(value); return *this; }

  private:
    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    Aws::Vector<InstanceStatus> m_instanceStatusFilter;
    bool m_instanceStatusFilterHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
