/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/DeploymentConfigInfo.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetDeploymentConfig</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentConfigOutput">AWS
   * API Reference</a></p>
   */
  class GetDeploymentConfigResult
  {
  public:
    AWS_CODEDEPLOY_API GetDeploymentConfigResult();
    AWS_CODEDEPLOY_API GetDeploymentConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API GetDeploymentConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline const DeploymentConfigInfo& GetDeploymentConfigInfo() const{ return m_deploymentConfigInfo; }

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline void SetDeploymentConfigInfo(const DeploymentConfigInfo& value) { m_deploymentConfigInfo = value; }

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline void SetDeploymentConfigInfo(DeploymentConfigInfo&& value) { m_deploymentConfigInfo = std::move(value); }

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline GetDeploymentConfigResult& WithDeploymentConfigInfo(const DeploymentConfigInfo& value) { SetDeploymentConfigInfo(value); return *this;}

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline GetDeploymentConfigResult& WithDeploymentConfigInfo(DeploymentConfigInfo&& value) { SetDeploymentConfigInfo(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDeploymentConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDeploymentConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDeploymentConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeploymentConfigInfo m_deploymentConfigInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
