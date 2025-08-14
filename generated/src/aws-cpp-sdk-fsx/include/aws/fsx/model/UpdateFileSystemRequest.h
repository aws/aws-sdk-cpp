/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/UpdateFileSystemWindowsConfiguration.h>
#include <aws/fsx/model/UpdateFileSystemLustreConfiguration.h>
#include <aws/fsx/model/UpdateFileSystemOntapConfiguration.h>
#include <aws/fsx/model/UpdateFileSystemOpenZFSConfiguration.h>
#include <aws/fsx/model/StorageType.h>
#include <aws/fsx/model/NetworkType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object for the <code>UpdateFileSystem</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystemRequest">AWS
   * API Reference</a></p>
   */
  class UpdateFileSystemRequest : public FSxRequest
  {
  public:
    AWS_FSX_API UpdateFileSystemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFileSystem"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the file system that you are updating.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    UpdateFileSystemRequest& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of up to 63 ASCII characters that Amazon FSx uses to ensure
     * idempotent updates. This string is automatically filled on your behalf when you
     * use the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    UpdateFileSystemRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to increase the storage capacity of an FSx for Windows
     * File Server, FSx for Lustre, FSx for OpenZFS, or FSx for ONTAP file system. For
     * second-generation FSx for ONTAP file systems, you can also decrease the storage
     * capacity. Specifies the storage capacity target value, in GiB, for the file
     * system that you're updating. </p>  <p>You can't make a storage capacity
     * increase request if there is an existing storage capacity increase request in
     * progress.</p>  <p>For Lustre file systems, the storage capacity target
     * value can be the following:</p> <ul> <li> <p>For <code>SCRATCH_2</code>,
     * <code>PERSISTENT_1</code>, and <code>PERSISTENT_2 SSD</code> deployment types,
     * valid values are in multiples of 2400 GiB. The value must be greater than the
     * current storage capacity.</p> </li> <li> <p>For <code>PERSISTENT HDD</code> file
     * systems, valid values are multiples of 6000 GiB for 12-MBps throughput per TiB
     * file systems and multiples of 1800 GiB for 40-MBps throughput per TiB file
     * systems. The values must be greater than the current storage capacity.</p> </li>
     * <li> <p>For <code>SCRATCH_1</code> file systems, you can't increase the storage
     * capacity.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/managing-storage-capacity.html">Managing
     * storage and throughput capacity</a> in the <i>FSx for Lustre User Guide</i>.</p>
     * <p>For FSx for OpenZFS file systems, the storage capacity target value must be
     * at least 10 percent greater than the current storage capacity value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/managing-storage-capacity.html">Managing
     * storage capacity</a> in the <i>FSx for OpenZFS User Guide</i>.</p> <p>For
     * Windows file systems, the storage capacity target value must be at least 10
     * percent greater than the current storage capacity value. To increase storage
     * capacity, the file system must have at least 16 MBps of throughput capacity. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-storage-capacity.html">Managing
     * storage capacity</a> in the <i>Amazon FSxfor Windows File Server User
     * Guide</i>.</p> <p>For ONTAP file systems, when increasing storage capacity, the
     * storage capacity target value must be at least 10 percent greater than the
     * current storage capacity value. When decreasing storage capacity on
     * second-generation file systems, the target value must be at least 9 percent
     * smaller than the current SSD storage capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/storage-capacity-and-IOPS.html">File
     * system storage capacity and IOPS</a> in the Amazon FSx for NetApp ONTAP User
     * Guide.</p>
     */
    inline int GetStorageCapacity() const { return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline UpdateFileSystemRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration updates for an Amazon FSx for Windows File Server file
     * system.</p>
     */
    inline const UpdateFileSystemWindowsConfiguration& GetWindowsConfiguration() const { return m_windowsConfiguration; }
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }
    template<typename WindowsConfigurationT = UpdateFileSystemWindowsConfiguration>
    void SetWindowsConfiguration(WindowsConfigurationT&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::forward<WindowsConfigurationT>(value); }
    template<typename WindowsConfigurationT = UpdateFileSystemWindowsConfiguration>
    UpdateFileSystemRequest& WithWindowsConfiguration(WindowsConfigurationT&& value) { SetWindowsConfiguration(std::forward<WindowsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UpdateFileSystemLustreConfiguration& GetLustreConfiguration() const { return m_lustreConfiguration; }
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }
    template<typename LustreConfigurationT = UpdateFileSystemLustreConfiguration>
    void SetLustreConfiguration(LustreConfigurationT&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::forward<LustreConfigurationT>(value); }
    template<typename LustreConfigurationT = UpdateFileSystemLustreConfiguration>
    UpdateFileSystemRequest& WithLustreConfiguration(LustreConfigurationT&& value) { SetLustreConfiguration(std::forward<LustreConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UpdateFileSystemOntapConfiguration& GetOntapConfiguration() const { return m_ontapConfiguration; }
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }
    template<typename OntapConfigurationT = UpdateFileSystemOntapConfiguration>
    void SetOntapConfiguration(OntapConfigurationT&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::forward<OntapConfigurationT>(value); }
    template<typename OntapConfigurationT = UpdateFileSystemOntapConfiguration>
    UpdateFileSystemRequest& WithOntapConfiguration(OntapConfigurationT&& value) { SetOntapConfiguration(std::forward<OntapConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration updates for an FSx for OpenZFS file system.</p>
     */
    inline const UpdateFileSystemOpenZFSConfiguration& GetOpenZFSConfiguration() const { return m_openZFSConfiguration; }
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }
    template<typename OpenZFSConfigurationT = UpdateFileSystemOpenZFSConfiguration>
    void SetOpenZFSConfiguration(OpenZFSConfigurationT&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::forward<OpenZFSConfigurationT>(value); }
    template<typename OpenZFSConfigurationT = UpdateFileSystemOpenZFSConfiguration>
    UpdateFileSystemRequest& WithOpenZFSConfiguration(OpenZFSConfigurationT&& value) { SetOpenZFSConfiguration(std::forward<OpenZFSConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline UpdateFileSystemRequest& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lustre version you are updating an FSx for Lustre file system to. Valid
     * values are <code>2.12</code> and <code>2.15</code>. The value you choose must be
     * newer than the file system's current Lustre version.</p>
     */
    inline const Aws::String& GetFileSystemTypeVersion() const { return m_fileSystemTypeVersion; }
    inline bool FileSystemTypeVersionHasBeenSet() const { return m_fileSystemTypeVersionHasBeenSet; }
    template<typename FileSystemTypeVersionT = Aws::String>
    void SetFileSystemTypeVersion(FileSystemTypeVersionT&& value) { m_fileSystemTypeVersionHasBeenSet = true; m_fileSystemTypeVersion = std::forward<FileSystemTypeVersionT>(value); }
    template<typename FileSystemTypeVersionT = Aws::String>
    UpdateFileSystemRequest& WithFileSystemTypeVersion(FileSystemTypeVersionT&& value) { SetFileSystemTypeVersion(std::forward<FileSystemTypeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the network type of an FSx for OpenZFS file system.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline UpdateFileSystemRequest& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    int m_storageCapacity{0};
    bool m_storageCapacityHasBeenSet = false;

    UpdateFileSystemWindowsConfiguration m_windowsConfiguration;
    bool m_windowsConfigurationHasBeenSet = false;

    UpdateFileSystemLustreConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet = false;

    UpdateFileSystemOntapConfiguration m_ontapConfiguration;
    bool m_ontapConfigurationHasBeenSet = false;

    UpdateFileSystemOpenZFSConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_fileSystemTypeVersion;
    bool m_fileSystemTypeVersionHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
