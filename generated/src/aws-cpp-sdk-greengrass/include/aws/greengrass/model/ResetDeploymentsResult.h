/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Greengrass
{
namespace Model
{
  class ResetDeploymentsResult
  {
  public:
    AWS_GREENGRASS_API ResetDeploymentsResult();
    AWS_GREENGRASS_API ResetDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ResetDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the deployment.
     */
    inline const Aws::String& GetDeploymentArn() const{ return m_deploymentArn; }

    /**
     * The ARN of the deployment.
     */
    inline void SetDeploymentArn(const Aws::String& value) { m_deploymentArn = value; }

    /**
     * The ARN of the deployment.
     */
    inline void SetDeploymentArn(Aws::String&& value) { m_deploymentArn = std::move(value); }

    /**
     * The ARN of the deployment.
     */
    inline void SetDeploymentArn(const char* value) { m_deploymentArn.assign(value); }

    /**
     * The ARN of the deployment.
     */
    inline ResetDeploymentsResult& WithDeploymentArn(const Aws::String& value) { SetDeploymentArn(value); return *this;}

    /**
     * The ARN of the deployment.
     */
    inline ResetDeploymentsResult& WithDeploymentArn(Aws::String&& value) { SetDeploymentArn(std::move(value)); return *this;}

    /**
     * The ARN of the deployment.
     */
    inline ResetDeploymentsResult& WithDeploymentArn(const char* value) { SetDeploymentArn(value); return *this;}


    /**
     * The ID of the deployment.
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * The ID of the deployment.
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }

    /**
     * The ID of the deployment.
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }

    /**
     * The ID of the deployment.
     */
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }

    /**
     * The ID of the deployment.
     */
    inline ResetDeploymentsResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * The ID of the deployment.
     */
    inline ResetDeploymentsResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * The ID of the deployment.
     */
    inline ResetDeploymentsResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

  private:

    Aws::String m_deploymentArn;

    Aws::String m_deploymentId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
