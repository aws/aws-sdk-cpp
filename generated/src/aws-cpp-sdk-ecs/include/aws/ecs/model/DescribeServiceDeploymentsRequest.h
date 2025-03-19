/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class DescribeServiceDeploymentsRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DescribeServiceDeploymentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServiceDeployments"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the service deployment.</p> <p>You can specify a maximum of 20
     * ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceDeploymentArns() const { return m_serviceDeploymentArns; }
    inline bool ServiceDeploymentArnsHasBeenSet() const { return m_serviceDeploymentArnsHasBeenSet; }
    template<typename ServiceDeploymentArnsT = Aws::Vector<Aws::String>>
    void SetServiceDeploymentArns(ServiceDeploymentArnsT&& value) { m_serviceDeploymentArnsHasBeenSet = true; m_serviceDeploymentArns = std::forward<ServiceDeploymentArnsT>(value); }
    template<typename ServiceDeploymentArnsT = Aws::Vector<Aws::String>>
    DescribeServiceDeploymentsRequest& WithServiceDeploymentArns(ServiceDeploymentArnsT&& value) { SetServiceDeploymentArns(std::forward<ServiceDeploymentArnsT>(value)); return *this;}
    template<typename ServiceDeploymentArnsT = Aws::String>
    DescribeServiceDeploymentsRequest& AddServiceDeploymentArns(ServiceDeploymentArnsT&& value) { m_serviceDeploymentArnsHasBeenSet = true; m_serviceDeploymentArns.emplace_back(std::forward<ServiceDeploymentArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_serviceDeploymentArns;
    bool m_serviceDeploymentArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
