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
#include <aws/robomaker/model/DeploymentConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/DeploymentJobErrorCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/DeploymentApplicationConfig.h>
#include <aws/robomaker/model/RobotDeployment.h>
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
  class AWS_ROBOMAKER_API DescribeDeploymentJobResult
  {
  public:
    DescribeDeploymentJobResult();
    DescribeDeploymentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDeploymentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeDeploymentJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline DescribeDeploymentJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline DescribeDeploymentJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleet() const{ return m_fleet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(const Aws::String& value) { m_fleet = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(Aws::String&& value) { m_fleet = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(const char* value) { m_fleet.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DescribeDeploymentJobResult& WithFleet(const Aws::String& value) { SetFleet(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DescribeDeploymentJobResult& WithFleet(Aws::String&& value) { SetFleet(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DescribeDeploymentJobResult& WithFleet(const char* value) { SetFleet(value); return *this;}


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
    inline DescribeDeploymentJobResult& WithStatus(const DeploymentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the deployment job.</p>
     */
    inline DescribeDeploymentJobResult& WithStatus(DeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline DescribeDeploymentJobResult& WithDeploymentConfig(const DeploymentConfig& value) { SetDeploymentConfig(value); return *this;}

    /**
     * <p>The deployment configuration.</p>
     */
    inline DescribeDeploymentJobResult& WithDeploymentConfig(DeploymentConfig&& value) { SetDeploymentConfig(std::move(value)); return *this;}


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
    inline DescribeDeploymentJobResult& WithDeploymentApplicationConfigs(const Aws::Vector<DeploymentApplicationConfig>& value) { SetDeploymentApplicationConfigs(value); return *this;}

    /**
     * <p>The deployment application configuration.</p>
     */
    inline DescribeDeploymentJobResult& WithDeploymentApplicationConfigs(Aws::Vector<DeploymentApplicationConfig>&& value) { SetDeploymentApplicationConfigs(std::move(value)); return *this;}

    /**
     * <p>The deployment application configuration.</p>
     */
    inline DescribeDeploymentJobResult& AddDeploymentApplicationConfigs(const DeploymentApplicationConfig& value) { m_deploymentApplicationConfigs.push_back(value); return *this; }

    /**
     * <p>The deployment application configuration.</p>
     */
    inline DescribeDeploymentJobResult& AddDeploymentApplicationConfigs(DeploymentApplicationConfig&& value) { m_deploymentApplicationConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>A short description of the reason why the deployment job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>A short description of the reason why the deployment job failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>A short description of the reason why the deployment job failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>A short description of the reason why the deployment job failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>A short description of the reason why the deployment job failed.</p>
     */
    inline DescribeDeploymentJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>A short description of the reason why the deployment job failed.</p>
     */
    inline DescribeDeploymentJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>A short description of the reason why the deployment job failed.</p>
     */
    inline DescribeDeploymentJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The deployment job failure code.</p>
     */
    inline const DeploymentJobErrorCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The deployment job failure code.</p>
     */
    inline void SetFailureCode(const DeploymentJobErrorCode& value) { m_failureCode = value; }

    /**
     * <p>The deployment job failure code.</p>
     */
    inline void SetFailureCode(DeploymentJobErrorCode&& value) { m_failureCode = std::move(value); }

    /**
     * <p>The deployment job failure code.</p>
     */
    inline DescribeDeploymentJobResult& WithFailureCode(const DeploymentJobErrorCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The deployment job failure code.</p>
     */
    inline DescribeDeploymentJobResult& WithFailureCode(DeploymentJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the deployment job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment job was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment job was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment job was
     * created.</p>
     */
    inline DescribeDeploymentJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment job was
     * created.</p>
     */
    inline DescribeDeploymentJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A list of robot deployment summaries.</p>
     */
    inline const Aws::Vector<RobotDeployment>& GetRobotDeploymentSummary() const{ return m_robotDeploymentSummary; }

    /**
     * <p>A list of robot deployment summaries.</p>
     */
    inline void SetRobotDeploymentSummary(const Aws::Vector<RobotDeployment>& value) { m_robotDeploymentSummary = value; }

    /**
     * <p>A list of robot deployment summaries.</p>
     */
    inline void SetRobotDeploymentSummary(Aws::Vector<RobotDeployment>&& value) { m_robotDeploymentSummary = std::move(value); }

    /**
     * <p>A list of robot deployment summaries.</p>
     */
    inline DescribeDeploymentJobResult& WithRobotDeploymentSummary(const Aws::Vector<RobotDeployment>& value) { SetRobotDeploymentSummary(value); return *this;}

    /**
     * <p>A list of robot deployment summaries.</p>
     */
    inline DescribeDeploymentJobResult& WithRobotDeploymentSummary(Aws::Vector<RobotDeployment>&& value) { SetRobotDeploymentSummary(std::move(value)); return *this;}

    /**
     * <p>A list of robot deployment summaries.</p>
     */
    inline DescribeDeploymentJobResult& AddRobotDeploymentSummary(const RobotDeployment& value) { m_robotDeploymentSummary.push_back(value); return *this; }

    /**
     * <p>A list of robot deployment summaries.</p>
     */
    inline DescribeDeploymentJobResult& AddRobotDeploymentSummary(RobotDeployment&& value) { m_robotDeploymentSummary.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline DescribeDeploymentJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline DescribeDeploymentJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline DescribeDeploymentJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline DescribeDeploymentJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline DescribeDeploymentJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline DescribeDeploymentJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline DescribeDeploymentJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline DescribeDeploymentJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the specified deployment job.</p>
     */
    inline DescribeDeploymentJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_fleet;

    DeploymentStatus m_status;

    DeploymentConfig m_deploymentConfig;

    Aws::Vector<DeploymentApplicationConfig> m_deploymentApplicationConfigs;

    Aws::String m_failureReason;

    DeploymentJobErrorCode m_failureCode;

    Aws::Utils::DateTime m_createdAt;

    Aws::Vector<RobotDeployment> m_robotDeploymentSummary;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
