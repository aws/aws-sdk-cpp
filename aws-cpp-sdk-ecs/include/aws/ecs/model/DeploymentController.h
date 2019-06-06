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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DeploymentControllerType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>The deployment controller to use for the service. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-types.html">Amazon
   * ECS Deployment Types</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeploymentController">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API DeploymentController
  {
  public:
    DeploymentController();
    DeploymentController(Aws::Utils::Json::JsonView jsonValue);
    DeploymentController& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The deployment controller type to use.</p> <p>There are three deployment
     * controller types available:</p> <dl> <dt>ECS</dt> <dd> <p>The rolling update
     * (<code>ECS</code>) deployment type involves replacing the current running
     * version of the container with the latest version. The number of containers
     * Amazon ECS adds or removes from the service during a rolling update is
     * controlled by adjusting the minimum and maximum number of healthy tasks allowed
     * during a service deployment, as specified in the
     * <a>DeploymentConfiguration</a>.</p> </dd> <dt>CODE_DEPLOY</dt> <dd> <p>The
     * blue/green (<code>CODE_DEPLOY</code>) deployment type uses the blue/green
     * deployment model powered by AWS CodeDeploy, which allows you to verify a new
     * deployment of a service before sending production traffic to it.</p> </dd>
     * <dt>EXTERNAL</dt> <dd> <p>The external (<code>EXTERNAL</code>) deployment type
     * enables you to use any third-party deployment controller for full control over
     * the deployment process for an Amazon ECS service.</p> </dd> </dl>
     */
    inline const DeploymentControllerType& GetType() const{ return m_type; }

    /**
     * <p>The deployment controller type to use.</p> <p>There are three deployment
     * controller types available:</p> <dl> <dt>ECS</dt> <dd> <p>The rolling update
     * (<code>ECS</code>) deployment type involves replacing the current running
     * version of the container with the latest version. The number of containers
     * Amazon ECS adds or removes from the service during a rolling update is
     * controlled by adjusting the minimum and maximum number of healthy tasks allowed
     * during a service deployment, as specified in the
     * <a>DeploymentConfiguration</a>.</p> </dd> <dt>CODE_DEPLOY</dt> <dd> <p>The
     * blue/green (<code>CODE_DEPLOY</code>) deployment type uses the blue/green
     * deployment model powered by AWS CodeDeploy, which allows you to verify a new
     * deployment of a service before sending production traffic to it.</p> </dd>
     * <dt>EXTERNAL</dt> <dd> <p>The external (<code>EXTERNAL</code>) deployment type
     * enables you to use any third-party deployment controller for full control over
     * the deployment process for an Amazon ECS service.</p> </dd> </dl>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The deployment controller type to use.</p> <p>There are three deployment
     * controller types available:</p> <dl> <dt>ECS</dt> <dd> <p>The rolling update
     * (<code>ECS</code>) deployment type involves replacing the current running
     * version of the container with the latest version. The number of containers
     * Amazon ECS adds or removes from the service during a rolling update is
     * controlled by adjusting the minimum and maximum number of healthy tasks allowed
     * during a service deployment, as specified in the
     * <a>DeploymentConfiguration</a>.</p> </dd> <dt>CODE_DEPLOY</dt> <dd> <p>The
     * blue/green (<code>CODE_DEPLOY</code>) deployment type uses the blue/green
     * deployment model powered by AWS CodeDeploy, which allows you to verify a new
     * deployment of a service before sending production traffic to it.</p> </dd>
     * <dt>EXTERNAL</dt> <dd> <p>The external (<code>EXTERNAL</code>) deployment type
     * enables you to use any third-party deployment controller for full control over
     * the deployment process for an Amazon ECS service.</p> </dd> </dl>
     */
    inline void SetType(const DeploymentControllerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The deployment controller type to use.</p> <p>There are three deployment
     * controller types available:</p> <dl> <dt>ECS</dt> <dd> <p>The rolling update
     * (<code>ECS</code>) deployment type involves replacing the current running
     * version of the container with the latest version. The number of containers
     * Amazon ECS adds or removes from the service during a rolling update is
     * controlled by adjusting the minimum and maximum number of healthy tasks allowed
     * during a service deployment, as specified in the
     * <a>DeploymentConfiguration</a>.</p> </dd> <dt>CODE_DEPLOY</dt> <dd> <p>The
     * blue/green (<code>CODE_DEPLOY</code>) deployment type uses the blue/green
     * deployment model powered by AWS CodeDeploy, which allows you to verify a new
     * deployment of a service before sending production traffic to it.</p> </dd>
     * <dt>EXTERNAL</dt> <dd> <p>The external (<code>EXTERNAL</code>) deployment type
     * enables you to use any third-party deployment controller for full control over
     * the deployment process for an Amazon ECS service.</p> </dd> </dl>
     */
    inline void SetType(DeploymentControllerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The deployment controller type to use.</p> <p>There are three deployment
     * controller types available:</p> <dl> <dt>ECS</dt> <dd> <p>The rolling update
     * (<code>ECS</code>) deployment type involves replacing the current running
     * version of the container with the latest version. The number of containers
     * Amazon ECS adds or removes from the service during a rolling update is
     * controlled by adjusting the minimum and maximum number of healthy tasks allowed
     * during a service deployment, as specified in the
     * <a>DeploymentConfiguration</a>.</p> </dd> <dt>CODE_DEPLOY</dt> <dd> <p>The
     * blue/green (<code>CODE_DEPLOY</code>) deployment type uses the blue/green
     * deployment model powered by AWS CodeDeploy, which allows you to verify a new
     * deployment of a service before sending production traffic to it.</p> </dd>
     * <dt>EXTERNAL</dt> <dd> <p>The external (<code>EXTERNAL</code>) deployment type
     * enables you to use any third-party deployment controller for full control over
     * the deployment process for an Amazon ECS service.</p> </dd> </dl>
     */
    inline DeploymentController& WithType(const DeploymentControllerType& value) { SetType(value); return *this;}

    /**
     * <p>The deployment controller type to use.</p> <p>There are three deployment
     * controller types available:</p> <dl> <dt>ECS</dt> <dd> <p>The rolling update
     * (<code>ECS</code>) deployment type involves replacing the current running
     * version of the container with the latest version. The number of containers
     * Amazon ECS adds or removes from the service during a rolling update is
     * controlled by adjusting the minimum and maximum number of healthy tasks allowed
     * during a service deployment, as specified in the
     * <a>DeploymentConfiguration</a>.</p> </dd> <dt>CODE_DEPLOY</dt> <dd> <p>The
     * blue/green (<code>CODE_DEPLOY</code>) deployment type uses the blue/green
     * deployment model powered by AWS CodeDeploy, which allows you to verify a new
     * deployment of a service before sending production traffic to it.</p> </dd>
     * <dt>EXTERNAL</dt> <dd> <p>The external (<code>EXTERNAL</code>) deployment type
     * enables you to use any third-party deployment controller for full control over
     * the deployment process for an Amazon ECS service.</p> </dd> </dl>
     */
    inline DeploymentController& WithType(DeploymentControllerType&& value) { SetType(std::move(value)); return *this;}

  private:

    DeploymentControllerType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
