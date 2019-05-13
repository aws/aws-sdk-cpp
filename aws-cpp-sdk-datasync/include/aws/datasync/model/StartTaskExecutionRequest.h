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
   * <p>StartTaskExecutionRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/StartTaskExecutionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API StartTaskExecutionRequest : public DataSyncRequest
  {
  public:
    StartTaskExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTaskExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the task to start.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task to start.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task to start.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task to start.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task to start.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task to start.</p>
     */
    inline StartTaskExecutionRequest& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task to start.</p>
     */
    inline StartTaskExecutionRequest& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task to start.</p>
     */
    inline StartTaskExecutionRequest& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    
    inline const Options& GetOverrideOptions() const{ return m_overrideOptions; }

    
    inline bool OverrideOptionsHasBeenSet() const { return m_overrideOptionsHasBeenSet; }

    
    inline void SetOverrideOptions(const Options& value) { m_overrideOptionsHasBeenSet = true; m_overrideOptions = value; }

    
    inline void SetOverrideOptions(Options&& value) { m_overrideOptionsHasBeenSet = true; m_overrideOptions = std::move(value); }

    
    inline StartTaskExecutionRequest& WithOverrideOptions(const Options& value) { SetOverrideOptions(value); return *this;}

    
    inline StartTaskExecutionRequest& WithOverrideOptions(Options&& value) { SetOverrideOptions(std::move(value)); return *this;}


    /**
     * <p/> <p>A filter that determines which files to include in the transfer during a
     * task execution based on the specified pattern in the filter. When multiple
     * include filters are set, they are interpreted as an OR.</p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const{ return m_includes; }

    /**
     * <p/> <p>A filter that determines which files to include in the transfer during a
     * task execution based on the specified pattern in the filter. When multiple
     * include filters are set, they are interpreted as an OR.</p>
     */
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }

    /**
     * <p/> <p>A filter that determines which files to include in the transfer during a
     * task execution based on the specified pattern in the filter. When multiple
     * include filters are set, they are interpreted as an OR.</p>
     */
    inline void SetIncludes(const Aws::Vector<FilterRule>& value) { m_includesHasBeenSet = true; m_includes = value; }

    /**
     * <p/> <p>A filter that determines which files to include in the transfer during a
     * task execution based on the specified pattern in the filter. When multiple
     * include filters are set, they are interpreted as an OR.</p>
     */
    inline void SetIncludes(Aws::Vector<FilterRule>&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }

    /**
     * <p/> <p>A filter that determines which files to include in the transfer during a
     * task execution based on the specified pattern in the filter. When multiple
     * include filters are set, they are interpreted as an OR.</p>
     */
    inline StartTaskExecutionRequest& WithIncludes(const Aws::Vector<FilterRule>& value) { SetIncludes(value); return *this;}

    /**
     * <p/> <p>A filter that determines which files to include in the transfer during a
     * task execution based on the specified pattern in the filter. When multiple
     * include filters are set, they are interpreted as an OR.</p>
     */
    inline StartTaskExecutionRequest& WithIncludes(Aws::Vector<FilterRule>&& value) { SetIncludes(std::move(value)); return *this;}

    /**
     * <p/> <p>A filter that determines which files to include in the transfer during a
     * task execution based on the specified pattern in the filter. When multiple
     * include filters are set, they are interpreted as an OR.</p>
     */
    inline StartTaskExecutionRequest& AddIncludes(const FilterRule& value) { m_includesHasBeenSet = true; m_includes.push_back(value); return *this; }

    /**
     * <p/> <p>A filter that determines which files to include in the transfer during a
     * task execution based on the specified pattern in the filter. When multiple
     * include filters are set, they are interpreted as an OR.</p>
     */
    inline StartTaskExecutionRequest& AddIncludes(FilterRule&& value) { m_includesHasBeenSet = true; m_includes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet;

    Options m_overrideOptions;
    bool m_overrideOptionsHasBeenSet;

    Aws::Vector<FilterRule> m_includes;
    bool m_includesHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
