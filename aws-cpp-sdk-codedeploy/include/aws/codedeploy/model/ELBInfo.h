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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about a load balancer in Elastic Load Balancing to use in a
   * deployment. Instances are registered directly with a load balancer, and traffic
   * is routed to the load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ELBInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ELBInfo
  {
  public:
    ELBInfo();
    ELBInfo(Aws::Utils::Json::JsonView jsonValue);
    ELBInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For blue/green deployments, the name of the load balancer that is used to
     * route traffic from original instances to replacement instances in a blue/green
     * deployment. For in-place deployments, the name of the load balancer that
     * instances are deregistered from so they are not serving traffic during a
     * deployment, and then re-registered with after the deployment is complete.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>For blue/green deployments, the name of the load balancer that is used to
     * route traffic from original instances to replacement instances in a blue/green
     * deployment. For in-place deployments, the name of the load balancer that
     * instances are deregistered from so they are not serving traffic during a
     * deployment, and then re-registered with after the deployment is complete.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>For blue/green deployments, the name of the load balancer that is used to
     * route traffic from original instances to replacement instances in a blue/green
     * deployment. For in-place deployments, the name of the load balancer that
     * instances are deregistered from so they are not serving traffic during a
     * deployment, and then re-registered with after the deployment is complete.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>For blue/green deployments, the name of the load balancer that is used to
     * route traffic from original instances to replacement instances in a blue/green
     * deployment. For in-place deployments, the name of the load balancer that
     * instances are deregistered from so they are not serving traffic during a
     * deployment, and then re-registered with after the deployment is complete.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>For blue/green deployments, the name of the load balancer that is used to
     * route traffic from original instances to replacement instances in a blue/green
     * deployment. For in-place deployments, the name of the load balancer that
     * instances are deregistered from so they are not serving traffic during a
     * deployment, and then re-registered with after the deployment is complete.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>For blue/green deployments, the name of the load balancer that is used to
     * route traffic from original instances to replacement instances in a blue/green
     * deployment. For in-place deployments, the name of the load balancer that
     * instances are deregistered from so they are not serving traffic during a
     * deployment, and then re-registered with after the deployment is complete.</p>
     */
    inline ELBInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>For blue/green deployments, the name of the load balancer that is used to
     * route traffic from original instances to replacement instances in a blue/green
     * deployment. For in-place deployments, the name of the load balancer that
     * instances are deregistered from so they are not serving traffic during a
     * deployment, and then re-registered with after the deployment is complete.</p>
     */
    inline ELBInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>For blue/green deployments, the name of the load balancer that is used to
     * route traffic from original instances to replacement instances in a blue/green
     * deployment. For in-place deployments, the name of the load balancer that
     * instances are deregistered from so they are not serving traffic during a
     * deployment, and then re-registered with after the deployment is complete.</p>
     */
    inline ELBInfo& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
