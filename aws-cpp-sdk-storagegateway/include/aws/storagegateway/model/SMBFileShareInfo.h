﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/ObjectACL.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The Windows file permissions and ownership information assigned, by default,
   * to native S3 objects when file gateway discovers them in S3 buckets. This
   * operation is only supported for file gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/SMBFileShareInfo">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API SMBFileShareInfo
  {
  public:
    SMBFileShareInfo();
    SMBFileShareInfo(Aws::Utils::Json::JsonView jsonValue);
    SMBFileShareInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }

    
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }

    
    inline SMBFileShareInfo& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    
    inline SMBFileShareInfo& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}


    
    inline const Aws::String& GetFileShareId() const{ return m_fileShareId; }

    
    inline void SetFileShareId(const Aws::String& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = value; }

    
    inline void SetFileShareId(Aws::String&& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = std::move(value); }

    
    inline void SetFileShareId(const char* value) { m_fileShareIdHasBeenSet = true; m_fileShareId.assign(value); }

    
    inline SMBFileShareInfo& WithFileShareId(const Aws::String& value) { SetFileShareId(value); return *this;}

    
    inline SMBFileShareInfo& WithFileShareId(Aws::String&& value) { SetFileShareId(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithFileShareId(const char* value) { SetFileShareId(value); return *this;}


    
    inline const Aws::String& GetFileShareStatus() const{ return m_fileShareStatus; }

    
    inline void SetFileShareStatus(const Aws::String& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = value; }

    
    inline void SetFileShareStatus(Aws::String&& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = std::move(value); }

    
    inline void SetFileShareStatus(const char* value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus.assign(value); }

    
    inline SMBFileShareInfo& WithFileShareStatus(const Aws::String& value) { SetFileShareStatus(value); return *this;}

    
    inline SMBFileShareInfo& WithFileShareStatus(Aws::String&& value) { SetFileShareStatus(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithFileShareStatus(const char* value) { SetFileShareStatus(value); return *this;}


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline SMBFileShareInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline SMBFileShareInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>True to use Amazon S3 server-side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional. </p>
     */
    inline bool GetKMSEncrypted() const{ return m_kMSEncrypted; }

    /**
     * <p>True to use Amazon S3 server-side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional. </p>
     */
    inline void SetKMSEncrypted(bool value) { m_kMSEncryptedHasBeenSet = true; m_kMSEncrypted = value; }

    /**
     * <p>True to use Amazon S3 server-side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional. </p>
     */
    inline SMBFileShareInfo& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}


    
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    
    inline SMBFileShareInfo& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    
    inline SMBFileShareInfo& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline SMBFileShareInfo& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline SMBFileShareInfo& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline SMBFileShareInfo& WithPath(const char* value) { SetPath(value); return *this;}


    
    inline const Aws::String& GetRole() const{ return m_role; }

    
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    
    inline SMBFileShareInfo& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    
    inline SMBFileShareInfo& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithRole(const char* value) { SetRole(value); return *this;}


    
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }

    
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }

    
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }

    
    inline SMBFileShareInfo& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}

    
    inline SMBFileShareInfo& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}


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
    inline SMBFileShareInfo& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline SMBFileShareInfo& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(std::move(value)); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline SMBFileShareInfo& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}


    
    inline const ObjectACL& GetObjectACL() const{ return m_objectACL; }

    
    inline void SetObjectACL(const ObjectACL& value) { m_objectACLHasBeenSet = true; m_objectACL = value; }

    
    inline void SetObjectACL(ObjectACL&& value) { m_objectACLHasBeenSet = true; m_objectACL = std::move(value); }

    
    inline SMBFileShareInfo& WithObjectACL(const ObjectACL& value) { SetObjectACL(value); return *this;}

    
    inline SMBFileShareInfo& WithObjectACL(ObjectACL&& value) { SetObjectACL(std::move(value)); return *this;}


    /**
     * <p>A value that sets the write status of a file share. This value is true if the
     * write status is read-only, and otherwise false.</p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>A value that sets the write status of a file share. This value is true if the
     * write status is read-only, and otherwise false.</p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>A value that sets the write status of a file share. This value is true if the
     * write status is read-only, and otherwise false.</p>
     */
    inline SMBFileShareInfo& WithReadOnly(bool value) { SetReadOnly(value); return *this;}


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
    inline void SetGuessMIMETypeEnabled(bool value) { m_guessMIMETypeEnabledHasBeenSet = true; m_guessMIMETypeEnabled = value; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to true to enable MIME type guessing, and
     * otherwise to false. The default value is true.</p>
     */
    inline SMBFileShareInfo& WithGuessMIMETypeEnabled(bool value) { SetGuessMIMETypeEnabled(value); return *this;}


    /**
     * <p>A value that sets the access control list permission for objects in the
     * Amazon S3 bucket that a file gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline bool GetRequesterPays() const{ return m_requesterPays; }

    /**
     * <p>A value that sets the access control list permission for objects in the
     * Amazon S3 bucket that a file gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline void SetRequesterPays(bool value) { m_requesterPaysHasBeenSet = true; m_requesterPays = value; }

    /**
     * <p>A value that sets the access control list permission for objects in the
     * Amazon S3 bucket that a file gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline SMBFileShareInfo& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}


    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidUserList() const{ return m_validUserList; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline void SetValidUserList(const Aws::Vector<Aws::String>& value) { m_validUserListHasBeenSet = true; m_validUserList = value; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline void SetValidUserList(Aws::Vector<Aws::String>&& value) { m_validUserListHasBeenSet = true; m_validUserList = std::move(value); }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& WithValidUserList(const Aws::Vector<Aws::String>& value) { SetValidUserList(value); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& WithValidUserList(Aws::Vector<Aws::String>&& value) { SetValidUserList(std::move(value)); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddValidUserList(const Aws::String& value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(value); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddValidUserList(Aws::String&& value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddValidUserList(const char* value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(value); return *this; }


    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidUserList() const{ return m_invalidUserList; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline void SetInvalidUserList(const Aws::Vector<Aws::String>& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList = value; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline void SetInvalidUserList(Aws::Vector<Aws::String>&& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList = std::move(value); }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& WithInvalidUserList(const Aws::Vector<Aws::String>& value) { SetInvalidUserList(value); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& WithInvalidUserList(Aws::Vector<Aws::String>&& value) { SetInvalidUserList(std::move(value)); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddInvalidUserList(const Aws::String& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(value); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddInvalidUserList(Aws::String&& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddInvalidUserList(const char* value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(value); return *this; }


    
    inline const Aws::String& GetAuthentication() const{ return m_authentication; }

    
    inline void SetAuthentication(const Aws::String& value) { m_authenticationHasBeenSet = true; m_authentication = value; }

    
    inline void SetAuthentication(Aws::String&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }

    
    inline void SetAuthentication(const char* value) { m_authenticationHasBeenSet = true; m_authentication.assign(value); }

    
    inline SMBFileShareInfo& WithAuthentication(const Aws::String& value) { SetAuthentication(value); return *this;}

    
    inline SMBFileShareInfo& WithAuthentication(Aws::String&& value) { SetAuthentication(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithAuthentication(const char* value) { SetAuthentication(value); return *this;}

  private:

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

    bool m_readOnly;
    bool m_readOnlyHasBeenSet;

    bool m_guessMIMETypeEnabled;
    bool m_guessMIMETypeEnabledHasBeenSet;

    bool m_requesterPays;
    bool m_requesterPaysHasBeenSet;

    Aws::Vector<Aws::String> m_validUserList;
    bool m_validUserListHasBeenSet;

    Aws::Vector<Aws::String> m_invalidUserList;
    bool m_invalidUserListHasBeenSet;

    Aws::String m_authentication;
    bool m_authenticationHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
