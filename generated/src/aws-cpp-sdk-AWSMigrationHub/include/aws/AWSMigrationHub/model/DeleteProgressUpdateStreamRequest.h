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
  class DeleteProgressUpdateStreamRequest : public MigrationHubRequest
  {
  public:
    AWS_MIGRATIONHUB_API DeleteProgressUpdateStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProgressUpdateStream"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the ProgressUpdateStream. <i>Do not store personal data in this
     * field.</i> </p>
     */
    inline const Aws::String& GetProgressUpdateStreamName() const { return m_progressUpdateStreamName; }
    inline bool ProgressUpdateStreamNameHasBeenSet() const { return m_progressUpdateStreamNameHasBeenSet; }
    template<typename ProgressUpdateStreamNameT = Aws::String>
    void SetProgressUpdateStreamName(ProgressUpdateStreamNameT&& value) { m_progressUpdateStreamNameHasBeenSet = true; m_progressUpdateStreamName = std::forward<ProgressUpdateStreamNameT>(value); }
    template<typename ProgressUpdateStreamNameT = Aws::String>
    DeleteProgressUpdateStreamRequest& WithProgressUpdateStreamName(ProgressUpdateStreamNameT&& value) { SetProgressUpdateStreamName(std::forward<ProgressUpdateStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DeleteProgressUpdateStreamRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_progressUpdateStreamName;
    bool m_progressUpdateStreamNameHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
