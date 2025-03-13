/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr-public/model/RegistryAlias.h>
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
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>The details of a public registry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/Registry">AWS
   * API Reference</a></p>
   */
  class Registry
  {
  public:
    AWS_ECRPUBLIC_API Registry() = default;
    AWS_ECRPUBLIC_API Registry(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Registry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that's associated with the registry. If
     * you do not specify a registry, the default public registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    Registry& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the public registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const { return m_registryArn; }
    inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }
    template<typename RegistryArnT = Aws::String>
    void SetRegistryArn(RegistryArnT&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::forward<RegistryArnT>(value); }
    template<typename RegistryArnT = Aws::String>
    Registry& WithRegistryArn(RegistryArnT&& value) { SetRegistryArn(std::forward<RegistryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of a public registry. The URI contains a universal prefix and the
     * registry alias.</p>
     */
    inline const Aws::String& GetRegistryUri() const { return m_registryUri; }
    inline bool RegistryUriHasBeenSet() const { return m_registryUriHasBeenSet; }
    template<typename RegistryUriT = Aws::String>
    void SetRegistryUri(RegistryUriT&& value) { m_registryUriHasBeenSet = true; m_registryUri = std::forward<RegistryUriT>(value); }
    template<typename RegistryUriT = Aws::String>
    Registry& WithRegistryUri(RegistryUriT&& value) { SetRegistryUri(std::forward<RegistryUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the account is a verified Amazon Web Services Marketplace
     * vendor. If an account is verified, each public repository receives a verified
     * account badge on the Amazon ECR Public Gallery.</p>
     */
    inline bool GetVerified() const { return m_verified; }
    inline bool VerifiedHasBeenSet() const { return m_verifiedHasBeenSet; }
    inline void SetVerified(bool value) { m_verifiedHasBeenSet = true; m_verified = value; }
    inline Registry& WithVerified(bool value) { SetVerified(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that represents the aliases for a public registry.</p>
     */
    inline const Aws::Vector<RegistryAlias>& GetAliases() const { return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    template<typename AliasesT = Aws::Vector<RegistryAlias>>
    void SetAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases = std::forward<AliasesT>(value); }
    template<typename AliasesT = Aws::Vector<RegistryAlias>>
    Registry& WithAliases(AliasesT&& value) { SetAliases(std::forward<AliasesT>(value)); return *this;}
    template<typename AliasesT = RegistryAlias>
    Registry& AddAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases.emplace_back(std::forward<AliasesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet = false;

    Aws::String m_registryUri;
    bool m_registryUriHasBeenSet = false;

    bool m_verified{false};
    bool m_verifiedHasBeenSet = false;

    Aws::Vector<RegistryAlias> m_aliases;
    bool m_aliasesHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
