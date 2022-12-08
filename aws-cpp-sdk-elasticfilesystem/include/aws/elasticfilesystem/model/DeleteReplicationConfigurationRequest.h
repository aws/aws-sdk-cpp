/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class DeleteReplicationConfigurationRequest : public EFSRequest
  {
  public:
    AWS_EFS_API DeleteReplicationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReplicationConfiguration"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the source file system in the replication configuration.</p>
     */
    inline const Aws::String& GetSourceFileSystemId() const{ return m_sourceFileSystemId; }

    /**
     * <p>The ID of the source file system in the replication configuration.</p>
     */
    inline bool SourceFileSystemIdHasBeenSet() const { return m_sourceFileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the source file system in the replication configuration.</p>
     */
    inline void SetSourceFileSystemId(const Aws::String& value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId = value; }

    /**
     * <p>The ID of the source file system in the replication configuration.</p>
     */
    inline void SetSourceFileSystemId(Aws::String&& value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId = std::move(value); }

    /**
     * <p>The ID of the source file system in the replication configuration.</p>
     */
    inline void SetSourceFileSystemId(const char* value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId.assign(value); }

    /**
     * <p>The ID of the source file system in the replication configuration.</p>
     */
    inline DeleteReplicationConfigurationRequest& WithSourceFileSystemId(const Aws::String& value) { SetSourceFileSystemId(value); return *this;}

    /**
     * <p>The ID of the source file system in the replication configuration.</p>
     */
    inline DeleteReplicationConfigurationRequest& WithSourceFileSystemId(Aws::String&& value) { SetSourceFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the source file system in the replication configuration.</p>
     */
    inline DeleteReplicationConfigurationRequest& WithSourceFileSystemId(const char* value) { SetSourceFileSystemId(value); return *this;}

  private:

    Aws::String m_sourceFileSystemId;
    bool m_sourceFileSystemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
