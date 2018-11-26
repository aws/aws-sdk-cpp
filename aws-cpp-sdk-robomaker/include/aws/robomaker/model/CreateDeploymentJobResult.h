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
     * <p>The failure code of the deployment job if it failed.</p>
     */
    inline const DeploymentJobErrorCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code of the deployment job if it failed.</p>
     */
    inline void SetFailureCode(const DeploymentJobErrorCode& value) { m_failureCode = value; }

    /**
     * <p>The failure code of the deployment job if it failed.</p>
     */
    inline void SetFailureCode(DeploymentJobErrorCode&& value) { m_failureCode = std::move(value); }

    /**
     * <p>The failure code of the deployment job if it failed.</p>
     */
    inline CreateDeploymentJobResult& WithFailureCode(const DeploymentJobErrorCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code of the deployment job if it failed.</p>
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

  private:

    Aws::String m_arn;

    Aws::String m_fleet;

    DeploymentStatus m_status;

    Aws::Vector<DeploymentApplicationConfig> m_deploymentApplicationConfigs;

    Aws::String m_failureReason;

    DeploymentJobErrorCode m_failureCode;

    Aws::Utils::DateTime m_createdAt;

    DeploymentConfig m_deploymentConfig;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
