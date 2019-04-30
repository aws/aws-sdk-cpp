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
   * <p>Contains the configuration parameters for a PUT Copy object operation. Amazon
   * S3 batch operations passes each value through to the underlying PUT Copy object
   * API. For more information about the parameters for this operation, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectCOPY.html">PUT
   * Object - Copy</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3CopyObjectOperation">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API S3CopyObjectOperation
  {
  public:
    S3CopyObjectOperation();
    S3CopyObjectOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3CopyObjectOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const Aws::String& GetTargetResource() const{ return m_targetResource; }

    /**
     * <p/>
     */
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTargetResource(const Aws::String& value) { m_targetResourceHasBeenSet = true; m_targetResource = value; }

    /**
     * <p/>
     */
    inline void SetTargetResource(Aws::String&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::move(value); }

    /**
     * <p/>
     */
    inline void SetTargetResource(const char* value) { m_targetResourceHasBeenSet = true; m_targetResource.assign(value); }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithTargetResource(const Aws::String& value) { SetTargetResource(value); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithTargetResource(Aws::String&& value) { SetTargetResource(std::move(value)); return *this;}

    /**
     * <p/>
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
     * <p/>
     */
    inline const S3ObjectMetadata& GetNewObjectMetadata() const{ return m_newObjectMetadata; }

    /**
     * <p/>
     */
    inline bool NewObjectMetadataHasBeenSet() const { return m_newObjectMetadataHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetNewObjectMetadata(const S3ObjectMetadata& value) { m_newObjectMetadataHasBeenSet = true; m_newObjectMetadata = value; }

    /**
     * <p/>
     */
    inline void SetNewObjectMetadata(S3ObjectMetadata&& value) { m_newObjectMetadataHasBeenSet = true; m_newObjectMetadata = std::move(value); }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithNewObjectMetadata(const S3ObjectMetadata& value) { SetNewObjectMetadata(value); return *this;}

    /**
     * <p/>
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
     * <p/>
     */
    inline const Aws::String& GetRedirectLocation() const{ return m_redirectLocation; }

    /**
     * <p/>
     */
    inline bool RedirectLocationHasBeenSet() const { return m_redirectLocationHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRedirectLocation(const Aws::String& value) { m_redirectLocationHasBeenSet = true; m_redirectLocation = value; }

    /**
     * <p/>
     */
    inline void SetRedirectLocation(Aws::String&& value) { m_redirectLocationHasBeenSet = true; m_redirectLocation = std::move(value); }

    /**
     * <p/>
     */
    inline void SetRedirectLocation(const char* value) { m_redirectLocationHasBeenSet = true; m_redirectLocation.assign(value); }

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithRedirectLocation(const Aws::String& value) { SetRedirectLocation(value); return *this;}

    /**
     * <p/>
     */
    inline S3CopyObjectOperation& WithRedirectLocation(Aws::String&& value) { SetRedirectLocation(std::move(value)); return *this;}

    /**
     * <p/>
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


    
    inline const Aws::String& GetTargetKeyPrefix() const{ return m_targetKeyPrefix; }

    
    inline bool TargetKeyPrefixHasBeenSet() const { return m_targetKeyPrefixHasBeenSet; }

    
    inline void SetTargetKeyPrefix(const Aws::String& value) { m_targetKeyPrefixHasBeenSet = true; m_targetKeyPrefix = value; }

    
    inline void SetTargetKeyPrefix(Aws::String&& value) { m_targetKeyPrefixHasBeenSet = true; m_targetKeyPrefix = std::move(value); }

    
    inline void SetTargetKeyPrefix(const char* value) { m_targetKeyPrefixHasBeenSet = true; m_targetKeyPrefix.assign(value); }

    
    inline S3CopyObjectOperation& WithTargetKeyPrefix(const Aws::String& value) { SetTargetKeyPrefix(value); return *this;}

    
    inline S3CopyObjectOperation& WithTargetKeyPrefix(Aws::String&& value) { SetTargetKeyPrefix(std::move(value)); return *this;}

    
    inline S3CopyObjectOperation& WithTargetKeyPrefix(const char* value) { SetTargetKeyPrefix(value); return *this;}


    
    inline const S3ObjectLockLegalHoldStatus& GetObjectLockLegalHoldStatus() const{ return m_objectLockLegalHoldStatus; }

    
    inline bool ObjectLockLegalHoldStatusHasBeenSet() const { return m_objectLockLegalHoldStatusHasBeenSet; }

    
    inline void SetObjectLockLegalHoldStatus(const S3ObjectLockLegalHoldStatus& value) { m_objectLockLegalHoldStatusHasBeenSet = true; m_objectLockLegalHoldStatus = value; }

    
    inline void SetObjectLockLegalHoldStatus(S3ObjectLockLegalHoldStatus&& value) { m_objectLockLegalHoldStatusHasBeenSet = true; m_objectLockLegalHoldStatus = std::move(value); }

    
    inline S3CopyObjectOperation& WithObjectLockLegalHoldStatus(const S3ObjectLockLegalHoldStatus& value) { SetObjectLockLegalHoldStatus(value); return *this;}

    
    inline S3CopyObjectOperation& WithObjectLockLegalHoldStatus(S3ObjectLockLegalHoldStatus&& value) { SetObjectLockLegalHoldStatus(std::move(value)); return *this;}


    
    inline const S3ObjectLockMode& GetObjectLockMode() const{ return m_objectLockMode; }

    
    inline bool ObjectLockModeHasBeenSet() const { return m_objectLockModeHasBeenSet; }

    
    inline void SetObjectLockMode(const S3ObjectLockMode& value) { m_objectLockModeHasBeenSet = true; m_objectLockMode = value; }

    
    inline void SetObjectLockMode(S3ObjectLockMode&& value) { m_objectLockModeHasBeenSet = true; m_objectLockMode = std::move(value); }

    
    inline S3CopyObjectOperation& WithObjectLockMode(const S3ObjectLockMode& value) { SetObjectLockMode(value); return *this;}

    
    inline S3CopyObjectOperation& WithObjectLockMode(S3ObjectLockMode&& value) { SetObjectLockMode(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetObjectLockRetainUntilDate() const{ return m_objectLockRetainUntilDate; }

    
    inline bool ObjectLockRetainUntilDateHasBeenSet() const { return m_objectLockRetainUntilDateHasBeenSet; }

    
    inline void SetObjectLockRetainUntilDate(const Aws::Utils::DateTime& value) { m_objectLockRetainUntilDateHasBeenSet = true; m_objectLockRetainUntilDate = value; }

    
    inline void SetObjectLockRetainUntilDate(Aws::Utils::DateTime&& value) { m_objectLockRetainUntilDateHasBeenSet = true; m_objectLockRetainUntilDate = std::move(value); }

    
    inline S3CopyObjectOperation& WithObjectLockRetainUntilDate(const Aws::Utils::DateTime& value) { SetObjectLockRetainUntilDate(value); return *this;}

    
    inline S3CopyObjectOperation& WithObjectLockRetainUntilDate(Aws::Utils::DateTime&& value) { SetObjectLockRetainUntilDate(std::move(value)); return *this;}

  private:

    Aws::String m_targetResource;
    bool m_targetResourceHasBeenSet;

    S3CannedAccessControlList m_cannedAccessControlList;
    bool m_cannedAccessControlListHasBeenSet;

    Aws::Vector<S3Grant> m_accessControlGrants;
    bool m_accessControlGrantsHasBeenSet;

    S3MetadataDirective m_metadataDirective;
    bool m_metadataDirectiveHasBeenSet;

    Aws::Utils::DateTime m_modifiedSinceConstraint;
    bool m_modifiedSinceConstraintHasBeenSet;

    S3ObjectMetadata m_newObjectMetadata;
    bool m_newObjectMetadataHasBeenSet;

    Aws::Vector<S3Tag> m_newObjectTagging;
    bool m_newObjectTaggingHasBeenSet;

    Aws::String m_redirectLocation;
    bool m_redirectLocationHasBeenSet;

    bool m_requesterPays;
    bool m_requesterPaysHasBeenSet;

    S3StorageClass m_storageClass;
    bool m_storageClassHasBeenSet;

    Aws::Utils::DateTime m_unModifiedSinceConstraint;
    bool m_unModifiedSinceConstraintHasBeenSet;

    Aws::String m_sSEAwsKmsKeyId;
    bool m_sSEAwsKmsKeyIdHasBeenSet;

    Aws::String m_targetKeyPrefix;
    bool m_targetKeyPrefixHasBeenSet;

    S3ObjectLockLegalHoldStatus m_objectLockLegalHoldStatus;
    bool m_objectLockLegalHoldStatusHasBeenSet;

    S3ObjectLockMode m_objectLockMode;
    bool m_objectLockModeHasBeenSet;

    Aws::Utils::DateTime m_objectLockRetainUntilDate;
    bool m_objectLockRetainUntilDateHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
