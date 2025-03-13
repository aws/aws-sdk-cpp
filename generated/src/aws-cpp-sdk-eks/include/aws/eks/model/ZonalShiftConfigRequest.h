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
   * <p>The configuration for zonal shift for the cluster.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ZonalShiftConfigRequest">AWS
   * API Reference</a></p>
   */
  class ZonalShiftConfigRequest
  {
  public:
    AWS_EKS_API ZonalShiftConfigRequest() = default;
    AWS_EKS_API ZonalShiftConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ZonalShiftConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If zonal shift is enabled, Amazon Web Services configures zonal autoshift for
     * the cluster.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ZonalShiftConfigRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
