/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/MigrationHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

  /**
   */
  class CreateProgressUpdateStreamRequest : public MigrationHubRequest
  {
  public:
    AWS_MIGRATIONHUB_API CreateProgressUpdateStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProgressUpdateStream"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the ProgressUpdateStream. <i>Do not store personal data in this
     * field.</i> </p>
     */
    inline const Aws::String& GetProgressUpdateStreamName() const{ return m_progressUpdateStreamName; }

    /**
     * <p>The name of the ProgressUpdateStream. <i>Do not store personal data in this
     * field.</i> </p>
     */
    inline bool ProgressUpdateStreamNameHasBeenSet() const { return m_progressUpdateStreamNameHasBeenSet; }

    /**
     * <p>The name of the ProgressUpdateStream. <i>Do not store personal data in this
     * field.</i> </p>
     */
    inline void SetProgressUpdateStreamName(const Aws::String& value) { m_progressUpdateStreamNameHasBeenSet = true; m_progressUpdateStreamName = value; }

    /**
     * <p>The name of the ProgressUpdateStream. <i>Do not store personal data in this
     * field.</i> </p>
     */
    inline void SetProgressUpdateStreamName(Aws::String&& value) { m_progressUpdateStreamNameHasBeenSet = true; m_progressUpdateStreamName = std::move(value); }

    /**
     * <p>The name of the ProgressUpdateStream. <i>Do not store personal data in this
     * field.</i> </p>
     */
    inline void SetProgressUpdateStreamName(const char* value) { m_progressUpdateStreamNameHasBeenSet = true; m_progressUpdateStreamName.assign(value); }

    /**
     * <p>The name of the ProgressUpdateStream. <i>Do not store personal data in this
     * field.</i> </p>
     */
    inline CreateProgressUpdateStreamRequest& WithProgressUpdateStreamName(const Aws::String& value) { SetProgressUpdateStreamName(value); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream. <i>Do not store personal data in this
     * field.</i> </p>
     */
    inline CreateProgressUpdateStreamRequest& WithProgressUpdateStreamName(Aws::String&& value) { SetProgressUpdateStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream. <i>Do not store personal data in this
     * field.</i> </p>
     */
    inline CreateProgressUpdateStreamRequest& WithProgressUpdateStreamName(const char* value) { SetProgressUpdateStreamName(value); return *this;}


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
    inline CreateProgressUpdateStreamRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_progressUpdateStreamName;
    bool m_progressUpdateStreamNameHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
