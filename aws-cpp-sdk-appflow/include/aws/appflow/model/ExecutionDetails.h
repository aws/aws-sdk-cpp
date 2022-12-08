/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appflow/model/ExecutionStatus.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Describes the details of the flow run, including the timestamp, status, and
   * message. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ExecutionDetails">AWS
   * API Reference</a></p>
   */
  class ExecutionDetails
  {
  public:
    AWS_APPFLOW_API ExecutionDetails();
    AWS_APPFLOW_API ExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline const Aws::String& GetMostRecentExecutionMessage() const{ return m_mostRecentExecutionMessage; }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline bool MostRecentExecutionMessageHasBeenSet() const { return m_mostRecentExecutionMessageHasBeenSet; }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline void SetMostRecentExecutionMessage(const Aws::String& value) { m_mostRecentExecutionMessageHasBeenSet = true; m_mostRecentExecutionMessage = value; }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline void SetMostRecentExecutionMessage(Aws::String&& value) { m_mostRecentExecutionMessageHasBeenSet = true; m_mostRecentExecutionMessage = std::move(value); }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline void SetMostRecentExecutionMessage(const char* value) { m_mostRecentExecutionMessageHasBeenSet = true; m_mostRecentExecutionMessage.assign(value); }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline ExecutionDetails& WithMostRecentExecutionMessage(const Aws::String& value) { SetMostRecentExecutionMessage(value); return *this;}

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline ExecutionDetails& WithMostRecentExecutionMessage(Aws::String&& value) { SetMostRecentExecutionMessage(std::move(value)); return *this;}

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline ExecutionDetails& WithMostRecentExecutionMessage(const char* value) { SetMostRecentExecutionMessage(value); return *this;}


    /**
     * <p> Specifies the time of the most recent flow run. </p>
     */
    inline const Aws::Utils::DateTime& GetMostRecentExecutionTime() const{ return m_mostRecentExecutionTime; }

    /**
     * <p> Specifies the time of the most recent flow run. </p>
     */
    inline bool MostRecentExecutionTimeHasBeenSet() const { return m_mostRecentExecutionTimeHasBeenSet; }

    /**
     * <p> Specifies the time of the most recent flow run. </p>
     */
    inline void SetMostRecentExecutionTime(const Aws::Utils::DateTime& value) { m_mostRecentExecutionTimeHasBeenSet = true; m_mostRecentExecutionTime = value; }

    /**
     * <p> Specifies the time of the most recent flow run. </p>
     */
    inline void SetMostRecentExecutionTime(Aws::Utils::DateTime&& value) { m_mostRecentExecutionTimeHasBeenSet = true; m_mostRecentExecutionTime = std::move(value); }

    /**
     * <p> Specifies the time of the most recent flow run. </p>
     */
    inline ExecutionDetails& WithMostRecentExecutionTime(const Aws::Utils::DateTime& value) { SetMostRecentExecutionTime(value); return *this;}

    /**
     * <p> Specifies the time of the most recent flow run. </p>
     */
    inline ExecutionDetails& WithMostRecentExecutionTime(Aws::Utils::DateTime&& value) { SetMostRecentExecutionTime(std::move(value)); return *this;}


    /**
     * <p> Specifies the status of the most recent flow run. </p>
     */
    inline const ExecutionStatus& GetMostRecentExecutionStatus() const{ return m_mostRecentExecutionStatus; }

    /**
     * <p> Specifies the status of the most recent flow run. </p>
     */
    inline bool MostRecentExecutionStatusHasBeenSet() const { return m_mostRecentExecutionStatusHasBeenSet; }

    /**
     * <p> Specifies the status of the most recent flow run. </p>
     */
    inline void SetMostRecentExecutionStatus(const ExecutionStatus& value) { m_mostRecentExecutionStatusHasBeenSet = true; m_mostRecentExecutionStatus = value; }

    /**
     * <p> Specifies the status of the most recent flow run. </p>
     */
    inline void SetMostRecentExecutionStatus(ExecutionStatus&& value) { m_mostRecentExecutionStatusHasBeenSet = true; m_mostRecentExecutionStatus = std::move(value); }

    /**
     * <p> Specifies the status of the most recent flow run. </p>
     */
    inline ExecutionDetails& WithMostRecentExecutionStatus(const ExecutionStatus& value) { SetMostRecentExecutionStatus(value); return *this;}

    /**
     * <p> Specifies the status of the most recent flow run. </p>
     */
    inline ExecutionDetails& WithMostRecentExecutionStatus(ExecutionStatus&& value) { SetMostRecentExecutionStatus(std::move(value)); return *this;}

  private:

    Aws::String m_mostRecentExecutionMessage;
    bool m_mostRecentExecutionMessageHasBeenSet = false;

    Aws::Utils::DateTime m_mostRecentExecutionTime;
    bool m_mostRecentExecutionTimeHasBeenSet = false;

    ExecutionStatus m_mostRecentExecutionStatus;
    bool m_mostRecentExecutionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
