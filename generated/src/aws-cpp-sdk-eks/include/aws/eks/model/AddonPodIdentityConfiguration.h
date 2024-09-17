/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about how to configure IAM for an Addon.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonPodIdentityConfiguration">AWS
   * API Reference</a></p>
   */
  class AddonPodIdentityConfiguration
  {
  public:
    AWS_EKS_API AddonPodIdentityConfiguration();
    AWS_EKS_API AddonPodIdentityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonPodIdentityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Kubernetes Service Account name used by the addon.</p>
     */
    inline const Aws::String& GetServiceAccount() const{ return m_serviceAccount; }
    inline bool ServiceAccountHasBeenSet() const { return m_serviceAccountHasBeenSet; }
    inline void SetServiceAccount(const Aws::String& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = value; }
    inline void SetServiceAccount(Aws::String&& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = std::move(value); }
    inline void SetServiceAccount(const char* value) { m_serviceAccountHasBeenSet = true; m_serviceAccount.assign(value); }
    inline AddonPodIdentityConfiguration& WithServiceAccount(const Aws::String& value) { SetServiceAccount(value); return *this;}
    inline AddonPodIdentityConfiguration& WithServiceAccount(Aws::String&& value) { SetServiceAccount(std::move(value)); return *this;}
    inline AddonPodIdentityConfiguration& WithServiceAccount(const char* value) { SetServiceAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A suggested IAM Policy for the addon.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendedManagedPolicies() const{ return m_recommendedManagedPolicies; }
    inline bool RecommendedManagedPoliciesHasBeenSet() const { return m_recommendedManagedPoliciesHasBeenSet; }
    inline void SetRecommendedManagedPolicies(const Aws::Vector<Aws::String>& value) { m_recommendedManagedPoliciesHasBeenSet = true; m_recommendedManagedPolicies = value; }
    inline void SetRecommendedManagedPolicies(Aws::Vector<Aws::String>&& value) { m_recommendedManagedPoliciesHasBeenSet = true; m_recommendedManagedPolicies = std::move(value); }
    inline AddonPodIdentityConfiguration& WithRecommendedManagedPolicies(const Aws::Vector<Aws::String>& value) { SetRecommendedManagedPolicies(value); return *this;}
    inline AddonPodIdentityConfiguration& WithRecommendedManagedPolicies(Aws::Vector<Aws::String>&& value) { SetRecommendedManagedPolicies(std::move(value)); return *this;}
    inline AddonPodIdentityConfiguration& AddRecommendedManagedPolicies(const Aws::String& value) { m_recommendedManagedPoliciesHasBeenSet = true; m_recommendedManagedPolicies.push_back(value); return *this; }
    inline AddonPodIdentityConfiguration& AddRecommendedManagedPolicies(Aws::String&& value) { m_recommendedManagedPoliciesHasBeenSet = true; m_recommendedManagedPolicies.push_back(std::move(value)); return *this; }
    inline AddonPodIdentityConfiguration& AddRecommendedManagedPolicies(const char* value) { m_recommendedManagedPoliciesHasBeenSet = true; m_recommendedManagedPolicies.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_serviceAccount;
    bool m_serviceAccountHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendedManagedPolicies;
    bool m_recommendedManagedPoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
