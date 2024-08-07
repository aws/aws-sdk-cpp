/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/model/ExecutionStatus.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The execution status of the last job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/LastExecutionStatus">AWS
   * API Reference</a></p>
   */
  class LastExecutionStatus
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API LastExecutionStatus();
    AWS_APPINTEGRATIONSSERVICE_API LastExecutionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API LastExecutionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job status enum string.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    inline void SetExecutionStatus(const ExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline void SetExecutionStatus(ExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::move(value); }
    inline LastExecutionStatus& WithExecutionStatus(const ExecutionStatus& value) { SetExecutionStatus(value); return *this;}
    inline LastExecutionStatus& WithExecutionStatus(ExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of a job.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline LastExecutionStatus& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline LastExecutionStatus& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline LastExecutionStatus& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    ExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
