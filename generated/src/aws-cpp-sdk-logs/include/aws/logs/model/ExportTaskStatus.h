/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ExportTaskStatusCode.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Represents the status of an export task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ExportTaskStatus">AWS
   * API Reference</a></p>
   */
  class ExportTaskStatus
  {
  public:
    AWS_CLOUDWATCHLOGS_API ExportTaskStatus();
    AWS_CLOUDWATCHLOGS_API ExportTaskStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ExportTaskStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status code of the export task.</p>
     */
    inline const ExportTaskStatusCode& GetCode() const{ return m_code; }

    /**
     * <p>The status code of the export task.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The status code of the export task.</p>
     */
    inline void SetCode(const ExportTaskStatusCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status code of the export task.</p>
     */
    inline void SetCode(ExportTaskStatusCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The status code of the export task.</p>
     */
    inline ExportTaskStatus& WithCode(const ExportTaskStatusCode& value) { SetCode(value); return *this;}

    /**
     * <p>The status code of the export task.</p>
     */
    inline ExportTaskStatus& WithCode(ExportTaskStatusCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The status message related to the status code.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The status message related to the status code.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The status message related to the status code.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The status message related to the status code.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The status message related to the status code.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The status message related to the status code.</p>
     */
    inline ExportTaskStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The status message related to the status code.</p>
     */
    inline ExportTaskStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The status message related to the status code.</p>
     */
    inline ExportTaskStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ExportTaskStatusCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
