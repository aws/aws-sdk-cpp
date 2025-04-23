/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{
  class StopServiceDeploymentResult
  {
  public:
    AWS_ECS_API StopServiceDeploymentResult() = default;
    AWS_ECS_API StopServiceDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API StopServiceDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the stopped service deployment.</p>
     */
    inline const Aws::String& GetServiceDeploymentArn() const { return m_serviceDeploymentArn; }
    template<typename ServiceDeploymentArnT = Aws::String>
    void SetServiceDeploymentArn(ServiceDeploymentArnT&& value) { m_serviceDeploymentArnHasBeenSet = true; m_serviceDeploymentArn = std::forward<ServiceDeploymentArnT>(value); }
    template<typename ServiceDeploymentArnT = Aws::String>
    StopServiceDeploymentResult& WithServiceDeploymentArn(ServiceDeploymentArnT&& value) { SetServiceDeploymentArn(std::forward<ServiceDeploymentArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopServiceDeploymentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceDeploymentArn;
    bool m_serviceDeploymentArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
