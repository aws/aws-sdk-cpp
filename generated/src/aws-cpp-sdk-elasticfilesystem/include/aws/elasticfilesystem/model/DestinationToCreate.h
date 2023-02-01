/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Describes the destination file system to create in the replication
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DestinationToCreate">AWS
   * API Reference</a></p>
   */
  class DestinationToCreate
  {
  public:
    AWS_EFS_API DestinationToCreate();
    AWS_EFS_API DestinationToCreate(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API DestinationToCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>To create a file system that uses Regional storage, specify the Amazon Web
     * Services Region in which to create the destination file system.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>To create a file system that uses Regional storage, specify the Amazon Web
     * Services Region in which to create the destination file system.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>To create a file system that uses Regional storage, specify the Amazon Web
     * Services Region in which to create the destination file system.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>To create a file system that uses Regional storage, specify the Amazon Web
     * Services Region in which to create the destination file system.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>To create a file system that uses Regional storage, specify the Amazon Web
     * Services Region in which to create the destination file system.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>To create a file system that uses Regional storage, specify the Amazon Web
     * Services Region in which to create the destination file system.</p>
     */
    inline DestinationToCreate& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>To create a file system that uses Regional storage, specify the Amazon Web
     * Services Region in which to create the destination file system.</p>
     */
    inline DestinationToCreate& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>To create a file system that uses Regional storage, specify the Amazon Web
     * Services Region in which to create the destination file system.</p>
     */
    inline DestinationToCreate& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>To create a file system that uses EFS One Zone storage, specify the name of
     * the Availability Zone in which to create the destination file system.</p>
     */
    inline const Aws::String& GetAvailabilityZoneName() const{ return m_availabilityZoneName; }

    /**
     * <p>To create a file system that uses EFS One Zone storage, specify the name of
     * the Availability Zone in which to create the destination file system.</p>
     */
    inline bool AvailabilityZoneNameHasBeenSet() const { return m_availabilityZoneNameHasBeenSet; }

    /**
     * <p>To create a file system that uses EFS One Zone storage, specify the name of
     * the Availability Zone in which to create the destination file system.</p>
     */
    inline void SetAvailabilityZoneName(const Aws::String& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = value; }

    /**
     * <p>To create a file system that uses EFS One Zone storage, specify the name of
     * the Availability Zone in which to create the destination file system.</p>
     */
    inline void SetAvailabilityZoneName(Aws::String&& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = std::move(value); }

    /**
     * <p>To create a file system that uses EFS One Zone storage, specify the name of
     * the Availability Zone in which to create the destination file system.</p>
     */
    inline void SetAvailabilityZoneName(const char* value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName.assign(value); }

    /**
     * <p>To create a file system that uses EFS One Zone storage, specify the name of
     * the Availability Zone in which to create the destination file system.</p>
     */
    inline DestinationToCreate& WithAvailabilityZoneName(const Aws::String& value) { SetAvailabilityZoneName(value); return *this;}

    /**
     * <p>To create a file system that uses EFS One Zone storage, specify the name of
     * the Availability Zone in which to create the destination file system.</p>
     */
    inline DestinationToCreate& WithAvailabilityZoneName(Aws::String&& value) { SetAvailabilityZoneName(std::move(value)); return *this;}

    /**
     * <p>To create a file system that uses EFS One Zone storage, specify the name of
     * the Availability Zone in which to create the destination file system.</p>
     */
    inline DestinationToCreate& WithAvailabilityZoneName(const char* value) { SetAvailabilityZoneName(value); return *this;}


    /**
     * <p>Specifies the Key Management Service (KMS) key that you want to use to
     * encrypt the destination file system. If you do not specify a KMS key, Amazon EFS
     * uses your default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>.
     * This ID can be in one of the following formats:</p> <ul> <li> <p>Key ID - The
     * unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - The
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - The
     * ARN for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Specifies the Key Management Service (KMS) key that you want to use to
     * encrypt the destination file system. If you do not specify a KMS key, Amazon EFS
     * uses your default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>.
     * This ID can be in one of the following formats:</p> <ul> <li> <p>Key ID - The
     * unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - The
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - The
     * ARN for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>Specifies the Key Management Service (KMS) key that you want to use to
     * encrypt the destination file system. If you do not specify a KMS key, Amazon EFS
     * uses your default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>.
     * This ID can be in one of the following formats:</p> <ul> <li> <p>Key ID - The
     * unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - The
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - The
     * ARN for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>Specifies the Key Management Service (KMS) key that you want to use to
     * encrypt the destination file system. If you do not specify a KMS key, Amazon EFS
     * uses your default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>.
     * This ID can be in one of the following formats:</p> <ul> <li> <p>Key ID - The
     * unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - The
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - The
     * ARN for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>Specifies the Key Management Service (KMS) key that you want to use to
     * encrypt the destination file system. If you do not specify a KMS key, Amazon EFS
     * uses your default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>.
     * This ID can be in one of the following formats:</p> <ul> <li> <p>Key ID - The
     * unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - The
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - The
     * ARN for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>Specifies the Key Management Service (KMS) key that you want to use to
     * encrypt the destination file system. If you do not specify a KMS key, Amazon EFS
     * uses your default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>.
     * This ID can be in one of the following formats:</p> <ul> <li> <p>Key ID - The
     * unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - The
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - The
     * ARN for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul>
     */
    inline DestinationToCreate& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Specifies the Key Management Service (KMS) key that you want to use to
     * encrypt the destination file system. If you do not specify a KMS key, Amazon EFS
     * uses your default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>.
     * This ID can be in one of the following formats:</p> <ul> <li> <p>Key ID - The
     * unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - The
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - The
     * ARN for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul>
     */
    inline DestinationToCreate& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the Key Management Service (KMS) key that you want to use to
     * encrypt the destination file system. If you do not specify a KMS key, Amazon EFS
     * uses your default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>.
     * This ID can be in one of the following formats:</p> <ul> <li> <p>Key ID - The
     * unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - The
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - The
     * ARN for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul>
     */
    inline DestinationToCreate& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_availabilityZoneName;
    bool m_availabilityZoneNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
