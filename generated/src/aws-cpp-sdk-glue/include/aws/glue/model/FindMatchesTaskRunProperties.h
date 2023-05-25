/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies configuration properties for a Find Matches task run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FindMatchesTaskRunProperties">AWS
   * API Reference</a></p>
   */
  class FindMatchesTaskRunProperties
  {
  public:
    AWS_GLUE_API FindMatchesTaskRunProperties();
    AWS_GLUE_API FindMatchesTaskRunProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FindMatchesTaskRunProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job ID for the Find Matches task run.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID for the Find Matches task run.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID for the Find Matches task run.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID for the Find Matches task run.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID for the Find Matches task run.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID for the Find Matches task run.</p>
     */
    inline FindMatchesTaskRunProperties& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID for the Find Matches task run.</p>
     */
    inline FindMatchesTaskRunProperties& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID for the Find Matches task run.</p>
     */
    inline FindMatchesTaskRunProperties& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name assigned to the job for the Find Matches task run.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name assigned to the job for the Find Matches task run.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name assigned to the job for the Find Matches task run.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name assigned to the job for the Find Matches task run.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name assigned to the job for the Find Matches task run.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name assigned to the job for the Find Matches task run.</p>
     */
    inline FindMatchesTaskRunProperties& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name assigned to the job for the Find Matches task run.</p>
     */
    inline FindMatchesTaskRunProperties& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name assigned to the job for the Find Matches task run.</p>
     */
    inline FindMatchesTaskRunProperties& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The job run ID for the Find Matches task run.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The job run ID for the Find Matches task run.</p>
     */
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }

    /**
     * <p>The job run ID for the Find Matches task run.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }

    /**
     * <p>The job run ID for the Find Matches task run.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }

    /**
     * <p>The job run ID for the Find Matches task run.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }

    /**
     * <p>The job run ID for the Find Matches task run.</p>
     */
    inline FindMatchesTaskRunProperties& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The job run ID for the Find Matches task run.</p>
     */
    inline FindMatchesTaskRunProperties& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The job run ID for the Find Matches task run.</p>
     */
    inline FindMatchesTaskRunProperties& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
