/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The security configuration for <code>OnlineStore</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OnlineStoreSecurityConfig">AWS
   * API Reference</a></p>
   */
  class OnlineStoreSecurityConfig
  {
  public:
    AWS_SAGEMAKER_API OnlineStoreSecurityConfig();
    AWS_SAGEMAKER_API OnlineStoreSecurityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OnlineStoreSecurityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Web Services Key Management Service (Amazon Web Services
     * KMS) key that SageMaker Feature Store uses to encrypt the Amazon S3 objects at
     * rest using Amazon S3 server-side encryption.</p> <p>The caller (either IAM user
     * or IAM role) of <code>CreateFeatureGroup</code> must have below permissions to
     * the <code>OnlineStore</code> <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Encrypt"</code> </p> </li> <li> <p> <code>"kms:Decrypt"</code> </p>
     * </li> <li> <p> <code>"kms:DescribeKey"</code> </p> </li> <li> <p>
     * <code>"kms:CreateGrant"</code> </p> </li> <li> <p>
     * <code>"kms:RetireGrant"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptFrom"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptTo"</code> </p> </li> <li> <p>
     * <code>"kms:GenerateDataKey"</code> </p> </li> <li> <p>
     * <code>"kms:ListAliases"</code> </p> </li> <li> <p> <code>"kms:ListGrants"</code>
     * </p> </li> <li> <p> <code>"kms:RevokeGrant"</code> </p> </li> </ul> <p>The
     * caller (either IAM user or IAM role) to all DataPlane operations
     * (<code>PutRecord</code>, <code>GetRecord</code>, <code>DeleteRecord</code>) must
     * have the following permissions to the <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Decrypt"</code> </p> </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (Amazon Web Services
     * KMS) key that SageMaker Feature Store uses to encrypt the Amazon S3 objects at
     * rest using Amazon S3 server-side encryption.</p> <p>The caller (either IAM user
     * or IAM role) of <code>CreateFeatureGroup</code> must have below permissions to
     * the <code>OnlineStore</code> <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Encrypt"</code> </p> </li> <li> <p> <code>"kms:Decrypt"</code> </p>
     * </li> <li> <p> <code>"kms:DescribeKey"</code> </p> </li> <li> <p>
     * <code>"kms:CreateGrant"</code> </p> </li> <li> <p>
     * <code>"kms:RetireGrant"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptFrom"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptTo"</code> </p> </li> <li> <p>
     * <code>"kms:GenerateDataKey"</code> </p> </li> <li> <p>
     * <code>"kms:ListAliases"</code> </p> </li> <li> <p> <code>"kms:ListGrants"</code>
     * </p> </li> <li> <p> <code>"kms:RevokeGrant"</code> </p> </li> </ul> <p>The
     * caller (either IAM user or IAM role) to all DataPlane operations
     * (<code>PutRecord</code>, <code>GetRecord</code>, <code>DeleteRecord</code>) must
     * have the following permissions to the <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Decrypt"</code> </p> </li> </ul>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (Amazon Web Services
     * KMS) key that SageMaker Feature Store uses to encrypt the Amazon S3 objects at
     * rest using Amazon S3 server-side encryption.</p> <p>The caller (either IAM user
     * or IAM role) of <code>CreateFeatureGroup</code> must have below permissions to
     * the <code>OnlineStore</code> <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Encrypt"</code> </p> </li> <li> <p> <code>"kms:Decrypt"</code> </p>
     * </li> <li> <p> <code>"kms:DescribeKey"</code> </p> </li> <li> <p>
     * <code>"kms:CreateGrant"</code> </p> </li> <li> <p>
     * <code>"kms:RetireGrant"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptFrom"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptTo"</code> </p> </li> <li> <p>
     * <code>"kms:GenerateDataKey"</code> </p> </li> <li> <p>
     * <code>"kms:ListAliases"</code> </p> </li> <li> <p> <code>"kms:ListGrants"</code>
     * </p> </li> <li> <p> <code>"kms:RevokeGrant"</code> </p> </li> </ul> <p>The
     * caller (either IAM user or IAM role) to all DataPlane operations
     * (<code>PutRecord</code>, <code>GetRecord</code>, <code>DeleteRecord</code>) must
     * have the following permissions to the <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Decrypt"</code> </p> </li> </ul>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (Amazon Web Services
     * KMS) key that SageMaker Feature Store uses to encrypt the Amazon S3 objects at
     * rest using Amazon S3 server-side encryption.</p> <p>The caller (either IAM user
     * or IAM role) of <code>CreateFeatureGroup</code> must have below permissions to
     * the <code>OnlineStore</code> <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Encrypt"</code> </p> </li> <li> <p> <code>"kms:Decrypt"</code> </p>
     * </li> <li> <p> <code>"kms:DescribeKey"</code> </p> </li> <li> <p>
     * <code>"kms:CreateGrant"</code> </p> </li> <li> <p>
     * <code>"kms:RetireGrant"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptFrom"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptTo"</code> </p> </li> <li> <p>
     * <code>"kms:GenerateDataKey"</code> </p> </li> <li> <p>
     * <code>"kms:ListAliases"</code> </p> </li> <li> <p> <code>"kms:ListGrants"</code>
     * </p> </li> <li> <p> <code>"kms:RevokeGrant"</code> </p> </li> </ul> <p>The
     * caller (either IAM user or IAM role) to all DataPlane operations
     * (<code>PutRecord</code>, <code>GetRecord</code>, <code>DeleteRecord</code>) must
     * have the following permissions to the <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Decrypt"</code> </p> </li> </ul>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (Amazon Web Services
     * KMS) key that SageMaker Feature Store uses to encrypt the Amazon S3 objects at
     * rest using Amazon S3 server-side encryption.</p> <p>The caller (either IAM user
     * or IAM role) of <code>CreateFeatureGroup</code> must have below permissions to
     * the <code>OnlineStore</code> <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Encrypt"</code> </p> </li> <li> <p> <code>"kms:Decrypt"</code> </p>
     * </li> <li> <p> <code>"kms:DescribeKey"</code> </p> </li> <li> <p>
     * <code>"kms:CreateGrant"</code> </p> </li> <li> <p>
     * <code>"kms:RetireGrant"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptFrom"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptTo"</code> </p> </li> <li> <p>
     * <code>"kms:GenerateDataKey"</code> </p> </li> <li> <p>
     * <code>"kms:ListAliases"</code> </p> </li> <li> <p> <code>"kms:ListGrants"</code>
     * </p> </li> <li> <p> <code>"kms:RevokeGrant"</code> </p> </li> </ul> <p>The
     * caller (either IAM user or IAM role) to all DataPlane operations
     * (<code>PutRecord</code>, <code>GetRecord</code>, <code>DeleteRecord</code>) must
     * have the following permissions to the <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Decrypt"</code> </p> </li> </ul>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (Amazon Web Services
     * KMS) key that SageMaker Feature Store uses to encrypt the Amazon S3 objects at
     * rest using Amazon S3 server-side encryption.</p> <p>The caller (either IAM user
     * or IAM role) of <code>CreateFeatureGroup</code> must have below permissions to
     * the <code>OnlineStore</code> <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Encrypt"</code> </p> </li> <li> <p> <code>"kms:Decrypt"</code> </p>
     * </li> <li> <p> <code>"kms:DescribeKey"</code> </p> </li> <li> <p>
     * <code>"kms:CreateGrant"</code> </p> </li> <li> <p>
     * <code>"kms:RetireGrant"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptFrom"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptTo"</code> </p> </li> <li> <p>
     * <code>"kms:GenerateDataKey"</code> </p> </li> <li> <p>
     * <code>"kms:ListAliases"</code> </p> </li> <li> <p> <code>"kms:ListGrants"</code>
     * </p> </li> <li> <p> <code>"kms:RevokeGrant"</code> </p> </li> </ul> <p>The
     * caller (either IAM user or IAM role) to all DataPlane operations
     * (<code>PutRecord</code>, <code>GetRecord</code>, <code>DeleteRecord</code>) must
     * have the following permissions to the <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Decrypt"</code> </p> </li> </ul>
     */
    inline OnlineStoreSecurityConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (Amazon Web Services
     * KMS) key that SageMaker Feature Store uses to encrypt the Amazon S3 objects at
     * rest using Amazon S3 server-side encryption.</p> <p>The caller (either IAM user
     * or IAM role) of <code>CreateFeatureGroup</code> must have below permissions to
     * the <code>OnlineStore</code> <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Encrypt"</code> </p> </li> <li> <p> <code>"kms:Decrypt"</code> </p>
     * </li> <li> <p> <code>"kms:DescribeKey"</code> </p> </li> <li> <p>
     * <code>"kms:CreateGrant"</code> </p> </li> <li> <p>
     * <code>"kms:RetireGrant"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptFrom"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptTo"</code> </p> </li> <li> <p>
     * <code>"kms:GenerateDataKey"</code> </p> </li> <li> <p>
     * <code>"kms:ListAliases"</code> </p> </li> <li> <p> <code>"kms:ListGrants"</code>
     * </p> </li> <li> <p> <code>"kms:RevokeGrant"</code> </p> </li> </ul> <p>The
     * caller (either IAM user or IAM role) to all DataPlane operations
     * (<code>PutRecord</code>, <code>GetRecord</code>, <code>DeleteRecord</code>) must
     * have the following permissions to the <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Decrypt"</code> </p> </li> </ul>
     */
    inline OnlineStoreSecurityConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (Amazon Web Services
     * KMS) key that SageMaker Feature Store uses to encrypt the Amazon S3 objects at
     * rest using Amazon S3 server-side encryption.</p> <p>The caller (either IAM user
     * or IAM role) of <code>CreateFeatureGroup</code> must have below permissions to
     * the <code>OnlineStore</code> <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Encrypt"</code> </p> </li> <li> <p> <code>"kms:Decrypt"</code> </p>
     * </li> <li> <p> <code>"kms:DescribeKey"</code> </p> </li> <li> <p>
     * <code>"kms:CreateGrant"</code> </p> </li> <li> <p>
     * <code>"kms:RetireGrant"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptFrom"</code> </p> </li> <li> <p>
     * <code>"kms:ReEncryptTo"</code> </p> </li> <li> <p>
     * <code>"kms:GenerateDataKey"</code> </p> </li> <li> <p>
     * <code>"kms:ListAliases"</code> </p> </li> <li> <p> <code>"kms:ListGrants"</code>
     * </p> </li> <li> <p> <code>"kms:RevokeGrant"</code> </p> </li> </ul> <p>The
     * caller (either IAM user or IAM role) to all DataPlane operations
     * (<code>PutRecord</code>, <code>GetRecord</code>, <code>DeleteRecord</code>) must
     * have the following permissions to the <code>KmsKeyId</code>:</p> <ul> <li> <p>
     * <code>"kms:Decrypt"</code> </p> </li> </ul>
     */
    inline OnlineStoreSecurityConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
