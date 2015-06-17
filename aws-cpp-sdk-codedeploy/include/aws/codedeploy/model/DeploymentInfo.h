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
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/DeploymentStatus.h>
#include <aws/codedeploy/model/ErrorInformation.h>
#include <aws/codedeploy/model/DeploymentOverview.h>
#include <aws/codedeploy/model/DeploymentCreator.h>

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
  class AWS_CODEDEPLOY_API DeploymentInfo
  {
  public:
    DeploymentInfo();
    DeploymentInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    DeploymentInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    
    inline DeploymentInfo&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    
    inline DeploymentInfo& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }
    
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    
    inline DeploymentInfo&  WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    
    inline DeploymentInfo& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

    
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }
    
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    
    inline DeploymentInfo&  WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    
    inline DeploymentInfo& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

    
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    
    inline DeploymentInfo&  WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    
    inline DeploymentInfo& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

    
    inline const RevisionLocation& GetRevision() const{ return m_revision; }
    
    inline void SetRevision(const RevisionLocation& value) { m_revisionHasBeenSet = true; m_revision = value; }

    
    inline DeploymentInfo&  WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}

    
    inline const DeploymentStatus& GetStatus() const{ return m_status; }
    
    inline void SetStatus(const DeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline DeploymentInfo&  WithStatus(const DeploymentStatus& value) { SetStatus(value); return *this;}

    
    inline const ErrorInformation& GetErrorInformation() const{ return m_errorInformation; }
    
    inline void SetErrorInformation(const ErrorInformation& value) { m_errorInformationHasBeenSet = true; m_errorInformation = value; }

    
    inline DeploymentInfo&  WithErrorInformation(const ErrorInformation& value) { SetErrorInformation(value); return *this;}

    
    inline double GetCreateTime() const{ return m_createTime; }
    
    inline void SetCreateTime(double value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    
    inline DeploymentInfo&  WithCreateTime(double value) { SetCreateTime(value); return *this;}

    
    inline double GetStartTime() const{ return m_startTime; }
    
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline DeploymentInfo&  WithStartTime(double value) { SetStartTime(value); return *this;}

    
    inline double GetCompleteTime() const{ return m_completeTime; }
    
    inline void SetCompleteTime(double value) { m_completeTimeHasBeenSet = true; m_completeTime = value; }

    
    inline DeploymentInfo&  WithCompleteTime(double value) { SetCompleteTime(value); return *this;}

    
    inline const DeploymentOverview& GetDeploymentOverview() const{ return m_deploymentOverview; }
    
    inline void SetDeploymentOverview(const DeploymentOverview& value) { m_deploymentOverviewHasBeenSet = true; m_deploymentOverview = value; }

    
    inline DeploymentInfo&  WithDeploymentOverview(const DeploymentOverview& value) { SetDeploymentOverview(value); return *this;}

    
    inline const Aws::String& GetDescription() const{ return m_description; }
    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline DeploymentInfo&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline DeploymentInfo& WithDescription(const char* value) { SetDescription(value); return *this;}

    
    inline const DeploymentCreator& GetCreator() const{ return m_creator; }
    
    inline void SetCreator(const DeploymentCreator& value) { m_creatorHasBeenSet = true; m_creator = value; }

    
    inline DeploymentInfo&  WithCreator(const DeploymentCreator& value) { SetCreator(value); return *this;}

    
    inline bool GetIgnoreApplicationStopFailures() const{ return m_ignoreApplicationStopFailures; }
    
    inline void SetIgnoreApplicationStopFailures(bool value) { m_ignoreApplicationStopFailuresHasBeenSet = true; m_ignoreApplicationStopFailures = value; }

    
    inline DeploymentInfo&  WithIgnoreApplicationStopFailures(bool value) { SetIgnoreApplicationStopFailures(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet;
    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;
    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;
    RevisionLocation m_revision;
    bool m_revisionHasBeenSet;
    DeploymentStatus m_status;
    bool m_statusHasBeenSet;
    ErrorInformation m_errorInformation;
    bool m_errorInformationHasBeenSet;
    double m_createTime;
    bool m_createTimeHasBeenSet;
    double m_startTime;
    bool m_startTimeHasBeenSet;
    double m_completeTime;
    bool m_completeTimeHasBeenSet;
    DeploymentOverview m_deploymentOverview;
    bool m_deploymentOverviewHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    DeploymentCreator m_creator;
    bool m_creatorHasBeenSet;
    bool m_ignoreApplicationStopFailures;
    bool m_ignoreApplicationStopFailuresHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
