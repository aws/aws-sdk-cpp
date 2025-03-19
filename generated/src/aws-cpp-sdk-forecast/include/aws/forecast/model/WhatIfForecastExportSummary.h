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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides a summary of the what-if forecast export properties used in the
   * <a>ListWhatIfForecastExports</a> operation. To get the complete set of
   * properties, call the <a>DescribeWhatIfForecastExport</a> operation, and provide
   * the <code>WhatIfForecastExportArn</code> that is listed in the
   * summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/WhatIfForecastExportSummary">AWS
   * API Reference</a></p>
   */
  class WhatIfForecastExportSummary
  {
  public:
    AWS_FORECASTSERVICE_API WhatIfForecastExportSummary() = default;
    AWS_FORECASTSERVICE_API WhatIfForecastExportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API WhatIfForecastExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportArn() const { return m_whatIfForecastExportArn; }
    inline bool WhatIfForecastExportArnHasBeenSet() const { return m_whatIfForecastExportArnHasBeenSet; }
    template<typename WhatIfForecastExportArnT = Aws::String>
    void SetWhatIfForecastExportArn(WhatIfForecastExportArnT&& value) { m_whatIfForecastExportArnHasBeenSet = true; m_whatIfForecastExportArn = std::forward<WhatIfForecastExportArnT>(value); }
    template<typename WhatIfForecastExportArnT = Aws::String>
    WhatIfForecastExportSummary& WithWhatIfForecastExportArn(WhatIfForecastExportArnT&& value) { SetWhatIfForecastExportArn(std::forward<WhatIfForecastExportArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Resource Names (ARNs) that define the what-if forecasts
     * included in the export.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWhatIfForecastArns() const { return m_whatIfForecastArns; }
    inline bool WhatIfForecastArnsHasBeenSet() const { return m_whatIfForecastArnsHasBeenSet; }
    template<typename WhatIfForecastArnsT = Aws::Vector<Aws::String>>
    void SetWhatIfForecastArns(WhatIfForecastArnsT&& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns = std::forward<WhatIfForecastArnsT>(value); }
    template<typename WhatIfForecastArnsT = Aws::Vector<Aws::String>>
    WhatIfForecastExportSummary& WithWhatIfForecastArns(WhatIfForecastArnsT&& value) { SetWhatIfForecastArns(std::forward<WhatIfForecastArnsT>(value)); return *this;}
    template<typename WhatIfForecastArnsT = Aws::String>
    WhatIfForecastExportSummary& AddWhatIfForecastArns(WhatIfForecastArnsT&& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns.emplace_back(std::forward<WhatIfForecastArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The what-if forecast export name.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportName() const { return m_whatIfForecastExportName; }
    inline bool WhatIfForecastExportNameHasBeenSet() const { return m_whatIfForecastExportNameHasBeenSet; }
    template<typename WhatIfForecastExportNameT = Aws::String>
    void SetWhatIfForecastExportName(WhatIfForecastExportNameT&& value) { m_whatIfForecastExportNameHasBeenSet = true; m_whatIfForecastExportName = std::forward<WhatIfForecastExportNameT>(value); }
    template<typename WhatIfForecastExportNameT = Aws::String>
    WhatIfForecastExportSummary& WithWhatIfForecastExportName(WhatIfForecastExportNameT&& value) { SetWhatIfForecastExportName(std::forward<WhatIfForecastExportNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Amazon Simple Storage Service (Amazon S3) bucket where the
     * forecast is exported.</p>
     */
    inline const DataDestination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = DataDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = DataDestination>
    WhatIfForecastExportSummary& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the what-if forecast export. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if analysis must be <code>ACTIVE</code> before you can access the
     * analysis.</p> 
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    WhatIfForecastExportSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    WhatIfForecastExportSummary& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    WhatIfForecastExportSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    WhatIfForecastExportSummary& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfForecastExportArn;
    bool m_whatIfForecastExportArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_whatIfForecastArns;
    bool m_whatIfForecastArnsHasBeenSet = false;

    Aws::String m_whatIfForecastExportName;
    bool m_whatIfForecastExportNameHasBeenSet = false;

    DataDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
