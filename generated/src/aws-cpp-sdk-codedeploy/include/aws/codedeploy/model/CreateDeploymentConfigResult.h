﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
   * <p>Represents the output of a <code>CreateDeploymentConfig</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentConfigOutput">AWS
   * API Reference</a></p>
   */
  class CreateDeploymentConfigResult
  {
  public:
    AWS_CODEDEPLOY_API CreateDeploymentConfigResult() = default;
    AWS_CODEDEPLOY_API CreateDeploymentConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API CreateDeploymentConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique deployment configuration ID.</p>
     */
    inline const Aws::String& GetDeploymentConfigId() const { return m_deploymentConfigId; }
    template<typename DeploymentConfigIdT = Aws::String>
    void SetDeploymentConfigId(DeploymentConfigIdT&& value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId = std::forward<DeploymentConfigIdT>(value); }
    template<typename DeploymentConfigIdT = Aws::String>
    CreateDeploymentConfigResult& WithDeploymentConfigId(DeploymentConfigIdT&& value) { SetDeploymentConfigId(std::forward<DeploymentConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDeploymentConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentConfigId;
    bool m_deploymentConfigIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
