/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/StopServiceDeploymentStopType.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class StopServiceDeploymentRequest : public ECSRequest
  {
  public:
    AWS_ECS_API StopServiceDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopServiceDeployment"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the service deployment that you want to stop.</p>
     */
    inline const Aws::String& GetServiceDeploymentArn() const { return m_serviceDeploymentArn; }
    inline bool ServiceDeploymentArnHasBeenSet() const { return m_serviceDeploymentArnHasBeenSet; }
    template<typename ServiceDeploymentArnT = Aws::String>
    void SetServiceDeploymentArn(ServiceDeploymentArnT&& value) { m_serviceDeploymentArnHasBeenSet = true; m_serviceDeploymentArn = std::forward<ServiceDeploymentArnT>(value); }
    template<typename ServiceDeploymentArnT = Aws::String>
    StopServiceDeploymentRequest& WithServiceDeploymentArn(ServiceDeploymentArnT&& value) { SetServiceDeploymentArn(std::forward<ServiceDeploymentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How you want Amazon ECS to stop the service. </p> <p>The valid values are
     * <code>ROLLBACK</code>.</p>
     */
    inline StopServiceDeploymentStopType GetStopType() const { return m_stopType; }
    inline bool StopTypeHasBeenSet() const { return m_stopTypeHasBeenSet; }
    inline void SetStopType(StopServiceDeploymentStopType value) { m_stopTypeHasBeenSet = true; m_stopType = value; }
    inline StopServiceDeploymentRequest& WithStopType(StopServiceDeploymentStopType value) { SetStopType(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceDeploymentArn;
    bool m_serviceDeploymentArnHasBeenSet = false;

    StopServiceDeploymentStopType m_stopType{StopServiceDeploymentStopType::NOT_SET};
    bool m_stopTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
