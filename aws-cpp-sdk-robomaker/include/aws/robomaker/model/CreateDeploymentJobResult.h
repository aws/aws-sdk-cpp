/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/DeploymentStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/DeploymentJobErrorCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/DeploymentConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/DeploymentApplicationConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RoboMaker
{
namespace Model
{
  class AWS_ROBOMAKER_API CreateDeploymentJobResult
  {
  public:
    CreateDeploymentJobResult();
    CreateDeploymentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDeploymentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline CreateDeploymentJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline CreateDeploymentJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline CreateDeploymentJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The target fleet for the deployment job.</p>
     */
    inline const Aws::String& GetFleet() const{ return m_fleet; }

    /**
     * <p>The target fleet for the deployment job.</p>
     */
    inline void SetFleet(const Aws::String& value) { m_fleet = value; }

    /**
     * <p>The target fleet for the deployment job.</p>
     */
    inline void SetFleet(Aws::String&& value) { m_fleet = std::move(value); }

    /**
     * <p>The target fleet for the deployment job.</p>
     */
    inline void SetFleet(const char* value) { m_fleet.assign(value); }

    /**
     * <p>The target fleet for the deployment job.</p>
     */
    inline CreateDeploymentJobResult& WithFleet(const Aws::String& value) { SetFleet(value); return *this;}

    /**
     * <p>The target fleet for the deployment job.</p>
     */
    inline CreateDeploymentJobResult& WithFleet(Aws::String&& value) { SetFleet(std::move(value)); return *this;}

    /**
     * <p>The target fleet for the deployment job.</p>
     */
    inline CreateDeploymentJobResult& WithFleet(const char* value) { SetFleet(value); return *this;}


    /**
     * <p>The status of the deployment job.</p>
     */
    inline const DeploymentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the deployment job.</p>
     */
    inline void SetStatus(const DeploymentStatus& value) { m_status = value; }

    /**
     * <p>The status of the deployment job.</p>
     */
    inline void SetStatus(DeploymentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the deployment job.</p>
     */
    inline CreateDeploymentJobResult& WithStatus(const DeploymentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the deployment job.</p>
     */
    inline CreateDeploymentJobResult& WithStatus(DeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The deployment application configuration.</p>
     */
    inline const Aws::Vector<DeploymentApplicationConfig>& GetDeploymentApplicationConfigs() const{ return m_deploymentApplicationConfigs; }

    /**
     * <p>The deployment application configuration.</p>
     */
    inline void SetDeploymentApplicationConfigs(const Aws::Vector<DeploymentApplicationConfig>& value) { m_deploymentApplicationConfigs = value; }

    /**
     * <p>The deployment application configuration.</p>
     */
    inline void SetDeploymentApplicationConfigs(Aws::Vector<DeploymentApplicationConfig>&& value) { m_deploymentApplicationConfigs = std::move(value); }

    /**
     * <p>The deployment application configuration.</p>
     */
    inline CreateDeploymentJobResult& WithDeploymentApplicationConfigs(const Aws::Vector<DeploymentApplicationConfig>& value) { SetDeploymentApplicationConfigs(value); return *this;}

    /**
     * <p>The deployment application configuration.</p>
     */
    inline CreateDeploymentJobResult& WithDeploymentApplicationConfigs(Aws::Vector<DeploymentApplicationConfig>&& value) { SetDeploymentApplicationConfigs(std::move(value)); return *this;}

    /**
     * <p>The deployment application configuration.</p>
     */
    inline CreateDeploymentJobResult& AddDeploymentApplicationConfigs(const DeploymentApplicationConfig& value) { m_deploymentApplicationConfigs.push_back(value); return *this; }

    /**
     * <p>The deployment application configuration.</p>
     */
    inline CreateDeploymentJobResult& AddDeploymentApplicationConfigs(DeploymentApplicationConfig&& value) { m_deploymentApplicationConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The failure reason of the deployment job if it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The failure reason of the deployment job if it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The failure reason of the deployment job if it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The failure reason of the deployment job if it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The failure reason of the deployment job if it failed.</p>
     */
    inline CreateDeploymentJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The failure reason of the deployment job if it failed.</p>
     */
    inline CreateDeploymentJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The failure reason of the deployment job if it failed.</p>
     */
    inline CreateDeploymentJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The failure code of the simulation job if it failed:</p> <dl>
     * <dt>BadPermissionError</dt> <dd> <p>AWS Greengrass requires a service-level role
     * permission to access other services. The role must include the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSGreengrassResourceAccessRolePolicy$jsonEditor">
     * <code>AWSGreengrassResourceAccessRolePolicy</code> managed policy</a>. </p>
     * </dd> <dt>ExtractingBundleFailure</dt> <dd> <p>The robot application could not
     * be extracted from the bundle.</p> </dd> <dt>FailureThresholdBreached</dt> <dd>
     * <p>The percentage of robots that could not be updated exceeded the percentage
     * set for the deployment.</p> </dd> <dt>GreengrassDeploymentFailed</dt> <dd>
     * <p>The robot application could not be deployed to the robot.</p> </dd>
     * <dt>GreengrassGroupVersionDoesNotExist</dt> <dd> <p>The AWS Greengrass group or
     * version associated with a robot is missing.</p> </dd>
     * <dt>InternalServerError</dt> <dd> <p>An internal error has occurred. Retry your
     * request, but if the problem persists, contact us with details.</p> </dd>
     * <dt>MissingRobotApplicationArchitecture</dt> <dd> <p>The robot application does
     * not have a source that matches the architecture of the robot.</p> </dd>
     * <dt>MissingRobotDeploymentResource</dt> <dd> <p>One or more of the resources
     * specified for the robot application are missing. For example, does the robot
     * application have the correct launch package and launch file?</p> </dd>
     * <dt>PostLaunchFileFailure</dt> <dd> <p>The post-launch script failed.</p> </dd>
     * <dt>PreLaunchFileFailure</dt> <dd> <p>The pre-launch script failed.</p> </dd>
     * <dt>ResourceNotFound</dt> <dd> <p>One or more deployment resources are missing.
     * For example, do robot application source bundles still exist? </p> </dd>
     * <dt>RobotDeploymentNoResponse</dt> <dd> <p>There is no response from the robot.
     * It might not be powered on or connected to the internet.</p> </dd> </dl>
     */
    inline const DeploymentJobErrorCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code of the simulation job if it failed:</p> <dl>
     * <dt>BadPermissionError</dt> <dd> <p>AWS Greengrass requires a service-level role
     * permission to access other services. The role must include the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSGreengrassResourceAccessRolePolicy$jsonEditor">
     * <code>AWSGreengrassResourceAccessRolePolicy</code> managed policy</a>. </p>
     * </dd> <dt>ExtractingBundleFailure</dt> <dd> <p>The robot application could not
     * be extracted from the bundle.</p> </dd> <dt>FailureThresholdBreached</dt> <dd>
     * <p>The percentage of robots that could not be updated exceeded the percentage
     * set for the deployment.</p> </dd> <dt>GreengrassDeploymentFailed</dt> <dd>
     * <p>The robot application could not be deployed to the robot.</p> </dd>
     * <dt>GreengrassGroupVersionDoesNotExist</dt> <dd> <p>The AWS Greengrass group or
     * version associated with a robot is missing.</p> </dd>
     * <dt>InternalServerError</dt> <dd> <p>An internal error has occurred. Retry your
     * request, but if the problem persists, contact us with details.</p> </dd>
     * <dt>MissingRobotApplicationArchitecture</dt> <dd> <p>The robot application does
     * not have a source that matches the architecture of the robot.</p> </dd>
     * <dt>MissingRobotDeploymentResource</dt> <dd> <p>One or more of the resources
     * specified for the robot application are missing. For example, does the robot
     * application have the correct launch package and launch file?</p> </dd>
     * <dt>PostLaunchFileFailure</dt> <dd> <p>The post-launch script failed.</p> </dd>
     * <dt>PreLaunchFileFailure</dt> <dd> <p>The pre-launch script failed.</p> </dd>
     * <dt>ResourceNotFound</dt> <dd> <p>One or more deployment resources are missing.
     * For example, do robot application source bundles still exist? </p> </dd>
     * <dt>RobotDeploymentNoResponse</dt> <dd> <p>There is no response from the robot.
     * It might not be powered on or connected to the internet.</p> </dd> </dl>
     */
    inline void SetFailureCode(const DeploymentJobErrorCode& value) { m_failureCode = value; }

    /**
     * <p>The failure code of the simulation job if it failed:</p> <dl>
     * <dt>BadPermissionError</dt> <dd> <p>AWS Greengrass requires a service-level role
     * permission to access other services. The role must include the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSGreengrassResourceAccessRolePolicy$jsonEditor">
     * <code>AWSGreengrassResourceAccessRolePolicy</code> managed policy</a>. </p>
     * </dd> <dt>ExtractingBundleFailure</dt> <dd> <p>The robot application could not
     * be extracted from the bundle.</p> </dd> <dt>FailureThresholdBreached</dt> <dd>
     * <p>The percentage of robots that could not be updated exceeded the percentage
     * set for the deployment.</p> </dd> <dt>GreengrassDeploymentFailed</dt> <dd>
     * <p>The robot application could not be deployed to the robot.</p> </dd>
     * <dt>GreengrassGroupVersionDoesNotExist</dt> <dd> <p>The AWS Greengrass group or
     * version associated with a robot is missing.</p> </dd>
     * <dt>InternalServerError</dt> <dd> <p>An internal error has occurred. Retry your
     * request, but if the problem persists, contact us with details.</p> </dd>
     * <dt>MissingRobotApplicationArchitecture</dt> <dd> <p>The robot application does
     * not have a source that matches the architecture of the robot.</p> </dd>
     * <dt>MissingRobotDeploymentResource</dt> <dd> <p>One or more of the resources
     * specified for the robot application are missing. For example, does the robot
     * application have the correct launch package and launch file?</p> </dd>
     * <dt>PostLaunchFileFailure</dt> <dd> <p>The post-launch script failed.</p> </dd>
     * <dt>PreLaunchFileFailure</dt> <dd> <p>The pre-launch script failed.</p> </dd>
     * <dt>ResourceNotFound</dt> <dd> <p>One or more deployment resources are missing.
     * For example, do robot application source bundles still exist? </p> </dd>
     * <dt>RobotDeploymentNoResponse</dt> <dd> <p>There is no response from the robot.
     * It might not be powered on or connected to the internet.</p> </dd> </dl>
     */
    inline void SetFailureCode(DeploymentJobErrorCode&& value) { m_failureCode = std::move(value); }

    /**
     * <p>The failure code of the simulation job if it failed:</p> <dl>
     * <dt>BadPermissionError</dt> <dd> <p>AWS Greengrass requires a service-level role
     * permission to access other services. The role must include the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSGreengrassResourceAccessRolePolicy$jsonEditor">
     * <code>AWSGreengrassResourceAccessRolePolicy</code> managed policy</a>. </p>
     * </dd> <dt>ExtractingBundleFailure</dt> <dd> <p>The robot application could not
     * be extracted from the bundle.</p> </dd> <dt>FailureThresholdBreached</dt> <dd>
     * <p>The percentage of robots that could not be updated exceeded the percentage
     * set for the deployment.</p> </dd> <dt>GreengrassDeploymentFailed</dt> <dd>
     * <p>The robot application could not be deployed to the robot.</p> </dd>
     * <dt>GreengrassGroupVersionDoesNotExist</dt> <dd> <p>The AWS Greengrass group or
     * version associated with a robot is missing.</p> </dd>
     * <dt>InternalServerError</dt> <dd> <p>An internal error has occurred. Retry your
     * request, but if the problem persists, contact us with details.</p> </dd>
     * <dt>MissingRobotApplicationArchitecture</dt> <dd> <p>The robot application does
     * not have a source that matches the architecture of the robot.</p> </dd>
     * <dt>MissingRobotDeploymentResource</dt> <dd> <p>One or more of the resources
     * specified for the robot application are missing. For example, does the robot
     * application have the correct launch package and launch file?</p> </dd>
     * <dt>PostLaunchFileFailure</dt> <dd> <p>The post-launch script failed.</p> </dd>
     * <dt>PreLaunchFileFailure</dt> <dd> <p>The pre-launch script failed.</p> </dd>
     * <dt>ResourceNotFound</dt> <dd> <p>One or more deployment resources are missing.
     * For example, do robot application source bundles still exist? </p> </dd>
     * <dt>RobotDeploymentNoResponse</dt> <dd> <p>There is no response from the robot.
     * It might not be powered on or connected to the internet.</p> </dd> </dl>
     */
    inline CreateDeploymentJobResult& WithFailureCode(const DeploymentJobErrorCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code of the simulation job if it failed:</p> <dl>
     * <dt>BadPermissionError</dt> <dd> <p>AWS Greengrass requires a service-level role
     * permission to access other services. The role must include the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSGreengrassResourceAccessRolePolicy$jsonEditor">
     * <code>AWSGreengrassResourceAccessRolePolicy</code> managed policy</a>. </p>
     * </dd> <dt>ExtractingBundleFailure</dt> <dd> <p>The robot application could not
     * be extracted from the bundle.</p> </dd> <dt>FailureThresholdBreached</dt> <dd>
     * <p>The percentage of robots that could not be updated exceeded the percentage
     * set for the deployment.</p> </dd> <dt>GreengrassDeploymentFailed</dt> <dd>
     * <p>The robot application could not be deployed to the robot.</p> </dd>
     * <dt>GreengrassGroupVersionDoesNotExist</dt> <dd> <p>The AWS Greengrass group or
     * version associated with a robot is missing.</p> </dd>
     * <dt>InternalServerError</dt> <dd> <p>An internal error has occurred. Retry your
     * request, but if the problem persists, contact us with details.</p> </dd>
     * <dt>MissingRobotApplicationArchitecture</dt> <dd> <p>The robot application does
     * not have a source that matches the architecture of the robot.</p> </dd>
     * <dt>MissingRobotDeploymentResource</dt> <dd> <p>One or more of the resources
     * specified for the robot application are missing. For example, does the robot
     * application have the correct launch package and launch file?</p> </dd>
     * <dt>PostLaunchFileFailure</dt> <dd> <p>The post-launch script failed.</p> </dd>
     * <dt>PreLaunchFileFailure</dt> <dd> <p>The pre-launch script failed.</p> </dd>
     * <dt>ResourceNotFound</dt> <dd> <p>One or more deployment resources are missing.
     * For example, do robot application source bundles still exist? </p> </dd>
     * <dt>RobotDeploymentNoResponse</dt> <dd> <p>There is no response from the robot.
     * It might not be powered on or connected to the internet.</p> </dd> </dl>
     */
    inline CreateDeploymentJobResult& WithFailureCode(DeploymentJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline CreateDeploymentJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline CreateDeploymentJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The deployment configuration.</p>
     */
    inline const DeploymentConfig& GetDeploymentConfig() const{ return m_deploymentConfig; }

    /**
     * <p>The deployment configuration.</p>
     */
    inline void SetDeploymentConfig(const DeploymentConfig& value) { m_deploymentConfig = value; }

    /**
     * <p>The deployment configuration.</p>
     */
    inline void SetDeploymentConfig(DeploymentConfig&& value) { m_deploymentConfig = std::move(value); }

    /**
     * <p>The deployment configuration.</p>
     */
    inline CreateDeploymentJobResult& WithDeploymentConfig(const DeploymentConfig& value) { SetDeploymentConfig(value); return *this;}

    /**
     * <p>The deployment configuration.</p>
     */
    inline CreateDeploymentJobResult& WithDeploymentConfig(DeploymentConfig&& value) { SetDeploymentConfig(std::move(value)); return *this;}


    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline CreateDeploymentJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline CreateDeploymentJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline CreateDeploymentJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline CreateDeploymentJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline CreateDeploymentJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline CreateDeploymentJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline CreateDeploymentJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline CreateDeploymentJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the deployment job.</p>
     */
    inline CreateDeploymentJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_fleet;

    DeploymentStatus m_status;

    Aws::Vector<DeploymentApplicationConfig> m_deploymentApplicationConfigs;

    Aws::String m_failureReason;

    DeploymentJobErrorCode m_failureCode;

    Aws::Utils::DateTime m_createdAt;

    DeploymentConfig m_deploymentConfig;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
