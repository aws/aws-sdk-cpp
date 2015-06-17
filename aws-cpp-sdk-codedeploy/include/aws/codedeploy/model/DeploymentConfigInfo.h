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
#include <aws/codedeploy/model/MinimumHealthyHosts.h>

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
  class AWS_CODEDEPLOY_API DeploymentConfigInfo
  {
  public:
    DeploymentConfigInfo();
    DeploymentConfigInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    DeploymentConfigInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetDeploymentConfigId() const{ return m_deploymentConfigId; }
    
    inline void SetDeploymentConfigId(const Aws::String& value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId = value; }

    
    inline void SetDeploymentConfigId(const char* value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId.assign(value); }

    
    inline DeploymentConfigInfo&  WithDeploymentConfigId(const Aws::String& value) { SetDeploymentConfigId(value); return *this;}

    
    inline DeploymentConfigInfo& WithDeploymentConfigId(const char* value) { SetDeploymentConfigId(value); return *this;}

    
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }
    
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    
    inline DeploymentConfigInfo&  WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    
    inline DeploymentConfigInfo& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

    
    inline const MinimumHealthyHosts& GetMinimumHealthyHosts() const{ return m_minimumHealthyHosts; }
    
    inline void SetMinimumHealthyHosts(const MinimumHealthyHosts& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = value; }

    
    inline DeploymentConfigInfo&  WithMinimumHealthyHosts(const MinimumHealthyHosts& value) { SetMinimumHealthyHosts(value); return *this;}

    
    inline double GetCreateTime() const{ return m_createTime; }
    
    inline void SetCreateTime(double value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    
    inline DeploymentConfigInfo&  WithCreateTime(double value) { SetCreateTime(value); return *this;}

  private:
    Aws::String m_deploymentConfigId;
    bool m_deploymentConfigIdHasBeenSet;
    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;
    MinimumHealthyHosts m_minimumHealthyHosts;
    bool m_minimumHealthyHostsHasBeenSet;
    double m_createTime;
    bool m_createTimeHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
