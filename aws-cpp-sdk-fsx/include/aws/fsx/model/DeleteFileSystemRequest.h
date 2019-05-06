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
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DeleteFileSystemWindowsConfiguration.h>
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
  class AWS_FSX_API DeleteFileSystemRequest : public FSxRequest
  {
  public:
    DeleteFileSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFileSystem"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the file system you want to delete.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system you want to delete.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the file system you want to delete.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the file system you want to delete.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system you want to delete.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system you want to delete.</p>
     */
    inline DeleteFileSystemRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system you want to delete.</p>
     */
    inline DeleteFileSystemRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system you want to delete.</p>
     */
    inline DeleteFileSystemRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline DeleteFileSystemRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline DeleteFileSystemRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline DeleteFileSystemRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    
    inline const DeleteFileSystemWindowsConfiguration& GetWindowsConfiguration() const{ return m_windowsConfiguration; }

    
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }

    
    inline void SetWindowsConfiguration(const DeleteFileSystemWindowsConfiguration& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = value; }

    
    inline void SetWindowsConfiguration(DeleteFileSystemWindowsConfiguration&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::move(value); }

    
    inline DeleteFileSystemRequest& WithWindowsConfiguration(const DeleteFileSystemWindowsConfiguration& value) { SetWindowsConfiguration(value); return *this;}

    
    inline DeleteFileSystemRequest& WithWindowsConfiguration(DeleteFileSystemWindowsConfiguration&& value) { SetWindowsConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    DeleteFileSystemWindowsConfiguration m_windowsConfiguration;
    bool m_windowsConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
