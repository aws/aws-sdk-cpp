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
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/NFSFileShareDefaults.h>
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
   * <p>UpdateNFSFileShareInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateNFSFileShareInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API UpdateNFSFileShareRequest : public StorageGatewayRequest
  {
  public:
    UpdateNFSFileShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNFSFileShare"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be updated. </p>
     */
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be updated. </p>
     */
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be updated. </p>
     */
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be updated. </p>
     */
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be updated. </p>
     */
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be updated. </p>
     */
    inline UpdateNFSFileShareRequest& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be updated. </p>
     */
    inline UpdateNFSFileShareRequest& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be updated. </p>
     */
    inline UpdateNFSFileShareRequest& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}


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
    inline UpdateNFSFileShareRequest& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true. Optional.
     * </p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true. Optional.
     * </p>
     */
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true. Optional.
     * </p>
     */
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true. Optional.
     * </p>
     */
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true. Optional.
     * </p>
     */
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true. Optional.
     * </p>
     */
    inline UpdateNFSFileShareRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true. Optional.
     * </p>
     */
    inline UpdateNFSFileShareRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true. Optional.
     * </p>
     */
    inline UpdateNFSFileShareRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    /**
     * <p>The default values for the file share. Optional.</p>
     */
    inline const NFSFileShareDefaults& GetNFSFileShareDefaults() const{ return m_nFSFileShareDefaults; }

    /**
     * <p>The default values for the file share. Optional.</p>
     */
    inline bool NFSFileShareDefaultsHasBeenSet() const { return m_nFSFileShareDefaultsHasBeenSet; }

    /**
     * <p>The default values for the file share. Optional.</p>
     */
    inline void SetNFSFileShareDefaults(const NFSFileShareDefaults& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = value; }

    /**
     * <p>The default values for the file share. Optional.</p>
     */
    inline void SetNFSFileShareDefaults(NFSFileShareDefaults&& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = std::move(value); }

    /**
     * <p>The default values for the file share. Optional.</p>
     */
    inline UpdateNFSFileShareRequest& WithNFSFileShareDefaults(const NFSFileShareDefaults& value) { SetNFSFileShareDefaults(value); return *this;}

    /**
     * <p>The default values for the file share. Optional.</p>
     */
    inline UpdateNFSFileShareRequest& WithNFSFileShareDefaults(NFSFileShareDefaults&& value) { SetNFSFileShareDefaults(std::move(value)); return *this;}


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
    inline UpdateNFSFileShareRequest& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline UpdateNFSFileShareRequest& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(std::move(value)); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. Possible values are <code>S3_STANDARD</code>,
     * <code>S3_STANDARD_IA</code>, or <code>S3_ONEZONE_IA</code>. If this field is not
     * populated, the default value <code>S3_STANDARD</code> is used. Optional.</p>
     */
    inline UpdateNFSFileShareRequest& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}


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
    inline bool ObjectACLHasBeenSet() const { return m_objectACLHasBeenSet; }

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
    inline UpdateNFSFileShareRequest& WithObjectACL(const ObjectACL& value) { SetObjectACL(value); return *this;}

    /**
     * <p>A value that sets the access control list permission for objects in the S3
     * bucket that a file gateway puts objects into. The default value is
     * "private".</p>
     */
    inline UpdateNFSFileShareRequest& WithObjectACL(ObjectACL&& value) { SetObjectACL(std::move(value)); return *this;}


    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientList() const{ return m_clientList; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline bool ClientListHasBeenSet() const { return m_clientListHasBeenSet; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline void SetClientList(const Aws::Vector<Aws::String>& value) { m_clientListHasBeenSet = true; m_clientList = value; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline void SetClientList(Aws::Vector<Aws::String>&& value) { m_clientListHasBeenSet = true; m_clientList = std::move(value); }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline UpdateNFSFileShareRequest& WithClientList(const Aws::Vector<Aws::String>& value) { SetClientList(value); return *this;}

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline UpdateNFSFileShareRequest& WithClientList(Aws::Vector<Aws::String>&& value) { SetClientList(std::move(value)); return *this;}

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline UpdateNFSFileShareRequest& AddClientList(const Aws::String& value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline UpdateNFSFileShareRequest& AddClientList(Aws::String&& value) { m_clientListHasBeenSet = true; m_clientList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline UpdateNFSFileShareRequest& AddClientList(const char* value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }


    /**
     * <p>The user mapped to anonymous user. Valid options are the following:</p> <ul>
     * <li> <p> <code>RootSquash</code> - Only root is mapped to anonymous user.</p>
     * </li> <li> <p> <code>NoSquash</code> - No one is mapped to anonymous user</p>
     * </li> <li> <p> <code>AllSquash</code> - Everyone is mapped to anonymous
     * user.</p> </li> </ul>
     */
    inline const Aws::String& GetSquash() const{ return m_squash; }

    /**
     * <p>The user mapped to anonymous user. Valid options are the following:</p> <ul>
     * <li> <p> <code>RootSquash</code> - Only root is mapped to anonymous user.</p>
     * </li> <li> <p> <code>NoSquash</code> - No one is mapped to anonymous user</p>
     * </li> <li> <p> <code>AllSquash</code> - Everyone is mapped to anonymous
     * user.</p> </li> </ul>
     */
    inline bool SquashHasBeenSet() const { return m_squashHasBeenSet; }

    /**
     * <p>The user mapped to anonymous user. Valid options are the following:</p> <ul>
     * <li> <p> <code>RootSquash</code> - Only root is mapped to anonymous user.</p>
     * </li> <li> <p> <code>NoSquash</code> - No one is mapped to anonymous user</p>
     * </li> <li> <p> <code>AllSquash</code> - Everyone is mapped to anonymous
     * user.</p> </li> </ul>
     */
    inline void SetSquash(const Aws::String& value) { m_squashHasBeenSet = true; m_squash = value; }

    /**
     * <p>The user mapped to anonymous user. Valid options are the following:</p> <ul>
     * <li> <p> <code>RootSquash</code> - Only root is mapped to anonymous user.</p>
     * </li> <li> <p> <code>NoSquash</code> - No one is mapped to anonymous user</p>
     * </li> <li> <p> <code>AllSquash</code> - Everyone is mapped to anonymous
     * user.</p> </li> </ul>
     */
    inline void SetSquash(Aws::String&& value) { m_squashHasBeenSet = true; m_squash = std::move(value); }

    /**
     * <p>The user mapped to anonymous user. Valid options are the following:</p> <ul>
     * <li> <p> <code>RootSquash</code> - Only root is mapped to anonymous user.</p>
     * </li> <li> <p> <code>NoSquash</code> - No one is mapped to anonymous user</p>
     * </li> <li> <p> <code>AllSquash</code> - Everyone is mapped to anonymous
     * user.</p> </li> </ul>
     */
    inline void SetSquash(const char* value) { m_squashHasBeenSet = true; m_squash.assign(value); }

    /**
     * <p>The user mapped to anonymous user. Valid options are the following:</p> <ul>
     * <li> <p> <code>RootSquash</code> - Only root is mapped to anonymous user.</p>
     * </li> <li> <p> <code>NoSquash</code> - No one is mapped to anonymous user</p>
     * </li> <li> <p> <code>AllSquash</code> - Everyone is mapped to anonymous
     * user.</p> </li> </ul>
     */
    inline UpdateNFSFileShareRequest& WithSquash(const Aws::String& value) { SetSquash(value); return *this;}

    /**
     * <p>The user mapped to anonymous user. Valid options are the following:</p> <ul>
     * <li> <p> <code>RootSquash</code> - Only root is mapped to anonymous user.</p>
     * </li> <li> <p> <code>NoSquash</code> - No one is mapped to anonymous user</p>
     * </li> <li> <p> <code>AllSquash</code> - Everyone is mapped to anonymous
     * user.</p> </li> </ul>
     */
    inline UpdateNFSFileShareRequest& WithSquash(Aws::String&& value) { SetSquash(std::move(value)); return *this;}

    /**
     * <p>The user mapped to anonymous user. Valid options are the following:</p> <ul>
     * <li> <p> <code>RootSquash</code> - Only root is mapped to anonymous user.</p>
     * </li> <li> <p> <code>NoSquash</code> - No one is mapped to anonymous user</p>
     * </li> <li> <p> <code>AllSquash</code> - Everyone is mapped to anonymous
     * user.</p> </li> </ul>
     */
    inline UpdateNFSFileShareRequest& WithSquash(const char* value) { SetSquash(value); return *this;}


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
    inline UpdateNFSFileShareRequest& WithReadOnly(bool value) { SetReadOnly(value); return *this;}


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
    inline UpdateNFSFileShareRequest& WithGuessMIMETypeEnabled(bool value) { SetGuessMIMETypeEnabled(value); return *this;}


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
    inline UpdateNFSFileShareRequest& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}

  private:

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet;

    bool m_kMSEncrypted;
    bool m_kMSEncryptedHasBeenSet;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet;

    NFSFileShareDefaults m_nFSFileShareDefaults;
    bool m_nFSFileShareDefaultsHasBeenSet;

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
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
