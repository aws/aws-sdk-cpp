/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/FsxProtocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{
  class DescribeLocationFsxOntapResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationFsxOntapResult();
    AWS_DATASYNC_API DescribeLocationFsxOntapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationFsxOntapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time that the location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the location was created.</p>
     */
    inline DescribeLocationFsxOntapResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the location was created.</p>
     */
    inline DescribeLocationFsxOntapResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The ARN of the FSx for ONTAP file system location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The ARN of the FSx for ONTAP file system location.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The ARN of the FSx for ONTAP file system location.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The ARN of the FSx for ONTAP file system location.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The ARN of the FSx for ONTAP file system location.</p>
     */
    inline DescribeLocationFsxOntapResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The ARN of the FSx for ONTAP file system location.</p>
     */
    inline DescribeLocationFsxOntapResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the FSx for ONTAP file system location.</p>
     */
    inline DescribeLocationFsxOntapResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The uniform resource identifier (URI) of the FSx for ONTAP file system
     * location.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The uniform resource identifier (URI) of the FSx for ONTAP file system
     * location.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The uniform resource identifier (URI) of the FSx for ONTAP file system
     * location.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The uniform resource identifier (URI) of the FSx for ONTAP file system
     * location.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The uniform resource identifier (URI) of the FSx for ONTAP file system
     * location.</p>
     */
    inline DescribeLocationFsxOntapResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The uniform resource identifier (URI) of the FSx for ONTAP file system
     * location.</p>
     */
    inline DescribeLocationFsxOntapResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The uniform resource identifier (URI) of the FSx for ONTAP file system
     * location.</p>
     */
    inline DescribeLocationFsxOntapResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    
    inline const FsxProtocol& GetProtocol() const{ return m_protocol; }

    
    inline void SetProtocol(const FsxProtocol& value) { m_protocol = value; }

    
    inline void SetProtocol(FsxProtocol&& value) { m_protocol = std::move(value); }

    
    inline DescribeLocationFsxOntapResult& WithProtocol(const FsxProtocol& value) { SetProtocol(value); return *this;}

    
    inline DescribeLocationFsxOntapResult& WithProtocol(FsxProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The security groups that DataSync uses to access your FSx for ONTAP file
     * system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>The security groups that DataSync uses to access your FSx for ONTAP file
     * system.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArns = value; }

    /**
     * <p>The security groups that DataSync uses to access your FSx for ONTAP file
     * system.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArns = std::move(value); }

    /**
     * <p>The security groups that DataSync uses to access your FSx for ONTAP file
     * system.</p>
     */
    inline DescribeLocationFsxOntapResult& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>The security groups that DataSync uses to access your FSx for ONTAP file
     * system.</p>
     */
    inline DescribeLocationFsxOntapResult& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>The security groups that DataSync uses to access your FSx for ONTAP file
     * system.</p>
     */
    inline DescribeLocationFsxOntapResult& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>The security groups that DataSync uses to access your FSx for ONTAP file
     * system.</p>
     */
    inline DescribeLocationFsxOntapResult& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups that DataSync uses to access your FSx for ONTAP file
     * system.</p>
     */
    inline DescribeLocationFsxOntapResult& AddSecurityGroupArns(const char* value) { m_securityGroupArns.push_back(value); return *this; }


    /**
     * <p>The ARN of the storage virtual machine (SVM) on your FSx for ONTAP file
     * system where you're copying data to or from.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineArn() const{ return m_storageVirtualMachineArn; }

    /**
     * <p>The ARN of the storage virtual machine (SVM) on your FSx for ONTAP file
     * system where you're copying data to or from.</p>
     */
    inline void SetStorageVirtualMachineArn(const Aws::String& value) { m_storageVirtualMachineArn = value; }

    /**
     * <p>The ARN of the storage virtual machine (SVM) on your FSx for ONTAP file
     * system where you're copying data to or from.</p>
     */
    inline void SetStorageVirtualMachineArn(Aws::String&& value) { m_storageVirtualMachineArn = std::move(value); }

    /**
     * <p>The ARN of the storage virtual machine (SVM) on your FSx for ONTAP file
     * system where you're copying data to or from.</p>
     */
    inline void SetStorageVirtualMachineArn(const char* value) { m_storageVirtualMachineArn.assign(value); }

    /**
     * <p>The ARN of the storage virtual machine (SVM) on your FSx for ONTAP file
     * system where you're copying data to or from.</p>
     */
    inline DescribeLocationFsxOntapResult& WithStorageVirtualMachineArn(const Aws::String& value) { SetStorageVirtualMachineArn(value); return *this;}

    /**
     * <p>The ARN of the storage virtual machine (SVM) on your FSx for ONTAP file
     * system where you're copying data to or from.</p>
     */
    inline DescribeLocationFsxOntapResult& WithStorageVirtualMachineArn(Aws::String&& value) { SetStorageVirtualMachineArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the storage virtual machine (SVM) on your FSx for ONTAP file
     * system where you're copying data to or from.</p>
     */
    inline DescribeLocationFsxOntapResult& WithStorageVirtualMachineArn(const char* value) { SetStorageVirtualMachineArn(value); return *this;}


    /**
     * <p>The ARN of the FSx for ONTAP file system.</p>
     */
    inline const Aws::String& GetFsxFilesystemArn() const{ return m_fsxFilesystemArn; }

    /**
     * <p>The ARN of the FSx for ONTAP file system.</p>
     */
    inline void SetFsxFilesystemArn(const Aws::String& value) { m_fsxFilesystemArn = value; }

    /**
     * <p>The ARN of the FSx for ONTAP file system.</p>
     */
    inline void SetFsxFilesystemArn(Aws::String&& value) { m_fsxFilesystemArn = std::move(value); }

    /**
     * <p>The ARN of the FSx for ONTAP file system.</p>
     */
    inline void SetFsxFilesystemArn(const char* value) { m_fsxFilesystemArn.assign(value); }

    /**
     * <p>The ARN of the FSx for ONTAP file system.</p>
     */
    inline DescribeLocationFsxOntapResult& WithFsxFilesystemArn(const Aws::String& value) { SetFsxFilesystemArn(value); return *this;}

    /**
     * <p>The ARN of the FSx for ONTAP file system.</p>
     */
    inline DescribeLocationFsxOntapResult& WithFsxFilesystemArn(Aws::String&& value) { SetFsxFilesystemArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the FSx for ONTAP file system.</p>
     */
    inline DescribeLocationFsxOntapResult& WithFsxFilesystemArn(const char* value) { SetFsxFilesystemArn(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    FsxProtocol m_protocol;

    Aws::Vector<Aws::String> m_securityGroupArns;

    Aws::String m_storageVirtualMachineArn;

    Aws::String m_fsxFilesystemArn;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
