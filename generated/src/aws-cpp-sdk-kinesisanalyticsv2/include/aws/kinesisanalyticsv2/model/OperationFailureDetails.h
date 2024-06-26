/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/ErrorInfo.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * Provides a description of the operation failure<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/OperationFailureDetails">AWS
   * API Reference</a></p>
   */
  class OperationFailureDetails
  {
  public:
    AWS_KINESISANALYTICSV2_API OperationFailureDetails();
    AWS_KINESISANALYTICSV2_API OperationFailureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API OperationFailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Provides the operation ID of a system-rollback operation executed due to failure
     * in the current operation
     */
    inline const Aws::String& GetRollbackOperationId() const{ return m_rollbackOperationId; }
    inline bool RollbackOperationIdHasBeenSet() const { return m_rollbackOperationIdHasBeenSet; }
    inline void SetRollbackOperationId(const Aws::String& value) { m_rollbackOperationIdHasBeenSet = true; m_rollbackOperationId = value; }
    inline void SetRollbackOperationId(Aws::String&& value) { m_rollbackOperationIdHasBeenSet = true; m_rollbackOperationId = std::move(value); }
    inline void SetRollbackOperationId(const char* value) { m_rollbackOperationIdHasBeenSet = true; m_rollbackOperationId.assign(value); }
    inline OperationFailureDetails& WithRollbackOperationId(const Aws::String& value) { SetRollbackOperationId(value); return *this;}
    inline OperationFailureDetails& WithRollbackOperationId(Aws::String&& value) { SetRollbackOperationId(std::move(value)); return *this;}
    inline OperationFailureDetails& WithRollbackOperationId(const char* value) { SetRollbackOperationId(value); return *this;}
    ///@}

    ///@{
    
    inline const ErrorInfo& GetErrorInfo() const{ return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    inline void SetErrorInfo(const ErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }
    inline void SetErrorInfo(ErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }
    inline OperationFailureDetails& WithErrorInfo(const ErrorInfo& value) { SetErrorInfo(value); return *this;}
    inline OperationFailureDetails& WithErrorInfo(ErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_rollbackOperationId;
    bool m_rollbackOperationIdHasBeenSet = false;

    ErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
