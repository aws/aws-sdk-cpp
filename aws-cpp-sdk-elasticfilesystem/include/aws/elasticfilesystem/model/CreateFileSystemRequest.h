/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/PerformanceMode.h>
#include <aws/elasticfilesystem/model/ThroughputMode.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class AWS_EFS_API CreateFileSystemRequest : public EFSRequest
  {
  public:
    CreateFileSystemRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFileSystem"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline const Aws::String& GetCreationToken() const{ return m_creationToken; }

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline void SetCreationToken(const Aws::String& value) { m_creationTokenHasBeenSet = true; m_creationToken = value; }

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline void SetCreationToken(Aws::String&& value) { m_creationTokenHasBeenSet = true; m_creationToken = std::move(value); }

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline void SetCreationToken(const char* value) { m_creationTokenHasBeenSet = true; m_creationToken.assign(value); }

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline CreateFileSystemRequest& WithCreationToken(const Aws::String& value) { SetCreationToken(value); return *this;}

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline CreateFileSystemRequest& WithCreationToken(Aws::String&& value) { SetCreationToken(std::move(value)); return *this;}

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline CreateFileSystemRequest& WithCreationToken(const char* value) { SetCreationToken(value); return *this;}


    /**
     * <p>The <code>PerformanceMode</code> of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. This can't be changed after the file
     * system has been created.</p>
     */
    inline const PerformanceMode& GetPerformanceMode() const{ return m_performanceMode; }

    /**
     * <p>The <code>PerformanceMode</code> of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. This can't be changed after the file
     * system has been created.</p>
     */
    inline void SetPerformanceMode(const PerformanceMode& value) { m_performanceModeHasBeenSet = true; m_performanceMode = value; }

    /**
     * <p>The <code>PerformanceMode</code> of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. This can't be changed after the file
     * system has been created.</p>
     */
    inline void SetPerformanceMode(PerformanceMode&& value) { m_performanceModeHasBeenSet = true; m_performanceMode = std::move(value); }

    /**
     * <p>The <code>PerformanceMode</code> of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. This can't be changed after the file
     * system has been created.</p>
     */
    inline CreateFileSystemRequest& WithPerformanceMode(const PerformanceMode& value) { SetPerformanceMode(value); return *this;}

    /**
     * <p>The <code>PerformanceMode</code> of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. This can't be changed after the file
     * system has been created.</p>
     */
    inline CreateFileSystemRequest& WithPerformanceMode(PerformanceMode&& value) { SetPerformanceMode(std::move(value)); return *this;}


    /**
     * <p>A Boolean value that, if true, creates an encrypted file system. When
     * creating an encrypted file system, you have the option of specifying a
     * <a>CreateFileSystemRequest$KmsKeyId</a> for an existing AWS Key Management
     * Service (AWS KMS) customer master key (CMK). If you don't specify a CMK, then
     * the default CMK for Amazon EFS, <code>/aws/elasticfilesystem</code>, is used to
     * protect the encrypted file system. </p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>A Boolean value that, if true, creates an encrypted file system. When
     * creating an encrypted file system, you have the option of specifying a
     * <a>CreateFileSystemRequest$KmsKeyId</a> for an existing AWS Key Management
     * Service (AWS KMS) customer master key (CMK). If you don't specify a CMK, then
     * the default CMK for Amazon EFS, <code>/aws/elasticfilesystem</code>, is used to
     * protect the encrypted file system. </p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>A Boolean value that, if true, creates an encrypted file system. When
     * creating an encrypted file system, you have the option of specifying a
     * <a>CreateFileSystemRequest$KmsKeyId</a> for an existing AWS Key Management
     * Service (AWS KMS) customer master key (CMK). If you don't specify a CMK, then
     * the default CMK for Amazon EFS, <code>/aws/elasticfilesystem</code>, is used to
     * protect the encrypted file system. </p>
     */
    inline CreateFileSystemRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The ID of the AWS KMS CMK to be used to protect the encrypted file system.
     * This parameter is only required if you want to use a non-default CMK. If this
     * parameter is not specified, the default CMK for Amazon EFS is used. This ID can
     * be in one of the following formats:</p> <ul> <li> <p>Key ID - A unique
     * identifier of the key, for example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key. For
     * example, <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An
     * ARN for a key alias, for example,
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If KmsKeyId is specified, the <a>CreateFileSystemRequest$Encrypted</a>
     * parameter must be set to true.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the AWS KMS CMK to be used to protect the encrypted file system.
     * This parameter is only required if you want to use a non-default CMK. If this
     * parameter is not specified, the default CMK for Amazon EFS is used. This ID can
     * be in one of the following formats:</p> <ul> <li> <p>Key ID - A unique
     * identifier of the key, for example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key. For
     * example, <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An
     * ARN for a key alias, for example,
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If KmsKeyId is specified, the <a>CreateFileSystemRequest$Encrypted</a>
     * parameter must be set to true.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the AWS KMS CMK to be used to protect the encrypted file system.
     * This parameter is only required if you want to use a non-default CMK. If this
     * parameter is not specified, the default CMK for Amazon EFS is used. This ID can
     * be in one of the following formats:</p> <ul> <li> <p>Key ID - A unique
     * identifier of the key, for example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key. For
     * example, <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An
     * ARN for a key alias, for example,
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If KmsKeyId is specified, the <a>CreateFileSystemRequest$Encrypted</a>
     * parameter must be set to true.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the AWS KMS CMK to be used to protect the encrypted file system.
     * This parameter is only required if you want to use a non-default CMK. If this
     * parameter is not specified, the default CMK for Amazon EFS is used. This ID can
     * be in one of the following formats:</p> <ul> <li> <p>Key ID - A unique
     * identifier of the key, for example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key. For
     * example, <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An
     * ARN for a key alias, for example,
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If KmsKeyId is specified, the <a>CreateFileSystemRequest$Encrypted</a>
     * parameter must be set to true.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the AWS KMS CMK to be used to protect the encrypted file system.
     * This parameter is only required if you want to use a non-default CMK. If this
     * parameter is not specified, the default CMK for Amazon EFS is used. This ID can
     * be in one of the following formats:</p> <ul> <li> <p>Key ID - A unique
     * identifier of the key, for example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key. For
     * example, <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An
     * ARN for a key alias, for example,
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If KmsKeyId is specified, the <a>CreateFileSystemRequest$Encrypted</a>
     * parameter must be set to true.</p>
     */
    inline CreateFileSystemRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the AWS KMS CMK to be used to protect the encrypted file system.
     * This parameter is only required if you want to use a non-default CMK. If this
     * parameter is not specified, the default CMK for Amazon EFS is used. This ID can
     * be in one of the following formats:</p> <ul> <li> <p>Key ID - A unique
     * identifier of the key, for example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key. For
     * example, <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An
     * ARN for a key alias, for example,
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If KmsKeyId is specified, the <a>CreateFileSystemRequest$Encrypted</a>
     * parameter must be set to true.</p>
     */
    inline CreateFileSystemRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS KMS CMK to be used to protect the encrypted file system.
     * This parameter is only required if you want to use a non-default CMK. If this
     * parameter is not specified, the default CMK for Amazon EFS is used. This ID can
     * be in one of the following formats:</p> <ul> <li> <p>Key ID - A unique
     * identifier of the key, for example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key. For
     * example, <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An
     * ARN for a key alias, for example,
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If KmsKeyId is specified, the <a>CreateFileSystemRequest$Encrypted</a>
     * parameter must be set to true.</p>
     */
    inline CreateFileSystemRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The throughput mode for the file system to be created. There are two
     * throughput modes to choose from for your file system: bursting and provisioned.
     * You can decrease your file system's throughput in Provisioned Throughput mode or
     * change between the throughput modes as long as it’s been more than 24 hours
     * since the last decrease or throughput mode change.</p>
     */
    inline const ThroughputMode& GetThroughputMode() const{ return m_throughputMode; }

    /**
     * <p>The throughput mode for the file system to be created. There are two
     * throughput modes to choose from for your file system: bursting and provisioned.
     * You can decrease your file system's throughput in Provisioned Throughput mode or
     * change between the throughput modes as long as it’s been more than 24 hours
     * since the last decrease or throughput mode change.</p>
     */
    inline void SetThroughputMode(const ThroughputMode& value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }

    /**
     * <p>The throughput mode for the file system to be created. There are two
     * throughput modes to choose from for your file system: bursting and provisioned.
     * You can decrease your file system's throughput in Provisioned Throughput mode or
     * change between the throughput modes as long as it’s been more than 24 hours
     * since the last decrease or throughput mode change.</p>
     */
    inline void SetThroughputMode(ThroughputMode&& value) { m_throughputModeHasBeenSet = true; m_throughputMode = std::move(value); }

    /**
     * <p>The throughput mode for the file system to be created. There are two
     * throughput modes to choose from for your file system: bursting and provisioned.
     * You can decrease your file system's throughput in Provisioned Throughput mode or
     * change between the throughput modes as long as it’s been more than 24 hours
     * since the last decrease or throughput mode change.</p>
     */
    inline CreateFileSystemRequest& WithThroughputMode(const ThroughputMode& value) { SetThroughputMode(value); return *this;}

    /**
     * <p>The throughput mode for the file system to be created. There are two
     * throughput modes to choose from for your file system: bursting and provisioned.
     * You can decrease your file system's throughput in Provisioned Throughput mode or
     * change between the throughput modes as long as it’s been more than 24 hours
     * since the last decrease or throughput mode change.</p>
     */
    inline CreateFileSystemRequest& WithThroughputMode(ThroughputMode&& value) { SetThroughputMode(std::move(value)); return *this;}


    /**
     * <p>The throughput, measured in MiB/s, that you want to provision for a file
     * system that you're creating. The limit on throughput is 1024 MiB/s. You can get
     * these limits increased by contacting AWS Support. For more information, see <a
     * href="http://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS Limits That You Can Increase</a> in the <i>Amazon EFS User Guide.</i> </p>
     */
    inline double GetProvisionedThroughputInMibps() const{ return m_provisionedThroughputInMibps; }

    /**
     * <p>The throughput, measured in MiB/s, that you want to provision for a file
     * system that you're creating. The limit on throughput is 1024 MiB/s. You can get
     * these limits increased by contacting AWS Support. For more information, see <a
     * href="http://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS Limits That You Can Increase</a> in the <i>Amazon EFS User Guide.</i> </p>
     */
    inline void SetProvisionedThroughputInMibps(double value) { m_provisionedThroughputInMibpsHasBeenSet = true; m_provisionedThroughputInMibps = value; }

    /**
     * <p>The throughput, measured in MiB/s, that you want to provision for a file
     * system that you're creating. The limit on throughput is 1024 MiB/s. You can get
     * these limits increased by contacting AWS Support. For more information, see <a
     * href="http://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS Limits That You Can Increase</a> in the <i>Amazon EFS User Guide.</i> </p>
     */
    inline CreateFileSystemRequest& WithProvisionedThroughputInMibps(double value) { SetProvisionedThroughputInMibps(value); return *this;}

  private:

    Aws::String m_creationToken;
    bool m_creationTokenHasBeenSet;

    PerformanceMode m_performanceMode;
    bool m_performanceModeHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    ThroughputMode m_throughputMode;
    bool m_throughputModeHasBeenSet;

    double m_provisionedThroughputInMibps;
    bool m_provisionedThroughputInMibpsHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
