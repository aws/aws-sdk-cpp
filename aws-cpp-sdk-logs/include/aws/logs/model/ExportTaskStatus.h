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
  class AWS_CLOUDWATCHLOGS_API ExportTaskStatus
  {
  public:
    ExportTaskStatus();
    ExportTaskStatus(Aws::Utils::Json::JsonView jsonValue);
    ExportTaskStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
