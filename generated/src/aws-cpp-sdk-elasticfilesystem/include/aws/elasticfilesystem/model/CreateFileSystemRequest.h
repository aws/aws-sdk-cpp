/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/PerformanceMode.h>
#include <aws/elasticfilesystem/model/ThroughputMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class CreateFileSystemRequest : public EFSRequest
  {
  public:
    AWS_EFS_API CreateFileSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFileSystem"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    /**
     * <p>A string of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline const Aws::String& GetCreationToken() const{ return m_creationToken; }

    /**
     * <p>A string of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline bool CreationTokenHasBeenSet() const { return m_creationTokenHasBeenSet; }

    /**
     * <p>A string of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline void SetCreationToken(const Aws::String& value) { m_creationTokenHasBeenSet = true; m_creationToken = value; }

    /**
     * <p>A string of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline void SetCreationToken(Aws::String&& value) { m_creationTokenHasBeenSet = true; m_creationToken = std::move(value); }

    /**
     * <p>A string of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline void SetCreationToken(const char* value) { m_creationTokenHasBeenSet = true; m_creationToken.assign(value); }

    /**
     * <p>A string of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline CreateFileSystemRequest& WithCreationToken(const Aws::String& value) { SetCreationToken(value); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline CreateFileSystemRequest& WithCreationToken(Aws::String&& value) { SetCreationToken(std::move(value)); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline CreateFileSystemRequest& WithCreationToken(const char* value) { SetCreationToken(value); return *this;}


    /**
     * <p>The performance mode of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. The performance mode can't be changed
     * after the file system has been created.</p>  <p>The <code>maxIO</code>
     * mode is not supported on file systems using One Zone storage classes.</p>
     * 
     */
    inline const PerformanceMode& GetPerformanceMode() const{ return m_performanceMode; }

    /**
     * <p>The performance mode of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. The performance mode can't be changed
     * after the file system has been created.</p>  <p>The <code>maxIO</code>
     * mode is not supported on file systems using One Zone storage classes.</p>
     * 
     */
    inline bool PerformanceModeHasBeenSet() const { return m_performanceModeHasBeenSet; }

    /**
     * <p>The performance mode of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. The performance mode can't be changed
     * after the file system has been created.</p>  <p>The <code>maxIO</code>
     * mode is not supported on file systems using One Zone storage classes.</p>
     * 
     */
    inline void SetPerformanceMode(const PerformanceMode& value) { m_performanceModeHasBeenSet = true; m_performanceMode = value; }

    /**
     * <p>The performance mode of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. The performance mode can't be changed
     * after the file system has been created.</p>  <p>The <code>maxIO</code>
     * mode is not supported on file systems using One Zone storage classes.</p>
     * 
     */
    inline void SetPerformanceMode(PerformanceMode&& value) { m_performanceModeHasBeenSet = true; m_performanceMode = std::move(value); }

    /**
     * <p>The performance mode of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. The performance mode can't be changed
     * after the file system has been created.</p>  <p>The <code>maxIO</code>
     * mode is not supported on file systems using One Zone storage classes.</p>
     * 
     */
    inline CreateFileSystemRequest& WithPerformanceMode(const PerformanceMode& value) { SetPerformanceMode(value); return *this;}

    /**
     * <p>The performance mode of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. The performance mode can't be changed
     * after the file system has been created.</p>  <p>The <code>maxIO</code>
     * mode is not supported on file systems using One Zone storage classes.</p>
     * 
     */
    inline CreateFileSystemRequest& WithPerformanceMode(PerformanceMode&& value) { SetPerformanceMode(std::move(value)); return *this;}


    /**
     * <p>A Boolean value that, if true, creates an encrypted file system. When
     * creating an encrypted file system, you have the option of specifying an existing
     * Key Management Service key (KMS key). If you don't specify a KMS key, then the
     * default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>, is used to
     * protect the encrypted file system. </p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>A Boolean value that, if true, creates an encrypted file system. When
     * creating an encrypted file system, you have the option of specifying an existing
     * Key Management Service key (KMS key). If you don't specify a KMS key, then the
     * default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>, is used to
     * protect the encrypted file system. </p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>A Boolean value that, if true, creates an encrypted file system. When
     * creating an encrypted file system, you have the option of specifying an existing
     * Key Management Service key (KMS key). If you don't specify a KMS key, then the
     * default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>, is used to
     * protect the encrypted file system. </p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>A Boolean value that, if true, creates an encrypted file system. When
     * creating an encrypted file system, you have the option of specifying an existing
     * Key Management Service key (KMS key). If you don't specify a KMS key, then the
     * default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>, is used to
     * protect the encrypted file system. </p>
     */
    inline CreateFileSystemRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The ID of the KMS key that you want to use to protect the encrypted file
     * system. This parameter is required only if you want to use a non-default KMS
     * key. If this parameter is not specified, the default KMS key for Amazon EFS is
     * used. You can specify a KMS key ID using the following formats:</p> <ul> <li>
     * <p>Key ID - A unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An ARN
     * for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If you use <code>KmsKeyId</code>, you must set the
     * <a>CreateFileSystemRequest$Encrypted</a> parameter to true.</p> 
     * <p>EFS accepts only symmetric KMS keys. You cannot use asymmetric KMS keys with
     * Amazon EFS file systems.</p> 
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the KMS key that you want to use to protect the encrypted file
     * system. This parameter is required only if you want to use a non-default KMS
     * key. If this parameter is not specified, the default KMS key for Amazon EFS is
     * used. You can specify a KMS key ID using the following formats:</p> <ul> <li>
     * <p>Key ID - A unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An ARN
     * for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If you use <code>KmsKeyId</code>, you must set the
     * <a>CreateFileSystemRequest$Encrypted</a> parameter to true.</p> 
     * <p>EFS accepts only symmetric KMS keys. You cannot use asymmetric KMS keys with
     * Amazon EFS file systems.</p> 
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key that you want to use to protect the encrypted file
     * system. This parameter is required only if you want to use a non-default KMS
     * key. If this parameter is not specified, the default KMS key for Amazon EFS is
     * used. You can specify a KMS key ID using the following formats:</p> <ul> <li>
     * <p>Key ID - A unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An ARN
     * for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If you use <code>KmsKeyId</code>, you must set the
     * <a>CreateFileSystemRequest$Encrypted</a> parameter to true.</p> 
     * <p>EFS accepts only symmetric KMS keys. You cannot use asymmetric KMS keys with
     * Amazon EFS file systems.</p> 
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the KMS key that you want to use to protect the encrypted file
     * system. This parameter is required only if you want to use a non-default KMS
     * key. If this parameter is not specified, the default KMS key for Amazon EFS is
     * used. You can specify a KMS key ID using the following formats:</p> <ul> <li>
     * <p>Key ID - A unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An ARN
     * for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If you use <code>KmsKeyId</code>, you must set the
     * <a>CreateFileSystemRequest$Encrypted</a> parameter to true.</p> 
     * <p>EFS accepts only symmetric KMS keys. You cannot use asymmetric KMS keys with
     * Amazon EFS file systems.</p> 
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key that you want to use to protect the encrypted file
     * system. This parameter is required only if you want to use a non-default KMS
     * key. If this parameter is not specified, the default KMS key for Amazon EFS is
     * used. You can specify a KMS key ID using the following formats:</p> <ul> <li>
     * <p>Key ID - A unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An ARN
     * for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If you use <code>KmsKeyId</code>, you must set the
     * <a>CreateFileSystemRequest$Encrypted</a> parameter to true.</p> 
     * <p>EFS accepts only symmetric KMS keys. You cannot use asymmetric KMS keys with
     * Amazon EFS file systems.</p> 
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key that you want to use to protect the encrypted file
     * system. This parameter is required only if you want to use a non-default KMS
     * key. If this parameter is not specified, the default KMS key for Amazon EFS is
     * used. You can specify a KMS key ID using the following formats:</p> <ul> <li>
     * <p>Key ID - A unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An ARN
     * for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If you use <code>KmsKeyId</code>, you must set the
     * <a>CreateFileSystemRequest$Encrypted</a> parameter to true.</p> 
     * <p>EFS accepts only symmetric KMS keys. You cannot use asymmetric KMS keys with
     * Amazon EFS file systems.</p> 
     */
    inline CreateFileSystemRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key that you want to use to protect the encrypted file
     * system. This parameter is required only if you want to use a non-default KMS
     * key. If this parameter is not specified, the default KMS key for Amazon EFS is
     * used. You can specify a KMS key ID using the following formats:</p> <ul> <li>
     * <p>Key ID - A unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An ARN
     * for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If you use <code>KmsKeyId</code>, you must set the
     * <a>CreateFileSystemRequest$Encrypted</a> parameter to true.</p> 
     * <p>EFS accepts only symmetric KMS keys. You cannot use asymmetric KMS keys with
     * Amazon EFS file systems.</p> 
     */
    inline CreateFileSystemRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key that you want to use to protect the encrypted file
     * system. This parameter is required only if you want to use a non-default KMS
     * key. If this parameter is not specified, the default KMS key for Amazon EFS is
     * used. You can specify a KMS key ID using the following formats:</p> <ul> <li>
     * <p>Key ID - A unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An ARN
     * for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If you use <code>KmsKeyId</code>, you must set the
     * <a>CreateFileSystemRequest$Encrypted</a> parameter to true.</p> 
     * <p>EFS accepts only symmetric KMS keys. You cannot use asymmetric KMS keys with
     * Amazon EFS file systems.</p> 
     */
    inline CreateFileSystemRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specifies the throughput mode for the file system. The mode can be
     * <code>bursting</code>, <code>provisioned</code>, or <code>elastic</code>. If you
     * set <code>ThroughputMode</code> to <code>provisioned</code>, you must also set a
     * value for <code>ProvisionedThroughputInMibps</code>. After you create the file
     * system, you can decrease your file system's throughput in Provisioned Throughput
     * mode or change between the throughput modes, with certain time restrictions. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#provisioned-throughput">Specifying
     * throughput with provisioned mode</a> in the <i>Amazon EFS User Guide</i>. </p>
     * <p>Default is <code>bursting</code>.</p>
     */
    inline const ThroughputMode& GetThroughputMode() const{ return m_throughputMode; }

    /**
     * <p>Specifies the throughput mode for the file system. The mode can be
     * <code>bursting</code>, <code>provisioned</code>, or <code>elastic</code>. If you
     * set <code>ThroughputMode</code> to <code>provisioned</code>, you must also set a
     * value for <code>ProvisionedThroughputInMibps</code>. After you create the file
     * system, you can decrease your file system's throughput in Provisioned Throughput
     * mode or change between the throughput modes, with certain time restrictions. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#provisioned-throughput">Specifying
     * throughput with provisioned mode</a> in the <i>Amazon EFS User Guide</i>. </p>
     * <p>Default is <code>bursting</code>.</p>
     */
    inline bool ThroughputModeHasBeenSet() const { return m_throughputModeHasBeenSet; }

    /**
     * <p>Specifies the throughput mode for the file system. The mode can be
     * <code>bursting</code>, <code>provisioned</code>, or <code>elastic</code>. If you
     * set <code>ThroughputMode</code> to <code>provisioned</code>, you must also set a
     * value for <code>ProvisionedThroughputInMibps</code>. After you create the file
     * system, you can decrease your file system's throughput in Provisioned Throughput
     * mode or change between the throughput modes, with certain time restrictions. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#provisioned-throughput">Specifying
     * throughput with provisioned mode</a> in the <i>Amazon EFS User Guide</i>. </p>
     * <p>Default is <code>bursting</code>.</p>
     */
    inline void SetThroughputMode(const ThroughputMode& value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }

    /**
     * <p>Specifies the throughput mode for the file system. The mode can be
     * <code>bursting</code>, <code>provisioned</code>, or <code>elastic</code>. If you
     * set <code>ThroughputMode</code> to <code>provisioned</code>, you must also set a
     * value for <code>ProvisionedThroughputInMibps</code>. After you create the file
     * system, you can decrease your file system's throughput in Provisioned Throughput
     * mode or change between the throughput modes, with certain time restrictions. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#provisioned-throughput">Specifying
     * throughput with provisioned mode</a> in the <i>Amazon EFS User Guide</i>. </p>
     * <p>Default is <code>bursting</code>.</p>
     */
    inline void SetThroughputMode(ThroughputMode&& value) { m_throughputModeHasBeenSet = true; m_throughputMode = std::move(value); }

    /**
     * <p>Specifies the throughput mode for the file system. The mode can be
     * <code>bursting</code>, <code>provisioned</code>, or <code>elastic</code>. If you
     * set <code>ThroughputMode</code> to <code>provisioned</code>, you must also set a
     * value for <code>ProvisionedThroughputInMibps</code>. After you create the file
     * system, you can decrease your file system's throughput in Provisioned Throughput
     * mode or change between the throughput modes, with certain time restrictions. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#provisioned-throughput">Specifying
     * throughput with provisioned mode</a> in the <i>Amazon EFS User Guide</i>. </p>
     * <p>Default is <code>bursting</code>.</p>
     */
    inline CreateFileSystemRequest& WithThroughputMode(const ThroughputMode& value) { SetThroughputMode(value); return *this;}

    /**
     * <p>Specifies the throughput mode for the file system. The mode can be
     * <code>bursting</code>, <code>provisioned</code>, or <code>elastic</code>. If you
     * set <code>ThroughputMode</code> to <code>provisioned</code>, you must also set a
     * value for <code>ProvisionedThroughputInMibps</code>. After you create the file
     * system, you can decrease your file system's throughput in Provisioned Throughput
     * mode or change between the throughput modes, with certain time restrictions. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#provisioned-throughput">Specifying
     * throughput with provisioned mode</a> in the <i>Amazon EFS User Guide</i>. </p>
     * <p>Default is <code>bursting</code>.</p>
     */
    inline CreateFileSystemRequest& WithThroughputMode(ThroughputMode&& value) { SetThroughputMode(std::move(value)); return *this;}


    /**
     * <p>The throughput, measured in MiB/s, that you want to provision for a file
     * system that you're creating. Valid values are 1-1024. Required if
     * <code>ThroughputMode</code> is set to <code>provisioned</code>. The upper limit
     * for throughput is 1024 MiB/s. To increase this limit, contact Amazon Web
     * Services Support. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS quotas that you can increase</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline double GetProvisionedThroughputInMibps() const{ return m_provisionedThroughputInMibps; }

    /**
     * <p>The throughput, measured in MiB/s, that you want to provision for a file
     * system that you're creating. Valid values are 1-1024. Required if
     * <code>ThroughputMode</code> is set to <code>provisioned</code>. The upper limit
     * for throughput is 1024 MiB/s. To increase this limit, contact Amazon Web
     * Services Support. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS quotas that you can increase</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline bool ProvisionedThroughputInMibpsHasBeenSet() const { return m_provisionedThroughputInMibpsHasBeenSet; }

    /**
     * <p>The throughput, measured in MiB/s, that you want to provision for a file
     * system that you're creating. Valid values are 1-1024. Required if
     * <code>ThroughputMode</code> is set to <code>provisioned</code>. The upper limit
     * for throughput is 1024 MiB/s. To increase this limit, contact Amazon Web
     * Services Support. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS quotas that you can increase</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline void SetProvisionedThroughputInMibps(double value) { m_provisionedThroughputInMibpsHasBeenSet = true; m_provisionedThroughputInMibps = value; }

    /**
     * <p>The throughput, measured in MiB/s, that you want to provision for a file
     * system that you're creating. Valid values are 1-1024. Required if
     * <code>ThroughputMode</code> is set to <code>provisioned</code>. The upper limit
     * for throughput is 1024 MiB/s. To increase this limit, contact Amazon Web
     * Services Support. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS quotas that you can increase</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline CreateFileSystemRequest& WithProvisionedThroughputInMibps(double value) { SetProvisionedThroughputInMibps(value); return *this;}


    /**
     * <p>Used to create a file system that uses One Zone storage classes. It specifies
     * the Amazon Web Services Availability Zone in which to create the file system.
     * Use the format <code>us-east-1a</code> to specify the Availability Zone. For
     * more information about One Zone storage classes, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>  <p>One Zone
     * storage classes are not available in all Availability Zones in Amazon Web
     * Services Regions where Amazon EFS is available.</p> 
     */
    inline const Aws::String& GetAvailabilityZoneName() const{ return m_availabilityZoneName; }

    /**
     * <p>Used to create a file system that uses One Zone storage classes. It specifies
     * the Amazon Web Services Availability Zone in which to create the file system.
     * Use the format <code>us-east-1a</code> to specify the Availability Zone. For
     * more information about One Zone storage classes, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>  <p>One Zone
     * storage classes are not available in all Availability Zones in Amazon Web
     * Services Regions where Amazon EFS is available.</p> 
     */
    inline bool AvailabilityZoneNameHasBeenSet() const { return m_availabilityZoneNameHasBeenSet; }

    /**
     * <p>Used to create a file system that uses One Zone storage classes. It specifies
     * the Amazon Web Services Availability Zone in which to create the file system.
     * Use the format <code>us-east-1a</code> to specify the Availability Zone. For
     * more information about One Zone storage classes, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>  <p>One Zone
     * storage classes are not available in all Availability Zones in Amazon Web
     * Services Regions where Amazon EFS is available.</p> 
     */
    inline void SetAvailabilityZoneName(const Aws::String& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = value; }

    /**
     * <p>Used to create a file system that uses One Zone storage classes. It specifies
     * the Amazon Web Services Availability Zone in which to create the file system.
     * Use the format <code>us-east-1a</code> to specify the Availability Zone. For
     * more information about One Zone storage classes, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>  <p>One Zone
     * storage classes are not available in all Availability Zones in Amazon Web
     * Services Regions where Amazon EFS is available.</p> 
     */
    inline void SetAvailabilityZoneName(Aws::String&& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = std::move(value); }

    /**
     * <p>Used to create a file system that uses One Zone storage classes. It specifies
     * the Amazon Web Services Availability Zone in which to create the file system.
     * Use the format <code>us-east-1a</code> to specify the Availability Zone. For
     * more information about One Zone storage classes, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>  <p>One Zone
     * storage classes are not available in all Availability Zones in Amazon Web
     * Services Regions where Amazon EFS is available.</p> 
     */
    inline void SetAvailabilityZoneName(const char* value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName.assign(value); }

    /**
     * <p>Used to create a file system that uses One Zone storage classes. It specifies
     * the Amazon Web Services Availability Zone in which to create the file system.
     * Use the format <code>us-east-1a</code> to specify the Availability Zone. For
     * more information about One Zone storage classes, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>  <p>One Zone
     * storage classes are not available in all Availability Zones in Amazon Web
     * Services Regions where Amazon EFS is available.</p> 
     */
    inline CreateFileSystemRequest& WithAvailabilityZoneName(const Aws::String& value) { SetAvailabilityZoneName(value); return *this;}

    /**
     * <p>Used to create a file system that uses One Zone storage classes. It specifies
     * the Amazon Web Services Availability Zone in which to create the file system.
     * Use the format <code>us-east-1a</code> to specify the Availability Zone. For
     * more information about One Zone storage classes, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>  <p>One Zone
     * storage classes are not available in all Availability Zones in Amazon Web
     * Services Regions where Amazon EFS is available.</p> 
     */
    inline CreateFileSystemRequest& WithAvailabilityZoneName(Aws::String&& value) { SetAvailabilityZoneName(std::move(value)); return *this;}

    /**
     * <p>Used to create a file system that uses One Zone storage classes. It specifies
     * the Amazon Web Services Availability Zone in which to create the file system.
     * Use the format <code>us-east-1a</code> to specify the Availability Zone. For
     * more information about One Zone storage classes, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>  <p>One Zone
     * storage classes are not available in all Availability Zones in Amazon Web
     * Services Regions where Amazon EFS is available.</p> 
     */
    inline CreateFileSystemRequest& WithAvailabilityZoneName(const char* value) { SetAvailabilityZoneName(value); return *this;}


    /**
     * <p>Specifies whether automatic backups are enabled on the file system that you
     * are creating. Set the value to <code>true</code> to enable automatic backups. If
     * you are creating a file system that uses One Zone storage classes, automatic
     * backups are enabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/awsbackup.html#automatic-backups">Automatic
     * backups</a> in the <i>Amazon EFS User Guide</i>.</p> <p>Default is
     * <code>false</code>. However, if you specify an
     * <code>AvailabilityZoneName</code>, the default is <code>true</code>.</p> 
     * <p>Backup is not available in all Amazon Web Services Regions where Amazon EFS
     * is available.</p> 
     */
    inline bool GetBackup() const{ return m_backup; }

    /**
     * <p>Specifies whether automatic backups are enabled on the file system that you
     * are creating. Set the value to <code>true</code> to enable automatic backups. If
     * you are creating a file system that uses One Zone storage classes, automatic
     * backups are enabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/awsbackup.html#automatic-backups">Automatic
     * backups</a> in the <i>Amazon EFS User Guide</i>.</p> <p>Default is
     * <code>false</code>. However, if you specify an
     * <code>AvailabilityZoneName</code>, the default is <code>true</code>.</p> 
     * <p>Backup is not available in all Amazon Web Services Regions where Amazon EFS
     * is available.</p> 
     */
    inline bool BackupHasBeenSet() const { return m_backupHasBeenSet; }

    /**
     * <p>Specifies whether automatic backups are enabled on the file system that you
     * are creating. Set the value to <code>true</code> to enable automatic backups. If
     * you are creating a file system that uses One Zone storage classes, automatic
     * backups are enabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/awsbackup.html#automatic-backups">Automatic
     * backups</a> in the <i>Amazon EFS User Guide</i>.</p> <p>Default is
     * <code>false</code>. However, if you specify an
     * <code>AvailabilityZoneName</code>, the default is <code>true</code>.</p> 
     * <p>Backup is not available in all Amazon Web Services Regions where Amazon EFS
     * is available.</p> 
     */
    inline void SetBackup(bool value) { m_backupHasBeenSet = true; m_backup = value; }

    /**
     * <p>Specifies whether automatic backups are enabled on the file system that you
     * are creating. Set the value to <code>true</code> to enable automatic backups. If
     * you are creating a file system that uses One Zone storage classes, automatic
     * backups are enabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/awsbackup.html#automatic-backups">Automatic
     * backups</a> in the <i>Amazon EFS User Guide</i>.</p> <p>Default is
     * <code>false</code>. However, if you specify an
     * <code>AvailabilityZoneName</code>, the default is <code>true</code>.</p> 
     * <p>Backup is not available in all Amazon Web Services Regions where Amazon EFS
     * is available.</p> 
     */
    inline CreateFileSystemRequest& WithBackup(bool value) { SetBackup(value); return *this;}


    /**
     * <p>Use to create one or more tags associated with the file system. Each tag is a
     * user-defined key-value pair. Name your file system on creation by including a
     * <code>"Key":"Name","Value":"{value}"</code> key-value pair. Each key must be
     * unique. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Use to create one or more tags associated with the file system. Each tag is a
     * user-defined key-value pair. Name your file system on creation by including a
     * <code>"Key":"Name","Value":"{value}"</code> key-value pair. Each key must be
     * unique. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Use to create one or more tags associated with the file system. Each tag is a
     * user-defined key-value pair. Name your file system on creation by including a
     * <code>"Key":"Name","Value":"{value}"</code> key-value pair. Each key must be
     * unique. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Use to create one or more tags associated with the file system. Each tag is a
     * user-defined key-value pair. Name your file system on creation by including a
     * <code>"Key":"Name","Value":"{value}"</code> key-value pair. Each key must be
     * unique. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Use to create one or more tags associated with the file system. Each tag is a
     * user-defined key-value pair. Name your file system on creation by including a
     * <code>"Key":"Name","Value":"{value}"</code> key-value pair. Each key must be
     * unique. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline CreateFileSystemRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Use to create one or more tags associated with the file system. Each tag is a
     * user-defined key-value pair. Name your file system on creation by including a
     * <code>"Key":"Name","Value":"{value}"</code> key-value pair. Each key must be
     * unique. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline CreateFileSystemRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Use to create one or more tags associated with the file system. Each tag is a
     * user-defined key-value pair. Name your file system on creation by including a
     * <code>"Key":"Name","Value":"{value}"</code> key-value pair. Each key must be
     * unique. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline CreateFileSystemRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Use to create one or more tags associated with the file system. Each tag is a
     * user-defined key-value pair. Name your file system on creation by including a
     * <code>"Key":"Name","Value":"{value}"</code> key-value pair. Each key must be
     * unique. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline CreateFileSystemRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_creationToken;
    bool m_creationTokenHasBeenSet = false;

    PerformanceMode m_performanceMode;
    bool m_performanceModeHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    ThroughputMode m_throughputMode;
    bool m_throughputModeHasBeenSet = false;

    double m_provisionedThroughputInMibps;
    bool m_provisionedThroughputInMibpsHasBeenSet = false;

    Aws::String m_availabilityZoneName;
    bool m_availabilityZoneNameHasBeenSet = false;

    bool m_backup;
    bool m_backupHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
