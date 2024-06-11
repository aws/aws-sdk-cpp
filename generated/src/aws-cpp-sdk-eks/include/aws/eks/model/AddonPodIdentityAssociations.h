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
   * <p>A type of Pod Identity Association owned by an Amazon EKS Add-on.</p> <p>Each
   * EKS Pod Identity Association maps a role to a service account in a namespace in
   * the cluster.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/add-ons-iam.html">Attach
   * an IAM Role to an Amazon EKS add-on using Pod Identity</a> in the EKS User
   * Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonPodIdentityAssociations">AWS
   * API Reference</a></p>
   */
  class AddonPodIdentityAssociations
  {
  public:
    AWS_EKS_API AddonPodIdentityAssociations();
    AWS_EKS_API AddonPodIdentityAssociations(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonPodIdentityAssociations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a Kubernetes Service Account.</p>
     */
    inline const Aws::String& GetServiceAccount() const{ return m_serviceAccount; }
    inline bool ServiceAccountHasBeenSet() const { return m_serviceAccountHasBeenSet; }
    inline void SetServiceAccount(const Aws::String& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = value; }
    inline void SetServiceAccount(Aws::String&& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = std::move(value); }
    inline void SetServiceAccount(const char* value) { m_serviceAccountHasBeenSet = true; m_serviceAccount.assign(value); }
    inline AddonPodIdentityAssociations& WithServiceAccount(const Aws::String& value) { SetServiceAccount(value); return *this;}
    inline AddonPodIdentityAssociations& WithServiceAccount(Aws::String&& value) { SetServiceAccount(std::move(value)); return *this;}
    inline AddonPodIdentityAssociations& WithServiceAccount(const char* value) { SetServiceAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM Role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline AddonPodIdentityAssociations& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline AddonPodIdentityAssociations& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline AddonPodIdentityAssociations& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
