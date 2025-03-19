/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/SupportType.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The support policy to use for the cluster. Extended support allows you to
   * remain on specific Kubernetes versions for longer. Clusters in extended support
   * have higher costs. The default value is <code>EXTENDED</code>. Use
   * <code>STANDARD</code> to disable extended support.</p> <p> <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/extended-support-control.html">Learn
   * more about EKS Extended Support in the <i>Amazon EKS User Guide</i>.</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpgradePolicyRequest">AWS
   * API Reference</a></p>
   */
  class UpgradePolicyRequest
  {
  public:
    AWS_EKS_API UpgradePolicyRequest() = default;
    AWS_EKS_API UpgradePolicyRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API UpgradePolicyRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the cluster is set to <code>EXTENDED</code>, it will enter extended
     * support at the end of standard support. If the cluster is set to
     * <code>STANDARD</code>, it will be automatically upgraded at the end of standard
     * support.</p> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/extended-support-control.html">Learn
     * more about EKS Extended Support in the <i>Amazon EKS User Guide</i>.</a> </p>
     */
    inline SupportType GetSupportType() const { return m_supportType; }
    inline bool SupportTypeHasBeenSet() const { return m_supportTypeHasBeenSet; }
    inline void SetSupportType(SupportType value) { m_supportTypeHasBeenSet = true; m_supportType = value; }
    inline UpgradePolicyRequest& WithSupportType(SupportType value) { SetSupportType(value); return *this;}
    ///@}
  private:

    SupportType m_supportType{SupportType::NOT_SET};
    bool m_supportTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
