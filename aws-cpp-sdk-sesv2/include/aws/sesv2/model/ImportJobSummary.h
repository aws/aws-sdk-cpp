/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ImportDestination.h>
#include <aws/sesv2/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>A summary of the import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ImportJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API ImportJobSummary
  {
  public:
    ImportJobSummary();
    ImportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    ImportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    
    inline ImportJobSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    
    inline ImportJobSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    
    inline ImportJobSummary& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const ImportDestination& GetImportDestination() const{ return m_importDestination; }

    
    inline bool ImportDestinationHasBeenSet() const { return m_importDestinationHasBeenSet; }

    
    inline void SetImportDestination(const ImportDestination& value) { m_importDestinationHasBeenSet = true; m_importDestination = value; }

    
    inline void SetImportDestination(ImportDestination&& value) { m_importDestinationHasBeenSet = true; m_importDestination = std::move(value); }

    
    inline ImportJobSummary& WithImportDestination(const ImportDestination& value) { SetImportDestination(value); return *this;}

    
    inline ImportJobSummary& WithImportDestination(ImportDestination&& value) { SetImportDestination(std::move(value)); return *this;}


    
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    
    inline ImportJobSummary& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    
    inline ImportJobSummary& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time when the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The date and time when the import job was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The date and time when the import job was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The date and time when the import job was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The date and time when the import job was created.</p>
     */
    inline ImportJobSummary& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The date and time when the import job was created.</p>
     */
    inline ImportJobSummary& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    ImportDestination m_importDestination;
    bool m_importDestinationHasBeenSet;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
