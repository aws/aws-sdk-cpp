/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/DataDestination.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ForecastService
{
namespace Model
{
  class DescribeWhatIfForecastExportResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastExportResult() = default;
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportArn() const { return m_whatIfForecastExportArn; }
    template<typename WhatIfForecastExportArnT = Aws::String>
    void SetWhatIfForecastExportArn(WhatIfForecastExportArnT&& value) { m_whatIfForecastExportArnHasBeenSet = true; m_whatIfForecastExportArn = std::forward<WhatIfForecastExportArnT>(value); }
    template<typename WhatIfForecastExportArnT = Aws::String>
    DescribeWhatIfForecastExportResult& WithWhatIfForecastExportArn(WhatIfForecastExportArnT&& value) { SetWhatIfForecastExportArn(std::forward<WhatIfForecastExportArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the what-if forecast export.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportName() const { return m_whatIfForecastExportName; }
    template<typename WhatIfForecastExportNameT = Aws::String>
    void SetWhatIfForecastExportName(WhatIfForecastExportNameT&& value) { m_whatIfForecastExportNameHasBeenSet = true; m_whatIfForecastExportName = std::forward<WhatIfForecastExportNameT>(value); }
    template<typename WhatIfForecastExportNameT = Aws::String>
    DescribeWhatIfForecastExportResult& WithWhatIfForecastExportName(WhatIfForecastExportNameT&& value) { SetWhatIfForecastExportName(std::forward<WhatIfForecastExportNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Resource Names (ARNs) that represent all of the what-if
     * forecasts exported in this resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWhatIfForecastArns() const { return m_whatIfForecastArns; }
    template<typename WhatIfForecastArnsT = Aws::Vector<Aws::String>>
    void SetWhatIfForecastArns(WhatIfForecastArnsT&& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns = std::forward<WhatIfForecastArnsT>(value); }
    template<typename WhatIfForecastArnsT = Aws::Vector<Aws::String>>
    DescribeWhatIfForecastExportResult& WithWhatIfForecastArns(WhatIfForecastArnsT&& value) { SetWhatIfForecastArns(std::forward<WhatIfForecastArnsT>(value)); return *this;}
    template<typename WhatIfForecastArnsT = Aws::String>
    DescribeWhatIfForecastExportResult& AddWhatIfForecastArns(WhatIfForecastArnsT&& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns.emplace_back(std::forward<WhatIfForecastArnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DataDestination& GetDestination() const { return m_destination; }
    template<typename DestinationT = DataDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = DataDestination>
    DescribeWhatIfForecastExportResult& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribeWhatIfForecastExportResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the what-if forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if forecast export must be <code>ACTIVE</code> before you can access
     * the forecast export.</p> 
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribeWhatIfForecastExportResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeWhatIfForecastExportResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate time remaining to complete the what-if forecast export, in
     * minutes.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const { return m_estimatedTimeRemainingInMinutes; }
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutesHasBeenSet = true; m_estimatedTimeRemainingInMinutes = value; }
    inline DescribeWhatIfForecastExportResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    DescribeWhatIfForecastExportResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    DescribeWhatIfForecastExportResult& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWhatIfForecastExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfForecastExportArn;
    bool m_whatIfForecastExportArnHasBeenSet = false;

    Aws::String m_whatIfForecastExportName;
    bool m_whatIfForecastExportNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_whatIfForecastArns;
    bool m_whatIfForecastArnsHasBeenSet = false;

    DataDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    long long m_estimatedTimeRemainingInMinutes{0};
    bool m_estimatedTimeRemainingInMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
