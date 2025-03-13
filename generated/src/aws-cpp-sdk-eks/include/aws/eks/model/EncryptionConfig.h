/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/Provider.h>
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
   * <p>The encryption configuration for the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/EncryptionConfig">AWS
   * API Reference</a></p>
   */
  class EncryptionConfig
  {
  public:
    AWS_EKS_API EncryptionConfig() = default;
    AWS_EKS_API EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the resources to be encrypted. The only supported value is
     * <code>secrets</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    EncryptionConfig& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Aws::String>
    EncryptionConfig& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Key Management Service (KMS) key. Either the ARN or the alias can be
     * used.</p>
     */
    inline const Provider& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = Provider>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Provider>
    EncryptionConfig& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    Provider m_provider;
    bool m_providerHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
