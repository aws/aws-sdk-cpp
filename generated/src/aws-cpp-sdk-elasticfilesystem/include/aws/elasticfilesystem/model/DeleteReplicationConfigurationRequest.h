/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/DeletionMode.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EFS
{
namespace Model
{

  /**
   */
  class DeleteReplicationConfigurationRequest : public EFSRequest
  {
  public:
    AWS_EFS_API DeleteReplicationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReplicationConfiguration"; }

    AWS_EFS_API Aws::String SerializePayload() const override;

    AWS_EFS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the source file system in the replication configuration.</p>
     */
    inline const Aws::String& GetSourceFileSystemId() const { return m_sourceFileSystemId; }
    inline bool SourceFileSystemIdHasBeenSet() const { return m_sourceFileSystemIdHasBeenSet; }
    template<typename SourceFileSystemIdT = Aws::String>
    void SetSourceFileSystemId(SourceFileSystemIdT&& value) { m_sourceFileSystemIdHasBeenSet = true; m_sourceFileSystemId = std::forward<SourceFileSystemIdT>(value); }
    template<typename SourceFileSystemIdT = Aws::String>
    DeleteReplicationConfigurationRequest& WithSourceFileSystemId(SourceFileSystemIdT&& value) { SetSourceFileSystemId(std::forward<SourceFileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When replicating across Amazon Web Services accounts or across Amazon Web
     * Services Regions, Amazon EFS deletes the replication configuration from both the
     * source and destination account or Region (<code>ALL_CONFIGURATIONS</code>) by
     * default. If there's a configuration or permissions issue that prevents Amazon
     * EFS from deleting the replication configuration from both sides, you can use the
     * <code>LOCAL_CONFIGURATION_ONLY</code> mode to delete the replication
     * configuration from only the local side (the account or Region from which the
     * delete is performed). </p>  <p>Only use the
     * <code>LOCAL_CONFIGURATION_ONLY</code> mode in the case that Amazon EFS is unable
     * to delete the replication configuration in both the source and destination
     * account or Region. Deleting the local configuration leaves the configuration in
     * the other account or Region unrecoverable.</p> <p>Additionally, do not use this
     * mode for same-account, same-region replication as doing so results in a
     * BadRequest exception error.</p> 
     */
    inline DeletionMode GetDeletionMode() const { return m_deletionMode; }
    inline bool DeletionModeHasBeenSet() const { return m_deletionModeHasBeenSet; }
    inline void SetDeletionMode(DeletionMode value) { m_deletionModeHasBeenSet = true; m_deletionMode = value; }
    inline DeleteReplicationConfigurationRequest& WithDeletionMode(DeletionMode value) { SetDeletionMode(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceFileSystemId;
    bool m_sourceFileSystemIdHasBeenSet = false;

    DeletionMode m_deletionMode{DeletionMode::NOT_SET};
    bool m_deletionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
