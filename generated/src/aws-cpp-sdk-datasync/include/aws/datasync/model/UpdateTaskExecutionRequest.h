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
    AWS_DATASYNC_API UpdateTaskExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTaskExecution"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that is being
     * updated. </p>
     */
    inline const Aws::String& GetTaskExecutionArn() const{ return m_taskExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that is being
     * updated. </p>
     */
    inline bool TaskExecutionArnHasBeenSet() const { return m_taskExecutionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that is being
     * updated. </p>
     */
    inline void SetTaskExecutionArn(const Aws::String& value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that is being
     * updated. </p>
     */
    inline void SetTaskExecutionArn(Aws::String&& value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that is being
     * updated. </p>
     */
    inline void SetTaskExecutionArn(const char* value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that is being
     * updated. </p>
     */
    inline UpdateTaskExecutionRequest& WithTaskExecutionArn(const Aws::String& value) { SetTaskExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that is being
     * updated. </p>
     */
    inline UpdateTaskExecutionRequest& WithTaskExecutionArn(Aws::String&& value) { SetTaskExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that is being
     * updated. </p>
     */
    inline UpdateTaskExecutionRequest& WithTaskExecutionArn(const char* value) { SetTaskExecutionArn(value); return *this;}


    
    inline const Options& GetOptions() const{ return m_options; }

    
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    
    inline void SetOptions(const Options& value) { m_optionsHasBeenSet = true; m_options = value; }

    
    inline void SetOptions(Options&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    
    inline UpdateTaskExecutionRequest& WithOptions(const Options& value) { SetOptions(value); return *this;}

    
    inline UpdateTaskExecutionRequest& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}

  private:

    Aws::String m_taskExecutionArn;
    bool m_taskExecutionArnHasBeenSet = false;

    Options m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
