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
  class AWS_MIGRATIONHUB_API DisassociateCreatedArtifactRequest : public MigrationHubRequest
  {
  public:
    DisassociateCreatedArtifactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateCreatedArtifact"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline const Aws::String& GetProgressUpdateStream() const{ return m_progressUpdateStream; }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStream(const Aws::String& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = value; }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStream(Aws::String&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::move(value); }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStream(const char* value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream.assign(value); }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline DisassociateCreatedArtifactRequest& WithProgressUpdateStream(const Aws::String& value) { SetProgressUpdateStream(value); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline DisassociateCreatedArtifactRequest& WithProgressUpdateStream(Aws::String&& value) { SetProgressUpdateStream(std::move(value)); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline DisassociateCreatedArtifactRequest& WithProgressUpdateStream(const char* value) { SetProgressUpdateStream(value); return *this;}


    /**
     * <p>Unique identifier that references the migration task to be disassociated with
     * the artifact.</p>
     */
    inline const Aws::String& GetMigrationTaskName() const{ return m_migrationTaskName; }

    /**
     * <p>Unique identifier that references the migration task to be disassociated with
     * the artifact.</p>
     */
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }

    /**
     * <p>Unique identifier that references the migration task to be disassociated with
     * the artifact.</p>
     */
    inline void SetMigrationTaskName(const Aws::String& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = value; }

    /**
     * <p>Unique identifier that references the migration task to be disassociated with
     * the artifact.</p>
     */
    inline void SetMigrationTaskName(Aws::String&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::move(value); }

    /**
     * <p>Unique identifier that references the migration task to be disassociated with
     * the artifact.</p>
     */
    inline void SetMigrationTaskName(const char* value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName.assign(value); }

    /**
     * <p>Unique identifier that references the migration task to be disassociated with
     * the artifact.</p>
     */
    inline DisassociateCreatedArtifactRequest& WithMigrationTaskName(const Aws::String& value) { SetMigrationTaskName(value); return *this;}

    /**
     * <p>Unique identifier that references the migration task to be disassociated with
     * the artifact.</p>
     */
    inline DisassociateCreatedArtifactRequest& WithMigrationTaskName(Aws::String&& value) { SetMigrationTaskName(std::move(value)); return *this;}

    /**
     * <p>Unique identifier that references the migration task to be disassociated with
     * the artifact.</p>
     */
    inline DisassociateCreatedArtifactRequest& WithMigrationTaskName(const char* value) { SetMigrationTaskName(value); return *this;}


    /**
     * <p>An ARN of the AWS resource related to the migration (e.g., AMI, EC2 instance,
     * RDS instance, etc.)</p>
     */
    inline const Aws::String& GetCreatedArtifactName() const{ return m_createdArtifactName; }

    /**
     * <p>An ARN of the AWS resource related to the migration (e.g., AMI, EC2 instance,
     * RDS instance, etc.)</p>
     */
    inline bool CreatedArtifactNameHasBeenSet() const { return m_createdArtifactNameHasBeenSet; }

    /**
     * <p>An ARN of the AWS resource related to the migration (e.g., AMI, EC2 instance,
     * RDS instance, etc.)</p>
     */
    inline void SetCreatedArtifactName(const Aws::String& value) { m_createdArtifactNameHasBeenSet = true; m_createdArtifactName = value; }

    /**
     * <p>An ARN of the AWS resource related to the migration (e.g., AMI, EC2 instance,
     * RDS instance, etc.)</p>
     */
    inline void SetCreatedArtifactName(Aws::String&& value) { m_createdArtifactNameHasBeenSet = true; m_createdArtifactName = std::move(value); }

    /**
     * <p>An ARN of the AWS resource related to the migration (e.g., AMI, EC2 instance,
     * RDS instance, etc.)</p>
     */
    inline void SetCreatedArtifactName(const char* value) { m_createdArtifactNameHasBeenSet = true; m_createdArtifactName.assign(value); }

    /**
     * <p>An ARN of the AWS resource related to the migration (e.g., AMI, EC2 instance,
     * RDS instance, etc.)</p>
     */
    inline DisassociateCreatedArtifactRequest& WithCreatedArtifactName(const Aws::String& value) { SetCreatedArtifactName(value); return *this;}

    /**
     * <p>An ARN of the AWS resource related to the migration (e.g., AMI, EC2 instance,
     * RDS instance, etc.)</p>
     */
    inline DisassociateCreatedArtifactRequest& WithCreatedArtifactName(Aws::String&& value) { SetCreatedArtifactName(std::move(value)); return *this;}

    /**
     * <p>An ARN of the AWS resource related to the migration (e.g., AMI, EC2 instance,
     * RDS instance, etc.)</p>
     */
    inline DisassociateCreatedArtifactRequest& WithCreatedArtifactName(const char* value) { SetCreatedArtifactName(value); return *this;}


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
    inline DisassociateCreatedArtifactRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet;

    Aws::String m_createdArtifactName;
    bool m_createdArtifactNameHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
