﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/MigrationHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/AWSMigrationHub/model/DiscoveredResource.h>
#include <utility>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

  /**
   */
  class AssociateDiscoveredResourceRequest : public MigrationHubRequest
  {
  public:
    AWS_MIGRATIONHUB_API AssociateDiscoveredResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDiscoveredResource"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline const Aws::String& GetProgressUpdateStream() const { return m_progressUpdateStream; }
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }
    template<typename ProgressUpdateStreamT = Aws::String>
    void SetProgressUpdateStream(ProgressUpdateStreamT&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::forward<ProgressUpdateStreamT>(value); }
    template<typename ProgressUpdateStreamT = Aws::String>
    AssociateDiscoveredResourceRequest& WithProgressUpdateStream(ProgressUpdateStreamT&& value) { SetProgressUpdateStream(std::forward<ProgressUpdateStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier given to the MigrationTask. <i>Do not store personal data in
     * this field.</i> </p>
     */
    inline const Aws::String& GetMigrationTaskName() const { return m_migrationTaskName; }
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }
    template<typename MigrationTaskNameT = Aws::String>
    void SetMigrationTaskName(MigrationTaskNameT&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::forward<MigrationTaskNameT>(value); }
    template<typename MigrationTaskNameT = Aws::String>
    AssociateDiscoveredResourceRequest& WithMigrationTaskName(MigrationTaskNameT&& value) { SetMigrationTaskName(std::forward<MigrationTaskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object representing a Resource.</p>
     */
    inline const DiscoveredResource& GetDiscoveredResource() const { return m_discoveredResource; }
    inline bool DiscoveredResourceHasBeenSet() const { return m_discoveredResourceHasBeenSet; }
    template<typename DiscoveredResourceT = DiscoveredResource>
    void SetDiscoveredResource(DiscoveredResourceT&& value) { m_discoveredResourceHasBeenSet = true; m_discoveredResource = std::forward<DiscoveredResourceT>(value); }
    template<typename DiscoveredResourceT = DiscoveredResource>
    AssociateDiscoveredResourceRequest& WithDiscoveredResource(DiscoveredResourceT&& value) { SetDiscoveredResource(std::forward<DiscoveredResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline AssociateDiscoveredResourceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    DiscoveredResource m_discoveredResource;
    bool m_discoveredResourceHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
