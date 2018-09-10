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
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/ObjectACL.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>CreateSMBFileShareInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateSMBFileShareInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API CreateSMBFileShareRequest : public StorageGatewayRequest
  {
  public:
    CreateSMBFileShareRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSMBFileShare"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline CreateSMBFileShareRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline CreateSMBFileShareRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline CreateSMBFileShareRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline CreateSMBFileShareRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline CreateSMBFileShareRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline CreateSMBFileShareRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional.</p>
     */
    inline bool GetKMSEncrypted() const{ return m_kMSEncrypted; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional.</p>
     */
    inline void SetKMSEncrypted(bool value) { m_kMSEncryptedHasBeenSet = true; m_kMSEncrypted = value; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional.</p>
     */
    inline CreateSMBFileShareRequest& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline CreateSMBFileShareRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline CreateSMBFileShareRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline CreateSMBFileShareRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage. </p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage. </p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage. </p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage. </p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage. </p>
     */
    inline CreateSMBFileShareRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage. </p>
     */
    inline CreateSMBFileShareRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage. </p>
     */
    inline CreateSMBFileShareRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The ARN of the backed storage used for storing file data. </p>
     */
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }

    /**
     * <p>The ARN of the backed storage used for storing file data. </p>
     */
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    /**
     * <p>The ARN of the backed storage used for storing file data. </p>
     */
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }

    /**
     * <p>The ARN of the backed storage used for storing file data. </p>
     */
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }

    /**
     * <p>The ARN of the backed storage used for storing file data. </p>
     */
    inline CreateSMBFileShareRequest& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}

    /**
     * <p>The ARN of the backed storage used for storing file data. </p>
     */
    inline CreateSMBFileShareRequest& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the backed storage used for storing file data. </p>
     */
    inline CreateSMBFileShareRequest& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}


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
    inline CreateSMBFileShareRequest& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline CreateSMBFileShareRequest& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(std::move(value)); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline CreateSMBFileShareRequest& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}


    /**
     * <p>A value that sets the access control list permission for objects in the S3
     * bucket that a file gateway puts objects into. The default value is
     * "private".</p>
     */
    inline const ObjectACL& GetObjectACL() const{ return m_objectACL; }

    /**
     * <p>A value that sets the access control list permission for objects in the S3
     * bucket that a file gateway puts objects into. The default value is
     * "private".</p>
     */
    inline void SetObjectACL(const ObjectACL& value) { m_objectACLHasBeenSet = true; m_objectACL = value; }

    /**
     * <p>A value that sets the access control list permission for objects in the S3
     * bucket that a file gateway puts objects into. The default value is
     * "private".</p>
     */
    inline void SetObjectACL(ObjectACL&& value) { m_objectACLHasBeenSet = true; m_objectACL = std::move(value); }

    /**
     * <p>A value that sets the access control list permission for objects in the S3
     * bucket that a file gateway puts objects into. The default value is
     * "private".</p>
     */
    inline CreateSMBFileShareRequest& WithObjectACL(const ObjectACL& value) { SetObjectACL(value); return *this;}

    /**
     * <p>A value that sets the access control list permission for objects in the S3
     * bucket that a file gateway puts objects into. The default value is
     * "private".</p>
     */
    inline CreateSMBFileShareRequest& WithObjectACL(ObjectACL&& value) { SetObjectACL(std::move(value)); return *this;}


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
    inline CreateSMBFileShareRequest& WithReadOnly(bool value) { SetReadOnly(value); return *this;}


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
    inline CreateSMBFileShareRequest& WithGuessMIMETypeEnabled(bool value) { SetGuessMIMETypeEnabled(value); return *this;}


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
    inline CreateSMBFileShareRequest& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}


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
    inline CreateSMBFileShareRequest& WithValidUserList(const Aws::Vector<Aws::String>& value) { SetValidUserList(value); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithValidUserList(Aws::Vector<Aws::String>&& value) { SetValidUserList(std::move(value)); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddValidUserList(const Aws::String& value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(value); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddValidUserList(Aws::String&& value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. For example
     * <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddValidUserList(const char* value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(value); return *this; }


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
    inline CreateSMBFileShareRequest& WithInvalidUserList(const Aws::Vector<Aws::String>& value) { SetInvalidUserList(value); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithInvalidUserList(Aws::Vector<Aws::String>&& value) { SetInvalidUserList(std::move(value)); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddInvalidUserList(const Aws::String& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(value); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddInvalidUserList(Aws::String&& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. For
     * example <code>@group1</code>. Can only be set if Authentication is set to
     * <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& AddInvalidUserList(const char* value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(value); return *this; }


    /**
     * <p>The authentication method that users use to access the file share.</p>
     * <p>Valid values are <code>ActiveDirectory</code> or <code>GuestAccess</code>.
     * The default is <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::String& GetAuthentication() const{ return m_authentication; }

    /**
     * <p>The authentication method that users use to access the file share.</p>
     * <p>Valid values are <code>ActiveDirectory</code> or <code>GuestAccess</code>.
     * The default is <code>ActiveDirectory</code>.</p>
     */
    inline void SetAuthentication(const Aws::String& value) { m_authenticationHasBeenSet = true; m_authentication = value; }

    /**
     * <p>The authentication method that users use to access the file share.</p>
     * <p>Valid values are <code>ActiveDirectory</code> or <code>GuestAccess</code>.
     * The default is <code>ActiveDirectory</code>.</p>
     */
    inline void SetAuthentication(Aws::String&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }

    /**
     * <p>The authentication method that users use to access the file share.</p>
     * <p>Valid values are <code>ActiveDirectory</code> or <code>GuestAccess</code>.
     * The default is <code>ActiveDirectory</code>.</p>
     */
    inline void SetAuthentication(const char* value) { m_authenticationHasBeenSet = true; m_authentication.assign(value); }

    /**
     * <p>The authentication method that users use to access the file share.</p>
     * <p>Valid values are <code>ActiveDirectory</code> or <code>GuestAccess</code>.
     * The default is <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithAuthentication(const Aws::String& value) { SetAuthentication(value); return *this;}

    /**
     * <p>The authentication method that users use to access the file share.</p>
     * <p>Valid values are <code>ActiveDirectory</code> or <code>GuestAccess</code>.
     * The default is <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithAuthentication(Aws::String&& value) { SetAuthentication(std::move(value)); return *this;}

    /**
     * <p>The authentication method that users use to access the file share.</p>
     * <p>Valid values are <code>ActiveDirectory</code> or <code>GuestAccess</code>.
     * The default is <code>ActiveDirectory</code>.</p>
     */
    inline CreateSMBFileShareRequest& WithAuthentication(const char* value) { SetAuthentication(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    bool m_kMSEncrypted;
    bool m_kMSEncryptedHasBeenSet;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet;

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
