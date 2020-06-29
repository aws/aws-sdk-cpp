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
  class AWS_EKS_API EncryptionConfig
  {
  public:
    EncryptionConfig();
    EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the resources to be encrypted. The only supported value is
     * "secrets".</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>Specifies the resources to be encrypted. The only supported value is
     * "secrets".</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>Specifies the resources to be encrypted. The only supported value is
     * "secrets".</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>Specifies the resources to be encrypted. The only supported value is
     * "secrets".</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>Specifies the resources to be encrypted. The only supported value is
     * "secrets".</p>
     */
    inline EncryptionConfig& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>Specifies the resources to be encrypted. The only supported value is
     * "secrets".</p>
     */
    inline EncryptionConfig& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>Specifies the resources to be encrypted. The only supported value is
     * "secrets".</p>
     */
    inline EncryptionConfig& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>Specifies the resources to be encrypted. The only supported value is
     * "secrets".</p>
     */
    inline EncryptionConfig& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the resources to be encrypted. The only supported value is
     * "secrets".</p>
     */
    inline EncryptionConfig& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }


    /**
     * <p>AWS Key Management Service (AWS KMS) customer master key (CMK). Either the
     * ARN or the alias can be used.</p>
     */
    inline const Provider& GetProvider() const{ return m_provider; }

    /**
     * <p>AWS Key Management Service (AWS KMS) customer master key (CMK). Either the
     * ARN or the alias can be used.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>AWS Key Management Service (AWS KMS) customer master key (CMK). Either the
     * ARN or the alias can be used.</p>
     */
    inline void SetProvider(const Provider& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>AWS Key Management Service (AWS KMS) customer master key (CMK). Either the
     * ARN or the alias can be used.</p>
     */
    inline void SetProvider(Provider&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>AWS Key Management Service (AWS KMS) customer master key (CMK). Either the
     * ARN or the alias can be used.</p>
     */
    inline EncryptionConfig& WithProvider(const Provider& value) { SetProvider(value); return *this;}

    /**
     * <p>AWS Key Management Service (AWS KMS) customer master key (CMK). Either the
     * ARN or the alias can be used.</p>
     */
    inline EncryptionConfig& WithProvider(Provider&& value) { SetProvider(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet;

    Provider m_provider;
    bool m_providerHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
