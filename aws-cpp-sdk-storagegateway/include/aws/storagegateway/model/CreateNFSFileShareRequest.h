/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/NFSFileShareDefaults.h>
#include <aws/storagegateway/model/ObjectACL.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/CacheAttributes.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNFSFileShare"; }

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
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

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
    inline CreateNFSFileShareRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique string value that you supply that is used by file gateway to ensure
     * idempotent file share creation.</p>
     */
    inline CreateNFSFileShareRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

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
    inline bool NFSFileShareDefaultsHasBeenSet() const { return m_nFSFileShareDefaultsHasBeenSet; }

    /**
     * <p>File share default values. Optional.</p>
     */
    inline void SetNFSFileShareDefaults(const NFSFileShareDefaults& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = value; }

    /**
     * <p>File share default values. Optional.</p>
     */
    inline void SetNFSFileShareDefaults(NFSFileShareDefaults&& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = std::move(value); }

    /**
     * <p>File share default values. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithNFSFileShareDefaults(const NFSFileShareDefaults& value) { SetNFSFileShareDefaults(value); return *this;}

    /**
     * <p>File share default values. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithNFSFileShareDefaults(NFSFileShareDefaults&& value) { SetNFSFileShareDefaults(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

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
    inline CreateNFSFileShareRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline CreateNFSFileShareRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file gateway on which you want to
     * create a file share.</p>
     */
    inline CreateNFSFileShareRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own AWS KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetKMSEncrypted() const{ return m_kMSEncrypted; }

    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own AWS KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool KMSEncryptedHasBeenSet() const { return m_kMSEncryptedHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own AWS KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline void SetKMSEncrypted(bool value) { m_kMSEncryptedHasBeenSet = true; m_kMSEncrypted = value; }

    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own AWS KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline CreateNFSFileShareRequest& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline CreateNFSFileShareRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage.</p>
     */
    inline CreateNFSFileShareRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage.</p>
     */
    inline CreateNFSFileShareRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that a file
     * gateway assumes when it accesses the underlying storage.</p>
     */
    inline CreateNFSFileShareRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The ARN of the backend storage used for storing file data. A prefix name can
     * be added to the S3 bucket name. It must end with a "/".</p>
     */
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }

    /**
     * <p>The ARN of the backend storage used for storing file data. A prefix name can
     * be added to the S3 bucket name. It must end with a "/".</p>
     */
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }

    /**
     * <p>The ARN of the backend storage used for storing file data. A prefix name can
     * be added to the S3 bucket name. It must end with a "/".</p>
     */
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    /**
     * <p>The ARN of the backend storage used for storing file data. A prefix name can
     * be added to the S3 bucket name. It must end with a "/".</p>
     */
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }

    /**
     * <p>The ARN of the backend storage used for storing file data. A prefix name can
     * be added to the S3 bucket name. It must end with a "/".</p>
     */
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }

    /**
     * <p>The ARN of the backend storage used for storing file data. A prefix name can
     * be added to the S3 bucket name. It must end with a "/".</p>
     */
    inline CreateNFSFileShareRequest& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}

    /**
     * <p>The ARN of the backend storage used for storing file data. A prefix name can
     * be added to the S3 bucket name. It must end with a "/".</p>
     */
    inline CreateNFSFileShareRequest& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the backend storage used for storing file data. A prefix name can
     * be added to the S3 bucket name. It must end with a "/".</p>
     */
    inline CreateNFSFileShareRequest& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}


    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. The default value is <code>S3_INTELLIGENT_TIERING</code>.
     * Optional.</p> <p>Valid Values: <code>S3_STANDARD</code> |
     * <code>S3_INTELLIGENT_TIERING</code> | <code>S3_STANDARD_IA</code> |
     * <code>S3_ONEZONE_IA</code> </p>
     */
    inline const Aws::String& GetDefaultStorageClass() const{ return m_defaultStorageClass; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. The default value is <code>S3_INTELLIGENT_TIERING</code>.
     * Optional.</p> <p>Valid Values: <code>S3_STANDARD</code> |
     * <code>S3_INTELLIGENT_TIERING</code> | <code>S3_STANDARD_IA</code> |
     * <code>S3_ONEZONE_IA</code> </p>
     */
    inline bool DefaultStorageClassHasBeenSet() const { return m_defaultStorageClassHasBeenSet; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. The default value is <code>S3_INTELLIGENT_TIERING</code>.
     * Optional.</p> <p>Valid Values: <code>S3_STANDARD</code> |
     * <code>S3_INTELLIGENT_TIERING</code> | <code>S3_STANDARD_IA</code> |
     * <code>S3_ONEZONE_IA</code> </p>
     */
    inline void SetDefaultStorageClass(const Aws::String& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = value; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. The default value is <code>S3_INTELLIGENT_TIERING</code>.
     * Optional.</p> <p>Valid Values: <code>S3_STANDARD</code> |
     * <code>S3_INTELLIGENT_TIERING</code> | <code>S3_STANDARD_IA</code> |
     * <code>S3_ONEZONE_IA</code> </p>
     */
    inline void SetDefaultStorageClass(Aws::String&& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = std::move(value); }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. The default value is <code>S3_INTELLIGENT_TIERING</code>.
     * Optional.</p> <p>Valid Values: <code>S3_STANDARD</code> |
     * <code>S3_INTELLIGENT_TIERING</code> | <code>S3_STANDARD_IA</code> |
     * <code>S3_ONEZONE_IA</code> </p>
     */
    inline void SetDefaultStorageClass(const char* value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass.assign(value); }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. The default value is <code>S3_INTELLIGENT_TIERING</code>.
     * Optional.</p> <p>Valid Values: <code>S3_STANDARD</code> |
     * <code>S3_INTELLIGENT_TIERING</code> | <code>S3_STANDARD_IA</code> |
     * <code>S3_ONEZONE_IA</code> </p>
     */
    inline CreateNFSFileShareRequest& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. The default value is <code>S3_INTELLIGENT_TIERING</code>.
     * Optional.</p> <p>Valid Values: <code>S3_STANDARD</code> |
     * <code>S3_INTELLIGENT_TIERING</code> | <code>S3_STANDARD_IA</code> |
     * <code>S3_ONEZONE_IA</code> </p>
     */
    inline CreateNFSFileShareRequest& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(std::move(value)); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the
     * file gateway. The default value is <code>S3_INTELLIGENT_TIERING</code>.
     * Optional.</p> <p>Valid Values: <code>S3_STANDARD</code> |
     * <code>S3_INTELLIGENT_TIERING</code> | <code>S3_STANDARD_IA</code> |
     * <code>S3_ONEZONE_IA</code> </p>
     */
    inline CreateNFSFileShareRequest& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}


    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a file gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline const ObjectACL& GetObjectACL() const{ return m_objectACL; }

    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a file gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline bool ObjectACLHasBeenSet() const { return m_objectACLHasBeenSet; }

    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a file gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline void SetObjectACL(const ObjectACL& value) { m_objectACLHasBeenSet = true; m_objectACL = value; }

    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a file gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline void SetObjectACL(ObjectACL&& value) { m_objectACLHasBeenSet = true; m_objectACL = std::move(value); }

    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a file gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline CreateNFSFileShareRequest& WithObjectACL(const ObjectACL& value) { SetObjectACL(value); return *this;}

    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a file gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline CreateNFSFileShareRequest& WithObjectACL(ObjectACL&& value) { SetObjectACL(std::move(value)); return *this;}


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
    inline CreateNFSFileShareRequest& WithClientList(const Aws::Vector<Aws::String>& value) { SetClientList(value); return *this;}

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline CreateNFSFileShareRequest& WithClientList(Aws::Vector<Aws::String>&& value) { SetClientList(std::move(value)); return *this;}

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline CreateNFSFileShareRequest& AddClientList(const Aws::String& value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline CreateNFSFileShareRequest& AddClientList(Aws::String&& value) { m_clientListHasBeenSet = true; m_clientList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of clients that are allowed to access the file gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline CreateNFSFileShareRequest& AddClientList(const char* value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }


    /**
     * <p>A value that maps a user to anonymous user.</p> <p>Valid values are the
     * following:</p> <ul> <li> <p> <code>RootSquash</code>: Only root is mapped to
     * anonymous user.</p> </li> <li> <p> <code>NoSquash</code>: No one is mapped to
     * anonymous user.</p> </li> <li> <p> <code>AllSquash</code>: Everyone is mapped to
     * anonymous user.</p> </li> </ul>
     */
    inline const Aws::String& GetSquash() const{ return m_squash; }

    /**
     * <p>A value that maps a user to anonymous user.</p> <p>Valid values are the
     * following:</p> <ul> <li> <p> <code>RootSquash</code>: Only root is mapped to
     * anonymous user.</p> </li> <li> <p> <code>NoSquash</code>: No one is mapped to
     * anonymous user.</p> </li> <li> <p> <code>AllSquash</code>: Everyone is mapped to
     * anonymous user.</p> </li> </ul>
     */
    inline bool SquashHasBeenSet() const { return m_squashHasBeenSet; }

    /**
     * <p>A value that maps a user to anonymous user.</p> <p>Valid values are the
     * following:</p> <ul> <li> <p> <code>RootSquash</code>: Only root is mapped to
     * anonymous user.</p> </li> <li> <p> <code>NoSquash</code>: No one is mapped to
     * anonymous user.</p> </li> <li> <p> <code>AllSquash</code>: Everyone is mapped to
     * anonymous user.</p> </li> </ul>
     */
    inline void SetSquash(const Aws::String& value) { m_squashHasBeenSet = true; m_squash = value; }

    /**
     * <p>A value that maps a user to anonymous user.</p> <p>Valid values are the
     * following:</p> <ul> <li> <p> <code>RootSquash</code>: Only root is mapped to
     * anonymous user.</p> </li> <li> <p> <code>NoSquash</code>: No one is mapped to
     * anonymous user.</p> </li> <li> <p> <code>AllSquash</code>: Everyone is mapped to
     * anonymous user.</p> </li> </ul>
     */
    inline void SetSquash(Aws::String&& value) { m_squashHasBeenSet = true; m_squash = std::move(value); }

    /**
     * <p>A value that maps a user to anonymous user.</p> <p>Valid values are the
     * following:</p> <ul> <li> <p> <code>RootSquash</code>: Only root is mapped to
     * anonymous user.</p> </li> <li> <p> <code>NoSquash</code>: No one is mapped to
     * anonymous user.</p> </li> <li> <p> <code>AllSquash</code>: Everyone is mapped to
     * anonymous user.</p> </li> </ul>
     */
    inline void SetSquash(const char* value) { m_squashHasBeenSet = true; m_squash.assign(value); }

    /**
     * <p>A value that maps a user to anonymous user.</p> <p>Valid values are the
     * following:</p> <ul> <li> <p> <code>RootSquash</code>: Only root is mapped to
     * anonymous user.</p> </li> <li> <p> <code>NoSquash</code>: No one is mapped to
     * anonymous user.</p> </li> <li> <p> <code>AllSquash</code>: Everyone is mapped to
     * anonymous user.</p> </li> </ul>
     */
    inline CreateNFSFileShareRequest& WithSquash(const Aws::String& value) { SetSquash(value); return *this;}

    /**
     * <p>A value that maps a user to anonymous user.</p> <p>Valid values are the
     * following:</p> <ul> <li> <p> <code>RootSquash</code>: Only root is mapped to
     * anonymous user.</p> </li> <li> <p> <code>NoSquash</code>: No one is mapped to
     * anonymous user.</p> </li> <li> <p> <code>AllSquash</code>: Everyone is mapped to
     * anonymous user.</p> </li> </ul>
     */
    inline CreateNFSFileShareRequest& WithSquash(Aws::String&& value) { SetSquash(std::move(value)); return *this;}

    /**
     * <p>A value that maps a user to anonymous user.</p> <p>Valid values are the
     * following:</p> <ul> <li> <p> <code>RootSquash</code>: Only root is mapped to
     * anonymous user.</p> </li> <li> <p> <code>NoSquash</code>: No one is mapped to
     * anonymous user.</p> </li> <li> <p> <code>AllSquash</code>: Everyone is mapped to
     * anonymous user.</p> </li> </ul>
     */
    inline CreateNFSFileShareRequest& WithSquash(const char* value) { SetSquash(value); return *this;}


    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }

    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline CreateNFSFileShareRequest& WithReadOnly(bool value) { SetReadOnly(value); return *this;}


    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetGuessMIMETypeEnabled() const{ return m_guessMIMETypeEnabled; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GuessMIMETypeEnabledHasBeenSet() const { return m_guessMIMETypeEnabledHasBeenSet; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline void SetGuessMIMETypeEnabled(bool value) { m_guessMIMETypeEnabledHasBeenSet = true; m_guessMIMETypeEnabled = value; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline CreateNFSFileShareRequest& WithGuessMIMETypeEnabled(bool value) { SetGuessMIMETypeEnabled(value); return *this;}


    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to
     * <code>true</code>, the requester pays the costs; otherwise, the S3 bucket owner
     * pays. However, the S3 bucket owner always pays the cost of storing data.</p>
     *  <p> <code>RequesterPays</code> is a configuration for the S3 bucket that
     * backs the file share, so make sure that the configuration on the file share is
     * the same as the S3 bucket configuration.</p>  <p>Valid Values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline bool GetRequesterPays() const{ return m_requesterPays; }

    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to
     * <code>true</code>, the requester pays the costs; otherwise, the S3 bucket owner
     * pays. However, the S3 bucket owner always pays the cost of storing data.</p>
     *  <p> <code>RequesterPays</code> is a configuration for the S3 bucket that
     * backs the file share, so make sure that the configuration on the file share is
     * the same as the S3 bucket configuration.</p>  <p>Valid Values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline bool RequesterPaysHasBeenSet() const { return m_requesterPaysHasBeenSet; }

    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to
     * <code>true</code>, the requester pays the costs; otherwise, the S3 bucket owner
     * pays. However, the S3 bucket owner always pays the cost of storing data.</p>
     *  <p> <code>RequesterPays</code> is a configuration for the S3 bucket that
     * backs the file share, so make sure that the configuration on the file share is
     * the same as the S3 bucket configuration.</p>  <p>Valid Values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline void SetRequesterPays(bool value) { m_requesterPaysHasBeenSet = true; m_requesterPays = value; }

    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to
     * <code>true</code>, the requester pays the costs; otherwise, the S3 bucket owner
     * pays. However, the S3 bucket owner always pays the cost of storing data.</p>
     *  <p> <code>RequesterPays</code> is a configuration for the S3 bucket that
     * backs the file share, so make sure that the configuration on the file share is
     * the same as the S3 bucket configuration.</p>  <p>Valid Values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline CreateNFSFileShareRequest& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}


    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline CreateNFSFileShareRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline CreateNFSFileShareRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline CreateNFSFileShareRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline CreateNFSFileShareRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>.</p> 
     */
    inline const Aws::String& GetFileShareName() const{ return m_fileShareName; }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>.</p> 
     */
    inline bool FileShareNameHasBeenSet() const { return m_fileShareNameHasBeenSet; }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>.</p> 
     */
    inline void SetFileShareName(const Aws::String& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = value; }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>.</p> 
     */
    inline void SetFileShareName(Aws::String&& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = std::move(value); }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>.</p> 
     */
    inline void SetFileShareName(const char* value) { m_fileShareNameHasBeenSet = true; m_fileShareName.assign(value); }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>.</p> 
     */
    inline CreateNFSFileShareRequest& WithFileShareName(const Aws::String& value) { SetFileShareName(value); return *this;}

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>.</p> 
     */
    inline CreateNFSFileShareRequest& WithFileShareName(Aws::String&& value) { SetFileShareName(std::move(value)); return *this;}

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>.</p> 
     */
    inline CreateNFSFileShareRequest& WithFileShareName(const char* value) { SetFileShareName(value); return *this;}


    /**
     * <p>Refresh cache information.</p>
     */
    inline const CacheAttributes& GetCacheAttributes() const{ return m_cacheAttributes; }

    /**
     * <p>Refresh cache information.</p>
     */
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }

    /**
     * <p>Refresh cache information.</p>
     */
    inline void SetCacheAttributes(const CacheAttributes& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = value; }

    /**
     * <p>Refresh cache information.</p>
     */
    inline void SetCacheAttributes(CacheAttributes&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::move(value); }

    /**
     * <p>Refresh cache information.</p>
     */
    inline CreateNFSFileShareRequest& WithCacheAttributes(const CacheAttributes& value) { SetCacheAttributes(value); return *this;}

    /**
     * <p>Refresh cache information.</p>
     */
    inline CreateNFSFileShareRequest& WithCacheAttributes(CacheAttributes&& value) { SetCacheAttributes(std::move(value)); return *this;}


    /**
     * <p>The notification policy of the file share.</p>
     */
    inline const Aws::String& GetNotificationPolicy() const{ return m_notificationPolicy; }

    /**
     * <p>The notification policy of the file share.</p>
     */
    inline bool NotificationPolicyHasBeenSet() const { return m_notificationPolicyHasBeenSet; }

    /**
     * <p>The notification policy of the file share.</p>
     */
    inline void SetNotificationPolicy(const Aws::String& value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy = value; }

    /**
     * <p>The notification policy of the file share.</p>
     */
    inline void SetNotificationPolicy(Aws::String&& value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy = std::move(value); }

    /**
     * <p>The notification policy of the file share.</p>
     */
    inline void SetNotificationPolicy(const char* value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy.assign(value); }

    /**
     * <p>The notification policy of the file share.</p>
     */
    inline CreateNFSFileShareRequest& WithNotificationPolicy(const Aws::String& value) { SetNotificationPolicy(value); return *this;}

    /**
     * <p>The notification policy of the file share.</p>
     */
    inline CreateNFSFileShareRequest& WithNotificationPolicy(Aws::String&& value) { SetNotificationPolicy(std::move(value)); return *this;}

    /**
     * <p>The notification policy of the file share.</p>
     */
    inline CreateNFSFileShareRequest& WithNotificationPolicy(const char* value) { SetNotificationPolicy(value); return *this;}

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

    Aws::String m_fileShareName;
    bool m_fileShareNameHasBeenSet;

    CacheAttributes m_cacheAttributes;
    bool m_cacheAttributesHasBeenSet;

    Aws::String m_notificationPolicy;
    bool m_notificationPolicyHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
