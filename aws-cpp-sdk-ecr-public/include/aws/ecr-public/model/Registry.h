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
    AWS_ECRPUBLIC_API Registry();
    AWS_ECRPUBLIC_API Registry(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Registry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account ID associated with the registry. If you do not specify a
     * registry, the default public registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry. If you do not specify a
     * registry, the default public registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry. If you do not specify a
     * registry, the default public registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry. If you do not specify a
     * registry, the default public registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry. If you do not specify a
     * registry, the default public registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry. If you do not specify a
     * registry, the default public registry is assumed.</p>
     */
    inline Registry& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry. If you do not specify a
     * registry, the default public registry is assumed.</p>
     */
    inline Registry& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry. If you do not specify a
     * registry, the default public registry is assumed.</p>
     */
    inline Registry& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the public registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the public registry.</p>
     */
    inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the public registry.</p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArnHasBeenSet = true; m_registryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the public registry.</p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the public registry.</p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArnHasBeenSet = true; m_registryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the public registry.</p>
     */
    inline Registry& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the public registry.</p>
     */
    inline Registry& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the public registry.</p>
     */
    inline Registry& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}


    /**
     * <p>The URI of a public registry. The URI contains a universal prefix and the
     * registry alias.</p>
     */
    inline const Aws::String& GetRegistryUri() const{ return m_registryUri; }

    /**
     * <p>The URI of a public registry. The URI contains a universal prefix and the
     * registry alias.</p>
     */
    inline bool RegistryUriHasBeenSet() const { return m_registryUriHasBeenSet; }

    /**
     * <p>The URI of a public registry. The URI contains a universal prefix and the
     * registry alias.</p>
     */
    inline void SetRegistryUri(const Aws::String& value) { m_registryUriHasBeenSet = true; m_registryUri = value; }

    /**
     * <p>The URI of a public registry. The URI contains a universal prefix and the
     * registry alias.</p>
     */
    inline void SetRegistryUri(Aws::String&& value) { m_registryUriHasBeenSet = true; m_registryUri = std::move(value); }

    /**
     * <p>The URI of a public registry. The URI contains a universal prefix and the
     * registry alias.</p>
     */
    inline void SetRegistryUri(const char* value) { m_registryUriHasBeenSet = true; m_registryUri.assign(value); }

    /**
     * <p>The URI of a public registry. The URI contains a universal prefix and the
     * registry alias.</p>
     */
    inline Registry& WithRegistryUri(const Aws::String& value) { SetRegistryUri(value); return *this;}

    /**
     * <p>The URI of a public registry. The URI contains a universal prefix and the
     * registry alias.</p>
     */
    inline Registry& WithRegistryUri(Aws::String&& value) { SetRegistryUri(std::move(value)); return *this;}

    /**
     * <p>The URI of a public registry. The URI contains a universal prefix and the
     * registry alias.</p>
     */
    inline Registry& WithRegistryUri(const char* value) { SetRegistryUri(value); return *this;}


    /**
     * <p>Whether the account is verified. This indicates whether the account is an AWS
     * Marketplace vendor. If an account is verified, each public repository will
     * received a verified account badge on the Amazon ECR Public Gallery.</p>
     */
    inline bool GetVerified() const{ return m_verified; }

    /**
     * <p>Whether the account is verified. This indicates whether the account is an AWS
     * Marketplace vendor. If an account is verified, each public repository will
     * received a verified account badge on the Amazon ECR Public Gallery.</p>
     */
    inline bool VerifiedHasBeenSet() const { return m_verifiedHasBeenSet; }

    /**
     * <p>Whether the account is verified. This indicates whether the account is an AWS
     * Marketplace vendor. If an account is verified, each public repository will
     * received a verified account badge on the Amazon ECR Public Gallery.</p>
     */
    inline void SetVerified(bool value) { m_verifiedHasBeenSet = true; m_verified = value; }

    /**
     * <p>Whether the account is verified. This indicates whether the account is an AWS
     * Marketplace vendor. If an account is verified, each public repository will
     * received a verified account badge on the Amazon ECR Public Gallery.</p>
     */
    inline Registry& WithVerified(bool value) { SetVerified(value); return *this;}


    /**
     * <p>An array of objects representing the aliases for a public registry.</p>
     */
    inline const Aws::Vector<RegistryAlias>& GetAliases() const{ return m_aliases; }

    /**
     * <p>An array of objects representing the aliases for a public registry.</p>
     */
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }

    /**
     * <p>An array of objects representing the aliases for a public registry.</p>
     */
    inline void SetAliases(const Aws::Vector<RegistryAlias>& value) { m_aliasesHasBeenSet = true; m_aliases = value; }

    /**
     * <p>An array of objects representing the aliases for a public registry.</p>
     */
    inline void SetAliases(Aws::Vector<RegistryAlias>&& value) { m_aliasesHasBeenSet = true; m_aliases = std::move(value); }

    /**
     * <p>An array of objects representing the aliases for a public registry.</p>
     */
    inline Registry& WithAliases(const Aws::Vector<RegistryAlias>& value) { SetAliases(value); return *this;}

    /**
     * <p>An array of objects representing the aliases for a public registry.</p>
     */
    inline Registry& WithAliases(Aws::Vector<RegistryAlias>&& value) { SetAliases(std::move(value)); return *this;}

    /**
     * <p>An array of objects representing the aliases for a public registry.</p>
     */
    inline Registry& AddAliases(const RegistryAlias& value) { m_aliasesHasBeenSet = true; m_aliases.push_back(value); return *this; }

    /**
     * <p>An array of objects representing the aliases for a public registry.</p>
     */
    inline Registry& AddAliases(RegistryAlias&& value) { m_aliasesHasBeenSet = true; m_aliases.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet = false;

    Aws::String m_registryUri;
    bool m_registryUriHasBeenSet = false;

    bool m_verified;
    bool m_verifiedHasBeenSet = false;

    Aws::Vector<RegistryAlias> m_aliases;
    bool m_aliasesHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
