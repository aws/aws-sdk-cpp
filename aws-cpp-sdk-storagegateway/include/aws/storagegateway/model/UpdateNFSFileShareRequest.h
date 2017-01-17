﻿/*
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
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be updated. </p>
     */
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be updated. </p>
     */
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be updated. </p>
     */
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

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
    inline UpdateNFSFileShareRequest& WithFileShareARN(Aws::String&& value) { SetFileShareARN(value); return *this;}

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
    inline void SetKMSEncrypted(bool value) { m_kMSEncryptedHasBeenSet = true; m_kMSEncrypted = value; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional. </p>
     */
    inline UpdateNFSFileShareRequest& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional. </p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional. </p>
     */
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional. </p>
     */
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional. </p>
     */
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional. </p>
     */
    inline UpdateNFSFileShareRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional. </p>
     */
    inline UpdateNFSFileShareRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The KMS key used for Amazon S3 server side encryption. This value can only be
     * set when KmsEncrypted is true. Optional. </p>
     */
    inline UpdateNFSFileShareRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}

    /**
     * <p>The default values for the file share. Optional.</p>
     */
    inline const NFSFileShareDefaults& GetNFSFileShareDefaults() const{ return m_nFSFileShareDefaults; }

    /**
     * <p>The default values for the file share. Optional.</p>
     */
    inline void SetNFSFileShareDefaults(const NFSFileShareDefaults& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = value; }

    /**
     * <p>The default values for the file share. Optional.</p>
     */
    inline void SetNFSFileShareDefaults(NFSFileShareDefaults&& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = value; }

    /**
     * <p>The default values for the file share. Optional.</p>
     */
    inline UpdateNFSFileShareRequest& WithNFSFileShareDefaults(const NFSFileShareDefaults& value) { SetNFSFileShareDefaults(value); return *this;}

    /**
     * <p>The default values for the file share. Optional.</p>
     */
    inline UpdateNFSFileShareRequest& WithNFSFileShareDefaults(NFSFileShareDefaults&& value) { SetNFSFileShareDefaults(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by a file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline const Aws::String& GetDefaultStorageClass() const{ return m_defaultStorageClass; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by a file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline void SetDefaultStorageClass(const Aws::String& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = value; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by a file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline void SetDefaultStorageClass(Aws::String&& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = value; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by a file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline void SetDefaultStorageClass(const char* value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass.assign(value); }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by a file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline UpdateNFSFileShareRequest& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by a file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline UpdateNFSFileShareRequest& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by a file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline UpdateNFSFileShareRequest& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}

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
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
