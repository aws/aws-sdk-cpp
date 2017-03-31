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
#include <aws/storagegateway/model/NFSFileShareDefaults.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>The Unix file permissions and ownership information assigned, by default, to
   * native S3 objects when Storage Gateway discovers them in S3 buckets. This
   * operation is only supported in file gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/NFSFileShareInfo">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API NFSFileShareInfo
  {
  public:
    NFSFileShareInfo();
    NFSFileShareInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    NFSFileShareInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const NFSFileShareDefaults& GetNFSFileShareDefaults() const{ return m_nFSFileShareDefaults; }

    
    inline void SetNFSFileShareDefaults(const NFSFileShareDefaults& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = value; }

    
    inline void SetNFSFileShareDefaults(NFSFileShareDefaults&& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = value; }

    
    inline NFSFileShareInfo& WithNFSFileShareDefaults(const NFSFileShareDefaults& value) { SetNFSFileShareDefaults(value); return *this;}

    
    inline NFSFileShareInfo& WithNFSFileShareDefaults(NFSFileShareDefaults&& value) { SetNFSFileShareDefaults(value); return *this;}

    
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }

    
    inline NFSFileShareInfo& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    
    inline NFSFileShareInfo& WithFileShareARN(Aws::String&& value) { SetFileShareARN(value); return *this;}

    
    inline NFSFileShareInfo& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}

    
    inline const Aws::String& GetFileShareId() const{ return m_fileShareId; }

    
    inline void SetFileShareId(const Aws::String& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = value; }

    
    inline void SetFileShareId(Aws::String&& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = value; }

    
    inline void SetFileShareId(const char* value) { m_fileShareIdHasBeenSet = true; m_fileShareId.assign(value); }

    
    inline NFSFileShareInfo& WithFileShareId(const Aws::String& value) { SetFileShareId(value); return *this;}

    
    inline NFSFileShareInfo& WithFileShareId(Aws::String&& value) { SetFileShareId(value); return *this;}

    
    inline NFSFileShareInfo& WithFileShareId(const char* value) { SetFileShareId(value); return *this;}

    
    inline const Aws::String& GetFileShareStatus() const{ return m_fileShareStatus; }

    
    inline void SetFileShareStatus(const Aws::String& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = value; }

    
    inline void SetFileShareStatus(Aws::String&& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = value; }

    
    inline void SetFileShareStatus(const char* value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus.assign(value); }

    
    inline NFSFileShareInfo& WithFileShareStatus(const Aws::String& value) { SetFileShareStatus(value); return *this;}

    
    inline NFSFileShareInfo& WithFileShareStatus(Aws::String&& value) { SetFileShareStatus(value); return *this;}

    
    inline NFSFileShareInfo& WithFileShareStatus(const char* value) { SetFileShareStatus(value); return *this;}

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline NFSFileShareInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline NFSFileShareInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline NFSFileShareInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    /**
     * <p>True to use Amazon S3 server side encryption with your own KMS key, or false
     * to use a key managed by Amazon S3. Optional. </p>
     */
    inline bool GetKMSEncrypted() const{ return m_kMSEncrypted; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own KMS key, or false
     * to use a key managed by Amazon S3. Optional. </p>
     */
    inline void SetKMSEncrypted(bool value) { m_kMSEncryptedHasBeenSet = true; m_kMSEncrypted = value; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own KMS key, or false
     * to use a key managed by Amazon S3. Optional. </p>
     */
    inline NFSFileShareInfo& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}

    
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    
    inline NFSFileShareInfo& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    
    inline NFSFileShareInfo& WithKMSKey(Aws::String&& value) { SetKMSKey(value); return *this;}

    
    inline NFSFileShareInfo& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}

    
    inline const Aws::String& GetPath() const{ return m_path; }

    
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = value; }

    
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    
    inline NFSFileShareInfo& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    
    inline NFSFileShareInfo& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    
    inline NFSFileShareInfo& WithPath(const char* value) { SetPath(value); return *this;}

    
    inline const Aws::String& GetRole() const{ return m_role; }

    
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = value; }

    
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    
    inline NFSFileShareInfo& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    
    inline NFSFileShareInfo& WithRole(Aws::String&& value) { SetRole(value); return *this;}

    
    inline NFSFileShareInfo& WithRole(const char* value) { SetRole(value); return *this;}

    
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }

    
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }

    
    inline NFSFileShareInfo& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}

    
    inline NFSFileShareInfo& WithLocationARN(Aws::String&& value) { SetLocationARN(value); return *this;}

    
    inline NFSFileShareInfo& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}

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
    inline NFSFileShareInfo& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline NFSFileShareInfo& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by file
     * gateway. Possible values are S3_STANDARD or S3_STANDARD_IA. If this field is not
     * populated, the default value S3_STANDARD is used. Optional.</p>
     */
    inline NFSFileShareInfo& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetClientList() const{ return m_clientList; }

    
    inline void SetClientList(const Aws::Vector<Aws::String>& value) { m_clientListHasBeenSet = true; m_clientList = value; }

    
    inline void SetClientList(Aws::Vector<Aws::String>&& value) { m_clientListHasBeenSet = true; m_clientList = value; }

    
    inline NFSFileShareInfo& WithClientList(const Aws::Vector<Aws::String>& value) { SetClientList(value); return *this;}

    
    inline NFSFileShareInfo& WithClientList(Aws::Vector<Aws::String>&& value) { SetClientList(value); return *this;}

    
    inline NFSFileShareInfo& AddClientList(const Aws::String& value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }

    
    inline NFSFileShareInfo& AddClientList(Aws::String&& value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }

    
    inline NFSFileShareInfo& AddClientList(const char* value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }

    
    inline const Aws::String& GetSquash() const{ return m_squash; }

    
    inline void SetSquash(const Aws::String& value) { m_squashHasBeenSet = true; m_squash = value; }

    
    inline void SetSquash(Aws::String&& value) { m_squashHasBeenSet = true; m_squash = value; }

    
    inline void SetSquash(const char* value) { m_squashHasBeenSet = true; m_squash.assign(value); }

    
    inline NFSFileShareInfo& WithSquash(const Aws::String& value) { SetSquash(value); return *this;}

    
    inline NFSFileShareInfo& WithSquash(Aws::String&& value) { SetSquash(value); return *this;}

    
    inline NFSFileShareInfo& WithSquash(const char* value) { SetSquash(value); return *this;}

    
    inline bool GetReadOnly() const{ return m_readOnly; }

    
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    
    inline NFSFileShareInfo& WithReadOnly(bool value) { SetReadOnly(value); return *this;}

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
