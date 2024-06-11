﻿/**
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
  class CreateDeploymentResult
  {
  public:
    AWS_GREENGRASS_API CreateDeploymentResult();
    AWS_GREENGRASS_API CreateDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API CreateDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the deployment.
     */
    inline const Aws::String& GetDeploymentArn() const{ return m_deploymentArn; }
    inline void SetDeploymentArn(const Aws::String& value) { m_deploymentArn = value; }
    inline void SetDeploymentArn(Aws::String&& value) { m_deploymentArn = std::move(value); }
    inline void SetDeploymentArn(const char* value) { m_deploymentArn.assign(value); }
    inline CreateDeploymentResult& WithDeploymentArn(const Aws::String& value) { SetDeploymentArn(value); return *this;}
    inline CreateDeploymentResult& WithDeploymentArn(Aws::String&& value) { SetDeploymentArn(std::move(value)); return *this;}
    inline CreateDeploymentResult& WithDeploymentArn(const char* value) { SetDeploymentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the deployment.
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }
    inline CreateDeploymentResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline CreateDeploymentResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline CreateDeploymentResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_deploymentArn;

    Aws::String m_deploymentId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
