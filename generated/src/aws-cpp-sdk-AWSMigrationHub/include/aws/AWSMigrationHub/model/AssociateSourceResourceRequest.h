/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/MigrationHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/AWSMigrationHub/model/SourceResource.h>
#include <utility>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

  /**
   */
  class AssociateSourceResourceRequest : public MigrationHubRequest
  {
  public:
    AWS_MIGRATIONHUB_API AssociateSourceResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSourceResource"; }

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
    inline const Aws::String& GetProgressUpdateStream() const { return m_progressUpdateStream; }
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }
    template<typename ProgressUpdateStreamT = Aws::String>
    void SetProgressUpdateStream(ProgressUpdateStreamT&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::forward<ProgressUpdateStreamT>(value); }
    template<typename ProgressUpdateStreamT = Aws::String>
    AssociateSourceResourceRequest& WithProgressUpdateStream(ProgressUpdateStreamT&& value) { SetProgressUpdateStream(std::forward<ProgressUpdateStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that references the migration task. <i>Do not include
     * sensitive data in this field.</i> </p>
     */
    inline const Aws::String& GetMigrationTaskName() const { return m_migrationTaskName; }
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }
    template<typename MigrationTaskNameT = Aws::String>
    void SetMigrationTaskName(MigrationTaskNameT&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::forward<MigrationTaskNameT>(value); }
    template<typename MigrationTaskNameT = Aws::String>
    AssociateSourceResourceRequest& WithMigrationTaskName(MigrationTaskNameT&& value) { SetMigrationTaskName(std::forward<MigrationTaskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source resource that you want to associate.</p>
     */
    inline const SourceResource& GetSourceResource() const { return m_sourceResource; }
    inline bool SourceResourceHasBeenSet() const { return m_sourceResourceHasBeenSet; }
    template<typename SourceResourceT = SourceResource>
    void SetSourceResource(SourceResourceT&& value) { m_sourceResourceHasBeenSet = true; m_sourceResource = std::forward<SourceResourceT>(value); }
    template<typename SourceResourceT = SourceResource>
    AssociateSourceResourceRequest& WithSourceResource(SourceResourceT&& value) { SetSourceResource(std::forward<SourceResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an optional parameter that you can use to test whether the call will
     * succeed. Set this parameter to <code>true</code> to verify that you have the
     * permissions that are required to make the call, and that you have specified the
     * other parameters in the call correctly.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline AssociateSourceResourceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    SourceResource m_sourceResource;
    bool m_sourceResourceHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
