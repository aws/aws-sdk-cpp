/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/EdgeDeploymentModelConfig.h>
#include <aws/sagemaker/model/DeploymentStageStatusSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeEdgeDeploymentPlanResult
  {
  public:
    AWS_SAGEMAKER_API DescribeEdgeDeploymentPlanResult();
    AWS_SAGEMAKER_API DescribeEdgeDeploymentPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeEdgeDeploymentPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanArn() const{ return m_edgeDeploymentPlanArn; }

    /**
     * <p>The ARN of edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanArn(const Aws::String& value) { m_edgeDeploymentPlanArn = value; }

    /**
     * <p>The ARN of edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanArn(Aws::String&& value) { m_edgeDeploymentPlanArn = std::move(value); }

    /**
     * <p>The ARN of edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanArn(const char* value) { m_edgeDeploymentPlanArn.assign(value); }

    /**
     * <p>The ARN of edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentPlanArn(const Aws::String& value) { SetEdgeDeploymentPlanArn(value); return *this;}

    /**
     * <p>The ARN of edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentPlanArn(Aws::String&& value) { SetEdgeDeploymentPlanArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentPlanArn(const char* value) { SetEdgeDeploymentPlanArn(value); return *this;}


    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanName() const{ return m_edgeDeploymentPlanName; }

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanName(const Aws::String& value) { m_edgeDeploymentPlanName = value; }

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanName(Aws::String&& value) { m_edgeDeploymentPlanName = std::move(value); }

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanName(const char* value) { m_edgeDeploymentPlanName.assign(value); }

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentPlanName(const Aws::String& value) { SetEdgeDeploymentPlanName(value); return *this;}

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentPlanName(Aws::String&& value) { SetEdgeDeploymentPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentPlanName(const char* value) { SetEdgeDeploymentPlanName(value); return *this;}


    /**
     * <p>List of models associated with the edge deployment plan.</p>
     */
    inline const Aws::Vector<EdgeDeploymentModelConfig>& GetModelConfigs() const{ return m_modelConfigs; }

    /**
     * <p>List of models associated with the edge deployment plan.</p>
     */
    inline void SetModelConfigs(const Aws::Vector<EdgeDeploymentModelConfig>& value) { m_modelConfigs = value; }

    /**
     * <p>List of models associated with the edge deployment plan.</p>
     */
    inline void SetModelConfigs(Aws::Vector<EdgeDeploymentModelConfig>&& value) { m_modelConfigs = std::move(value); }

    /**
     * <p>List of models associated with the edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithModelConfigs(const Aws::Vector<EdgeDeploymentModelConfig>& value) { SetModelConfigs(value); return *this;}

    /**
     * <p>List of models associated with the edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithModelConfigs(Aws::Vector<EdgeDeploymentModelConfig>&& value) { SetModelConfigs(std::move(value)); return *this;}

    /**
     * <p>List of models associated with the edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& AddModelConfigs(const EdgeDeploymentModelConfig& value) { m_modelConfigs.push_back(value); return *this; }

    /**
     * <p>List of models associated with the edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& AddModelConfigs(EdgeDeploymentModelConfig&& value) { m_modelConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The device fleet used for this edge deployment plan.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }

    /**
     * <p>The device fleet used for this edge deployment plan.</p>
     */
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetName = value; }

    /**
     * <p>The device fleet used for this edge deployment plan.</p>
     */
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetName = std::move(value); }

    /**
     * <p>The device fleet used for this edge deployment plan.</p>
     */
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetName.assign(value); }

    /**
     * <p>The device fleet used for this edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}

    /**
     * <p>The device fleet used for this edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}

    /**
     * <p>The device fleet used for this edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}


    /**
     * <p>The number of edge devices with the successful deployment.</p>
     */
    inline int GetEdgeDeploymentSuccess() const{ return m_edgeDeploymentSuccess; }

    /**
     * <p>The number of edge devices with the successful deployment.</p>
     */
    inline void SetEdgeDeploymentSuccess(int value) { m_edgeDeploymentSuccess = value; }

    /**
     * <p>The number of edge devices with the successful deployment.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentSuccess(int value) { SetEdgeDeploymentSuccess(value); return *this;}


    /**
     * <p>The number of edge devices yet to pick up deployment, or in progress.</p>
     */
    inline int GetEdgeDeploymentPending() const{ return m_edgeDeploymentPending; }

    /**
     * <p>The number of edge devices yet to pick up deployment, or in progress.</p>
     */
    inline void SetEdgeDeploymentPending(int value) { m_edgeDeploymentPending = value; }

    /**
     * <p>The number of edge devices yet to pick up deployment, or in progress.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentPending(int value) { SetEdgeDeploymentPending(value); return *this;}


    /**
     * <p>The number of edge devices that failed the deployment.</p>
     */
    inline int GetEdgeDeploymentFailed() const{ return m_edgeDeploymentFailed; }

    /**
     * <p>The number of edge devices that failed the deployment.</p>
     */
    inline void SetEdgeDeploymentFailed(int value) { m_edgeDeploymentFailed = value; }

    /**
     * <p>The number of edge devices that failed the deployment.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithEdgeDeploymentFailed(int value) { SetEdgeDeploymentFailed(value); return *this;}


    /**
     * <p>List of stages in the edge deployment plan.</p>
     */
    inline const Aws::Vector<DeploymentStageStatusSummary>& GetStages() const{ return m_stages; }

    /**
     * <p>List of stages in the edge deployment plan.</p>
     */
    inline void SetStages(const Aws::Vector<DeploymentStageStatusSummary>& value) { m_stages = value; }

    /**
     * <p>List of stages in the edge deployment plan.</p>
     */
    inline void SetStages(Aws::Vector<DeploymentStageStatusSummary>&& value) { m_stages = std::move(value); }

    /**
     * <p>List of stages in the edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithStages(const Aws::Vector<DeploymentStageStatusSummary>& value) { SetStages(value); return *this;}

    /**
     * <p>List of stages in the edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithStages(Aws::Vector<DeploymentStageStatusSummary>&& value) { SetStages(std::move(value)); return *this;}

    /**
     * <p>List of stages in the edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& AddStages(const DeploymentStageStatusSummary& value) { m_stages.push_back(value); return *this; }

    /**
     * <p>List of stages in the edge deployment plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& AddStages(DeploymentStageStatusSummary&& value) { m_stages.push_back(std::move(value)); return *this; }


    /**
     * <p>Token to use when calling the next set of stages in the edge deployment
     * plan.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token to use when calling the next set of stages in the edge deployment
     * plan.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token to use when calling the next set of stages in the edge deployment
     * plan.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token to use when calling the next set of stages in the edge deployment
     * plan.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token to use when calling the next set of stages in the edge deployment
     * plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to use when calling the next set of stages in the edge deployment
     * plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token to use when calling the next set of stages in the edge deployment
     * plan.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The time when the edge deployment plan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the edge deployment plan was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time when the edge deployment plan was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time when the edge deployment plan was created.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the edge deployment plan was created.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time when the edge deployment plan was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time when the edge deployment plan was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time when the edge deployment plan was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time when the edge deployment plan was last updated.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time when the edge deployment plan was last updated.</p>
     */
    inline DescribeEdgeDeploymentPlanResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_edgeDeploymentPlanArn;

    Aws::String m_edgeDeploymentPlanName;

    Aws::Vector<EdgeDeploymentModelConfig> m_modelConfigs;

    Aws::String m_deviceFleetName;

    int m_edgeDeploymentSuccess;

    int m_edgeDeploymentPending;

    int m_edgeDeploymentFailed;

    Aws::Vector<DeploymentStageStatusSummary> m_stages;

    Aws::String m_nextToken;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
