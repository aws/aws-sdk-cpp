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
   * <p>Provides a description of the operation failure.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/OperationFailureDetails">AWS
   * API Reference</a></p>
   */
  class OperationFailureDetails
  {
  public:
    AWS_KINESISANALYTICSV2_API OperationFailureDetails() = default;
    AWS_KINESISANALYTICSV2_API OperationFailureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API OperationFailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rollback operation ID of the system-rollback operation that executed due
     * to failure in the current operation.</p>
     */
    inline const Aws::String& GetRollbackOperationId() const { return m_rollbackOperationId; }
    inline bool RollbackOperationIdHasBeenSet() const { return m_rollbackOperationIdHasBeenSet; }
    template<typename RollbackOperationIdT = Aws::String>
    void SetRollbackOperationId(RollbackOperationIdT&& value) { m_rollbackOperationIdHasBeenSet = true; m_rollbackOperationId = std::forward<RollbackOperationIdT>(value); }
    template<typename RollbackOperationIdT = Aws::String>
    OperationFailureDetails& WithRollbackOperationId(RollbackOperationIdT&& value) { SetRollbackOperationId(std::forward<RollbackOperationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ErrorInfo& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = ErrorInfo>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = ErrorInfo>
    OperationFailureDetails& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
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
