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
  class AWS_GREENGRASS_API CreateDeploymentResult
  {
  public:
    CreateDeploymentResult();
    CreateDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateDeploymentResult& WithDeploymentArn(const Aws::String& value) { SetDeploymentArn(value); return *this;}

    /**
     * The ARN of the deployment.
     */
    inline CreateDeploymentResult& WithDeploymentArn(Aws::String&& value) { SetDeploymentArn(std::move(value)); return *this;}

    /**
     * The ARN of the deployment.
     */
    inline CreateDeploymentResult& WithDeploymentArn(const char* value) { SetDeploymentArn(value); return *this;}


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
    inline CreateDeploymentResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * The ID of the deployment.
     */
    inline CreateDeploymentResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * The ID of the deployment.
     */
    inline CreateDeploymentResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

  private:

    Aws::String m_deploymentArn;

    Aws::String m_deploymentId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
