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
   * <p>Information about how to configure IAM for an add-on.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonPodIdentityConfiguration">AWS
   * API Reference</a></p>
   */
  class AddonPodIdentityConfiguration
  {
  public:
    AWS_EKS_API AddonPodIdentityConfiguration() = default;
    AWS_EKS_API AddonPodIdentityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonPodIdentityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Kubernetes Service Account name used by the add-on.</p>
     */
    inline const Aws::String& GetServiceAccount() const { return m_serviceAccount; }
    inline bool ServiceAccountHasBeenSet() const { return m_serviceAccountHasBeenSet; }
    template<typename ServiceAccountT = Aws::String>
    void SetServiceAccount(ServiceAccountT&& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = std::forward<ServiceAccountT>(value); }
    template<typename ServiceAccountT = Aws::String>
    AddonPodIdentityConfiguration& WithServiceAccount(ServiceAccountT&& value) { SetServiceAccount(std::forward<ServiceAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A suggested IAM Policy for the add-on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendedManagedPolicies() const { return m_recommendedManagedPolicies; }
    inline bool RecommendedManagedPoliciesHasBeenSet() const { return m_recommendedManagedPoliciesHasBeenSet; }
    template<typename RecommendedManagedPoliciesT = Aws::Vector<Aws::String>>
    void SetRecommendedManagedPolicies(RecommendedManagedPoliciesT&& value) { m_recommendedManagedPoliciesHasBeenSet = true; m_recommendedManagedPolicies = std::forward<RecommendedManagedPoliciesT>(value); }
    template<typename RecommendedManagedPoliciesT = Aws::Vector<Aws::String>>
    AddonPodIdentityConfiguration& WithRecommendedManagedPolicies(RecommendedManagedPoliciesT&& value) { SetRecommendedManagedPolicies(std::forward<RecommendedManagedPoliciesT>(value)); return *this;}
    template<typename RecommendedManagedPoliciesT = Aws::String>
    AddonPodIdentityConfiguration& AddRecommendedManagedPolicies(RecommendedManagedPoliciesT&& value) { m_recommendedManagedPoliciesHasBeenSet = true; m_recommendedManagedPolicies.emplace_back(std::forward<RecommendedManagedPoliciesT>(value)); return *this; }
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
