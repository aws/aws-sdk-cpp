/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class CreateAliasRequest : public KMSRequest
  {
  public:
    AWS_KMS_API CreateAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlias"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by a name, such as <code>alias/ExampleAlias</code>. </p> <p>The
     * <code>AliasName</code> value must be string of 1-256 characters. It can contain
     * only alphanumeric characters, forward slashes (/), underscores (_), and dashes
     * (-). The alias name cannot begin with <code>alias/aws/</code>. The
     * <code>alias/aws/</code> prefix is reserved for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed keys</a>.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by a name, such as <code>alias/ExampleAlias</code>. </p> <p>The
     * <code>AliasName</code> value must be string of 1-256 characters. It can contain
     * only alphanumeric characters, forward slashes (/), underscores (_), and dashes
     * (-). The alias name cannot begin with <code>alias/aws/</code>. The
     * <code>alias/aws/</code> prefix is reserved for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed keys</a>.</p>
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by a name, such as <code>alias/ExampleAlias</code>. </p> <p>The
     * <code>AliasName</code> value must be string of 1-256 characters. It can contain
     * only alphanumeric characters, forward slashes (/), underscores (_), and dashes
     * (-). The alias name cannot begin with <code>alias/aws/</code>. The
     * <code>alias/aws/</code> prefix is reserved for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed keys</a>.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by a name, such as <code>alias/ExampleAlias</code>. </p> <p>The
     * <code>AliasName</code> value must be string of 1-256 characters. It can contain
     * only alphanumeric characters, forward slashes (/), underscores (_), and dashes
     * (-). The alias name cannot begin with <code>alias/aws/</code>. The
     * <code>alias/aws/</code> prefix is reserved for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed keys</a>.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by a name, such as <code>alias/ExampleAlias</code>. </p> <p>The
     * <code>AliasName</code> value must be string of 1-256 characters. It can contain
     * only alphanumeric characters, forward slashes (/), underscores (_), and dashes
     * (-). The alias name cannot begin with <code>alias/aws/</code>. The
     * <code>alias/aws/</code> prefix is reserved for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed keys</a>.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by a name, such as <code>alias/ExampleAlias</code>. </p> <p>The
     * <code>AliasName</code> value must be string of 1-256 characters. It can contain
     * only alphanumeric characters, forward slashes (/), underscores (_), and dashes
     * (-). The alias name cannot begin with <code>alias/aws/</code>. The
     * <code>alias/aws/</code> prefix is reserved for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed keys</a>.</p>
     */
    inline CreateAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by a name, such as <code>alias/ExampleAlias</code>. </p> <p>The
     * <code>AliasName</code> value must be string of 1-256 characters. It can contain
     * only alphanumeric characters, forward slashes (/), underscores (_), and dashes
     * (-). The alias name cannot begin with <code>alias/aws/</code>. The
     * <code>alias/aws/</code> prefix is reserved for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed keys</a>.</p>
     */
    inline CreateAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>Specifies the alias name. This value must begin with <code>alias/</code>
     * followed by a name, such as <code>alias/ExampleAlias</code>. </p> <p>The
     * <code>AliasName</code> value must be string of 1-256 characters. It can contain
     * only alphanumeric characters, forward slashes (/), underscores (_), and dashes
     * (-). The alias name cannot begin with <code>alias/aws/</code>. The
     * <code>alias/aws/</code> prefix is reserved for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed keys</a>.</p>
     */
    inline CreateAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}


    /**
     * <p>Associates the alias with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a>. The KMS key must be in the same Amazon Web Services Region.
     * </p> <p>A valid key ID is required. If you supply a null or empty string value,
     * this operation returns an error.</p> <p>For help finding the key ID and ARN, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html#find-cmk-id-arn">Finding
     * the Key ID and ARN</a> in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> <p>Specify the key ID or key ARN of the KMS key.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetTargetKeyId() const{ return m_targetKeyId; }

    /**
     * <p>Associates the alias with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a>. The KMS key must be in the same Amazon Web Services Region.
     * </p> <p>A valid key ID is required. If you supply a null or empty string value,
     * this operation returns an error.</p> <p>For help finding the key ID and ARN, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html#find-cmk-id-arn">Finding
     * the Key ID and ARN</a> in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> <p>Specify the key ID or key ARN of the KMS key.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline bool TargetKeyIdHasBeenSet() const { return m_targetKeyIdHasBeenSet; }

    /**
     * <p>Associates the alias with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a>. The KMS key must be in the same Amazon Web Services Region.
     * </p> <p>A valid key ID is required. If you supply a null or empty string value,
     * this operation returns an error.</p> <p>For help finding the key ID and ARN, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html#find-cmk-id-arn">Finding
     * the Key ID and ARN</a> in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> <p>Specify the key ID or key ARN of the KMS key.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetTargetKeyId(const Aws::String& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = value; }

    /**
     * <p>Associates the alias with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a>. The KMS key must be in the same Amazon Web Services Region.
     * </p> <p>A valid key ID is required. If you supply a null or empty string value,
     * this operation returns an error.</p> <p>For help finding the key ID and ARN, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html#find-cmk-id-arn">Finding
     * the Key ID and ARN</a> in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> <p>Specify the key ID or key ARN of the KMS key.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetTargetKeyId(Aws::String&& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = std::move(value); }

    /**
     * <p>Associates the alias with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a>. The KMS key must be in the same Amazon Web Services Region.
     * </p> <p>A valid key ID is required. If you supply a null or empty string value,
     * this operation returns an error.</p> <p>For help finding the key ID and ARN, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html#find-cmk-id-arn">Finding
     * the Key ID and ARN</a> in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> <p>Specify the key ID or key ARN of the KMS key.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetTargetKeyId(const char* value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId.assign(value); }

    /**
     * <p>Associates the alias with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a>. The KMS key must be in the same Amazon Web Services Region.
     * </p> <p>A valid key ID is required. If you supply a null or empty string value,
     * this operation returns an error.</p> <p>For help finding the key ID and ARN, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html#find-cmk-id-arn">Finding
     * the Key ID and ARN</a> in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> <p>Specify the key ID or key ARN of the KMS key.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline CreateAliasRequest& WithTargetKeyId(const Aws::String& value) { SetTargetKeyId(value); return *this;}

    /**
     * <p>Associates the alias with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a>. The KMS key must be in the same Amazon Web Services Region.
     * </p> <p>A valid key ID is required. If you supply a null or empty string value,
     * this operation returns an error.</p> <p>For help finding the key ID and ARN, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html#find-cmk-id-arn">Finding
     * the Key ID and ARN</a> in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> <p>Specify the key ID or key ARN of the KMS key.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline CreateAliasRequest& WithTargetKeyId(Aws::String&& value) { SetTargetKeyId(std::move(value)); return *this;}

    /**
     * <p>Associates the alias with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a>. The KMS key must be in the same Amazon Web Services Region.
     * </p> <p>A valid key ID is required. If you supply a null or empty string value,
     * this operation returns an error.</p> <p>For help finding the key ID and ARN, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html#find-cmk-id-arn">Finding
     * the Key ID and ARN</a> in the <i> <i>Key Management Service Developer Guide</i>
     * </i>.</p> <p>Specify the key ID or key ARN of the KMS key.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline CreateAliasRequest& WithTargetKeyId(const char* value) { SetTargetKeyId(value); return *this;}

  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    Aws::String m_targetKeyId;
    bool m_targetKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
