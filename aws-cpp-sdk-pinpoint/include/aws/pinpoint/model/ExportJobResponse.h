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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/ExportJobResource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/JobStatus.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Export job response.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ExportJobResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ExportJobResponse
  {
  public:
    ExportJobResponse();
    ExportJobResponse(Aws::Utils::Json::JsonView jsonValue);
    ExportJobResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The unique ID of the application associated with the export job.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The unique ID of the application associated with the export job.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The unique ID of the application associated with the export job.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The unique ID of the application associated with the export job.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The unique ID of the application associated with the export job.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The unique ID of the application associated with the export job.
     */
    inline ExportJobResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The unique ID of the application associated with the export job.
     */
    inline ExportJobResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The unique ID of the application associated with the export job.
     */
    inline ExportJobResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The number of pieces that have successfully completed as of the time of the
     * request.
     */
    inline int GetCompletedPieces() const{ return m_completedPieces; }

    /**
     * The number of pieces that have successfully completed as of the time of the
     * request.
     */
    inline bool CompletedPiecesHasBeenSet() const { return m_completedPiecesHasBeenSet; }

    /**
     * The number of pieces that have successfully completed as of the time of the
     * request.
     */
    inline void SetCompletedPieces(int value) { m_completedPiecesHasBeenSet = true; m_completedPieces = value; }

    /**
     * The number of pieces that have successfully completed as of the time of the
     * request.
     */
    inline ExportJobResponse& WithCompletedPieces(int value) { SetCompletedPieces(value); return *this;}


    /**
     * The date the job completed in ISO 8601 format.
     */
    inline const Aws::String& GetCompletionDate() const{ return m_completionDate; }

    /**
     * The date the job completed in ISO 8601 format.
     */
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }

    /**
     * The date the job completed in ISO 8601 format.
     */
    inline void SetCompletionDate(const Aws::String& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }

    /**
     * The date the job completed in ISO 8601 format.
     */
    inline void SetCompletionDate(Aws::String&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }

    /**
     * The date the job completed in ISO 8601 format.
     */
    inline void SetCompletionDate(const char* value) { m_completionDateHasBeenSet = true; m_completionDate.assign(value); }

    /**
     * The date the job completed in ISO 8601 format.
     */
    inline ExportJobResponse& WithCompletionDate(const Aws::String& value) { SetCompletionDate(value); return *this;}

    /**
     * The date the job completed in ISO 8601 format.
     */
    inline ExportJobResponse& WithCompletionDate(Aws::String&& value) { SetCompletionDate(std::move(value)); return *this;}

    /**
     * The date the job completed in ISO 8601 format.
     */
    inline ExportJobResponse& WithCompletionDate(const char* value) { SetCompletionDate(value); return *this;}


    /**
     * The date the job was created in ISO 8601 format.
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * The date the job was created in ISO 8601 format.
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * The date the job was created in ISO 8601 format.
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * The date the job was created in ISO 8601 format.
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * The date the job was created in ISO 8601 format.
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * The date the job was created in ISO 8601 format.
     */
    inline ExportJobResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * The date the job was created in ISO 8601 format.
     */
    inline ExportJobResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * The date the job was created in ISO 8601 format.
     */
    inline ExportJobResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * The export job settings.
     */
    inline const ExportJobResource& GetDefinition() const{ return m_definition; }

    /**
     * The export job settings.
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * The export job settings.
     */
    inline void SetDefinition(const ExportJobResource& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * The export job settings.
     */
    inline void SetDefinition(ExportJobResource&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * The export job settings.
     */
    inline ExportJobResponse& WithDefinition(const ExportJobResource& value) { SetDefinition(value); return *this;}

    /**
     * The export job settings.
     */
    inline ExportJobResponse& WithDefinition(ExportJobResource&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * The number of pieces that failed to be processed as of the time of the request.
     */
    inline int GetFailedPieces() const{ return m_failedPieces; }

    /**
     * The number of pieces that failed to be processed as of the time of the request.
     */
    inline bool FailedPiecesHasBeenSet() const { return m_failedPiecesHasBeenSet; }

    /**
     * The number of pieces that failed to be processed as of the time of the request.
     */
    inline void SetFailedPieces(int value) { m_failedPiecesHasBeenSet = true; m_failedPieces = value; }

    /**
     * The number of pieces that failed to be processed as of the time of the request.
     */
    inline ExportJobResponse& WithFailedPieces(int value) { SetFailedPieces(value); return *this;}


    /**
     * Provides up to 100 of the first failed entries for the job, if any exist.
     */
    inline const Aws::Vector<Aws::String>& GetFailures() const{ return m_failures; }

    /**
     * Provides up to 100 of the first failed entries for the job, if any exist.
     */
    inline bool FailuresHasBeenSet() const { return m_failuresHasBeenSet; }

    /**
     * Provides up to 100 of the first failed entries for the job, if any exist.
     */
    inline void SetFailures(const Aws::Vector<Aws::String>& value) { m_failuresHasBeenSet = true; m_failures = value; }

    /**
     * Provides up to 100 of the first failed entries for the job, if any exist.
     */
    inline void SetFailures(Aws::Vector<Aws::String>&& value) { m_failuresHasBeenSet = true; m_failures = std::move(value); }

    /**
     * Provides up to 100 of the first failed entries for the job, if any exist.
     */
    inline ExportJobResponse& WithFailures(const Aws::Vector<Aws::String>& value) { SetFailures(value); return *this;}

    /**
     * Provides up to 100 of the first failed entries for the job, if any exist.
     */
    inline ExportJobResponse& WithFailures(Aws::Vector<Aws::String>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * Provides up to 100 of the first failed entries for the job, if any exist.
     */
    inline ExportJobResponse& AddFailures(const Aws::String& value) { m_failuresHasBeenSet = true; m_failures.push_back(value); return *this; }

    /**
     * Provides up to 100 of the first failed entries for the job, if any exist.
     */
    inline ExportJobResponse& AddFailures(Aws::String&& value) { m_failuresHasBeenSet = true; m_failures.push_back(std::move(value)); return *this; }

    /**
     * Provides up to 100 of the first failed entries for the job, if any exist.
     */
    inline ExportJobResponse& AddFailures(const char* value) { m_failuresHasBeenSet = true; m_failures.push_back(value); return *this; }


    /**
     * The unique ID of the job.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique ID of the job.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The unique ID of the job.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique ID of the job.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique ID of the job.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique ID of the job.
     */
    inline ExportJobResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique ID of the job.
     */
    inline ExportJobResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique ID of the job.
     */
    inline ExportJobResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The status of the job.
Valid values: CREATED, INITIALIZING, PROCESSING,
     * COMPLETING, COMPLETED, FAILING, FAILED

The job status is FAILED if one or more
     * pieces failed.
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * The status of the job.
Valid values: CREATED, INITIALIZING, PROCESSING,
     * COMPLETING, COMPLETED, FAILING, FAILED

The job status is FAILED if one or more
     * pieces failed.
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * The status of the job.
Valid values: CREATED, INITIALIZING, PROCESSING,
     * COMPLETING, COMPLETED, FAILING, FAILED

The job status is FAILED if one or more
     * pieces failed.
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * The status of the job.
Valid values: CREATED, INITIALIZING, PROCESSING,
     * COMPLETING, COMPLETED, FAILING, FAILED

The job status is FAILED if one or more
     * pieces failed.
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * The status of the job.
Valid values: CREATED, INITIALIZING, PROCESSING,
     * COMPLETING, COMPLETED, FAILING, FAILED

The job status is FAILED if one or more
     * pieces failed.
     */
    inline ExportJobResponse& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * The status of the job.
Valid values: CREATED, INITIALIZING, PROCESSING,
     * COMPLETING, COMPLETED, FAILING, FAILED

The job status is FAILED if one or more
     * pieces failed.
     */
    inline ExportJobResponse& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * The number of endpoints that were not processed; for example, because of syntax
     * errors.
     */
    inline int GetTotalFailures() const{ return m_totalFailures; }

    /**
     * The number of endpoints that were not processed; for example, because of syntax
     * errors.
     */
    inline bool TotalFailuresHasBeenSet() const { return m_totalFailuresHasBeenSet; }

    /**
     * The number of endpoints that were not processed; for example, because of syntax
     * errors.
     */
    inline void SetTotalFailures(int value) { m_totalFailuresHasBeenSet = true; m_totalFailures = value; }

    /**
     * The number of endpoints that were not processed; for example, because of syntax
     * errors.
     */
    inline ExportJobResponse& WithTotalFailures(int value) { SetTotalFailures(value); return *this;}


    /**
     * The total number of pieces that must be processed to finish the job. Each piece
     * is an approximately equal portion of the endpoints.
     */
    inline int GetTotalPieces() const{ return m_totalPieces; }

    /**
     * The total number of pieces that must be processed to finish the job. Each piece
     * is an approximately equal portion of the endpoints.
     */
    inline bool TotalPiecesHasBeenSet() const { return m_totalPiecesHasBeenSet; }

    /**
     * The total number of pieces that must be processed to finish the job. Each piece
     * is an approximately equal portion of the endpoints.
     */
    inline void SetTotalPieces(int value) { m_totalPiecesHasBeenSet = true; m_totalPieces = value; }

    /**
     * The total number of pieces that must be processed to finish the job. Each piece
     * is an approximately equal portion of the endpoints.
     */
    inline ExportJobResponse& WithTotalPieces(int value) { SetTotalPieces(value); return *this;}


    /**
     * The number of endpoints that were processed by the job.
     */
    inline int GetTotalProcessed() const{ return m_totalProcessed; }

    /**
     * The number of endpoints that were processed by the job.
     */
    inline bool TotalProcessedHasBeenSet() const { return m_totalProcessedHasBeenSet; }

    /**
     * The number of endpoints that were processed by the job.
     */
    inline void SetTotalProcessed(int value) { m_totalProcessedHasBeenSet = true; m_totalProcessed = value; }

    /**
     * The number of endpoints that were processed by the job.
     */
    inline ExportJobResponse& WithTotalProcessed(int value) { SetTotalProcessed(value); return *this;}


    /**
     * The job type. Will be 'EXPORT'.
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * The job type. Will be 'EXPORT'.
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * The job type. Will be 'EXPORT'.
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * The job type. Will be 'EXPORT'.
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * The job type. Will be 'EXPORT'.
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * The job type. Will be 'EXPORT'.
     */
    inline ExportJobResponse& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * The job type. Will be 'EXPORT'.
     */
    inline ExportJobResponse& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * The job type. Will be 'EXPORT'.
     */
    inline ExportJobResponse& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    int m_completedPieces;
    bool m_completedPiecesHasBeenSet;

    Aws::String m_completionDate;
    bool m_completionDateHasBeenSet;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;

    ExportJobResource m_definition;
    bool m_definitionHasBeenSet;

    int m_failedPieces;
    bool m_failedPiecesHasBeenSet;

    Aws::Vector<Aws::String> m_failures;
    bool m_failuresHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet;

    int m_totalFailures;
    bool m_totalFailuresHasBeenSet;

    int m_totalPieces;
    bool m_totalPiecesHasBeenSet;

    int m_totalProcessed;
    bool m_totalProcessedHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
