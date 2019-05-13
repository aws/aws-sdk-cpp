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
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/Options.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/FilterRule.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>UpdateTaskResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateTaskRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API UpdateTaskRequest : public DataSyncRequest
  {
  public:
    UpdateTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTask"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the task to
     * update.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the task to
     * update.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the task to
     * update.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the task to
     * update.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the task to
     * update.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the task to
     * update.</p>
     */
    inline UpdateTaskRequest& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the task to
     * update.</p>
     */
    inline UpdateTaskRequest& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the task to
     * update.</p>
     */
    inline UpdateTaskRequest& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    
    inline const Options& GetOptions() const{ return m_options; }

    
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    
    inline void SetOptions(const Options& value) { m_optionsHasBeenSet = true; m_options = value; }

    
    inline void SetOptions(Options&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    
    inline UpdateTaskRequest& WithOptions(const Options& value) { SetOptions(value); return *this;}

    
    inline UpdateTaskRequest& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p/> <p>A filter that determines which files to exclude from a task based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const{ return m_excludes; }

    /**
     * <p/> <p>A filter that determines which files to exclude from a task based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }

    /**
     * <p/> <p>A filter that determines which files to exclude from a task based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline void SetExcludes(const Aws::Vector<FilterRule>& value) { m_excludesHasBeenSet = true; m_excludes = value; }

    /**
     * <p/> <p>A filter that determines which files to exclude from a task based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline void SetExcludes(Aws::Vector<FilterRule>&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }

    /**
     * <p/> <p>A filter that determines which files to exclude from a task based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline UpdateTaskRequest& WithExcludes(const Aws::Vector<FilterRule>& value) { SetExcludes(value); return *this;}

    /**
     * <p/> <p>A filter that determines which files to exclude from a task based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline UpdateTaskRequest& WithExcludes(Aws::Vector<FilterRule>&& value) { SetExcludes(std::move(value)); return *this;}

    /**
     * <p/> <p>A filter that determines which files to exclude from a task based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline UpdateTaskRequest& AddExcludes(const FilterRule& value) { m_excludesHasBeenSet = true; m_excludes.push_back(value); return *this; }

    /**
     * <p/> <p>A filter that determines which files to exclude from a task based on the
     * specified pattern in the filter. Transfers all files in the task’s subdirectory,
     * except files that match the filter that is set. </p>
     */
    inline UpdateTaskRequest& AddExcludes(FilterRule&& value) { m_excludesHasBeenSet = true; m_excludes.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the task to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the task to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the task to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the task to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the task to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the task to update.</p>
     */
    inline UpdateTaskRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the task to update.</p>
     */
    inline UpdateTaskRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the task to update.</p>
     */
    inline UpdateTaskRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the CloudWatch
     * LogGroup.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the CloudWatch
     * LogGroup.</p>
     */
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the CloudWatch
     * LogGroup.</p>
     */
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the CloudWatch
     * LogGroup.</p>
     */
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the CloudWatch
     * LogGroup.</p>
     */
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the CloudWatch
     * LogGroup.</p>
     */
    inline UpdateTaskRequest& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the CloudWatch
     * LogGroup.</p>
     */
    inline UpdateTaskRequest& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource name of the CloudWatch
     * LogGroup.</p>
     */
    inline UpdateTaskRequest& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}

  private:

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet;

    Options m_options;
    bool m_optionsHasBeenSet;

    Aws::Vector<FilterRule> m_excludes;
    bool m_excludesHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
