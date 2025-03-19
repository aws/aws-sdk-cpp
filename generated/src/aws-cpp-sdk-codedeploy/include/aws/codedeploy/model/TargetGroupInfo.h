/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about a target group in Elastic Load Balancing to use in a
   * deployment. Instances are registered as targets in a target group, and traffic
   * is routed to the target group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TargetGroupInfo">AWS
   * API Reference</a></p>
   */
  class TargetGroupInfo
  {
  public:
    AWS_CODEDEPLOY_API TargetGroupInfo() = default;
    AWS_CODEDEPLOY_API TargetGroupInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TargetGroupInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For blue/green deployments, the name of the target group that instances in
     * the original environment are deregistered from, and instances in the replacement
     * environment are registered with. For in-place deployments, the name of the
     * target group that instances are deregistered from, so they are not serving
     * traffic during a deployment, and then re-registered with after the deployment is
     * complete. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TargetGroupInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
