/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>

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
namespace EKS
{
namespace Model
{

  /**
   * <p>Indicates the current configuration of the load balancing capability on your
   * EKS Auto Mode cluster. For example, if the capability is enabled or disabled.
   * For more information, see EKS Auto Mode load balancing capability in the
   * <i>Amazon EKS User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ElasticLoadBalancing">AWS
   * API Reference</a></p>
   */
  class ElasticLoadBalancing
  {
  public:
    AWS_EKS_API ElasticLoadBalancing() = default;
    AWS_EKS_API ElasticLoadBalancing(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ElasticLoadBalancing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates if the load balancing capability is enabled on your EKS Auto Mode
     * cluster. If the load balancing capability is enabled, EKS Auto Mode will create
     * and delete load balancers in your Amazon Web Services account.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ElasticLoadBalancing& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
