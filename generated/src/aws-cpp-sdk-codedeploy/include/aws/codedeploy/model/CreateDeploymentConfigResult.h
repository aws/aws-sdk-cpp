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
    AWS_CODEDEPLOY_API CreateDeploymentConfigResult();
    AWS_CODEDEPLOY_API CreateDeploymentConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API CreateDeploymentConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique deployment configuration ID.</p>
     */
    inline const Aws::String& GetDeploymentConfigId() const{ return m_deploymentConfigId; }
    inline void SetDeploymentConfigId(const Aws::String& value) { m_deploymentConfigId = value; }
    inline void SetDeploymentConfigId(Aws::String&& value) { m_deploymentConfigId = std::move(value); }
    inline void SetDeploymentConfigId(const char* value) { m_deploymentConfigId.assign(value); }
    inline CreateDeploymentConfigResult& WithDeploymentConfigId(const Aws::String& value) { SetDeploymentConfigId(value); return *this;}
    inline CreateDeploymentConfigResult& WithDeploymentConfigId(Aws::String&& value) { SetDeploymentConfigId(std::move(value)); return *this;}
    inline CreateDeploymentConfigResult& WithDeploymentConfigId(const char* value) { SetDeploymentConfigId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDeploymentConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDeploymentConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDeploymentConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_deploymentConfigId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
