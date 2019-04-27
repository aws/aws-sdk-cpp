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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/NFSFileShareDefaults.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/ObjectACL.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Tag.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>The Unix file permissions and ownership information assigned, by default, to
   * native S3 objects when file gateway discovers them in S3 buckets. This operation
   * is only supported in file gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/NFSFileShareInfo">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API NFSFileShareInfo
  {
  public:
    NFSFileShareInfo();
    NFSFileShareInfo(Aws::Utils::Json::JsonView jsonValue);
    NFSFileShareInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const NFSFileShareDefaults& GetNFSFileShareDefaults() const{ return m_nFSFileShareDefaults; }

    
    inline bool NFSFileShareDefaultsHasBeenSet() const { return m_nFSFileShareDefaultsHasBeenSet; }

    
    inline void SetNFSFileShareDefaults(const NFSFileShareDefaults& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = value; }

    
    inline void SetNFSFileShareDefaults(NFSFileShareDefaults&& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = std::move(value); }

    
    inline NFSFileShareInfo& WithNFSFileShareDefaults(const NFSFileShareDefaults& value) { SetNFSFileShareDefaults(value); return *this;}

    
    inline NFSFileShareInfo& WithNFSFileShareDefaults(NFSFileShareDefaults&& value) { SetNFSFileShareDefaults(std::move(value)); return *this;}


    
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }

    
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }

    
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }

    
    inline NFSFileShareInfo& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    
    inline NFSFileShareInfo& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}

    
    inline NFSFileShareInfo& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}


    
    inline const Aws::String& GetFileShareId() const{ return m_fileShareId; }

    
    inline bool FileShareIdHasBeenSet() const { return m_fileShareIdHasBeenSet; }

    
    inline void SetFileShareId(const Aws::String& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = value; }

    
    inline void SetFileShareId(Aws::String&& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = std::move(value); }

    
    inline void SetFileShareId(const char* value) { m_fileShareIdHasBeenSet = true; m_fileShareId.assign(value); }

    
    inline NFSFileShareInfo& WithFileShareId(const Aws::String& value) { SetFileShareId(value); return *this;}

    
    inline NFSFileShareInfo& WithFileShareId(Aws::String&& value) { SetFileShareId(std::move(value)); return *this;}

    
    inline NFSFileShareInfo& WithFileShareId(const char* value) { SetFileShareId(value); return *this;}


    
    inline const Aws::String& GetFileShareStatus() const{ return m_fileShareStatus; }

    
    inline bool FileShareStatusHasBeenSet() const { return m_fileShareStatusHasBeenSet; }

    
    inline void SetFileShareStatus(const Aws::String& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = value; }

    
    inline void SetFileShareStatus(Aws::String&& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = std::move(value); }

    
    inline void SetFileShareStatus(const char* value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus.assign(value); }

    
    inline NFSFileShareInfo& WithFileShareStatus(const Aws::String& value) { SetFileShareStatus(value); return *this;}

    
    inline NFSFileShareInfo& WithFileShareStatus(Aws::String&& value) { SetFileShareStatus(std::move(value)); return *this;}

    
    inline NFSFileShareInfo& WithFileShareStatus(const char* value) { SetFileShareStatus(value); return *this;}


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline NFSFileShareInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline NFSFileShareInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline NFSFileShareInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional. </p>
     */
    inline bool GetKMSEncrypted() const{ return m_kMSEncrypted; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional. </p>
     */
    inline bool KMSEncryptedHasBeenSet() const { return m_kMSEncryptedHasBeenSet; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional. </p>
     */
    inline void SetKMSEncrypted(bool value) { m_kMSEncryptedHasBeenSet = true; m_kMSEncrypted = value; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional. </p>
     */
    inline NFSFileShareInfo& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}


    
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }

    
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    
    inline NFSFileShareInfo& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    
    inline NFSFileShareInfo& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    
    inline NFSFileShareInfo& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    
    inline const Aws::String& GetPath() const{ return m_path; }

    
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    
    inline NFSFileShareInfo& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    
    inline NFSFileShareInfo& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    
    inline NFSFileShareInfo& WithPath(const char* value) { SetPath(value); return *this;}


    
    inline const Aws::String& GetRole() const{ return m_role; }

    
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    
    inline NFSFileShareInfo& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    
    inline NFSFileShareInfo& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    
    inline NFSFileShareInfo& WithRole(const char* value) { SetRole(value); return *this;}


    
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }

    
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }

    
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }

    
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }

    
    inline NFSFileShareInfo& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}

    
    inline NFSFileShareInfo& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}

    
    inline NFSFileShareInfo& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}


    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline const Aws::String& GetDefaultStorageClass() const{ return m_defaultStorageClass; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline bool DefaultStorageClassHasBeenSet() const { return m_defaultStorageClassHasBeenSet; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline void SetDefaultStorageClass(const Aws::String& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = value; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline void SetDefaultStorageClass(Aws::String&& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = std::move(value); }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline void SetDefaultStorageClass(const char* value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass.assign(value); }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline NFSFileShareInfo& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline NFSFileShareInfo& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(std::move(value)); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline NFSFileShareInfo& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}


    
    inline const ObjectACL& GetObjectACL() const{ return m_objectACL; }

    
    inline bool ObjectACLHasBeenSet() const { return m_objectACLHasBeenSet; }

    
    inline void SetObjectACL(const ObjectACL& value) { m_objectACLHasBeenSet = true; m_objectACL = value; }

    
    inline void SetObjectACL(ObjectACL&& value) { m_objectACLHasBeenSet = true; m_objectACL = std::move(value); }

    
    inline NFSFileShareInfo& WithObjectACL(const ObjectACL& value) { SetObjectACL(value); return *this;}

    
    inline NFSFileShareInfo& WithObjectACL(ObjectACL&& value) { SetObjectACL(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetClientList() const{ return m_clientList; }

    
    inline bool ClientListHasBeenSet() const { return m_clientListHasBeenSet; }

    
    inline void SetClientList(const Aws::Vector<Aws::String>& value) { m_clientListHasBeenSet = true; m_clientList = value; }

    
    inline void SetClientList(Aws::Vector<Aws::String>&& value) { m_clientListHasBeenSet = true; m_clientList = std::move(value); }

    
    inline NFSFileShareInfo& WithClientList(const Aws::Vector<Aws::String>& value) { SetClientList(value); return *this;}

    
    inline NFSFileShareInfo& WithClientList(Aws::Vector<Aws::String>&& value) { SetClientList(std::move(value)); return *this;}

    
    inline NFSFileShareInfo& AddClientList(const Aws::String& value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }

    
    inline NFSFileShareInfo& AddClientList(Aws::String&& value) { m_clientListHasBeenSet = true; m_clientList.push_back(std::move(value)); return *this; }

    
    inline NFSFileShareInfo& AddClientList(const char* value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }


    
    inline const Aws::String& GetSquash() const{ return m_squash; }

    
    inline bool SquashHasBeenSet() const { return m_squashHasBeenSet; }

    
    inline void SetSquash(const Aws::String& value) { m_squashHasBeenSet = true; m_squash = value; }

    
    inline void SetSquash(Aws::String&& value) { m_squashHasBeenSet = true; m_squash = std::move(value); }

    
    inline void SetSquash(const char* value) { m_squashHasBeenSet = true; m_squash.assign(value); }

    
    inline NFSFileShareInfo& WithSquash(const Aws::String& value) { SetSquash(value); return *this;}

    
    inline NFSFileShareInfo& WithSquash(Aws::String&& value) { SetSquash(std::move(value)); return *this;}

    
    inline NFSFileShareInfo& WithSquash(const char* value) { SetSquash(value); return *this;}


    /**
     * <p>A value that sets the write status of a file share. This value is true if the
     * write status is read-only, and otherwise false.</p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>A value that sets the write status of a file share. This value is true if the
     * write status is read-only, and otherwise false.</p>
     */
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }

    /**
     * <p>A value that sets the write status of a file share. This value is true if the
     * write status is read-only, and otherwise false.</p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>A value that sets the write status of a file share. This value is true if the
     * write status is read-only, and otherwise false.</p>
     */
    inline NFSFileShareInfo& WithReadOnly(bool value) { SetReadOnly(value); return *this;}


    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to true to enable MIME type guessing, and
     * otherwise to false. The default value is true.</p>
     */
    inline bool GetGuessMIMETypeEnabled() const{ return m_guessMIMETypeEnabled; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to true to enable MIME type guessing, and
     * otherwise to false. The default value is true.</p>
     */
    inline bool GuessMIMETypeEnabledHasBeenSet() const { return m_guessMIMETypeEnabledHasBeenSet; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to true to enable MIME type guessing, and
     * otherwise to false. The default value is true.</p>
     */
    inline void SetGuessMIMETypeEnabled(bool value) { m_guessMIMETypeEnabledHasBeenSet = true; m_guessMIMETypeEnabled = value; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to true to enable MIME type guessing, and
     * otherwise to false. The default value is true.</p>
     */
    inline NFSFileShareInfo& WithGuessMIMETypeEnabled(bool value) { SetGuessMIMETypeEnabled(value); return *this;}


    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to true, the
     * requester pays the costs. Otherwise the S3 bucket owner pays. However, the S3
     * bucket owner always pays the cost of storing data.</p> <note> <p>
     * <code>RequesterPays</code> is a configuration for the S3 bucket that backs the
     * file share, so make sure that the configuration on the file share is the same as
     * the S3 bucket configuration.</p> </note>
     */
    inline bool GetRequesterPays() const{ return m_requesterPays; }

    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to true, the
     * requester pays the costs. Otherwise the S3 bucket owner pays. However, the S3
     * bucket owner always pays the cost of storing data.</p> <note> <p>
     * <code>RequesterPays</code> is a configuration for the S3 bucket that backs the
     * file share, so make sure that the configuration on the file share is the same as
     * the S3 bucket configuration.</p> </note>
     */
    inline bool RequesterPaysHasBeenSet() const { return m_requesterPaysHasBeenSet; }

    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to true, the
     * requester pays the costs. Otherwise the S3 bucket owner pays. However, the S3
     * bucket owner always pays the cost of storing data.</p> <note> <p>
     * <code>RequesterPays</code> is a configuration for the S3 bucket that backs the
     * file share, so make sure that the configuration on the file share is the same as
     * the S3 bucket configuration.</p> </note>
     */
    inline void SetRequesterPays(bool value) { m_requesterPaysHasBeenSet = true; m_requesterPays = value; }

    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to true, the
     * requester pays the costs. Otherwise the S3 bucket owner pays. However, the S3
     * bucket owner always pays the cost of storing data.</p> <note> <p>
     * <code>RequesterPays</code> is a configuration for the S3 bucket that backs the
     * file share, so make sure that the configuration on the file share is the same as
     * the S3 bucket configuration.</p> </note>
     */
    inline NFSFileShareInfo& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}


    /**
     * <p>A list of up to 50 tags assigned to the NFS file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of up to 50 tags assigned to the NFS file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of up to 50 tags assigned to the NFS file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of up to 50 tags assigned to the NFS file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of up to 50 tags assigned to the NFS file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline NFSFileShareInfo& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of up to 50 tags assigned to the NFS file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline NFSFileShareInfo& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 tags assigned to the NFS file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline NFSFileShareInfo& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 tags assigned to the NFS file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline NFSFileShareInfo& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    NFSFileShareDefaults m_nFSFileShareDefaults;
    bool m_nFSFileShareDefaultsHasBeenSet;

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet;

    Aws::String m_fileShareId;
    bool m_fileShareIdHasBeenSet;

    Aws::String m_fileShareStatus;
    bool m_fileShareStatusHasBeenSet;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    bool m_kMSEncrypted;
    bool m_kMSEncryptedHasBeenSet;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::String m_locationARN;
    bool m_locationARNHasBeenSet;

    Aws::String m_defaultStorageClass;
    bool m_defaultStorageClassHasBeenSet;

    ObjectACL m_objectACL;
    bool m_objectACLHasBeenSet;

    Aws::Vector<Aws::String> m_clientList;
    bool m_clientListHasBeenSet;

    Aws::String m_squash;
    bool m_squashHasBeenSet;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet;

    bool m_guessMIMETypeEnabled;
    bool m_guessMIMETypeEnabledHasBeenSet;

    bool m_requesterPays;
    bool m_requesterPaysHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
