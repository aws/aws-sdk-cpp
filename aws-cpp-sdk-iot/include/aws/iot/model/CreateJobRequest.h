/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/PresignedUrlConfig.h>
#include <aws/iot/model/TargetSelection.h>
#include <aws/iot/model/JobExecutionsRolloutConfig.h>
#include <aws/iot/model/AbortConfig.h>
#include <aws/iot/model/TimeoutConfig.h>
#include <aws/iot/model/JobExecutionsRetryConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/SchedulingConfig.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>A job identifier which must be unique for your Amazon Web Services account.
     * We recommend using a UUID. Alpha-numeric characters, "-" and "_" are valid for
     * use here.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>A job identifier which must be unique for your Amazon Web Services account.
     * We recommend using a UUID. Alpha-numeric characters, "-" and "_" are valid for
     * use here.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>A job identifier which must be unique for your Amazon Web Services account.
     * We recommend using a UUID. Alpha-numeric characters, "-" and "_" are valid for
     * use here.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>A job identifier which must be unique for your Amazon Web Services account.
     * We recommend using a UUID. Alpha-numeric characters, "-" and "_" are valid for
     * use here.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>A job identifier which must be unique for your Amazon Web Services account.
     * We recommend using a UUID. Alpha-numeric characters, "-" and "_" are valid for
     * use here.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>A job identifier which must be unique for your Amazon Web Services account.
     * We recommend using a UUID. Alpha-numeric characters, "-" and "_" are valid for
     * use here.</p>
     */
    inline CreateJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>A job identifier which must be unique for your Amazon Web Services account.
     * We recommend using a UUID. Alpha-numeric characters, "-" and "_" are valid for
     * use here.</p>
     */
    inline CreateJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>A job identifier which must be unique for your Amazon Web Services account.
     * We recommend using a UUID. Alpha-numeric characters, "-" and "_" are valid for
     * use here.</p>
     */
    inline CreateJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline CreateJobRequest& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline CreateJobRequest& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline CreateJobRequest& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline CreateJobRequest& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline CreateJobRequest& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }


    /**
     * <p>An S3 link to the job document. Required if you don't specify a value for
     * <code>document</code>.</p>  <p>If the job document resides in an S3
     * bucket, you must use a placeholder link when specifying the document.</p> <p>The
     * placeholder link is of the following form:</p> <p>
     * <code>${aws:iot:s3-presigned-url:https://s3.amazonaws.com/<i>bucket</i>/<i>key</i>}</code>
     * </p> <p>where <i>bucket</i> is your bucket name and <i>key</i> is the object in
     * the bucket to which you are linking.</p> 
     */
    inline const Aws::String& GetDocumentSource() const{ return m_documentSource; }

    /**
     * <p>An S3 link to the job document. Required if you don't specify a value for
     * <code>document</code>.</p>  <p>If the job document resides in an S3
     * bucket, you must use a placeholder link when specifying the document.</p> <p>The
     * placeholder link is of the following form:</p> <p>
     * <code>${aws:iot:s3-presigned-url:https://s3.amazonaws.com/<i>bucket</i>/<i>key</i>}</code>
     * </p> <p>where <i>bucket</i> is your bucket name and <i>key</i> is the object in
     * the bucket to which you are linking.</p> 
     */
    inline bool DocumentSourceHasBeenSet() const { return m_documentSourceHasBeenSet; }

    /**
     * <p>An S3 link to the job document. Required if you don't specify a value for
     * <code>document</code>.</p>  <p>If the job document resides in an S3
     * bucket, you must use a placeholder link when specifying the document.</p> <p>The
     * placeholder link is of the following form:</p> <p>
     * <code>${aws:iot:s3-presigned-url:https://s3.amazonaws.com/<i>bucket</i>/<i>key</i>}</code>
     * </p> <p>where <i>bucket</i> is your bucket name and <i>key</i> is the object in
     * the bucket to which you are linking.</p> 
     */
    inline void SetDocumentSource(const Aws::String& value) { m_documentSourceHasBeenSet = true; m_documentSource = value; }

    /**
     * <p>An S3 link to the job document. Required if you don't specify a value for
     * <code>document</code>.</p>  <p>If the job document resides in an S3
     * bucket, you must use a placeholder link when specifying the document.</p> <p>The
     * placeholder link is of the following form:</p> <p>
     * <code>${aws:iot:s3-presigned-url:https://s3.amazonaws.com/<i>bucket</i>/<i>key</i>}</code>
     * </p> <p>where <i>bucket</i> is your bucket name and <i>key</i> is the object in
     * the bucket to which you are linking.</p> 
     */
    inline void SetDocumentSource(Aws::String&& value) { m_documentSourceHasBeenSet = true; m_documentSource = std::move(value); }

    /**
     * <p>An S3 link to the job document. Required if you don't specify a value for
     * <code>document</code>.</p>  <p>If the job document resides in an S3
     * bucket, you must use a placeholder link when specifying the document.</p> <p>The
     * placeholder link is of the following form:</p> <p>
     * <code>${aws:iot:s3-presigned-url:https://s3.amazonaws.com/<i>bucket</i>/<i>key</i>}</code>
     * </p> <p>where <i>bucket</i> is your bucket name and <i>key</i> is the object in
     * the bucket to which you are linking.</p> 
     */
    inline void SetDocumentSource(const char* value) { m_documentSourceHasBeenSet = true; m_documentSource.assign(value); }

    /**
     * <p>An S3 link to the job document. Required if you don't specify a value for
     * <code>document</code>.</p>  <p>If the job document resides in an S3
     * bucket, you must use a placeholder link when specifying the document.</p> <p>The
     * placeholder link is of the following form:</p> <p>
     * <code>${aws:iot:s3-presigned-url:https://s3.amazonaws.com/<i>bucket</i>/<i>key</i>}</code>
     * </p> <p>where <i>bucket</i> is your bucket name and <i>key</i> is the object in
     * the bucket to which you are linking.</p> 
     */
    inline CreateJobRequest& WithDocumentSource(const Aws::String& value) { SetDocumentSource(value); return *this;}

    /**
     * <p>An S3 link to the job document. Required if you don't specify a value for
     * <code>document</code>.</p>  <p>If the job document resides in an S3
     * bucket, you must use a placeholder link when specifying the document.</p> <p>The
     * placeholder link is of the following form:</p> <p>
     * <code>${aws:iot:s3-presigned-url:https://s3.amazonaws.com/<i>bucket</i>/<i>key</i>}</code>
     * </p> <p>where <i>bucket</i> is your bucket name and <i>key</i> is the object in
     * the bucket to which you are linking.</p> 
     */
    inline CreateJobRequest& WithDocumentSource(Aws::String&& value) { SetDocumentSource(std::move(value)); return *this;}

    /**
     * <p>An S3 link to the job document. Required if you don't specify a value for
     * <code>document</code>.</p>  <p>If the job document resides in an S3
     * bucket, you must use a placeholder link when specifying the document.</p> <p>The
     * placeholder link is of the following form:</p> <p>
     * <code>${aws:iot:s3-presigned-url:https://s3.amazonaws.com/<i>bucket</i>/<i>key</i>}</code>
     * </p> <p>where <i>bucket</i> is your bucket name and <i>key</i> is the object in
     * the bucket to which you are linking.</p> 
     */
    inline CreateJobRequest& WithDocumentSource(const char* value) { SetDocumentSource(value); return *this;}


    /**
     * <p>The job document. Required if you don't specify a value for
     * <code>documentSource</code>.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>The job document. Required if you don't specify a value for
     * <code>documentSource</code>.</p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>The job document. Required if you don't specify a value for
     * <code>documentSource</code>.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The job document. Required if you don't specify a value for
     * <code>documentSource</code>.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The job document. Required if you don't specify a value for
     * <code>documentSource</code>.</p>
     */
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }

    /**
     * <p>The job document. Required if you don't specify a value for
     * <code>documentSource</code>.</p>
     */
    inline CreateJobRequest& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>The job document. Required if you don't specify a value for
     * <code>documentSource</code>.</p>
     */
    inline CreateJobRequest& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>The job document. Required if you don't specify a value for
     * <code>documentSource</code>.</p>
     */
    inline CreateJobRequest& WithDocument(const char* value) { SetDocument(value); return *this;}


    /**
     * <p>A short text description of the job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A short text description of the job.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A short text description of the job.</p>
     */
    inline CreateJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A short text description of the job.</p>
     */
    inline CreateJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A short text description of the job.</p>
     */
    inline CreateJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const{ return m_presignedUrlConfig; }

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline bool PresignedUrlConfigHasBeenSet() const { return m_presignedUrlConfigHasBeenSet; }

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline void SetPresignedUrlConfig(const PresignedUrlConfig& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = value; }

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline void SetPresignedUrlConfig(PresignedUrlConfig&& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = std::move(value); }

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline CreateJobRequest& WithPresignedUrlConfig(const PresignedUrlConfig& value) { SetPresignedUrlConfig(value); return *this;}

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline CreateJobRequest& WithPresignedUrlConfig(PresignedUrlConfig&& value) { SetPresignedUrlConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>  <p>We recommend that you use continuous jobs
     * instead of snapshot jobs for dynamic thing group targets. By using continuous
     * jobs, devices that join the group receive the job execution even after the job
     * has been created.</p> 
     */
    inline const TargetSelection& GetTargetSelection() const{ return m_targetSelection; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>  <p>We recommend that you use continuous jobs
     * instead of snapshot jobs for dynamic thing group targets. By using continuous
     * jobs, devices that join the group receive the job execution even after the job
     * has been created.</p> 
     */
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>  <p>We recommend that you use continuous jobs
     * instead of snapshot jobs for dynamic thing group targets. By using continuous
     * jobs, devices that join the group receive the job execution even after the job
     * has been created.</p> 
     */
    inline void SetTargetSelection(const TargetSelection& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>  <p>We recommend that you use continuous jobs
     * instead of snapshot jobs for dynamic thing group targets. By using continuous
     * jobs, devices that join the group receive the job execution even after the job
     * has been created.</p> 
     */
    inline void SetTargetSelection(TargetSelection&& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = std::move(value); }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>  <p>We recommend that you use continuous jobs
     * instead of snapshot jobs for dynamic thing group targets. By using continuous
     * jobs, devices that join the group receive the job execution even after the job
     * has been created.</p> 
     */
    inline CreateJobRequest& WithTargetSelection(const TargetSelection& value) { SetTargetSelection(value); return *this;}

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>  <p>We recommend that you use continuous jobs
     * instead of snapshot jobs for dynamic thing group targets. By using continuous
     * jobs, devices that join the group receive the job execution even after the job
     * has been created.</p> 
     */
    inline CreateJobRequest& WithTargetSelection(TargetSelection&& value) { SetTargetSelection(std::move(value)); return *this;}


    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const{ return m_jobExecutionsRolloutConfig; }

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline bool JobExecutionsRolloutConfigHasBeenSet() const { return m_jobExecutionsRolloutConfigHasBeenSet; }

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline void SetJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = value; }

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::move(value); }

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline CreateJobRequest& WithJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { SetJobExecutionsRolloutConfig(value); return *this;}

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline CreateJobRequest& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { SetJobExecutionsRolloutConfig(std::move(value)); return *this;}


    /**
     * <p>Allows you to create the criteria to abort a job.</p>
     */
    inline const AbortConfig& GetAbortConfig() const{ return m_abortConfig; }

    /**
     * <p>Allows you to create the criteria to abort a job.</p>
     */
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }

    /**
     * <p>Allows you to create the criteria to abort a job.</p>
     */
    inline void SetAbortConfig(const AbortConfig& value) { m_abortConfigHasBeenSet = true; m_abortConfig = value; }

    /**
     * <p>Allows you to create the criteria to abort a job.</p>
     */
    inline void SetAbortConfig(AbortConfig&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::move(value); }

    /**
     * <p>Allows you to create the criteria to abort a job.</p>
     */
    inline CreateJobRequest& WithAbortConfig(const AbortConfig& value) { SetAbortConfig(value); return *this;}

    /**
     * <p>Allows you to create the criteria to abort a job.</p>
     */
    inline CreateJobRequest& WithAbortConfig(AbortConfig&& value) { SetAbortConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline const TimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline void SetTimeoutConfig(const TimeoutConfig& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = value; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline void SetTimeoutConfig(TimeoutConfig&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::move(value); }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline CreateJobRequest& WithTimeoutConfig(const TimeoutConfig& value) { SetTimeoutConfig(value); return *this;}

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline CreateJobRequest& WithTimeoutConfig(TimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}


    /**
     * <p>Metadata which can be used to manage the job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the job.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the job.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the job.</p>
     */
    inline CreateJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the job.</p>
     */
    inline CreateJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the job.</p>
     */
    inline CreateJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the job.</p>
     */
    inline CreateJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline CreateJobRequest& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline CreateJobRequest& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline CreateJobRequest& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}


    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const{ return m_jobTemplateArn; }

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline bool JobTemplateArnHasBeenSet() const { return m_jobTemplateArnHasBeenSet; }

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline void SetJobTemplateArn(const Aws::String& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = value; }

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline void SetJobTemplateArn(Aws::String&& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = std::move(value); }

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline void SetJobTemplateArn(const char* value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn.assign(value); }

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline CreateJobRequest& WithJobTemplateArn(const Aws::String& value) { SetJobTemplateArn(value); return *this;}

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline CreateJobRequest& WithJobTemplateArn(Aws::String&& value) { SetJobTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline CreateJobRequest& WithJobTemplateArn(const char* value) { SetJobTemplateArn(value); return *this;}


    /**
     * <p>Allows you to create the criteria to retry a job.</p>
     */
    inline const JobExecutionsRetryConfig& GetJobExecutionsRetryConfig() const{ return m_jobExecutionsRetryConfig; }

    /**
     * <p>Allows you to create the criteria to retry a job.</p>
     */
    inline bool JobExecutionsRetryConfigHasBeenSet() const { return m_jobExecutionsRetryConfigHasBeenSet; }

    /**
     * <p>Allows you to create the criteria to retry a job.</p>
     */
    inline void SetJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = value; }

    /**
     * <p>Allows you to create the criteria to retry a job.</p>
     */
    inline void SetJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = std::move(value); }

    /**
     * <p>Allows you to create the criteria to retry a job.</p>
     */
    inline CreateJobRequest& WithJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { SetJobExecutionsRetryConfig(value); return *this;}

    /**
     * <p>Allows you to create the criteria to retry a job.</p>
     */
    inline CreateJobRequest& WithJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { SetJobExecutionsRetryConfig(std::move(value)); return *this;}


    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDocumentParameters() const{ return m_documentParameters; }

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline bool DocumentParametersHasBeenSet() const { return m_documentParametersHasBeenSet; }

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline void SetDocumentParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_documentParametersHasBeenSet = true; m_documentParameters = value; }

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline void SetDocumentParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_documentParametersHasBeenSet = true; m_documentParameters = std::move(value); }

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline CreateJobRequest& WithDocumentParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetDocumentParameters(value); return *this;}

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline CreateJobRequest& WithDocumentParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetDocumentParameters(std::move(value)); return *this;}

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline CreateJobRequest& AddDocumentParameters(const Aws::String& key, const Aws::String& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, value); return *this; }

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline CreateJobRequest& AddDocumentParameters(Aws::String&& key, const Aws::String& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline CreateJobRequest& AddDocumentParameters(const Aws::String& key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline CreateJobRequest& AddDocumentParameters(Aws::String&& key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline CreateJobRequest& AddDocumentParameters(const char* key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline CreateJobRequest& AddDocumentParameters(Aws::String&& key, const char* value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline CreateJobRequest& AddDocumentParameters(const char* key, const char* value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, value); return *this; }


    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline const SchedulingConfig& GetSchedulingConfig() const{ return m_schedulingConfig; }

    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline bool SchedulingConfigHasBeenSet() const { return m_schedulingConfigHasBeenSet; }

    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline void SetSchedulingConfig(const SchedulingConfig& value) { m_schedulingConfigHasBeenSet = true; m_schedulingConfig = value; }

    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline void SetSchedulingConfig(SchedulingConfig&& value) { m_schedulingConfigHasBeenSet = true; m_schedulingConfig = std::move(value); }

    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline CreateJobRequest& WithSchedulingConfig(const SchedulingConfig& value) { SetSchedulingConfig(value); return *this;}

    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline CreateJobRequest& WithSchedulingConfig(SchedulingConfig&& value) { SetSchedulingConfig(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_documentSource;
    bool m_documentSourceHasBeenSet = false;

    Aws::String m_document;
    bool m_documentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PresignedUrlConfig m_presignedUrlConfig;
    bool m_presignedUrlConfigHasBeenSet = false;

    TargetSelection m_targetSelection;
    bool m_targetSelectionHasBeenSet = false;

    JobExecutionsRolloutConfig m_jobExecutionsRolloutConfig;
    bool m_jobExecutionsRolloutConfigHasBeenSet = false;

    AbortConfig m_abortConfig;
    bool m_abortConfigHasBeenSet = false;

    TimeoutConfig m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;

    Aws::String m_jobTemplateArn;
    bool m_jobTemplateArnHasBeenSet = false;

    JobExecutionsRetryConfig m_jobExecutionsRetryConfig;
    bool m_jobExecutionsRetryConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_documentParameters;
    bool m_documentParametersHasBeenSet = false;

    SchedulingConfig m_schedulingConfig;
    bool m_schedulingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
