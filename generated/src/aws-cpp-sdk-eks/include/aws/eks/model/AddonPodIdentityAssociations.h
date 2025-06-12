/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>A type of EKS Pod Identity association owned by an Amazon EKS add-on.</p>
   * <p>Each association maps a role to a service account in a namespace in the
   * cluster.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/add-ons-iam.html">Attach
   * an IAM Role to an Amazon EKS add-on using EKS Pod Identity</a> in the <i>Amazon
   * EKS User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonPodIdentityAssociations">AWS
   * API Reference</a></p>
   */
  class AddonPodIdentityAssociations
  {
  public:
    AWS_EKS_API AddonPodIdentityAssociations() = default;
    AWS_EKS_API AddonPodIdentityAssociations(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonPodIdentityAssociations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a Kubernetes Service Account.</p>
     */
    inline const Aws::String& GetServiceAccount() const { return m_serviceAccount; }
    inline bool ServiceAccountHasBeenSet() const { return m_serviceAccountHasBeenSet; }
    template<typename ServiceAccountT = Aws::String>
    void SetServiceAccount(ServiceAccountT&& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = std::forward<ServiceAccountT>(value); }
    template<typename ServiceAccountT = Aws::String>
    AddonPodIdentityAssociations& WithServiceAccount(ServiceAccountT&& value) { SetServiceAccount(std::forward<ServiceAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM Role.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AddonPodIdentityAssociations& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceAccount;
    bool m_serviceAccountHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
