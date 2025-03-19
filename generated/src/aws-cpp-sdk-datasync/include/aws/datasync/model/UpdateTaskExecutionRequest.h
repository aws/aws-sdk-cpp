/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/Options.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateTaskExecutionRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateTaskExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTaskExecution"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the task execution that you're
     * updating.</p>
     */
    inline const Aws::String& GetTaskExecutionArn() const { return m_taskExecutionArn; }
    inline bool TaskExecutionArnHasBeenSet() const { return m_taskExecutionArnHasBeenSet; }
    template<typename TaskExecutionArnT = Aws::String>
    void SetTaskExecutionArn(TaskExecutionArnT&& value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn = std::forward<TaskExecutionArnT>(value); }
    template<typename TaskExecutionArnT = Aws::String>
    UpdateTaskExecutionRequest& WithTaskExecutionArn(TaskExecutionArnT&& value) { SetTaskExecutionArn(std::forward<TaskExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Options& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Options>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Options>
    UpdateTaskExecutionRequest& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskExecutionArn;
    bool m_taskExecutionArnHasBeenSet = false;

    Options m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
