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

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
    <p>Represents the input of a get deployment group operation.</p>
  */
  class AWS_CODEDEPLOY_API GetDeploymentGroupRequest : public codedeployRequest
  {
  public:
    GetDeploymentGroupRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }

    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }

    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline GetDeploymentGroupRequest&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline GetDeploymentGroupRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }
    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupName = value; }

    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupName.assign(value); }

    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline GetDeploymentGroupRequest&  WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline GetDeploymentGroupRequest& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

  private:
    Aws::String m_applicationName;
    Aws::String m_deploymentGroupName;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
