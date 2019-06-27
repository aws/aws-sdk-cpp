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
#include <aws/pinpoint/model/ImportJobResource.h>
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
   * <p>Provides information about the status and settings of a job that imports
   * endpoint definitions from one or more files. The files can be stored in an
   * Amazon Simple Storage Service (Amazon S3) bucket or uploaded directly from a
   * computer by using the Amazon Pinpoint console.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ImportJobResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ImportJobResponse
  {
  public:
    ImportJobResponse();
    ImportJobResponse(Aws::Utils::Json::JsonView jsonValue);
    ImportJobResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the application that's associated with the import
     * job.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application that's associated with the import
     * job.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application that's associated with the import
     * job.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application that's associated with the import
     * job.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application that's associated with the import
     * job.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application that's associated with the import
     * job.</p>
     */
    inline ImportJobResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application that's associated with the import
     * job.</p>
     */
    inline ImportJobResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application that's associated with the import
     * job.</p>
     */
    inline ImportJobResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The number of pieces that were processed successfully (completed) by the
     * import job, as of the time of the request.</p>
     */
    inline int GetCompletedPieces() const{ return m_completedPieces; }

    /**
     * <p>The number of pieces that were processed successfully (completed) by the
     * import job, as of the time of the request.</p>
     */
    inline bool CompletedPiecesHasBeenSet() const { return m_completedPiecesHasBeenSet; }

    /**
     * <p>The number of pieces that were processed successfully (completed) by the
     * import job, as of the time of the request.</p>
     */
    inline void SetCompletedPieces(int value) { m_completedPiecesHasBeenSet = true; m_completedPieces = value; }

    /**
     * <p>The number of pieces that were processed successfully (completed) by the
     * import job, as of the time of the request.</p>
     */
    inline ImportJobResponse& WithCompletedPieces(int value) { SetCompletedPieces(value); return *this;}


    /**
     * <p>The date, in ISO 8601 format, when the import job was completed.</p>
     */
    inline const Aws::String& GetCompletionDate() const{ return m_completionDate; }

    /**
     * <p>The date, in ISO 8601 format, when the import job was completed.</p>
     */
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the import job was completed.</p>
     */
    inline void SetCompletionDate(const Aws::String& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the import job was completed.</p>
     */
    inline void SetCompletionDate(Aws::String&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the import job was completed.</p>
     */
    inline void SetCompletionDate(const char* value) { m_completionDateHasBeenSet = true; m_completionDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the import job was completed.</p>
     */
    inline ImportJobResponse& WithCompletionDate(const Aws::String& value) { SetCompletionDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the import job was completed.</p>
     */
    inline ImportJobResponse& WithCompletionDate(Aws::String&& value) { SetCompletionDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the import job was completed.</p>
     */
    inline ImportJobResponse& WithCompletionDate(const char* value) { SetCompletionDate(value); return *this;}


    /**
     * <p>The date, in ISO 8601 format, when the import job was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date, in ISO 8601 format, when the import job was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the import job was created.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the import job was created.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the import job was created.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the import job was created.</p>
     */
    inline ImportJobResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the import job was created.</p>
     */
    inline ImportJobResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the import job was created.</p>
     */
    inline ImportJobResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>The resource settings that apply to the import job.</p>
     */
    inline const ImportJobResource& GetDefinition() const{ return m_definition; }

    /**
     * <p>The resource settings that apply to the import job.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The resource settings that apply to the import job.</p>
     */
    inline void SetDefinition(const ImportJobResource& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The resource settings that apply to the import job.</p>
     */
    inline void SetDefinition(ImportJobResource&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The resource settings that apply to the import job.</p>
     */
    inline ImportJobResponse& WithDefinition(const ImportJobResource& value) { SetDefinition(value); return *this;}

    /**
     * <p>The resource settings that apply to the import job.</p>
     */
    inline ImportJobResponse& WithDefinition(ImportJobResource&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The number of pieces that weren't processed successfully (failed) by the
     * import job, as of the time of the request.</p>
     */
    inline int GetFailedPieces() const{ return m_failedPieces; }

    /**
     * <p>The number of pieces that weren't processed successfully (failed) by the
     * import job, as of the time of the request.</p>
     */
    inline bool FailedPiecesHasBeenSet() const { return m_failedPiecesHasBeenSet; }

    /**
     * <p>The number of pieces that weren't processed successfully (failed) by the
     * import job, as of the time of the request.</p>
     */
    inline void SetFailedPieces(int value) { m_failedPiecesHasBeenSet = true; m_failedPieces = value; }

    /**
     * <p>The number of pieces that weren't processed successfully (failed) by the
     * import job, as of the time of the request.</p>
     */
    inline ImportJobResponse& WithFailedPieces(int value) { SetFailedPieces(value); return *this;}


    /**
     * <p>An array of entries, one for each of the first 100 entries that weren't
     * processed successfully (failed) by the import job, if any.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailures() const{ return m_failures; }

    /**
     * <p>An array of entries, one for each of the first 100 entries that weren't
     * processed successfully (failed) by the import job, if any.</p>
     */
    inline bool FailuresHasBeenSet() const { return m_failuresHasBeenSet; }

    /**
     * <p>An array of entries, one for each of the first 100 entries that weren't
     * processed successfully (failed) by the import job, if any.</p>
     */
    inline void SetFailures(const Aws::Vector<Aws::String>& value) { m_failuresHasBeenSet = true; m_failures = value; }

    /**
     * <p>An array of entries, one for each of the first 100 entries that weren't
     * processed successfully (failed) by the import job, if any.</p>
     */
    inline void SetFailures(Aws::Vector<Aws::String>&& value) { m_failuresHasBeenSet = true; m_failures = std::move(value); }

    /**
     * <p>An array of entries, one for each of the first 100 entries that weren't
     * processed successfully (failed) by the import job, if any.</p>
     */
    inline ImportJobResponse& WithFailures(const Aws::Vector<Aws::String>& value) { SetFailures(value); return *this;}

    /**
     * <p>An array of entries, one for each of the first 100 entries that weren't
     * processed successfully (failed) by the import job, if any.</p>
     */
    inline ImportJobResponse& WithFailures(Aws::Vector<Aws::String>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>An array of entries, one for each of the first 100 entries that weren't
     * processed successfully (failed) by the import job, if any.</p>
     */
    inline ImportJobResponse& AddFailures(const Aws::String& value) { m_failuresHasBeenSet = true; m_failures.push_back(value); return *this; }

    /**
     * <p>An array of entries, one for each of the first 100 entries that weren't
     * processed successfully (failed) by the import job, if any.</p>
     */
    inline ImportJobResponse& AddFailures(Aws::String&& value) { m_failuresHasBeenSet = true; m_failures.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of entries, one for each of the first 100 entries that weren't
     * processed successfully (failed) by the import job, if any.</p>
     */
    inline ImportJobResponse& AddFailures(const char* value) { m_failuresHasBeenSet = true; m_failures.push_back(value); return *this; }


    /**
     * <p>The unique identifier for the import job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the import job.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the import job.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the import job.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the import job.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the import job.</p>
     */
    inline ImportJobResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the import job.</p>
     */
    inline ImportJobResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the import job.</p>
     */
    inline ImportJobResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the import job. The job status is FAILED if Amazon Pinpoint
     * wasn't able to process one or more pieces in the job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status of the import job. The job status is FAILED if Amazon Pinpoint
     * wasn't able to process one or more pieces in the job.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The status of the import job. The job status is FAILED if Amazon Pinpoint
     * wasn't able to process one or more pieces in the job.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The status of the import job. The job status is FAILED if Amazon Pinpoint
     * wasn't able to process one or more pieces in the job.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The status of the import job. The job status is FAILED if Amazon Pinpoint
     * wasn't able to process one or more pieces in the job.</p>
     */
    inline ImportJobResponse& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the import job. The job status is FAILED if Amazon Pinpoint
     * wasn't able to process one or more pieces in the job.</p>
     */
    inline ImportJobResponse& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The total number of endpoint definitions that weren't processed successfully
     * (failed) by the import job, typically because an error, such as a syntax error,
     * occurred.</p>
     */
    inline int GetTotalFailures() const{ return m_totalFailures; }

    /**
     * <p>The total number of endpoint definitions that weren't processed successfully
     * (failed) by the import job, typically because an error, such as a syntax error,
     * occurred.</p>
     */
    inline bool TotalFailuresHasBeenSet() const { return m_totalFailuresHasBeenSet; }

    /**
     * <p>The total number of endpoint definitions that weren't processed successfully
     * (failed) by the import job, typically because an error, such as a syntax error,
     * occurred.</p>
     */
    inline void SetTotalFailures(int value) { m_totalFailuresHasBeenSet = true; m_totalFailures = value; }

    /**
     * <p>The total number of endpoint definitions that weren't processed successfully
     * (failed) by the import job, typically because an error, such as a syntax error,
     * occurred.</p>
     */
    inline ImportJobResponse& WithTotalFailures(int value) { SetTotalFailures(value); return *this;}


    /**
     * <p>The total number of pieces that must be processed to complete the import job.
     * Each piece consists of an approximately equal portion of the endpoint
     * definitions that are part of the import job.</p>
     */
    inline int GetTotalPieces() const{ return m_totalPieces; }

    /**
     * <p>The total number of pieces that must be processed to complete the import job.
     * Each piece consists of an approximately equal portion of the endpoint
     * definitions that are part of the import job.</p>
     */
    inline bool TotalPiecesHasBeenSet() const { return m_totalPiecesHasBeenSet; }

    /**
     * <p>The total number of pieces that must be processed to complete the import job.
     * Each piece consists of an approximately equal portion of the endpoint
     * definitions that are part of the import job.</p>
     */
    inline void SetTotalPieces(int value) { m_totalPiecesHasBeenSet = true; m_totalPieces = value; }

    /**
     * <p>The total number of pieces that must be processed to complete the import job.
     * Each piece consists of an approximately equal portion of the endpoint
     * definitions that are part of the import job.</p>
     */
    inline ImportJobResponse& WithTotalPieces(int value) { SetTotalPieces(value); return *this;}


    /**
     * <p>The total number of endpoint definitions that were processed by the import
     * job.</p>
     */
    inline int GetTotalProcessed() const{ return m_totalProcessed; }

    /**
     * <p>The total number of endpoint definitions that were processed by the import
     * job.</p>
     */
    inline bool TotalProcessedHasBeenSet() const { return m_totalProcessedHasBeenSet; }

    /**
     * <p>The total number of endpoint definitions that were processed by the import
     * job.</p>
     */
    inline void SetTotalProcessed(int value) { m_totalProcessedHasBeenSet = true; m_totalProcessed = value; }

    /**
     * <p>The total number of endpoint definitions that were processed by the import
     * job.</p>
     */
    inline ImportJobResponse& WithTotalProcessed(int value) { SetTotalProcessed(value); return *this;}


    /**
     * <p>The job type. This value is IMPORT for import jobs.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The job type. This value is IMPORT for import jobs.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The job type. This value is IMPORT for import jobs.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The job type. This value is IMPORT for import jobs.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The job type. This value is IMPORT for import jobs.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The job type. This value is IMPORT for import jobs.</p>
     */
    inline ImportJobResponse& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The job type. This value is IMPORT for import jobs.</p>
     */
    inline ImportJobResponse& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The job type. This value is IMPORT for import jobs.</p>
     */
    inline ImportJobResponse& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    int m_completedPieces;
    bool m_completedPiecesHasBeenSet;

    Aws::String m_completionDate;
    bool m_completionDateHasBeenSet;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;

    ImportJobResource m_definition;
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
