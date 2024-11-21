/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class GetCommandExecutionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API GetCommandExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCommandExecution"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier for the command execution. This information is returned
     * as a response of the <code>StartCommandExecution</code> API request.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }
    inline GetCommandExecutionRequest& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline GetCommandExecutionRequest& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline GetCommandExecutionRequest& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the device on which the command execution
     * is being performed.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }
    inline GetCommandExecutionRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline GetCommandExecutionRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline GetCommandExecutionRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Can be used to specify whether to include the result of the command execution
     * in the <code>GetCommandExecution</code> API response. Your device can use this
     * field to provide additional information about the command execution. You only
     * need to specify this field when using the <code>AWS-IoT</code> namespace.</p>
     */
    inline bool GetIncludeResult() const{ return m_includeResult; }
    inline bool IncludeResultHasBeenSet() const { return m_includeResultHasBeenSet; }
    inline void SetIncludeResult(bool value) { m_includeResultHasBeenSet = true; m_includeResult = value; }
    inline GetCommandExecutionRequest& WithIncludeResult(bool value) { SetIncludeResult(value); return *this;}
    ///@}
  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    bool m_includeResult;
    bool m_includeResultHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
