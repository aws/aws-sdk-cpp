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
  class DisassociateSourceResourceRequest : public MigrationHubRequest
  {
  public:
    AWS_MIGRATIONHUB_API DisassociateSourceResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateSourceResource"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the progress-update stream, which is used for access control as
     * well as a namespace for migration-task names that is implicitly linked to your
     * AWS account. The progress-update stream must uniquely identify the migration
     * tool as it is used for all updates made by the tool; however, it does not need
     * to be unique for each AWS account because it is scoped to the AWS account.</p>
     */
    inline const Aws::String& GetProgressUpdateStream() const{ return m_progressUpdateStream; }
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }
    inline void SetProgressUpdateStream(const Aws::String& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = value; }
    inline void SetProgressUpdateStream(Aws::String&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::move(value); }
    inline void SetProgressUpdateStream(const char* value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream.assign(value); }
    inline DisassociateSourceResourceRequest& WithProgressUpdateStream(const Aws::String& value) { SetProgressUpdateStream(value); return *this;}
    inline DisassociateSourceResourceRequest& WithProgressUpdateStream(Aws::String&& value) { SetProgressUpdateStream(std::move(value)); return *this;}
    inline DisassociateSourceResourceRequest& WithProgressUpdateStream(const char* value) { SetProgressUpdateStream(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that references the migration task. <i>Do not include
     * sensitive data in this field.</i> </p>
     */
    inline const Aws::String& GetMigrationTaskName() const{ return m_migrationTaskName; }
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }
    inline void SetMigrationTaskName(const Aws::String& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = value; }
    inline void SetMigrationTaskName(Aws::String&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::move(value); }
    inline void SetMigrationTaskName(const char* value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName.assign(value); }
    inline DisassociateSourceResourceRequest& WithMigrationTaskName(const Aws::String& value) { SetMigrationTaskName(value); return *this;}
    inline DisassociateSourceResourceRequest& WithMigrationTaskName(Aws::String&& value) { SetMigrationTaskName(std::move(value)); return *this;}
    inline DisassociateSourceResourceRequest& WithMigrationTaskName(const char* value) { SetMigrationTaskName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that was specified for the source resource.</p>
     */
    inline const Aws::String& GetSourceResourceName() const{ return m_sourceResourceName; }
    inline bool SourceResourceNameHasBeenSet() const { return m_sourceResourceNameHasBeenSet; }
    inline void SetSourceResourceName(const Aws::String& value) { m_sourceResourceNameHasBeenSet = true; m_sourceResourceName = value; }
    inline void SetSourceResourceName(Aws::String&& value) { m_sourceResourceNameHasBeenSet = true; m_sourceResourceName = std::move(value); }
    inline void SetSourceResourceName(const char* value) { m_sourceResourceNameHasBeenSet = true; m_sourceResourceName.assign(value); }
    inline DisassociateSourceResourceRequest& WithSourceResourceName(const Aws::String& value) { SetSourceResourceName(value); return *this;}
    inline DisassociateSourceResourceRequest& WithSourceResourceName(Aws::String&& value) { SetSourceResourceName(std::move(value)); return *this;}
    inline DisassociateSourceResourceRequest& WithSourceResourceName(const char* value) { SetSourceResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an optional parameter that you can use to test whether the call will
     * succeed. Set this parameter to <code>true</code> to verify that you have the
     * permissions that are required to make the call, and that you have specified the
     * other parameters in the call correctly.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DisassociateSourceResourceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    Aws::String m_sourceResourceName;
    bool m_sourceResourceNameHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
