﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/Options.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/TaskSchedule.h>
#include <aws/datasync/model/FilterRule.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>CreateTaskRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateTaskRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API CreateTaskRequest : public DataSyncRequest
  {
  public:
    CreateTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTask"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the source location for the task.</p>
     */
    inline const Aws::String& GetSourceLocationArn() const{ return m_sourceLocationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source location for the task.</p>
     */
    inline bool SourceLocationArnHasBeenSet() const { return m_sourceLocationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source location for the task.</p>
     */
    inline void SetSourceLocationArn(const Aws::String& value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source location for the task.</p>
     */
    inline void SetSourceLocationArn(Aws::String&& value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source location for the task.</p>
     */
    inline void SetSourceLocationArn(const char* value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source location for the task.</p>
     */
    inline CreateTaskRequest& WithSourceLocationArn(const Aws::String& value) { SetSourceLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source location for the task.</p>
     */
    inline CreateTaskRequest& WithSourceLocationArn(Aws::String&& value) { SetSourceLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source location for the task.</p>
     */
    inline CreateTaskRequest& WithSourceLocationArn(const char* value) { SetSourceLocationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services storage resource's
     * location. </p>
     */
    inline const Aws::String& GetDestinationLocationArn() const{ return m_destinationLocationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services storage resource's
     * location. </p>
     */
    inline bool DestinationLocationArnHasBeenSet() const { return m_destinationLocationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services storage resource's
     * location. </p>
     */
    inline void SetDestinationLocationArn(const Aws::String& value) { m_destinationLocationArnHasBeenSet = true; m_destinationLocationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services storage resource's
     * location. </p>
     */
    inline void SetDestinationLocationArn(Aws::String&& value) { m_destinationLocationArnHasBeenSet = true; m_destinationLocationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services storage resource's
     * location. </p>
     */
    inline void SetDestinationLocationArn(const char* value) { m_destinationLocationArnHasBeenSet = true; m_destinationLocationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services storage resource's
     * location. </p>
     */
    inline CreateTaskRequest& WithDestinationLocationArn(const Aws::String& value) { SetDestinationLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services storage resource's
     * location. </p>
     */
    inline CreateTaskRequest& WithDestinationLocationArn(Aws::String&& value) { SetDestinationLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services storage resource's
     * location. </p>
     */
    inline CreateTaskRequest& WithDestinationLocationArn(const char* value) { SetDestinationLocationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that is
     * used to monitor and log events in the task. </p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that is
     * used to monitor and log events in the task. </p>
     */
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that is
     * used to monitor and log events in the task. </p>
     */
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that is
     * used to monitor and log events in the task. </p>
     */
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that is
     * used to monitor and log events in the task. </p>
     */
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that is
     * used to monitor and log events in the task. </p>
     */
    inline CreateTaskRequest& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that is
     * used to monitor and log events in the task. </p>
     */
    inline CreateTaskRequest& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that is
     * used to monitor and log events in the task. </p>
     */
    inline CreateTaskRequest& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}


    /**
     * <p>The name of a task. This value is a text reference that is used to identify
     * the task in the console. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a task. This value is a text reference that is used to identify
     * the task in the console. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a task. This value is a text reference that is used to identify
     * the task in the console. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a task. This value is a text reference that is used to identify
     * the task in the console. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a task. This value is a text reference that is used to identify
     * the task in the console. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a task. This value is a text reference that is used to identify
     * the task in the console. </p>
     */
    inline CreateTaskRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a task. This value is a text reference that is used to identify
     * the task in the console. </p>
     */
    inline CreateTaskRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a task. This value is a text reference that is used to identify
     * the task in the console. </p>
     */
    inline CreateTaskRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The set of configuration options that control the behavior of a single
     * execution of the task that occurs when you call <code>StartTaskExecution</code>.
     * You can configure these options to preserve metadata such as user ID (UID) and
     * group ID (GID), file permissions, data integrity verification, and so on.</p>
     * <p>For each individual task execution, you can override these options by
     * specifying the <code>OverrideOptions</code> before starting the task execution.
     * For more information, see the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>
     * operation. </p>
     */
    inline const Options& GetOptions() const{ return m_options; }

    /**
     * <p>The set of configuration options that control the behavior of a single
     * execution of the task that occurs when you call <code>StartTaskExecution</code>.
     * You can configure these options to preserve metadata such as user ID (UID) and
     * group ID (GID), file permissions, data integrity verification, and so on.</p>
     * <p>For each individual task execution, you can override these options by
     * specifying the <code>OverrideOptions</code> before starting the task execution.
     * For more information, see the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>
     * operation. </p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The set of configuration options that control the behavior of a single
     * execution of the task that occurs when you call <code>StartTaskExecution</code>.
     * You can configure these options to preserve metadata such as user ID (UID) and
     * group ID (GID), file permissions, data integrity verification, and so on.</p>
     * <p>For each individual task execution, you can override these options by
     * specifying the <code>OverrideOptions</code> before starting the task execution.
     * For more information, see the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>
     * operation. </p>
     */
    inline void SetOptions(const Options& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The set of configuration options that control the behavior of a single
     * execution of the task that occurs when you call <code>StartTaskExecution</code>.
     * You can configure these options to preserve metadata such as user ID (UID) and
     * group ID (GID), file permissions, data integrity verification, and so on.</p>
     * <p>For each individual task execution, you can override these options by
     * specifying the <code>OverrideOptions</code> before starting the task execution.
     * For more information, see the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>
     * operation. </p>
     */
    inline void SetOptions(Options&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The set of configuration options that control the behavior of a single
     * execution of the task that occurs when you call <code>StartTaskExecution</code>.
     * You can configure these options to preserve metadata such as user ID (UID) and
     * group ID (GID), file permissions, data integrity verification, and so on.</p>
     * <p>For each individual task execution, you can override these options by
     * specifying the <code>OverrideOptions</code> before starting the task execution.
     * For more information, see the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>
     * operation. </p>
     */
    inline CreateTaskRequest& WithOptions(const Options& value) { SetOptions(value); return *this;}

    /**
     * <p>The set of configuration options that control the behavior of a single
     * execution of the task that occurs when you call <code>StartTaskExecution</code>.
     * You can configure these options to preserve metadata such as user ID (UID) and
     * group ID (GID), file permissions, data integrity verification, and so on.</p>
     * <p>For each individual task execution, you can override these options by
     * specifying the <code>OverrideOptions</code> before starting the task execution.
     * For more information, see the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>
     * operation. </p>
     */
    inline CreateTaskRequest& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>A list of filter rules that determines which files to exclude from a task.
     * The list should contain a single filter string that consists of the patterns to
     * exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p> <p> </p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const{ return m_excludes; }

    /**
     * <p>A list of filter rules that determines which files to exclude from a task.
     * The list should contain a single filter string that consists of the patterns to
     * exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p> <p> </p>
     */
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }

    /**
     * <p>A list of filter rules that determines which files to exclude from a task.
     * The list should contain a single filter string that consists of the patterns to
     * exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p> <p> </p>
     */
    inline void SetExcludes(const Aws::Vector<FilterRule>& value) { m_excludesHasBeenSet = true; m_excludes = value; }

    /**
     * <p>A list of filter rules that determines which files to exclude from a task.
     * The list should contain a single filter string that consists of the patterns to
     * exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p> <p> </p>
     */
    inline void SetExcludes(Aws::Vector<FilterRule>&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }

    /**
     * <p>A list of filter rules that determines which files to exclude from a task.
     * The list should contain a single filter string that consists of the patterns to
     * exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p> <p> </p>
     */
    inline CreateTaskRequest& WithExcludes(const Aws::Vector<FilterRule>& value) { SetExcludes(value); return *this;}

    /**
     * <p>A list of filter rules that determines which files to exclude from a task.
     * The list should contain a single filter string that consists of the patterns to
     * exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p> <p> </p>
     */
    inline CreateTaskRequest& WithExcludes(Aws::Vector<FilterRule>&& value) { SetExcludes(std::move(value)); return *this;}

    /**
     * <p>A list of filter rules that determines which files to exclude from a task.
     * The list should contain a single filter string that consists of the patterns to
     * exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p> <p> </p>
     */
    inline CreateTaskRequest& AddExcludes(const FilterRule& value) { m_excludesHasBeenSet = true; m_excludes.push_back(value); return *this; }

    /**
     * <p>A list of filter rules that determines which files to exclude from a task.
     * The list should contain a single filter string that consists of the patterns to
     * exclude. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>. </p> <p> </p>
     */
    inline CreateTaskRequest& AddExcludes(FilterRule&& value) { m_excludesHasBeenSet = true; m_excludes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies a schedule used to periodically transfer files from a source to a
     * destination location. The schedule should be specified in UTC time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">Scheduling
     * your task</a>.</p>
     */
    inline const TaskSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>Specifies a schedule used to periodically transfer files from a source to a
     * destination location. The schedule should be specified in UTC time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">Scheduling
     * your task</a>.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>Specifies a schedule used to periodically transfer files from a source to a
     * destination location. The schedule should be specified in UTC time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">Scheduling
     * your task</a>.</p>
     */
    inline void SetSchedule(const TaskSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>Specifies a schedule used to periodically transfer files from a source to a
     * destination location. The schedule should be specified in UTC time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">Scheduling
     * your task</a>.</p>
     */
    inline void SetSchedule(TaskSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>Specifies a schedule used to periodically transfer files from a source to a
     * destination location. The schedule should be specified in UTC time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">Scheduling
     * your task</a>.</p>
     */
    inline CreateTaskRequest& WithSchedule(const TaskSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>Specifies a schedule used to periodically transfer files from a source to a
     * destination location. The schedule should be specified in UTC time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">Scheduling
     * your task</a>.</p>
     */
    inline CreateTaskRequest& WithSchedule(TaskSchedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * resource. The value can be an empty string. </p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * resource. The value can be an empty string. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * resource. The value can be an empty string. </p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * resource. The value can be an empty string. </p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * resource. The value can be an empty string. </p>
     */
    inline CreateTaskRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * resource. The value can be an empty string. </p>
     */
    inline CreateTaskRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * resource. The value can be an empty string. </p>
     */
    inline CreateTaskRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * resource. The value can be an empty string. </p>
     */
    inline CreateTaskRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of filter rules that determines which files to include when running a
     * task. The pattern contains a single filter string that consists of the patterns
     * to include. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const{ return m_includes; }

    /**
     * <p>A list of filter rules that determines which files to include when running a
     * task. The pattern contains a single filter string that consists of the patterns
     * to include. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>.</p>
     */
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }

    /**
     * <p>A list of filter rules that determines which files to include when running a
     * task. The pattern contains a single filter string that consists of the patterns
     * to include. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>.</p>
     */
    inline void SetIncludes(const Aws::Vector<FilterRule>& value) { m_includesHasBeenSet = true; m_includes = value; }

    /**
     * <p>A list of filter rules that determines which files to include when running a
     * task. The pattern contains a single filter string that consists of the patterns
     * to include. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>.</p>
     */
    inline void SetIncludes(Aws::Vector<FilterRule>&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }

    /**
     * <p>A list of filter rules that determines which files to include when running a
     * task. The pattern contains a single filter string that consists of the patterns
     * to include. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>.</p>
     */
    inline CreateTaskRequest& WithIncludes(const Aws::Vector<FilterRule>& value) { SetIncludes(value); return *this;}

    /**
     * <p>A list of filter rules that determines which files to include when running a
     * task. The pattern contains a single filter string that consists of the patterns
     * to include. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>.</p>
     */
    inline CreateTaskRequest& WithIncludes(Aws::Vector<FilterRule>&& value) { SetIncludes(std::move(value)); return *this;}

    /**
     * <p>A list of filter rules that determines which files to include when running a
     * task. The pattern contains a single filter string that consists of the patterns
     * to include. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>.</p>
     */
    inline CreateTaskRequest& AddIncludes(const FilterRule& value) { m_includesHasBeenSet = true; m_includes.push_back(value); return *this; }

    /**
     * <p>A list of filter rules that determines which files to include when running a
     * task. The pattern contains a single filter string that consists of the patterns
     * to include. The patterns are delimited by "|" (that is, a pipe), for example,
     * <code>"/folder1|/folder2"</code>.</p>
     */
    inline CreateTaskRequest& AddIncludes(FilterRule&& value) { m_includesHasBeenSet = true; m_includes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceLocationArn;
    bool m_sourceLocationArnHasBeenSet;

    Aws::String m_destinationLocationArn;
    bool m_destinationLocationArnHasBeenSet;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Options m_options;
    bool m_optionsHasBeenSet;

    Aws::Vector<FilterRule> m_excludes;
    bool m_excludesHasBeenSet;

    TaskSchedule m_schedule;
    bool m_scheduleHasBeenSet;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<FilterRule> m_includes;
    bool m_includesHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
