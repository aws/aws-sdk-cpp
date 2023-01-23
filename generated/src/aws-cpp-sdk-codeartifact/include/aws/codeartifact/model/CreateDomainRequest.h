/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeartifact/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class CreateDomainRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain to create. All domain names in an Amazon Web Services
     * Region that are in the same Amazon Web Services account must be unique. The
     * domain name is used as the prefix in DNS hostnames. Do not use sensitive
     * information in a domain name because it is publicly discoverable. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain to create. All domain names in an Amazon Web Services
     * Region that are in the same Amazon Web Services account must be unique. The
     * domain name is used as the prefix in DNS hostnames. Do not use sensitive
     * information in a domain name because it is publicly discoverable. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain to create. All domain names in an Amazon Web Services
     * Region that are in the same Amazon Web Services account must be unique. The
     * domain name is used as the prefix in DNS hostnames. Do not use sensitive
     * information in a domain name because it is publicly discoverable. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain to create. All domain names in an Amazon Web Services
     * Region that are in the same Amazon Web Services account must be unique. The
     * domain name is used as the prefix in DNS hostnames. Do not use sensitive
     * information in a domain name because it is publicly discoverable. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain to create. All domain names in an Amazon Web Services
     * Region that are in the same Amazon Web Services account must be unique. The
     * domain name is used as the prefix in DNS hostnames. Do not use sensitive
     * information in a domain name because it is publicly discoverable. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain to create. All domain names in an Amazon Web Services
     * Region that are in the same Amazon Web Services account must be unique. The
     * domain name is used as the prefix in DNS hostnames. Do not use sensitive
     * information in a domain name because it is publicly discoverable. </p>
     */
    inline CreateDomainRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain to create. All domain names in an Amazon Web Services
     * Region that are in the same Amazon Web Services account must be unique. The
     * domain name is used as the prefix in DNS hostnames. Do not use sensitive
     * information in a domain name because it is publicly discoverable. </p>
     */
    inline CreateDomainRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain to create. All domain names in an Amazon Web Services
     * Region that are in the same Amazon Web Services account must be unique. The
     * domain name is used as the prefix in DNS hostnames. Do not use sensitive
     * information in a domain name because it is publicly discoverable. </p>
     */
    inline CreateDomainRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The encryption key for the domain. This is used to encrypt content stored in
     * a domain. An encryption key can be a key ID, a key Amazon Resource Name (ARN), a
     * key alias, or a key alias ARN. To specify an <code>encryptionKey</code>, your
     * IAM role must have <code>kms:DescribeKey</code> and <code>kms:CreateGrant</code>
     * permissions on the encryption key that is used. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestSyntax">DescribeKey</a>
     * in the <i>Key Management Service API Reference</i> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">Key
     * Management Service API Permissions Reference</a> in the <i>Key Management
     * Service Developer Guide</i>. </p>  <p> CodeArtifact supports only
     * symmetric CMKs. Do not associate an asymmetric CMK with your domain. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>. </p> 
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p> The encryption key for the domain. This is used to encrypt content stored in
     * a domain. An encryption key can be a key ID, a key Amazon Resource Name (ARN), a
     * key alias, or a key alias ARN. To specify an <code>encryptionKey</code>, your
     * IAM role must have <code>kms:DescribeKey</code> and <code>kms:CreateGrant</code>
     * permissions on the encryption key that is used. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestSyntax">DescribeKey</a>
     * in the <i>Key Management Service API Reference</i> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">Key
     * Management Service API Permissions Reference</a> in the <i>Key Management
     * Service Developer Guide</i>. </p>  <p> CodeArtifact supports only
     * symmetric CMKs. Do not associate an asymmetric CMK with your domain. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>. </p> 
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p> The encryption key for the domain. This is used to encrypt content stored in
     * a domain. An encryption key can be a key ID, a key Amazon Resource Name (ARN), a
     * key alias, or a key alias ARN. To specify an <code>encryptionKey</code>, your
     * IAM role must have <code>kms:DescribeKey</code> and <code>kms:CreateGrant</code>
     * permissions on the encryption key that is used. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestSyntax">DescribeKey</a>
     * in the <i>Key Management Service API Reference</i> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">Key
     * Management Service API Permissions Reference</a> in the <i>Key Management
     * Service Developer Guide</i>. </p>  <p> CodeArtifact supports only
     * symmetric CMKs. Do not associate an asymmetric CMK with your domain. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>. </p> 
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p> The encryption key for the domain. This is used to encrypt content stored in
     * a domain. An encryption key can be a key ID, a key Amazon Resource Name (ARN), a
     * key alias, or a key alias ARN. To specify an <code>encryptionKey</code>, your
     * IAM role must have <code>kms:DescribeKey</code> and <code>kms:CreateGrant</code>
     * permissions on the encryption key that is used. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestSyntax">DescribeKey</a>
     * in the <i>Key Management Service API Reference</i> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">Key
     * Management Service API Permissions Reference</a> in the <i>Key Management
     * Service Developer Guide</i>. </p>  <p> CodeArtifact supports only
     * symmetric CMKs. Do not associate an asymmetric CMK with your domain. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>. </p> 
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p> The encryption key for the domain. This is used to encrypt content stored in
     * a domain. An encryption key can be a key ID, a key Amazon Resource Name (ARN), a
     * key alias, or a key alias ARN. To specify an <code>encryptionKey</code>, your
     * IAM role must have <code>kms:DescribeKey</code> and <code>kms:CreateGrant</code>
     * permissions on the encryption key that is used. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestSyntax">DescribeKey</a>
     * in the <i>Key Management Service API Reference</i> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">Key
     * Management Service API Permissions Reference</a> in the <i>Key Management
     * Service Developer Guide</i>. </p>  <p> CodeArtifact supports only
     * symmetric CMKs. Do not associate an asymmetric CMK with your domain. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>. </p> 
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p> The encryption key for the domain. This is used to encrypt content stored in
     * a domain. An encryption key can be a key ID, a key Amazon Resource Name (ARN), a
     * key alias, or a key alias ARN. To specify an <code>encryptionKey</code>, your
     * IAM role must have <code>kms:DescribeKey</code> and <code>kms:CreateGrant</code>
     * permissions on the encryption key that is used. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestSyntax">DescribeKey</a>
     * in the <i>Key Management Service API Reference</i> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">Key
     * Management Service API Permissions Reference</a> in the <i>Key Management
     * Service Developer Guide</i>. </p>  <p> CodeArtifact supports only
     * symmetric CMKs. Do not associate an asymmetric CMK with your domain. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>. </p> 
     */
    inline CreateDomainRequest& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p> The encryption key for the domain. This is used to encrypt content stored in
     * a domain. An encryption key can be a key ID, a key Amazon Resource Name (ARN), a
     * key alias, or a key alias ARN. To specify an <code>encryptionKey</code>, your
     * IAM role must have <code>kms:DescribeKey</code> and <code>kms:CreateGrant</code>
     * permissions on the encryption key that is used. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestSyntax">DescribeKey</a>
     * in the <i>Key Management Service API Reference</i> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">Key
     * Management Service API Permissions Reference</a> in the <i>Key Management
     * Service Developer Guide</i>. </p>  <p> CodeArtifact supports only
     * symmetric CMKs. Do not associate an asymmetric CMK with your domain. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>. </p> 
     */
    inline CreateDomainRequest& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p> The encryption key for the domain. This is used to encrypt content stored in
     * a domain. An encryption key can be a key ID, a key Amazon Resource Name (ARN), a
     * key alias, or a key alias ARN. To specify an <code>encryptionKey</code>, your
     * IAM role must have <code>kms:DescribeKey</code> and <code>kms:CreateGrant</code>
     * permissions on the encryption key that is used. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestSyntax">DescribeKey</a>
     * in the <i>Key Management Service API Reference</i> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">Key
     * Management Service API Permissions Reference</a> in the <i>Key Management
     * Service Developer Guide</i>. </p>  <p> CodeArtifact supports only
     * symmetric CMKs. Do not associate an asymmetric CMK with your domain. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>. </p> 
     */
    inline CreateDomainRequest& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p>One or more tag key-value pairs for the domain.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tag key-value pairs for the domain.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tag key-value pairs for the domain.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tag key-value pairs for the domain.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tag key-value pairs for the domain.</p>
     */
    inline CreateDomainRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tag key-value pairs for the domain.</p>
     */
    inline CreateDomainRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tag key-value pairs for the domain.</p>
     */
    inline CreateDomainRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tag key-value pairs for the domain.</p>
     */
    inline CreateDomainRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
