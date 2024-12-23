﻿/**
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
    AWS_ECS_API DescribeServiceDeploymentsRequest();

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
    inline const Aws::Vector<Aws::String>& GetServiceDeploymentArns() const{ return m_serviceDeploymentArns; }
    inline bool ServiceDeploymentArnsHasBeenSet() const { return m_serviceDeploymentArnsHasBeenSet; }
    inline void SetServiceDeploymentArns(const Aws::Vector<Aws::String>& value) { m_serviceDeploymentArnsHasBeenSet = true; m_serviceDeploymentArns = value; }
    inline void SetServiceDeploymentArns(Aws::Vector<Aws::String>&& value) { m_serviceDeploymentArnsHasBeenSet = true; m_serviceDeploymentArns = std::move(value); }
    inline DescribeServiceDeploymentsRequest& WithServiceDeploymentArns(const Aws::Vector<Aws::String>& value) { SetServiceDeploymentArns(value); return *this;}
    inline DescribeServiceDeploymentsRequest& WithServiceDeploymentArns(Aws::Vector<Aws::String>&& value) { SetServiceDeploymentArns(std::move(value)); return *this;}
    inline DescribeServiceDeploymentsRequest& AddServiceDeploymentArns(const Aws::String& value) { m_serviceDeploymentArnsHasBeenSet = true; m_serviceDeploymentArns.push_back(value); return *this; }
    inline DescribeServiceDeploymentsRequest& AddServiceDeploymentArns(Aws::String&& value) { m_serviceDeploymentArnsHasBeenSet = true; m_serviceDeploymentArns.push_back(std::move(value)); return *this; }
    inline DescribeServiceDeploymentsRequest& AddServiceDeploymentArns(const char* value) { m_serviceDeploymentArnsHasBeenSet = true; m_serviceDeploymentArns.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_serviceDeploymentArns;
    bool m_serviceDeploymentArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
