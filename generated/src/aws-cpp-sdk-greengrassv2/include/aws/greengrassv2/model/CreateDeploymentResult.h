/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
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
namespace GreengrassV2
{
namespace Model
{
  class CreateDeploymentResult
  {
  public:
    AWS_GREENGRASSV2_API CreateDeploymentResult();
    AWS_GREENGRASSV2_API CreateDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API CreateDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline CreateDeploymentResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The ID of the deployment.</p>
     */
    inline CreateDeploymentResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deployment.</p>
     */
    inline CreateDeploymentResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobId() const{ return m_iotJobId; }

    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobId(const Aws::String& value) { m_iotJobId = value; }

    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobId(Aws::String&& value) { m_iotJobId = std::move(value); }

    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobId(const char* value) { m_iotJobId.assign(value); }

    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline CreateDeploymentResult& WithIotJobId(const Aws::String& value) { SetIotJobId(value); return *this;}

    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline CreateDeploymentResult& WithIotJobId(Aws::String&& value) { SetIotJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline CreateDeploymentResult& WithIotJobId(const char* value) { SetIotJobId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobArn() const{ return m_iotJobArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobArn(const Aws::String& value) { m_iotJobArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobArn(Aws::String&& value) { m_iotJobArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobArn(const char* value) { m_iotJobArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline CreateDeploymentResult& WithIotJobArn(const Aws::String& value) { SetIotJobArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline CreateDeploymentResult& WithIotJobArn(Aws::String&& value) { SetIotJobArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline CreateDeploymentResult& WithIotJobArn(const char* value) { SetIotJobArn(value); return *this;}

  private:

    Aws::String m_deploymentId;

    Aws::String m_iotJobId;

    Aws::String m_iotJobArn;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
