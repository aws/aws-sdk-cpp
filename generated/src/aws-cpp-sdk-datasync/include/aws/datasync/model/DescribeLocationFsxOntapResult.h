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
    AWS_DATASYNC_API DescribeLocationFsxOntapResult() = default;
    AWS_DATASYNC_API DescribeLocationFsxOntapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationFsxOntapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time that the location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeLocationFsxOntapResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the FSx for ONTAP file system location.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    DescribeLocationFsxOntapResult& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uniform resource identifier (URI) of the FSx for ONTAP file system
     * location.</p>
     */
    inline const Aws::String& GetLocationUri() const { return m_locationUri; }
    template<typename LocationUriT = Aws::String>
    void SetLocationUri(LocationUriT&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::forward<LocationUriT>(value); }
    template<typename LocationUriT = Aws::String>
    DescribeLocationFsxOntapResult& WithLocationUri(LocationUriT&& value) { SetLocationUri(std::forward<LocationUriT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FsxProtocol& GetProtocol() const { return m_protocol; }
    template<typename ProtocolT = FsxProtocol>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = FsxProtocol>
    DescribeLocationFsxOntapResult& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups that DataSync uses to access your FSx for ONTAP file
     * system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const { return m_securityGroupArns; }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::forward<SecurityGroupArnsT>(value); }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    DescribeLocationFsxOntapResult& WithSecurityGroupArns(SecurityGroupArnsT&& value) { SetSecurityGroupArns(std::forward<SecurityGroupArnsT>(value)); return *this;}
    template<typename SecurityGroupArnsT = Aws::String>
    DescribeLocationFsxOntapResult& AddSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.emplace_back(std::forward<SecurityGroupArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the storage virtual machine (SVM) on your FSx for ONTAP file
     * system where you're copying data to or from.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineArn() const { return m_storageVirtualMachineArn; }
    template<typename StorageVirtualMachineArnT = Aws::String>
    void SetStorageVirtualMachineArn(StorageVirtualMachineArnT&& value) { m_storageVirtualMachineArnHasBeenSet = true; m_storageVirtualMachineArn = std::forward<StorageVirtualMachineArnT>(value); }
    template<typename StorageVirtualMachineArnT = Aws::String>
    DescribeLocationFsxOntapResult& WithStorageVirtualMachineArn(StorageVirtualMachineArnT&& value) { SetStorageVirtualMachineArn(std::forward<StorageVirtualMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the FSx for ONTAP file system.</p>
     */
    inline const Aws::String& GetFsxFilesystemArn() const { return m_fsxFilesystemArn; }
    template<typename FsxFilesystemArnT = Aws::String>
    void SetFsxFilesystemArn(FsxFilesystemArnT&& value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn = std::forward<FsxFilesystemArnT>(value); }
    template<typename FsxFilesystemArnT = Aws::String>
    DescribeLocationFsxOntapResult& WithFsxFilesystemArn(FsxFilesystemArnT&& value) { SetFsxFilesystemArn(std::forward<FsxFilesystemArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLocationFsxOntapResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    FsxProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupArns;
    bool m_securityGroupArnsHasBeenSet = false;

    Aws::String m_storageVirtualMachineArn;
    bool m_storageVirtualMachineArnHasBeenSet = false;

    Aws::String m_fsxFilesystemArn;
    bool m_fsxFilesystemArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
