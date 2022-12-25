/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/S3CannedAccessControlList.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/S3MetadataDirective.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/S3ObjectMetadata.h>
#include <aws/s3control/model/S3StorageClass.h>
#include <aws/s3control/model/S3ObjectLockLegalHoldStatus.h>
#include <aws/s3control/model/S3ObjectLockMode.h>
#include <aws/s3control/model/S3ChecksumAlgorithm.h>
#include <aws/s3control/model/S3Grant.h>
#include <aws/s3control/model/S3Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Contains the configuration parameters for a PUT Copy object operation. S3
   * Batch Operations passes every object to the underlying PUT Copy object API. For
   * more information about the parameters for this operation, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectCOPY.html">PUT
   * Object - Copy</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3CopyObjectOperation">AWS
   * API Reference</a></p>
   */
  class S3CopyObjectOperation
  {
  public:
    AWS_S3CONTROL_API S3CopyObjectOperation();
    AWS_S3CONTROL_API S3CopyObjectOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3CopyObjectOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies the destination bucket ARN for the batch copy operation. For
     * example, to copy objects to a bucket named <code>destinationBucket</code>, set
     * the <code>TargetResource</code> property to
     * <code>arn:aws:s3:::destinationBucket</code>.</p>
     */
    inline const Aws::String& GetTargetResource() const{ return m_targetResource; }

    /**
     * <p>Specifies the destination bucket ARN for the batch copy operation. For
     * example, to copy objects to a bucket named <code>destinationBucket</code>, set
     * the <code>TargetResource</code> property to
     * <code>arn:aws:s3:::destinationBucket</code>.</p>
     */
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }

    /**
     * <p>Specifies the destination bucket ARN for the batch copy operation. For
     * example, to copy objects to a bucket named <code>destinationBucket</code>, set
     * the <code>TargetResource</code> property to
     * <code>arn:aws:s3:::destinationBucket</code>.</p>
     */
    inline void SetTargetResource(const Aws::String& value) { m_targetResourceHasBeenSet = true; m_targetResource = value; }

    /**
     * <p>Specifies the destination bucket ARN for the batch copy operation. For
     * example, to copy objects to a bucket named <code>destinationBucket</code>, set
     * the <code>TargetResource</code> property to
     * <code>arn:aws:s3:::destinationBucket</code>.</p>
     */
    inline void SetTargetResource(Aws::String&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::move(value); }

    /**
     * <p>Specifies the destination bucket ARN for the batch copy operation. For
     * example, to copy objects to a bucket named <code>destinationBucket</code>, set
     * the <code>TargetResource</code> property to
     * <code>arn:aws:s3:::destinationBucket</code>.</p>
     */
    inline void SetTargetResource(const char* value) { m_targetResourceHasBeenSet = true; m_targetResource.assign(value); }

    /**
     * <p>Specifies the destination bucket ARN for the batch copy operation. For
     * example, to copy objects to a bucket named <code>destinationBucket</code>, set
     * the <code>TargetResource</code> property to
     * <code>arn:aws:s3:::destinationBucket</code>.</p>
     */
    inline S3CopyObjectOperation& WithTargetResource(const Aws::String& value) { SetTargetResource(value); return *this;}

    /**
     * <p>Specifies the destination bucket ARN for the batch copy operation. For
     * example, to copy objects to a bucket named <code>destinationBucket</code>, set
     * the <code>TargetResource</code> property to
     * <code>arn:aws:s3:::destinationBucket</code>.</p>
     */
    inline S3CopyObjectOperation& WithTargetResource(Aws::String&& value) { SetTargetResource(std::move(value)); return *this;}

    /**
     * <p>Specifies the destination bucket ARN for the batch copy operation. For
     * example, to copy objects to a bucket named <code>destinationBucket</code>, set
     * the <code>TargetResource</code> property to
     * <code>arn:aws:s3:::destinationBucket</code>.</p>
     */
    inline S3CopyObjectOperation& WithTargetResource(const char* value) { SetTargetResource(value); return *this;}


    /**
     * <p/>
     */
    inline const S3CannedAccessControlList& GetCannedAccessControlList() const{ return m_cannedAccessControlList; }

    /**
     * <p/>
     */
    inline bool CannedAccessControlListHasBeenSet() const { return m_cannedAccessControlListHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCannedAccessControlList(const S3CannedAccessControlList& value) { m_cannedAccessControlListHasBeenSet = true; m_cannedAccessControlList = value; }

    /**
     * <p/>
     */
    inline void SetCannedAccessControlList(S3CannedAccessControlList&& value) { m_cannedAccessControlListHasBeenSet = true; m_cannedAccessControlList = std::move(value); }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithCannedAccessControlList(const S3CannedAccessControlList& value) { SetCannedAccessControlList(value); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithCannedAccessControlList(S3CannedAccessControlList&& value) { SetCannedAccessControlList(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<S3Grant>& GetAccessControlGrants() const{ return m_accessControlGrants; }

    /**
     * <p/>
     */
    inline bool AccessControlGrantsHasBeenSet() const { return m_accessControlGrantsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAccessControlGrants(const Aws::Vector<S3Grant>& value) { m_accessControlGrantsHasBeenSet = true; m_accessControlGrants = value; }

    /**
     * <p/>
     */
    inline void SetAccessControlGrants(Aws::Vector<S3Grant>&& value) { m_accessControlGrantsHasBeenSet = true; m_accessControlGrants = std::move(value); }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithAccessControlGrants(const Aws::Vector<S3Grant>& value) { SetAccessControlGrants(value); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithAccessControlGrants(Aws::Vector<S3Grant>&& value) { SetAccessControlGrants(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& AddAccessControlGrants(const S3Grant& value) { m_accessControlGrantsHasBeenSet = true; m_accessControlGrants.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& AddAccessControlGrants(S3Grant&& value) { m_accessControlGrantsHasBeenSet = true; m_accessControlGrants.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const S3MetadataDirective& GetMetadataDirective() const{ return m_metadataDirective; }

    /**
     * <p/>
     */
    inline bool MetadataDirectiveHasBeenSet() const { return m_metadataDirectiveHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMetadataDirective(const S3MetadataDirective& value) { m_metadataDirectiveHasBeenSet = true; m_metadataDirective = value; }

    /**
     * <p/>
     */
    inline void SetMetadataDirective(S3MetadataDirective&& value) { m_metadataDirectiveHasBeenSet = true; m_metadataDirective = std::move(value); }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithMetadataDirective(const S3MetadataDirective& value) { SetMetadataDirective(value); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithMetadataDirective(S3MetadataDirective&& value) { SetMetadataDirective(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetModifiedSinceConstraint() const{ return m_modifiedSinceConstraint; }

    /**
     * <p/>
     */
    inline bool ModifiedSinceConstraintHasBeenSet() const { return m_modifiedSinceConstraintHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetModifiedSinceConstraint(const Aws::Utils::DateTime& value) { m_modifiedSinceConstraintHasBeenSet = true; m_modifiedSinceConstraint = value; }

    /**
     * <p/>
     */
    inline void SetModifiedSinceConstraint(Aws::Utils::DateTime&& value) { m_modifiedSinceConstraintHasBeenSet = true; m_modifiedSinceConstraint = std::move(value); }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithModifiedSinceConstraint(const Aws::Utils::DateTime& value) { SetModifiedSinceConstraint(value); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithModifiedSinceConstraint(Aws::Utils::DateTime&& value) { SetModifiedSinceConstraint(std::move(value)); return *this;}


    /**
     * <p>If you don't provide this parameter, Amazon S3 copies all the metadata from
     * the original objects. If you specify an empty set, the new objects will have no
     * tags. Otherwise, Amazon S3 assigns the supplied tags to the new objects.</p>
     */
    inline const S3ObjectMetadata& GetNewObjectMetadata() const{ return m_newObjectMetadata; }

    /**
     * <p>If you don't provide this parameter, Amazon S3 copies all the metadata from
     * the original objects. If you specify an empty set, the new objects will have no
     * tags. Otherwise, Amazon S3 assigns the supplied tags to the new objects.</p>
     */
    inline bool NewObjectMetadataHasBeenSet() const { return m_newObjectMetadataHasBeenSet; }

    /**
     * <p>If you don't provide this parameter, Amazon S3 copies all the metadata from
     * the original objects. If you specify an empty set, the new objects will have no
     * tags. Otherwise, Amazon S3 assigns the supplied tags to the new objects.</p>
     */
    inline void SetNewObjectMetadata(const S3ObjectMetadata& value) { m_newObjectMetadataHasBeenSet = true; m_newObjectMetadata = value; }

    /**
     * <p>If you don't provide this parameter, Amazon S3 copies all the metadata from
     * the original objects. If you specify an empty set, the new objects will have no
     * tags. Otherwise, Amazon S3 assigns the supplied tags to the new objects.</p>
     */
    inline void SetNewObjectMetadata(S3ObjectMetadata&& value) { m_newObjectMetadataHasBeenSet = true; m_newObjectMetadata = std::move(value); }

    /**
     * <p>If you don't provide this parameter, Amazon S3 copies all the metadata from
     * the original objects. If you specify an empty set, the new objects will have no
     * tags. Otherwise, Amazon S3 assigns the supplied tags to the new objects.</p>
     */
    inline S3CopyObjectOperation& WithNewObjectMetadata(const S3ObjectMetadata& value) { SetNewObjectMetadata(value); return *this;}

    /**
     * <p>If you don't provide this parameter, Amazon S3 copies all the metadata from
     * the original objects. If you specify an empty set, the new objects will have no
     * tags. Otherwise, Amazon S3 assigns the supplied tags to the new objects.</p>
     */
    inline S3CopyObjectOperation& WithNewObjectMetadata(S3ObjectMetadata&& value) { SetNewObjectMetadata(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<S3Tag>& GetNewObjectTagging() const{ return m_newObjectTagging; }

    /**
     * <p/>
     */
    inline bool NewObjectTaggingHasBeenSet() const { return m_newObjectTaggingHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetNewObjectTagging(const Aws::Vector<S3Tag>& value) { m_newObjectTaggingHasBeenSet = true; m_newObjectTagging = value; }

    /**
     * <p/>
     */
    inline void SetNewObjectTagging(Aws::Vector<S3Tag>&& value) { m_newObjectTaggingHasBeenSet = true; m_newObjectTagging = std::move(value); }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithNewObjectTagging(const Aws::Vector<S3Tag>& value) { SetNewObjectTagging(value); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithNewObjectTagging(Aws::Vector<S3Tag>&& value) { SetNewObjectTagging(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& AddNewObjectTagging(const S3Tag& value) { m_newObjectTaggingHasBeenSet = true; m_newObjectTagging.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& AddNewObjectTagging(S3Tag&& value) { m_newObjectTaggingHasBeenSet = true; m_newObjectTagging.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies an optional metadata property for website redirects,
     * <code>x-amz-website-redirect-location</code>. Allows webpage redirects if the
     * object is accessed through a website endpoint.</p>
     */
    inline const Aws::String& GetRedirectLocation() const{ return m_redirectLocation; }

    /**
     * <p>Specifies an optional metadata property for website redirects,
     * <code>x-amz-website-redirect-location</code>. Allows webpage redirects if the
     * object is accessed through a website endpoint.</p>
     */
    inline bool RedirectLocationHasBeenSet() const { return m_redirectLocationHasBeenSet; }

    /**
     * <p>Specifies an optional metadata property for website redirects,
     * <code>x-amz-website-redirect-location</code>. Allows webpage redirects if the
     * object is accessed through a website endpoint.</p>
     */
    inline void SetRedirectLocation(const Aws::String& value) { m_redirectLocationHasBeenSet = true; m_redirectLocation = value; }

    /**
     * <p>Specifies an optional metadata property for website redirects,
     * <code>x-amz-website-redirect-location</code>. Allows webpage redirects if the
     * object is accessed through a website endpoint.</p>
     */
    inline void SetRedirectLocation(Aws::String&& value) { m_redirectLocationHasBeenSet = true; m_redirectLocation = std::move(value); }

    /**
     * <p>Specifies an optional metadata property for website redirects,
     * <code>x-amz-website-redirect-location</code>. Allows webpage redirects if the
     * object is accessed through a website endpoint.</p>
     */
    inline void SetRedirectLocation(const char* value) { m_redirectLocationHasBeenSet = true; m_redirectLocation.assign(value); }

    /**
     * <p>Specifies an optional metadata property for website redirects,
     * <code>x-amz-website-redirect-location</code>. Allows webpage redirects if the
     * object is accessed through a website endpoint.</p>
     */
    inline S3CopyObjectOperation& WithRedirectLocation(const Aws::String& value) { SetRedirectLocation(value); return *this;}

    /**
     * <p>Specifies an optional metadata property for website redirects,
     * <code>x-amz-website-redirect-location</code>. Allows webpage redirects if the
     * object is accessed through a website endpoint.</p>
     */
    inline S3CopyObjectOperation& WithRedirectLocation(Aws::String&& value) { SetRedirectLocation(std::move(value)); return *this;}

    /**
     * <p>Specifies an optional metadata property for website redirects,
     * <code>x-amz-website-redirect-location</code>. Allows webpage redirects if the
     * object is accessed through a website endpoint.</p>
     */
    inline S3CopyObjectOperation& WithRedirectLocation(const char* value) { SetRedirectLocation(value); return *this;}


    /**
     * <p/>
     */
    inline bool GetRequesterPays() const{ return m_requesterPays; }

    /**
     * <p/>
     */
    inline bool RequesterPaysHasBeenSet() const { return m_requesterPaysHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRequesterPays(bool value) { m_requesterPaysHasBeenSet = true; m_requesterPays = value; }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}


    /**
     * <p/>
     */
    inline const S3StorageClass& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p/>
     */
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetStorageClass(const S3StorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * <p/>
     */
    inline void SetStorageClass(S3StorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithStorageClass(const S3StorageClass& value) { SetStorageClass(value); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithStorageClass(S3StorageClass&& value) { SetStorageClass(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetUnModifiedSinceConstraint() const{ return m_unModifiedSinceConstraint; }

    /**
     * <p/>
     */
    inline bool UnModifiedSinceConstraintHasBeenSet() const { return m_unModifiedSinceConstraintHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetUnModifiedSinceConstraint(const Aws::Utils::DateTime& value) { m_unModifiedSinceConstraintHasBeenSet = true; m_unModifiedSinceConstraint = value; }

    /**
     * <p/>
     */
    inline void SetUnModifiedSinceConstraint(Aws::Utils::DateTime&& value) { m_unModifiedSinceConstraintHasBeenSet = true; m_unModifiedSinceConstraint = std::move(value); }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithUnModifiedSinceConstraint(const Aws::Utils::DateTime& value) { SetUnModifiedSinceConstraint(value); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithUnModifiedSinceConstraint(Aws::Utils::DateTime&& value) { SetUnModifiedSinceConstraint(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetSSEAwsKmsKeyId() const{ return m_sSEAwsKmsKeyId; }

    /**
     * <p/>
     */
    inline bool SSEAwsKmsKeyIdHasBeenSet() const { return m_sSEAwsKmsKeyIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSSEAwsKmsKeyId(const Aws::String& value) { m_sSEAwsKmsKeyIdHasBeenSet = true; m_sSEAwsKmsKeyId = value; }

    /**
     * <p/>
     */
    inline void SetSSEAwsKmsKeyId(Aws::String&& value) { m_sSEAwsKmsKeyIdHasBeenSet = true; m_sSEAwsKmsKeyId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetSSEAwsKmsKeyId(const char* value) { m_sSEAwsKmsKeyIdHasBeenSet = true; m_sSEAwsKmsKeyId.assign(value); }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithSSEAwsKmsKeyId(const Aws::String& value) { SetSSEAwsKmsKeyId(value); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithSSEAwsKmsKeyId(Aws::String&& value) { SetSSEAwsKmsKeyId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithSSEAwsKmsKeyId(const char* value) { SetSSEAwsKmsKeyId(value); return *this;}


    /**
     * <p>Specifies the folder prefix into which you would like the objects to be
     * copied. For example, to copy objects into a folder named <code>Folder1</code> in
     * the destination bucket, set the TargetKeyPrefix to <code>Folder1</code>.</p>
     */
    inline const Aws::String& GetTargetKeyPrefix() const{ return m_targetKeyPrefix; }

    /**
     * <p>Specifies the folder prefix into which you would like the objects to be
     * copied. For example, to copy objects into a folder named <code>Folder1</code> in
     * the destination bucket, set the TargetKeyPrefix to <code>Folder1</code>.</p>
     */
    inline bool TargetKeyPrefixHasBeenSet() const { return m_targetKeyPrefixHasBeenSet; }

    /**
     * <p>Specifies the folder prefix into which you would like the objects to be
     * copied. For example, to copy objects into a folder named <code>Folder1</code> in
     * the destination bucket, set the TargetKeyPrefix to <code>Folder1</code>.</p>
     */
    inline void SetTargetKeyPrefix(const Aws::String& value) { m_targetKeyPrefixHasBeenSet = true; m_targetKeyPrefix = value; }

    /**
     * <p>Specifies the folder prefix into which you would like the objects to be
     * copied. For example, to copy objects into a folder named <code>Folder1</code> in
     * the destination bucket, set the TargetKeyPrefix to <code>Folder1</code>.</p>
     */
    inline void SetTargetKeyPrefix(Aws::String&& value) { m_targetKeyPrefixHasBeenSet = true; m_targetKeyPrefix = std::move(value); }

    /**
     * <p>Specifies the folder prefix into which you would like the objects to be
     * copied. For example, to copy objects into a folder named <code>Folder1</code> in
     * the destination bucket, set the TargetKeyPrefix to <code>Folder1</code>.</p>
     */
    inline void SetTargetKeyPrefix(const char* value) { m_targetKeyPrefixHasBeenSet = true; m_targetKeyPrefix.assign(value); }

    /**
     * <p>Specifies the folder prefix into which you would like the objects to be
     * copied. For example, to copy objects into a folder named <code>Folder1</code> in
     * the destination bucket, set the TargetKeyPrefix to <code>Folder1</code>.</p>
     */
    inline S3CopyObjectOperation& WithTargetKeyPrefix(const Aws::String& value) { SetTargetKeyPrefix(value); return *this;}

    /**
     * <p>Specifies the folder prefix into which you would like the objects to be
     * copied. For example, to copy objects into a folder named <code>Folder1</code> in
     * the destination bucket, set the TargetKeyPrefix to <code>Folder1</code>.</p>
     */
    inline S3CopyObjectOperation& WithTargetKeyPrefix(Aws::String&& value) { SetTargetKeyPrefix(std::move(value)); return *this;}

    /**
     * <p>Specifies the folder prefix into which you would like the objects to be
     * copied. For example, to copy objects into a folder named <code>Folder1</code> in
     * the destination bucket, set the TargetKeyPrefix to <code>Folder1</code>.</p>
     */
    inline S3CopyObjectOperation& WithTargetKeyPrefix(const char* value) { SetTargetKeyPrefix(value); return *this;}


    /**
     * <p>The legal hold status to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline const S3ObjectLockLegalHoldStatus& GetObjectLockLegalHoldStatus() const{ return m_objectLockLegalHoldStatus; }

    /**
     * <p>The legal hold status to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline bool ObjectLockLegalHoldStatusHasBeenSet() const { return m_objectLockLegalHoldStatusHasBeenSet; }

    /**
     * <p>The legal hold status to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline void SetObjectLockLegalHoldStatus(const S3ObjectLockLegalHoldStatus& value) { m_objectLockLegalHoldStatusHasBeenSet = true; m_objectLockLegalHoldStatus = value; }

    /**
     * <p>The legal hold status to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline void SetObjectLockLegalHoldStatus(S3ObjectLockLegalHoldStatus&& value) { m_objectLockLegalHoldStatusHasBeenSet = true; m_objectLockLegalHoldStatus = std::move(value); }

    /**
     * <p>The legal hold status to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline S3CopyObjectOperation& WithObjectLockLegalHoldStatus(const S3ObjectLockLegalHoldStatus& value) { SetObjectLockLegalHoldStatus(value); return *this;}

    /**
     * <p>The legal hold status to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline S3CopyObjectOperation& WithObjectLockLegalHoldStatus(S3ObjectLockLegalHoldStatus&& value) { SetObjectLockLegalHoldStatus(std::move(value)); return *this;}


    /**
     * <p>The retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline const S3ObjectLockMode& GetObjectLockMode() const{ return m_objectLockMode; }

    /**
     * <p>The retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline bool ObjectLockModeHasBeenSet() const { return m_objectLockModeHasBeenSet; }

    /**
     * <p>The retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline void SetObjectLockMode(const S3ObjectLockMode& value) { m_objectLockModeHasBeenSet = true; m_objectLockMode = value; }

    /**
     * <p>The retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline void SetObjectLockMode(S3ObjectLockMode&& value) { m_objectLockModeHasBeenSet = true; m_objectLockMode = std::move(value); }

    /**
     * <p>The retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline S3CopyObjectOperation& WithObjectLockMode(const S3ObjectLockMode& value) { SetObjectLockMode(value); return *this;}

    /**
     * <p>The retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline S3CopyObjectOperation& WithObjectLockMode(S3ObjectLockMode&& value) { SetObjectLockMode(std::move(value)); return *this;}


    /**
     * <p>The date when the applied object retention configuration expires on all
     * objects in the Batch Operations job.</p>
     */
    inline const Aws::Utils::DateTime& GetObjectLockRetainUntilDate() const{ return m_objectLockRetainUntilDate; }

    /**
     * <p>The date when the applied object retention configuration expires on all
     * objects in the Batch Operations job.</p>
     */
    inline bool ObjectLockRetainUntilDateHasBeenSet() const { return m_objectLockRetainUntilDateHasBeenSet; }

    /**
     * <p>The date when the applied object retention configuration expires on all
     * objects in the Batch Operations job.</p>
     */
    inline void SetObjectLockRetainUntilDate(const Aws::Utils::DateTime& value) { m_objectLockRetainUntilDateHasBeenSet = true; m_objectLockRetainUntilDate = value; }

    /**
     * <p>The date when the applied object retention configuration expires on all
     * objects in the Batch Operations job.</p>
     */
    inline void SetObjectLockRetainUntilDate(Aws::Utils::DateTime&& value) { m_objectLockRetainUntilDateHasBeenSet = true; m_objectLockRetainUntilDate = std::move(value); }

    /**
     * <p>The date when the applied object retention configuration expires on all
     * objects in the Batch Operations job.</p>
     */
    inline S3CopyObjectOperation& WithObjectLockRetainUntilDate(const Aws::Utils::DateTime& value) { SetObjectLockRetainUntilDate(value); return *this;}

    /**
     * <p>The date when the applied object retention configuration expires on all
     * objects in the Batch Operations job.</p>
     */
    inline S3CopyObjectOperation& WithObjectLockRetainUntilDate(Aws::Utils::DateTime&& value) { SetObjectLockRetainUntilDate(std::move(value)); return *this;}


    /**
     * <p>Specifies whether Amazon S3 should use an S3 Bucket Key for object encryption
     * with server-side encryption using Amazon Web Services KMS (SSE-KMS). Setting
     * this header to <code>true</code> causes Amazon S3 to use an S3 Bucket Key for
     * object encryption with SSE-KMS.</p> <p>Specifying this header with an
     * <i>object</i> action doesn’t affect <i>bucket-level</i> settings for S3 Bucket
     * Key.</p>
     */
    inline bool GetBucketKeyEnabled() const{ return m_bucketKeyEnabled; }

    /**
     * <p>Specifies whether Amazon S3 should use an S3 Bucket Key for object encryption
     * with server-side encryption using Amazon Web Services KMS (SSE-KMS). Setting
     * this header to <code>true</code> causes Amazon S3 to use an S3 Bucket Key for
     * object encryption with SSE-KMS.</p> <p>Specifying this header with an
     * <i>object</i> action doesn’t affect <i>bucket-level</i> settings for S3 Bucket
     * Key.</p>
     */
    inline bool BucketKeyEnabledHasBeenSet() const { return m_bucketKeyEnabledHasBeenSet; }

    /**
     * <p>Specifies whether Amazon S3 should use an S3 Bucket Key for object encryption
     * with server-side encryption using Amazon Web Services KMS (SSE-KMS). Setting
     * this header to <code>true</code> causes Amazon S3 to use an S3 Bucket Key for
     * object encryption with SSE-KMS.</p> <p>Specifying this header with an
     * <i>object</i> action doesn’t affect <i>bucket-level</i> settings for S3 Bucket
     * Key.</p>
     */
    inline void SetBucketKeyEnabled(bool value) { m_bucketKeyEnabledHasBeenSet = true; m_bucketKeyEnabled = value; }

    /**
     * <p>Specifies whether Amazon S3 should use an S3 Bucket Key for object encryption
     * with server-side encryption using Amazon Web Services KMS (SSE-KMS). Setting
     * this header to <code>true</code> causes Amazon S3 to use an S3 Bucket Key for
     * object encryption with SSE-KMS.</p> <p>Specifying this header with an
     * <i>object</i> action doesn’t affect <i>bucket-level</i> settings for S3 Bucket
     * Key.</p>
     */
    inline S3CopyObjectOperation& WithBucketKeyEnabled(bool value) { SetBucketKeyEnabled(value); return *this;}


    /**
     * <p>Indicates the algorithm you want Amazon S3 to use to create the checksum. For
     * more information see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CheckingObjectIntegrity.xml">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const S3ChecksumAlgorithm& GetChecksumAlgorithm() const{ return m_checksumAlgorithm; }

    /**
     * <p>Indicates the algorithm you want Amazon S3 to use to create the checksum. For
     * more information see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CheckingObjectIntegrity.xml">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }

    /**
     * <p>Indicates the algorithm you want Amazon S3 to use to create the checksum. For
     * more information see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CheckingObjectIntegrity.xml">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetChecksumAlgorithm(const S3ChecksumAlgorithm& value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }

    /**
     * <p>Indicates the algorithm you want Amazon S3 to use to create the checksum. For
     * more information see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CheckingObjectIntegrity.xml">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetChecksumAlgorithm(S3ChecksumAlgorithm&& value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = std::move(value); }

    /**
     * <p>Indicates the algorithm you want Amazon S3 to use to create the checksum. For
     * more information see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CheckingObjectIntegrity.xml">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline S3CopyObjectOperation& WithChecksumAlgorithm(const S3ChecksumAlgorithm& value) { SetChecksumAlgorithm(value); return *this;}

    /**
     * <p>Indicates the algorithm you want Amazon S3 to use to create the checksum. For
     * more information see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CheckingObjectIntegrity.xml">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline S3CopyObjectOperation& WithChecksumAlgorithm(S3ChecksumAlgorithm&& value) { SetChecksumAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_targetResource;
    bool m_targetResourceHasBeenSet = false;

    S3CannedAccessControlList m_cannedAccessControlList;
    bool m_cannedAccessControlListHasBeenSet = false;

    Aws::Vector<S3Grant> m_accessControlGrants;
    bool m_accessControlGrantsHasBeenSet = false;

    S3MetadataDirective m_metadataDirective;
    bool m_metadataDirectiveHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedSinceConstraint;
    bool m_modifiedSinceConstraintHasBeenSet = false;

    S3ObjectMetadata m_newObjectMetadata;
    bool m_newObjectMetadataHasBeenSet = false;

    Aws::Vector<S3Tag> m_newObjectTagging;
    bool m_newObjectTaggingHasBeenSet = false;

    Aws::String m_redirectLocation;
    bool m_redirectLocationHasBeenSet = false;

    bool m_requesterPays;
    bool m_requesterPaysHasBeenSet = false;

    S3StorageClass m_storageClass;
    bool m_storageClassHasBeenSet = false;

    Aws::Utils::DateTime m_unModifiedSinceConstraint;
    bool m_unModifiedSinceConstraintHasBeenSet = false;

    Aws::String m_sSEAwsKmsKeyId;
    bool m_sSEAwsKmsKeyIdHasBeenSet = false;

    Aws::String m_targetKeyPrefix;
    bool m_targetKeyPrefixHasBeenSet = false;

    S3ObjectLockLegalHoldStatus m_objectLockLegalHoldStatus;
    bool m_objectLockLegalHoldStatusHasBeenSet = false;

    S3ObjectLockMode m_objectLockMode;
    bool m_objectLockModeHasBeenSet = false;

    Aws::Utils::DateTime m_objectLockRetainUntilDate;
    bool m_objectLockRetainUntilDateHasBeenSet = false;

    bool m_bucketKeyEnabled;
    bool m_bucketKeyEnabledHasBeenSet = false;

    S3ChecksumAlgorithm m_checksumAlgorithm;
    bool m_checksumAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
