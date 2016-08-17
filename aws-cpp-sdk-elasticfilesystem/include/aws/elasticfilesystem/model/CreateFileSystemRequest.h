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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/PerformanceMode.h>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class AWS_EFS_API CreateFileSystemRequest : public EFSRequest
  {
  public:
    CreateFileSystemRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline const Aws::String& GetCreationToken() const{ return m_creationToken; }

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline void SetCreationToken(const Aws::String& value) { m_creationTokenHasBeenSet = true; m_creationToken = value; }

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline void SetCreationToken(Aws::String&& value) { m_creationTokenHasBeenSet = true; m_creationToken = value; }

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline void SetCreationToken(const char* value) { m_creationTokenHasBeenSet = true; m_creationToken.assign(value); }

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline CreateFileSystemRequest& WithCreationToken(const Aws::String& value) { SetCreationToken(value); return *this;}

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline CreateFileSystemRequest& WithCreationToken(Aws::String&& value) { SetCreationToken(value); return *this;}

    /**
     * <p>String of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline CreateFileSystemRequest& WithCreationToken(const char* value) { SetCreationToken(value); return *this;}

    /**
     * <p>The <code>PerformanceMode</code> of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. This can't be changed after the file
     * system has been created.</p>
     */
    inline const PerformanceMode& GetPerformanceMode() const{ return m_performanceMode; }

    /**
     * <p>The <code>PerformanceMode</code> of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. This can't be changed after the file
     * system has been created.</p>
     */
    inline void SetPerformanceMode(const PerformanceMode& value) { m_performanceModeHasBeenSet = true; m_performanceMode = value; }

    /**
     * <p>The <code>PerformanceMode</code> of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. This can't be changed after the file
     * system has been created.</p>
     */
    inline void SetPerformanceMode(PerformanceMode&& value) { m_performanceModeHasBeenSet = true; m_performanceMode = value; }

    /**
     * <p>The <code>PerformanceMode</code> of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. This can't be changed after the file
     * system has been created.</p>
     */
    inline CreateFileSystemRequest& WithPerformanceMode(const PerformanceMode& value) { SetPerformanceMode(value); return *this;}

    /**
     * <p>The <code>PerformanceMode</code> of the file system. We recommend
     * <code>generalPurpose</code> performance mode for most file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. This can't be changed after the file
     * system has been created.</p>
     */
    inline CreateFileSystemRequest& WithPerformanceMode(PerformanceMode&& value) { SetPerformanceMode(value); return *this;}

  private:
    Aws::String m_creationToken;
    bool m_creationTokenHasBeenSet;
    PerformanceMode m_performanceMode;
    bool m_performanceModeHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
