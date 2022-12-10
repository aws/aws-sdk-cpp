/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dms/model/ReplicationTaskAssessmentRunProgress.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that describes a premigration assessment run that you
   * have started using the <code>StartReplicationTaskAssessmentRun</code>
   * operation.</p> <p>Some of the information appears based on other operations that
   * can return the <code>ReplicationTaskAssessmentRun</code> object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationTaskAssessmentRun">AWS
   * API Reference</a></p>
   */
  class ReplicationTaskAssessmentRun
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRun();
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of this assessment run.</p>
     */
    inline const Aws::String& GetReplicationTaskAssessmentRunArn() const{ return m_replicationTaskAssessmentRunArn; }

    /**
     * <p>Amazon Resource Name (ARN) of this assessment run.</p>
     */
    inline bool ReplicationTaskAssessmentRunArnHasBeenSet() const { return m_replicationTaskAssessmentRunArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of this assessment run.</p>
     */
    inline void SetReplicationTaskAssessmentRunArn(const Aws::String& value) { m_replicationTaskAssessmentRunArnHasBeenSet = true; m_replicationTaskAssessmentRunArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of this assessment run.</p>
     */
    inline void SetReplicationTaskAssessmentRunArn(Aws::String&& value) { m_replicationTaskAssessmentRunArnHasBeenSet = true; m_replicationTaskAssessmentRunArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of this assessment run.</p>
     */
    inline void SetReplicationTaskAssessmentRunArn(const char* value) { m_replicationTaskAssessmentRunArnHasBeenSet = true; m_replicationTaskAssessmentRunArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of this assessment run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithReplicationTaskAssessmentRunArn(const Aws::String& value) { SetReplicationTaskAssessmentRunArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of this assessment run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithReplicationTaskAssessmentRunArn(Aws::String&& value) { SetReplicationTaskAssessmentRunArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of this assessment run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithReplicationTaskAssessmentRunArn(const char* value) { SetReplicationTaskAssessmentRunArn(value); return *this;}


    /**
     * <p>ARN of the migration task associated with this premigration assessment
     * run.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>ARN of the migration task associated with this premigration assessment
     * run.</p>
     */
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }

    /**
     * <p>ARN of the migration task associated with this premigration assessment
     * run.</p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>ARN of the migration task associated with this premigration assessment
     * run.</p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }

    /**
     * <p>ARN of the migration task associated with this premigration assessment
     * run.</p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>ARN of the migration task associated with this premigration assessment
     * run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>ARN of the migration task associated with this premigration assessment
     * run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the migration task associated with this premigration assessment
     * run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}


    /**
     * <p>Assessment run status. </p> <p>This status can have one of the following
     * values:</p> <ul> <li> <p> <code>"cancelling"</code> – The assessment run was
     * canceled by the <code>CancelReplicationTaskAssessmentRun</code> operation.</p>
     * </li> <li> <p> <code>"deleting"</code> – The assessment run was deleted by the
     * <code>DeleteReplicationTaskAssessmentRun</code> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – At least one individual assessment completed with a
     * <code>failed</code> status.</p> </li> <li> <p> <code>"error-provisioning"</code>
     * – An internal error occurred while resources were provisioned (during
     * <code>provisioning</code> status).</p> </li> <li> <p>
     * <code>"error-executing"</code> – An internal error occurred while individual
     * assessments ran (during <code>running</code> status).</p> </li> <li> <p>
     * <code>"invalid state"</code> – The assessment run is in an unknown state.</p>
     * </li> <li> <p> <code>"passed"</code> – All individual assessments have
     * completed, and none has a <code>failed</code> status.</p> </li> <li> <p>
     * <code>"provisioning"</code> – Resources required to run individual assessments
     * are being provisioned.</p> </li> <li> <p> <code>"running"</code> – Individual
     * assessments are being run.</p> </li> <li> <p> <code>"starting"</code> – The
     * assessment run is starting, but resources are not yet being provisioned for
     * individual assessments.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Assessment run status. </p> <p>This status can have one of the following
     * values:</p> <ul> <li> <p> <code>"cancelling"</code> – The assessment run was
     * canceled by the <code>CancelReplicationTaskAssessmentRun</code> operation.</p>
     * </li> <li> <p> <code>"deleting"</code> – The assessment run was deleted by the
     * <code>DeleteReplicationTaskAssessmentRun</code> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – At least one individual assessment completed with a
     * <code>failed</code> status.</p> </li> <li> <p> <code>"error-provisioning"</code>
     * – An internal error occurred while resources were provisioned (during
     * <code>provisioning</code> status).</p> </li> <li> <p>
     * <code>"error-executing"</code> – An internal error occurred while individual
     * assessments ran (during <code>running</code> status).</p> </li> <li> <p>
     * <code>"invalid state"</code> – The assessment run is in an unknown state.</p>
     * </li> <li> <p> <code>"passed"</code> – All individual assessments have
     * completed, and none has a <code>failed</code> status.</p> </li> <li> <p>
     * <code>"provisioning"</code> – Resources required to run individual assessments
     * are being provisioned.</p> </li> <li> <p> <code>"running"</code> – Individual
     * assessments are being run.</p> </li> <li> <p> <code>"starting"</code> – The
     * assessment run is starting, but resources are not yet being provisioned for
     * individual assessments.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Assessment run status. </p> <p>This status can have one of the following
     * values:</p> <ul> <li> <p> <code>"cancelling"</code> – The assessment run was
     * canceled by the <code>CancelReplicationTaskAssessmentRun</code> operation.</p>
     * </li> <li> <p> <code>"deleting"</code> – The assessment run was deleted by the
     * <code>DeleteReplicationTaskAssessmentRun</code> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – At least one individual assessment completed with a
     * <code>failed</code> status.</p> </li> <li> <p> <code>"error-provisioning"</code>
     * – An internal error occurred while resources were provisioned (during
     * <code>provisioning</code> status).</p> </li> <li> <p>
     * <code>"error-executing"</code> – An internal error occurred while individual
     * assessments ran (during <code>running</code> status).</p> </li> <li> <p>
     * <code>"invalid state"</code> – The assessment run is in an unknown state.</p>
     * </li> <li> <p> <code>"passed"</code> – All individual assessments have
     * completed, and none has a <code>failed</code> status.</p> </li> <li> <p>
     * <code>"provisioning"</code> – Resources required to run individual assessments
     * are being provisioned.</p> </li> <li> <p> <code>"running"</code> – Individual
     * assessments are being run.</p> </li> <li> <p> <code>"starting"</code> – The
     * assessment run is starting, but resources are not yet being provisioned for
     * individual assessments.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Assessment run status. </p> <p>This status can have one of the following
     * values:</p> <ul> <li> <p> <code>"cancelling"</code> – The assessment run was
     * canceled by the <code>CancelReplicationTaskAssessmentRun</code> operation.</p>
     * </li> <li> <p> <code>"deleting"</code> – The assessment run was deleted by the
     * <code>DeleteReplicationTaskAssessmentRun</code> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – At least one individual assessment completed with a
     * <code>failed</code> status.</p> </li> <li> <p> <code>"error-provisioning"</code>
     * – An internal error occurred while resources were provisioned (during
     * <code>provisioning</code> status).</p> </li> <li> <p>
     * <code>"error-executing"</code> – An internal error occurred while individual
     * assessments ran (during <code>running</code> status).</p> </li> <li> <p>
     * <code>"invalid state"</code> – The assessment run is in an unknown state.</p>
     * </li> <li> <p> <code>"passed"</code> – All individual assessments have
     * completed, and none has a <code>failed</code> status.</p> </li> <li> <p>
     * <code>"provisioning"</code> – Resources required to run individual assessments
     * are being provisioned.</p> </li> <li> <p> <code>"running"</code> – Individual
     * assessments are being run.</p> </li> <li> <p> <code>"starting"</code> – The
     * assessment run is starting, but resources are not yet being provisioned for
     * individual assessments.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Assessment run status. </p> <p>This status can have one of the following
     * values:</p> <ul> <li> <p> <code>"cancelling"</code> – The assessment run was
     * canceled by the <code>CancelReplicationTaskAssessmentRun</code> operation.</p>
     * </li> <li> <p> <code>"deleting"</code> – The assessment run was deleted by the
     * <code>DeleteReplicationTaskAssessmentRun</code> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – At least one individual assessment completed with a
     * <code>failed</code> status.</p> </li> <li> <p> <code>"error-provisioning"</code>
     * – An internal error occurred while resources were provisioned (during
     * <code>provisioning</code> status).</p> </li> <li> <p>
     * <code>"error-executing"</code> – An internal error occurred while individual
     * assessments ran (during <code>running</code> status).</p> </li> <li> <p>
     * <code>"invalid state"</code> – The assessment run is in an unknown state.</p>
     * </li> <li> <p> <code>"passed"</code> – All individual assessments have
     * completed, and none has a <code>failed</code> status.</p> </li> <li> <p>
     * <code>"provisioning"</code> – Resources required to run individual assessments
     * are being provisioned.</p> </li> <li> <p> <code>"running"</code> – Individual
     * assessments are being run.</p> </li> <li> <p> <code>"starting"</code> – The
     * assessment run is starting, but resources are not yet being provisioned for
     * individual assessments.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Assessment run status. </p> <p>This status can have one of the following
     * values:</p> <ul> <li> <p> <code>"cancelling"</code> – The assessment run was
     * canceled by the <code>CancelReplicationTaskAssessmentRun</code> operation.</p>
     * </li> <li> <p> <code>"deleting"</code> – The assessment run was deleted by the
     * <code>DeleteReplicationTaskAssessmentRun</code> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – At least one individual assessment completed with a
     * <code>failed</code> status.</p> </li> <li> <p> <code>"error-provisioning"</code>
     * – An internal error occurred while resources were provisioned (during
     * <code>provisioning</code> status).</p> </li> <li> <p>
     * <code>"error-executing"</code> – An internal error occurred while individual
     * assessments ran (during <code>running</code> status).</p> </li> <li> <p>
     * <code>"invalid state"</code> – The assessment run is in an unknown state.</p>
     * </li> <li> <p> <code>"passed"</code> – All individual assessments have
     * completed, and none has a <code>failed</code> status.</p> </li> <li> <p>
     * <code>"provisioning"</code> – Resources required to run individual assessments
     * are being provisioned.</p> </li> <li> <p> <code>"running"</code> – Individual
     * assessments are being run.</p> </li> <li> <p> <code>"starting"</code> – The
     * assessment run is starting, but resources are not yet being provisioned for
     * individual assessments.</p> </li> </ul>
     */
    inline ReplicationTaskAssessmentRun& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Assessment run status. </p> <p>This status can have one of the following
     * values:</p> <ul> <li> <p> <code>"cancelling"</code> – The assessment run was
     * canceled by the <code>CancelReplicationTaskAssessmentRun</code> operation.</p>
     * </li> <li> <p> <code>"deleting"</code> – The assessment run was deleted by the
     * <code>DeleteReplicationTaskAssessmentRun</code> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – At least one individual assessment completed with a
     * <code>failed</code> status.</p> </li> <li> <p> <code>"error-provisioning"</code>
     * – An internal error occurred while resources were provisioned (during
     * <code>provisioning</code> status).</p> </li> <li> <p>
     * <code>"error-executing"</code> – An internal error occurred while individual
     * assessments ran (during <code>running</code> status).</p> </li> <li> <p>
     * <code>"invalid state"</code> – The assessment run is in an unknown state.</p>
     * </li> <li> <p> <code>"passed"</code> – All individual assessments have
     * completed, and none has a <code>failed</code> status.</p> </li> <li> <p>
     * <code>"provisioning"</code> – Resources required to run individual assessments
     * are being provisioned.</p> </li> <li> <p> <code>"running"</code> – Individual
     * assessments are being run.</p> </li> <li> <p> <code>"starting"</code> – The
     * assessment run is starting, but resources are not yet being provisioned for
     * individual assessments.</p> </li> </ul>
     */
    inline ReplicationTaskAssessmentRun& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Assessment run status. </p> <p>This status can have one of the following
     * values:</p> <ul> <li> <p> <code>"cancelling"</code> – The assessment run was
     * canceled by the <code>CancelReplicationTaskAssessmentRun</code> operation.</p>
     * </li> <li> <p> <code>"deleting"</code> – The assessment run was deleted by the
     * <code>DeleteReplicationTaskAssessmentRun</code> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – At least one individual assessment completed with a
     * <code>failed</code> status.</p> </li> <li> <p> <code>"error-provisioning"</code>
     * – An internal error occurred while resources were provisioned (during
     * <code>provisioning</code> status).</p> </li> <li> <p>
     * <code>"error-executing"</code> – An internal error occurred while individual
     * assessments ran (during <code>running</code> status).</p> </li> <li> <p>
     * <code>"invalid state"</code> – The assessment run is in an unknown state.</p>
     * </li> <li> <p> <code>"passed"</code> – All individual assessments have
     * completed, and none has a <code>failed</code> status.</p> </li> <li> <p>
     * <code>"provisioning"</code> – Resources required to run individual assessments
     * are being provisioned.</p> </li> <li> <p> <code>"running"</code> – Individual
     * assessments are being run.</p> </li> <li> <p> <code>"starting"</code> – The
     * assessment run is starting, but resources are not yet being provisioned for
     * individual assessments.</p> </li> </ul>
     */
    inline ReplicationTaskAssessmentRun& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Date on which the assessment run was created using the
     * <code>StartReplicationTaskAssessmentRun</code> operation.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskAssessmentRunCreationDate() const{ return m_replicationTaskAssessmentRunCreationDate; }

    /**
     * <p>Date on which the assessment run was created using the
     * <code>StartReplicationTaskAssessmentRun</code> operation.</p>
     */
    inline bool ReplicationTaskAssessmentRunCreationDateHasBeenSet() const { return m_replicationTaskAssessmentRunCreationDateHasBeenSet; }

    /**
     * <p>Date on which the assessment run was created using the
     * <code>StartReplicationTaskAssessmentRun</code> operation.</p>
     */
    inline void SetReplicationTaskAssessmentRunCreationDate(const Aws::Utils::DateTime& value) { m_replicationTaskAssessmentRunCreationDateHasBeenSet = true; m_replicationTaskAssessmentRunCreationDate = value; }

    /**
     * <p>Date on which the assessment run was created using the
     * <code>StartReplicationTaskAssessmentRun</code> operation.</p>
     */
    inline void SetReplicationTaskAssessmentRunCreationDate(Aws::Utils::DateTime&& value) { m_replicationTaskAssessmentRunCreationDateHasBeenSet = true; m_replicationTaskAssessmentRunCreationDate = std::move(value); }

    /**
     * <p>Date on which the assessment run was created using the
     * <code>StartReplicationTaskAssessmentRun</code> operation.</p>
     */
    inline ReplicationTaskAssessmentRun& WithReplicationTaskAssessmentRunCreationDate(const Aws::Utils::DateTime& value) { SetReplicationTaskAssessmentRunCreationDate(value); return *this;}

    /**
     * <p>Date on which the assessment run was created using the
     * <code>StartReplicationTaskAssessmentRun</code> operation.</p>
     */
    inline ReplicationTaskAssessmentRun& WithReplicationTaskAssessmentRunCreationDate(Aws::Utils::DateTime&& value) { SetReplicationTaskAssessmentRunCreationDate(std::move(value)); return *this;}


    /**
     * <p>Indication of the completion progress for the individual assessments
     * specified to run.</p>
     */
    inline const ReplicationTaskAssessmentRunProgress& GetAssessmentProgress() const{ return m_assessmentProgress; }

    /**
     * <p>Indication of the completion progress for the individual assessments
     * specified to run.</p>
     */
    inline bool AssessmentProgressHasBeenSet() const { return m_assessmentProgressHasBeenSet; }

    /**
     * <p>Indication of the completion progress for the individual assessments
     * specified to run.</p>
     */
    inline void SetAssessmentProgress(const ReplicationTaskAssessmentRunProgress& value) { m_assessmentProgressHasBeenSet = true; m_assessmentProgress = value; }

    /**
     * <p>Indication of the completion progress for the individual assessments
     * specified to run.</p>
     */
    inline void SetAssessmentProgress(ReplicationTaskAssessmentRunProgress&& value) { m_assessmentProgressHasBeenSet = true; m_assessmentProgress = std::move(value); }

    /**
     * <p>Indication of the completion progress for the individual assessments
     * specified to run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithAssessmentProgress(const ReplicationTaskAssessmentRunProgress& value) { SetAssessmentProgress(value); return *this;}

    /**
     * <p>Indication of the completion progress for the individual assessments
     * specified to run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithAssessmentProgress(ReplicationTaskAssessmentRunProgress&& value) { SetAssessmentProgress(std::move(value)); return *this;}


    /**
     * <p>Last message generated by an individual assessment failure.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const{ return m_lastFailureMessage; }

    /**
     * <p>Last message generated by an individual assessment failure.</p>
     */
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }

    /**
     * <p>Last message generated by an individual assessment failure.</p>
     */
    inline void SetLastFailureMessage(const Aws::String& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = value; }

    /**
     * <p>Last message generated by an individual assessment failure.</p>
     */
    inline void SetLastFailureMessage(Aws::String&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::move(value); }

    /**
     * <p>Last message generated by an individual assessment failure.</p>
     */
    inline void SetLastFailureMessage(const char* value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage.assign(value); }

    /**
     * <p>Last message generated by an individual assessment failure.</p>
     */
    inline ReplicationTaskAssessmentRun& WithLastFailureMessage(const Aws::String& value) { SetLastFailureMessage(value); return *this;}

    /**
     * <p>Last message generated by an individual assessment failure.</p>
     */
    inline ReplicationTaskAssessmentRun& WithLastFailureMessage(Aws::String&& value) { SetLastFailureMessage(std::move(value)); return *this;}

    /**
     * <p>Last message generated by an individual assessment failure.</p>
     */
    inline ReplicationTaskAssessmentRun& WithLastFailureMessage(const char* value) { SetLastFailureMessage(value); return *this;}


    /**
     * <p>ARN of the service role used to start the assessment run using the
     * <code>StartReplicationTaskAssessmentRun</code> operation. The role must allow
     * the <code>iam:PassRole</code> action.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p>ARN of the service role used to start the assessment run using the
     * <code>StartReplicationTaskAssessmentRun</code> operation. The role must allow
     * the <code>iam:PassRole</code> action.</p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p>ARN of the service role used to start the assessment run using the
     * <code>StartReplicationTaskAssessmentRun</code> operation. The role must allow
     * the <code>iam:PassRole</code> action.</p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p>ARN of the service role used to start the assessment run using the
     * <code>StartReplicationTaskAssessmentRun</code> operation. The role must allow
     * the <code>iam:PassRole</code> action.</p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p>ARN of the service role used to start the assessment run using the
     * <code>StartReplicationTaskAssessmentRun</code> operation. The role must allow
     * the <code>iam:PassRole</code> action.</p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p>ARN of the service role used to start the assessment run using the
     * <code>StartReplicationTaskAssessmentRun</code> operation. The role must allow
     * the <code>iam:PassRole</code> action.</p>
     */
    inline ReplicationTaskAssessmentRun& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p>ARN of the service role used to start the assessment run using the
     * <code>StartReplicationTaskAssessmentRun</code> operation. The role must allow
     * the <code>iam:PassRole</code> action.</p>
     */
    inline ReplicationTaskAssessmentRun& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the service role used to start the assessment run using the
     * <code>StartReplicationTaskAssessmentRun</code> operation. The role must allow
     * the <code>iam:PassRole</code> action.</p>
     */
    inline ReplicationTaskAssessmentRun& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}


    /**
     * <p>Amazon S3 bucket where DMS stores the results of this assessment run.</p>
     */
    inline const Aws::String& GetResultLocationBucket() const{ return m_resultLocationBucket; }

    /**
     * <p>Amazon S3 bucket where DMS stores the results of this assessment run.</p>
     */
    inline bool ResultLocationBucketHasBeenSet() const { return m_resultLocationBucketHasBeenSet; }

    /**
     * <p>Amazon S3 bucket where DMS stores the results of this assessment run.</p>
     */
    inline void SetResultLocationBucket(const Aws::String& value) { m_resultLocationBucketHasBeenSet = true; m_resultLocationBucket = value; }

    /**
     * <p>Amazon S3 bucket where DMS stores the results of this assessment run.</p>
     */
    inline void SetResultLocationBucket(Aws::String&& value) { m_resultLocationBucketHasBeenSet = true; m_resultLocationBucket = std::move(value); }

    /**
     * <p>Amazon S3 bucket where DMS stores the results of this assessment run.</p>
     */
    inline void SetResultLocationBucket(const char* value) { m_resultLocationBucketHasBeenSet = true; m_resultLocationBucket.assign(value); }

    /**
     * <p>Amazon S3 bucket where DMS stores the results of this assessment run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultLocationBucket(const Aws::String& value) { SetResultLocationBucket(value); return *this;}

    /**
     * <p>Amazon S3 bucket where DMS stores the results of this assessment run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultLocationBucket(Aws::String&& value) { SetResultLocationBucket(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 bucket where DMS stores the results of this assessment run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultLocationBucket(const char* value) { SetResultLocationBucket(value); return *this;}


    /**
     * <p>Folder in an Amazon S3 bucket where DMS stores the results of this assessment
     * run.</p>
     */
    inline const Aws::String& GetResultLocationFolder() const{ return m_resultLocationFolder; }

    /**
     * <p>Folder in an Amazon S3 bucket where DMS stores the results of this assessment
     * run.</p>
     */
    inline bool ResultLocationFolderHasBeenSet() const { return m_resultLocationFolderHasBeenSet; }

    /**
     * <p>Folder in an Amazon S3 bucket where DMS stores the results of this assessment
     * run.</p>
     */
    inline void SetResultLocationFolder(const Aws::String& value) { m_resultLocationFolderHasBeenSet = true; m_resultLocationFolder = value; }

    /**
     * <p>Folder in an Amazon S3 bucket where DMS stores the results of this assessment
     * run.</p>
     */
    inline void SetResultLocationFolder(Aws::String&& value) { m_resultLocationFolderHasBeenSet = true; m_resultLocationFolder = std::move(value); }

    /**
     * <p>Folder in an Amazon S3 bucket where DMS stores the results of this assessment
     * run.</p>
     */
    inline void SetResultLocationFolder(const char* value) { m_resultLocationFolderHasBeenSet = true; m_resultLocationFolder.assign(value); }

    /**
     * <p>Folder in an Amazon S3 bucket where DMS stores the results of this assessment
     * run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultLocationFolder(const Aws::String& value) { SetResultLocationFolder(value); return *this;}

    /**
     * <p>Folder in an Amazon S3 bucket where DMS stores the results of this assessment
     * run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultLocationFolder(Aws::String&& value) { SetResultLocationFolder(std::move(value)); return *this;}

    /**
     * <p>Folder in an Amazon S3 bucket where DMS stores the results of this assessment
     * run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultLocationFolder(const char* value) { SetResultLocationFolder(value); return *this;}


    /**
     * <p>Encryption mode used to encrypt the assessment run results.</p>
     */
    inline const Aws::String& GetResultEncryptionMode() const{ return m_resultEncryptionMode; }

    /**
     * <p>Encryption mode used to encrypt the assessment run results.</p>
     */
    inline bool ResultEncryptionModeHasBeenSet() const { return m_resultEncryptionModeHasBeenSet; }

    /**
     * <p>Encryption mode used to encrypt the assessment run results.</p>
     */
    inline void SetResultEncryptionMode(const Aws::String& value) { m_resultEncryptionModeHasBeenSet = true; m_resultEncryptionMode = value; }

    /**
     * <p>Encryption mode used to encrypt the assessment run results.</p>
     */
    inline void SetResultEncryptionMode(Aws::String&& value) { m_resultEncryptionModeHasBeenSet = true; m_resultEncryptionMode = std::move(value); }

    /**
     * <p>Encryption mode used to encrypt the assessment run results.</p>
     */
    inline void SetResultEncryptionMode(const char* value) { m_resultEncryptionModeHasBeenSet = true; m_resultEncryptionMode.assign(value); }

    /**
     * <p>Encryption mode used to encrypt the assessment run results.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultEncryptionMode(const Aws::String& value) { SetResultEncryptionMode(value); return *this;}

    /**
     * <p>Encryption mode used to encrypt the assessment run results.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultEncryptionMode(Aws::String&& value) { SetResultEncryptionMode(std::move(value)); return *this;}

    /**
     * <p>Encryption mode used to encrypt the assessment run results.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultEncryptionMode(const char* value) { SetResultEncryptionMode(value); return *this;}


    /**
     * <p>ARN of the KMS encryption key used to encrypt the assessment run results.</p>
     */
    inline const Aws::String& GetResultKmsKeyArn() const{ return m_resultKmsKeyArn; }

    /**
     * <p>ARN of the KMS encryption key used to encrypt the assessment run results.</p>
     */
    inline bool ResultKmsKeyArnHasBeenSet() const { return m_resultKmsKeyArnHasBeenSet; }

    /**
     * <p>ARN of the KMS encryption key used to encrypt the assessment run results.</p>
     */
    inline void SetResultKmsKeyArn(const Aws::String& value) { m_resultKmsKeyArnHasBeenSet = true; m_resultKmsKeyArn = value; }

    /**
     * <p>ARN of the KMS encryption key used to encrypt the assessment run results.</p>
     */
    inline void SetResultKmsKeyArn(Aws::String&& value) { m_resultKmsKeyArnHasBeenSet = true; m_resultKmsKeyArn = std::move(value); }

    /**
     * <p>ARN of the KMS encryption key used to encrypt the assessment run results.</p>
     */
    inline void SetResultKmsKeyArn(const char* value) { m_resultKmsKeyArnHasBeenSet = true; m_resultKmsKeyArn.assign(value); }

    /**
     * <p>ARN of the KMS encryption key used to encrypt the assessment run results.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultKmsKeyArn(const Aws::String& value) { SetResultKmsKeyArn(value); return *this;}

    /**
     * <p>ARN of the KMS encryption key used to encrypt the assessment run results.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultKmsKeyArn(Aws::String&& value) { SetResultKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the KMS encryption key used to encrypt the assessment run results.</p>
     */
    inline ReplicationTaskAssessmentRun& WithResultKmsKeyArn(const char* value) { SetResultKmsKeyArn(value); return *this;}


    /**
     * <p>Unique name of the assessment run.</p>
     */
    inline const Aws::String& GetAssessmentRunName() const{ return m_assessmentRunName; }

    /**
     * <p>Unique name of the assessment run.</p>
     */
    inline bool AssessmentRunNameHasBeenSet() const { return m_assessmentRunNameHasBeenSet; }

    /**
     * <p>Unique name of the assessment run.</p>
     */
    inline void SetAssessmentRunName(const Aws::String& value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName = value; }

    /**
     * <p>Unique name of the assessment run.</p>
     */
    inline void SetAssessmentRunName(Aws::String&& value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName = std::move(value); }

    /**
     * <p>Unique name of the assessment run.</p>
     */
    inline void SetAssessmentRunName(const char* value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName.assign(value); }

    /**
     * <p>Unique name of the assessment run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithAssessmentRunName(const Aws::String& value) { SetAssessmentRunName(value); return *this;}

    /**
     * <p>Unique name of the assessment run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithAssessmentRunName(Aws::String&& value) { SetAssessmentRunName(std::move(value)); return *this;}

    /**
     * <p>Unique name of the assessment run.</p>
     */
    inline ReplicationTaskAssessmentRun& WithAssessmentRunName(const char* value) { SetAssessmentRunName(value); return *this;}

  private:

    Aws::String m_replicationTaskAssessmentRunArn;
    bool m_replicationTaskAssessmentRunArnHasBeenSet = false;

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_replicationTaskAssessmentRunCreationDate;
    bool m_replicationTaskAssessmentRunCreationDateHasBeenSet = false;

    ReplicationTaskAssessmentRunProgress m_assessmentProgress;
    bool m_assessmentProgressHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_resultLocationBucket;
    bool m_resultLocationBucketHasBeenSet = false;

    Aws::String m_resultLocationFolder;
    bool m_resultLocationFolderHasBeenSet = false;

    Aws::String m_resultEncryptionMode;
    bool m_resultEncryptionModeHasBeenSet = false;

    Aws::String m_resultKmsKeyArn;
    bool m_resultKmsKeyArnHasBeenSet = false;

    Aws::String m_assessmentRunName;
    bool m_assessmentRunNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
