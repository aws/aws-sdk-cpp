/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodeDeploy {
namespace Model {

/**
 * <p>Information about a Classic Load Balancer in Elastic Load Balancing to use in
 * a deployment. Instances are registered directly with a load balancer, and
 * traffic is routed to the load balancer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ELBInfo">AWS
 * API Reference</a></p>
 */
class ELBInfo {
 public:
  AWS_CODEDEPLOY_API ELBInfo() = default;
  AWS_CODEDEPLOY_API ELBInfo(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEDEPLOY_API ELBInfo& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEDEPLOY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>For blue/green deployments, the name of the Classic Load Balancer that is
   * used to route traffic from original instances to replacement instances in a
   * blue/green deployment. For in-place deployments, the name of the Classic Load
   * Balancer that instances are deregistered from so they are not serving traffic
   * during a deployment, and then re-registered with after the deployment is
   * complete.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ELBInfo& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws
