/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>CreateNFSFileShareInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateNFSFileShareInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API CreateNFSFileShareRequest : public StorageGatewayRequest
  {
  public:
    CreateNFSFileShareRequest();
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
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline CreateNFSFileShareRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline CreateNFSFileShareRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline CreateNFSFileShareRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    /**
     * <p>File share default values. Optional.</p>
     */
    inline const NFSFileShareDefaults& GetNFSFileShareDefaults() const{ return m_nFSFileShareDefaults; }

    /**
     * <p>File share default values. Optional.</p>
     */
    inline void SetNFSFileShareDefaults(const NFSFileShareDefaults& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = value; }

    /**
     * <p>File share default values. Optional.</p>
     */
    inline void SetNFSFileShareDefaults(NFSFileShareDefaults&& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = value; }

    /**
     * <p>File share default values. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithNFSFileShareDefaults(const NFSFileShareDefaults& value) { SetNFSFileShareDefaults(value); return *this;}

    /**
     * <p>File share default values. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithNFSFileShareDefaults(NFSFileShareDefaults&& value) { SetNFSFileShareDefaults(value); return *this;}

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
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline CreateNFSFileShareRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline CreateNFSFileShareRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline CreateNFSFileShareRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

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
    inline CreateNFSFileShareRequest& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional.</p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional.</p>
     */
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional.</p>
     */
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional.</p>
     */
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}

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
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage. </p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage. </p>
     */
    inline CreateNFSFileShareRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage. </p>
     */
    inline CreateNFSFileShareRequest& WithRole(Aws::String&& value) { SetRole(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage. </p>
     */
    inline CreateNFSFileShareRequest& WithRole(const char* value) { SetRole(value); return *this;}

    /**
     * <p>The ARN of the backend storage used for storing file data. </p>
     */
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }

    /**
     * <p>The ARN of the backend storage used for storing file data. </p>
     */
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    /**
     * <p>The ARN of the backend storage used for storing file data. </p>
     */
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    /**
     * <p>The ARN of the backend storage used for storing file data. </p>
     */
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }

    /**
     * <p>The ARN of the backend storage used for storing file data. </p>
     */
    inline CreateNFSFileShareRequest& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}

    /**
     * <p>The ARN of the backend storage used for storing file data. </p>
     */
    inline CreateNFSFileShareRequest& WithLocationARN(Aws::String&& value) { SetLocationARN(value); return *this;}

    /**
     * <p>The ARN of the backend storage used for storing file data. </p>
     */
    inline CreateNFSFileShareRequest& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline const Aws::String& GetDefaultStorageClass() const{ return m_defaultStorageClass; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline void SetDefaultStorageClass(const Aws::String& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = value; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline void SetDefaultStorageClass(Aws::String&& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = value; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline void SetDefaultStorageClass(const char* value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass.assign(value); }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks. </p>
     */
    inline const Aws::Vector<Aws::String>& GetClientList() const{ return m_clientList; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks. </p>
     */
    inline void SetClientList(const Aws::Vector<Aws::String>& value) { m_clientListHasBeenSet = true; m_clientList = value; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks. </p>
     */
    inline void SetClientList(Aws::Vector<Aws::String>&& value) { m_clientListHasBeenSet = true; m_clientList = value; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks. </p>
     */
    inline CreateNFSFileShareRequest& WithClientList(const Aws::Vector<Aws::String>& value) { SetClientList(value); return *this;}

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks. </p>
     */
    inline CreateNFSFileShareRequest& WithClientList(Aws::Vector<Aws::String>&& value) { SetClientList(value); return *this;}

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks. </p>
     */
    inline CreateNFSFileShareRequest& AddClientList(const Aws::String& value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks. </p>
     */
    inline CreateNFSFileShareRequest& AddClientList(Aws::String&& value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks. </p>
     */
    inline CreateNFSFileShareRequest& AddClientList(const char* value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }

    /**
     * <p>Maps a user to anonymous user. Valid options: "RootSquash" - Only root is
     * mapped to anonymous user, "NoSquash" - No one is mapped to anonymous user or
     * "AllSquash" - Everyone is mapped to anonymous user. </p>
     */
    inline const Aws::String& GetSquash() const{ return m_squash; }

    /**
     * <p>Maps a user to anonymous user. Valid options: "RootSquash" - Only root is
     * mapped to anonymous user, "NoSquash" - No one is mapped to anonymous user or
     * "AllSquash" - Everyone is mapped to anonymous user. </p>
     */
    inline void SetSquash(const Aws::String& value) { m_squashHasBeenSet = true; m_squash = value; }

    /**
     * <p>Maps a user to anonymous user. Valid options: "RootSquash" - Only root is
     * mapped to anonymous user, "NoSquash" - No one is mapped to anonymous user or
     * "AllSquash" - Everyone is mapped to anonymous user. </p>
     */
    inline void SetSquash(Aws::String&& value) { m_squashHasBeenSet = true; m_squash = value; }

    /**
     * <p>Maps a user to anonymous user. Valid options: "RootSquash" - Only root is
     * mapped to anonymous user, "NoSquash" - No one is mapped to anonymous user or
     * "AllSquash" - Everyone is mapped to anonymous user. </p>
     */
    inline void SetSquash(const char* value) { m_squashHasBeenSet = true; m_squash.assign(value); }

    /**
     * <p>Maps a user to anonymous user. Valid options: "RootSquash" - Only root is
     * mapped to anonymous user, "NoSquash" - No one is mapped to anonymous user or
     * "AllSquash" - Everyone is mapped to anonymous user. </p>
     */
    inline CreateNFSFileShareRequest& WithSquash(const Aws::String& value) { SetSquash(value); return *this;}

    /**
     * <p>Maps a user to anonymous user. Valid options: "RootSquash" - Only root is
     * mapped to anonymous user, "NoSquash" - No one is mapped to anonymous user or
     * "AllSquash" - Everyone is mapped to anonymous user. </p>
     */
    inline CreateNFSFileShareRequest& WithSquash(Aws::String&& value) { SetSquash(value); return *this;}

    /**
     * <p>Maps a user to anonymous user. Valid options: "RootSquash" - Only root is
     * mapped to anonymous user, "NoSquash" - No one is mapped to anonymous user or
     * "AllSquash" - Everyone is mapped to anonymous user. </p>
     */
    inline CreateNFSFileShareRequest& WithSquash(const char* value) { SetSquash(value); return *this;}

    /**
     * <p>Sets the write status of a file share. "true", if the write status is
     * read-only; otherwise "false.</p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>Sets the write status of a file share. "true", if the write status is
     * read-only; otherwise "false.</p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>Sets the write status of a file share. "true", if the write status is
     * read-only; otherwise "false.</p>
     */
    inline CreateNFSFileShareRequest& WithReadOnly(bool value) { SetReadOnly(value); return *this;}

  private:
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    NFSFileShareDefaults m_nFSFileShareDefaults;
    bool m_nFSFileShareDefaultsHasBeenSet;
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
    Aws::Vector<Aws::String> m_clientList;
    bool m_clientListHasBeenSet;
    Aws::String m_squash;
    bool m_squashHasBeenSet;
    bool m_readOnly;
    bool m_readOnlyHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
