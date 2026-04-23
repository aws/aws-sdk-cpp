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
   * <p>Defines a point which a job can resume processing.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JobBookmarkEntry">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API JobBookmarkEntry
  {
  public:
    JobBookmarkEntry();
    JobBookmarkEntry(Aws::Utils::Json::JsonView jsonValue);
    JobBookmarkEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the job in question.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>Name of the job in question.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>Name of the job in question.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>Name of the job in question.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>Name of the job in question.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>Name of the job in question.</p>
     */
    inline JobBookmarkEntry& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>Name of the job in question.</p>
     */
    inline JobBookmarkEntry& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>Name of the job in question.</p>
     */
    inline JobBookmarkEntry& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Version of the job.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>Version of the job.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Version of the job.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version of the job.</p>
     */
    inline JobBookmarkEntry& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>The run ID number.</p>
     */
    inline int GetRun() const{ return m_run; }

    /**
     * <p>The run ID number.</p>
     */
    inline bool RunHasBeenSet() const { return m_runHasBeenSet; }

    /**
     * <p>The run ID number.</p>
     */
    inline void SetRun(int value) { m_runHasBeenSet = true; m_run = value; }

    /**
     * <p>The run ID number.</p>
     */
    inline JobBookmarkEntry& WithRun(int value) { SetRun(value); return *this;}


    /**
     * <p>The attempt ID number.</p>
     */
    inline int GetAttempt() const{ return m_attempt; }

    /**
     * <p>The attempt ID number.</p>
     */
    inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }

    /**
     * <p>The attempt ID number.</p>
     */
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }

    /**
     * <p>The attempt ID number.</p>
     */
    inline JobBookmarkEntry& WithAttempt(int value) { SetAttempt(value); return *this;}


    /**
     * <p>The bookmark itself.</p>
     */
    inline const Aws::String& GetJobBookmark() const{ return m_jobBookmark; }

    /**
     * <p>The bookmark itself.</p>
     */
    inline bool JobBookmarkHasBeenSet() const { return m_jobBookmarkHasBeenSet; }

    /**
     * <p>The bookmark itself.</p>
     */
    inline void SetJobBookmark(const Aws::String& value) { m_jobBookmarkHasBeenSet = true; m_jobBookmark = value; }

    /**
     * <p>The bookmark itself.</p>
     */
    inline void SetJobBookmark(Aws::String&& value) { m_jobBookmarkHasBeenSet = true; m_jobBookmark = std::move(value); }

    /**
     * <p>The bookmark itself.</p>
     */
    inline void SetJobBookmark(const char* value) { m_jobBookmarkHasBeenSet = true; m_jobBookmark.assign(value); }

    /**
     * <p>The bookmark itself.</p>
     */
    inline JobBookmarkEntry& WithJobBookmark(const Aws::String& value) { SetJobBookmark(value); return *this;}

    /**
     * <p>The bookmark itself.</p>
     */
    inline JobBookmarkEntry& WithJobBookmark(Aws::String&& value) { SetJobBookmark(std::move(value)); return *this;}

    /**
     * <p>The bookmark itself.</p>
     */
    inline JobBookmarkEntry& WithJobBookmark(const char* value) { SetJobBookmark(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    int m_version;
    bool m_versionHasBeenSet;

    int m_run;
    bool m_runHasBeenSet;

    int m_attempt;
    bool m_attemptHasBeenSet;

    Aws::String m_jobBookmark;
    bool m_jobBookmarkHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
