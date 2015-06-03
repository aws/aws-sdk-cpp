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
    <p>Represents the input of a get deployment configuration operation.</p>
  */
  class AWS_CODEDEPLOY_API GetDeploymentConfigRequest : public codedeployRequest
  {
  public:
    GetDeploymentConfigRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The name of an existing deployment configuration associated with the applicable IAM user or AWS account.</p>
    */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }
    /*
     <p>The name of an existing deployment configuration associated with the applicable IAM user or AWS account.</p>
    */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigName = value; }

    /*
     <p>The name of an existing deployment configuration associated with the applicable IAM user or AWS account.</p>
    */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigName.assign(value); }

    /*
     <p>The name of an existing deployment configuration associated with the applicable IAM user or AWS account.</p>
    */
    inline GetDeploymentConfigRequest&  WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /*
     <p>The name of an existing deployment configuration associated with the applicable IAM user or AWS account.</p>
    */
    inline GetDeploymentConfigRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

  private:
    Aws::String m_deploymentConfigName;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
