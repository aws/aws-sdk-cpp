/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DeleteFileSystemWindowsConfiguration.h>
#include <aws/fsx/model/DeleteFileSystemLustreConfiguration.h>
#include <aws/fsx/model/DeleteFileSystemOpenZFSConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object for <code>DeleteFileSystem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystemRequest">AWS
   * API Reference</a></p>
   */
  class DeleteFileSystemRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DeleteFileSystemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFileSystem"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the file system that you want to delete.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    DeleteFileSystemRequest& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of up to 63 ASCII characters that Amazon FSx uses to ensure
     * idempotent deletion. This token is automatically filled on your behalf when
     * using the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    DeleteFileSystemRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DeleteFileSystemWindowsConfiguration& GetWindowsConfiguration() const { return m_windowsConfiguration; }
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }
    template<typename WindowsConfigurationT = DeleteFileSystemWindowsConfiguration>
    void SetWindowsConfiguration(WindowsConfigurationT&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::forward<WindowsConfigurationT>(value); }
    template<typename WindowsConfigurationT = DeleteFileSystemWindowsConfiguration>
    DeleteFileSystemRequest& WithWindowsConfiguration(WindowsConfigurationT&& value) { SetWindowsConfiguration(std::forward<WindowsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DeleteFileSystemLustreConfiguration& GetLustreConfiguration() const { return m_lustreConfiguration; }
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }
    template<typename LustreConfigurationT = DeleteFileSystemLustreConfiguration>
    void SetLustreConfiguration(LustreConfigurationT&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::forward<LustreConfigurationT>(value); }
    template<typename LustreConfigurationT = DeleteFileSystemLustreConfiguration>
    DeleteFileSystemRequest& WithLustreConfiguration(LustreConfigurationT&& value) { SetLustreConfiguration(std::forward<LustreConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object for the OpenZFS file system used in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline const DeleteFileSystemOpenZFSConfiguration& GetOpenZFSConfiguration() const { return m_openZFSConfiguration; }
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }
    template<typename OpenZFSConfigurationT = DeleteFileSystemOpenZFSConfiguration>
    void SetOpenZFSConfiguration(OpenZFSConfigurationT&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::forward<OpenZFSConfigurationT>(value); }
    template<typename OpenZFSConfigurationT = DeleteFileSystemOpenZFSConfiguration>
    DeleteFileSystemRequest& WithOpenZFSConfiguration(OpenZFSConfigurationT&& value) { SetOpenZFSConfiguration(std::forward<OpenZFSConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    DeleteFileSystemWindowsConfiguration m_windowsConfiguration;
    bool m_windowsConfigurationHasBeenSet = false;

    DeleteFileSystemLustreConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet = false;

    DeleteFileSystemOpenZFSConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
