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
    AWS_FSX_API DeleteFileSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFileSystem"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the file system that you want to delete.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system that you want to delete.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the file system that you want to delete.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the file system that you want to delete.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system that you want to delete.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system that you want to delete.</p>
     */
    inline DeleteFileSystemRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system that you want to delete.</p>
     */
    inline DeleteFileSystemRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system that you want to delete.</p>
     */
    inline DeleteFileSystemRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent deletion. This token is automatically filled on your behalf when
     * using the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent deletion. This token is automatically filled on your behalf when
     * using the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent deletion. This token is automatically filled on your behalf when
     * using the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent deletion. This token is automatically filled on your behalf when
     * using the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent deletion. This token is automatically filled on your behalf when
     * using the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent deletion. This token is automatically filled on your behalf when
     * using the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline DeleteFileSystemRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent deletion. This token is automatically filled on your behalf when
     * using the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline DeleteFileSystemRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A string of up to 64 ASCII characters that Amazon FSx uses to ensure
     * idempotent deletion. This token is automatically filled on your behalf when
     * using the Command Line Interface (CLI) or an Amazon Web Services SDK.</p>
     */
    inline DeleteFileSystemRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    
    inline const DeleteFileSystemWindowsConfiguration& GetWindowsConfiguration() const{ return m_windowsConfiguration; }

    
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }

    
    inline void SetWindowsConfiguration(const DeleteFileSystemWindowsConfiguration& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = value; }

    
    inline void SetWindowsConfiguration(DeleteFileSystemWindowsConfiguration&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::move(value); }

    
    inline DeleteFileSystemRequest& WithWindowsConfiguration(const DeleteFileSystemWindowsConfiguration& value) { SetWindowsConfiguration(value); return *this;}

    
    inline DeleteFileSystemRequest& WithWindowsConfiguration(DeleteFileSystemWindowsConfiguration&& value) { SetWindowsConfiguration(std::move(value)); return *this;}


    
    inline const DeleteFileSystemLustreConfiguration& GetLustreConfiguration() const{ return m_lustreConfiguration; }

    
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }

    
    inline void SetLustreConfiguration(const DeleteFileSystemLustreConfiguration& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = value; }

    
    inline void SetLustreConfiguration(DeleteFileSystemLustreConfiguration&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::move(value); }

    
    inline DeleteFileSystemRequest& WithLustreConfiguration(const DeleteFileSystemLustreConfiguration& value) { SetLustreConfiguration(value); return *this;}

    
    inline DeleteFileSystemRequest& WithLustreConfiguration(DeleteFileSystemLustreConfiguration&& value) { SetLustreConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration object for the OpenZFS file system used in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline const DeleteFileSystemOpenZFSConfiguration& GetOpenZFSConfiguration() const{ return m_openZFSConfiguration; }

    /**
     * <p>The configuration object for the OpenZFS file system used in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }

    /**
     * <p>The configuration object for the OpenZFS file system used in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline void SetOpenZFSConfiguration(const DeleteFileSystemOpenZFSConfiguration& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = value; }

    /**
     * <p>The configuration object for the OpenZFS file system used in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline void SetOpenZFSConfiguration(DeleteFileSystemOpenZFSConfiguration&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::move(value); }

    /**
     * <p>The configuration object for the OpenZFS file system used in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline DeleteFileSystemRequest& WithOpenZFSConfiguration(const DeleteFileSystemOpenZFSConfiguration& value) { SetOpenZFSConfiguration(value); return *this;}

    /**
     * <p>The configuration object for the OpenZFS file system used in the
     * <code>DeleteFileSystem</code> operation.</p>
     */
    inline DeleteFileSystemRequest& WithOpenZFSConfiguration(DeleteFileSystemOpenZFSConfiguration&& value) { SetOpenZFSConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

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
