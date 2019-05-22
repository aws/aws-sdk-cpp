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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/ThroughputMode.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class AWS_EFS_API UpdateFileSystemRequest : public EFSRequest
  {
  public:
    UpdateFileSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFileSystem"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the file system that you want to update.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system that you want to update.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the file system that you want to update.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the file system that you want to update.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system that you want to update.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system that you want to update.</p>
     */
    inline UpdateFileSystemRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system that you want to update.</p>
     */
    inline UpdateFileSystemRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system that you want to update.</p>
     */
    inline UpdateFileSystemRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>(Optional) The throughput mode that you want your file system to use. If
     * you're not updating your throughput mode, you don't need to provide this value
     * in your request. If you are changing the <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughputInMibps</code>.</p>
     */
    inline const ThroughputMode& GetThroughputMode() const{ return m_throughputMode; }

    /**
     * <p>(Optional) The throughput mode that you want your file system to use. If
     * you're not updating your throughput mode, you don't need to provide this value
     * in your request. If you are changing the <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughputInMibps</code>.</p>
     */
    inline bool ThroughputModeHasBeenSet() const { return m_throughputModeHasBeenSet; }

    /**
     * <p>(Optional) The throughput mode that you want your file system to use. If
     * you're not updating your throughput mode, you don't need to provide this value
     * in your request. If you are changing the <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughputInMibps</code>.</p>
     */
    inline void SetThroughputMode(const ThroughputMode& value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }

    /**
     * <p>(Optional) The throughput mode that you want your file system to use. If
     * you're not updating your throughput mode, you don't need to provide this value
     * in your request. If you are changing the <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughputInMibps</code>.</p>
     */
    inline void SetThroughputMode(ThroughputMode&& value) { m_throughputModeHasBeenSet = true; m_throughputMode = std::move(value); }

    /**
     * <p>(Optional) The throughput mode that you want your file system to use. If
     * you're not updating your throughput mode, you don't need to provide this value
     * in your request. If you are changing the <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughputInMibps</code>.</p>
     */
    inline UpdateFileSystemRequest& WithThroughputMode(const ThroughputMode& value) { SetThroughputMode(value); return *this;}

    /**
     * <p>(Optional) The throughput mode that you want your file system to use. If
     * you're not updating your throughput mode, you don't need to provide this value
     * in your request. If you are changing the <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughputInMibps</code>.</p>
     */
    inline UpdateFileSystemRequest& WithThroughputMode(ThroughputMode&& value) { SetThroughputMode(std::move(value)); return *this;}


    /**
     * <p>(Optional) The amount of throughput, in MiB/s, that you want to provision for
     * your file system. Valid values are 1-1024. Required if
     * <code>ThroughputMode</code> is changed to <code>provisioned</code> on update. If
     * you're not updating the amount of provisioned throughput for your file system,
     * you don't need to provide this value in your request. </p>
     */
    inline double GetProvisionedThroughputInMibps() const{ return m_provisionedThroughputInMibps; }

    /**
     * <p>(Optional) The amount of throughput, in MiB/s, that you want to provision for
     * your file system. Valid values are 1-1024. Required if
     * <code>ThroughputMode</code> is changed to <code>provisioned</code> on update. If
     * you're not updating the amount of provisioned throughput for your file system,
     * you don't need to provide this value in your request. </p>
     */
    inline bool ProvisionedThroughputInMibpsHasBeenSet() const { return m_provisionedThroughputInMibpsHasBeenSet; }

    /**
     * <p>(Optional) The amount of throughput, in MiB/s, that you want to provision for
     * your file system. Valid values are 1-1024. Required if
     * <code>ThroughputMode</code> is changed to <code>provisioned</code> on update. If
     * you're not updating the amount of provisioned throughput for your file system,
     * you don't need to provide this value in your request. </p>
     */
    inline void SetProvisionedThroughputInMibps(double value) { m_provisionedThroughputInMibpsHasBeenSet = true; m_provisionedThroughputInMibps = value; }

    /**
     * <p>(Optional) The amount of throughput, in MiB/s, that you want to provision for
     * your file system. Valid values are 1-1024. Required if
     * <code>ThroughputMode</code> is changed to <code>provisioned</code> on update. If
     * you're not updating the amount of provisioned throughput for your file system,
     * you don't need to provide this value in your request. </p>
     */
    inline UpdateFileSystemRequest& WithProvisionedThroughputInMibps(double value) { SetProvisionedThroughputInMibps(value); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    ThroughputMode m_throughputMode;
    bool m_throughputModeHasBeenSet;

    double m_provisionedThroughputInMibps;
    bool m_provisionedThroughputInMibpsHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
