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
#include <aws/codedeploy/model/RevisionLocation.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
  */
  class AWS_CODEDEPLOY_API CreateDeploymentRequest : public codedeployRequest
  {
  public:
    CreateDeploymentRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    
    inline CreateDeploymentRequest&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    
    inline CreateDeploymentRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }
    
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    
    inline CreateDeploymentRequest&  WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    
    inline CreateDeploymentRequest& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

    
    inline const RevisionLocation& GetRevision() const{ return m_revision; }
    
    inline void SetRevision(const RevisionLocation& value) { m_revisionHasBeenSet = true; m_revision = value; }

    
    inline CreateDeploymentRequest&  WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}

    
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }
    
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    
    inline CreateDeploymentRequest&  WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    
    inline CreateDeploymentRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

    
    inline const Aws::String& GetDescription() const{ return m_description; }
    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline CreateDeploymentRequest&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline CreateDeploymentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    
    inline bool GetIgnoreApplicationStopFailures() const{ return m_ignoreApplicationStopFailures; }
    
    inline void SetIgnoreApplicationStopFailures(bool value) { m_ignoreApplicationStopFailuresHasBeenSet = true; m_ignoreApplicationStopFailures = value; }

    
    inline CreateDeploymentRequest&  WithIgnoreApplicationStopFailures(bool value) { SetIgnoreApplicationStopFailures(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet;
    RevisionLocation m_revision;
    bool m_revisionHasBeenSet;
    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    bool m_ignoreApplicationStopFailures;
    bool m_ignoreApplicationStopFailuresHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
