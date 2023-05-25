/**
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
    AWS_MIGRATIONHUB_API AssociateDiscoveredResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDiscoveredResource"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline const Aws::String& GetProgressUpdateStream() const{ return m_progressUpdateStream; }

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline void SetProgressUpdateStream(const Aws::String& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = value; }

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline void SetProgressUpdateStream(Aws::String&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::move(value); }

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline void SetProgressUpdateStream(const char* value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream.assign(value); }

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithProgressUpdateStream(const Aws::String& value) { SetProgressUpdateStream(value); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithProgressUpdateStream(Aws::String&& value) { SetProgressUpdateStream(std::move(value)); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithProgressUpdateStream(const char* value) { SetProgressUpdateStream(value); return *this;}


    /**
     * <p>The identifier given to the MigrationTask. <i>Do not store personal data in
     * this field.</i> </p>
     */
    inline const Aws::String& GetMigrationTaskName() const{ return m_migrationTaskName; }

    /**
     * <p>The identifier given to the MigrationTask. <i>Do not store personal data in
     * this field.</i> </p>
     */
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }

    /**
     * <p>The identifier given to the MigrationTask. <i>Do not store personal data in
     * this field.</i> </p>
     */
    inline void SetMigrationTaskName(const Aws::String& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = value; }

    /**
     * <p>The identifier given to the MigrationTask. <i>Do not store personal data in
     * this field.</i> </p>
     */
    inline void SetMigrationTaskName(Aws::String&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::move(value); }

    /**
     * <p>The identifier given to the MigrationTask. <i>Do not store personal data in
     * this field.</i> </p>
     */
    inline void SetMigrationTaskName(const char* value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName.assign(value); }

    /**
     * <p>The identifier given to the MigrationTask. <i>Do not store personal data in
     * this field.</i> </p>
     */
    inline AssociateDiscoveredResourceRequest& WithMigrationTaskName(const Aws::String& value) { SetMigrationTaskName(value); return *this;}

    /**
     * <p>The identifier given to the MigrationTask. <i>Do not store personal data in
     * this field.</i> </p>
     */
    inline AssociateDiscoveredResourceRequest& WithMigrationTaskName(Aws::String&& value) { SetMigrationTaskName(std::move(value)); return *this;}

    /**
     * <p>The identifier given to the MigrationTask. <i>Do not store personal data in
     * this field.</i> </p>
     */
    inline AssociateDiscoveredResourceRequest& WithMigrationTaskName(const char* value) { SetMigrationTaskName(value); return *this;}


    /**
     * <p>Object representing a Resource.</p>
     */
    inline const DiscoveredResource& GetDiscoveredResource() const{ return m_discoveredResource; }

    /**
     * <p>Object representing a Resource.</p>
     */
    inline bool DiscoveredResourceHasBeenSet() const { return m_discoveredResourceHasBeenSet; }

    /**
     * <p>Object representing a Resource.</p>
     */
    inline void SetDiscoveredResource(const DiscoveredResource& value) { m_discoveredResourceHasBeenSet = true; m_discoveredResource = value; }

    /**
     * <p>Object representing a Resource.</p>
     */
    inline void SetDiscoveredResource(DiscoveredResource&& value) { m_discoveredResourceHasBeenSet = true; m_discoveredResource = std::move(value); }

    /**
     * <p>Object representing a Resource.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithDiscoveredResource(const DiscoveredResource& value) { SetDiscoveredResource(value); return *this;}

    /**
     * <p>Object representing a Resource.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithDiscoveredResource(DiscoveredResource&& value) { SetDiscoveredResource(std::move(value)); return *this;}


    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline AssociateDiscoveredResourceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    DiscoveredResource m_discoveredResource;
    bool m_discoveredResourceHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
