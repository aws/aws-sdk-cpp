/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesisanalyticsv2/model/OperationStatus.h>
#include <aws/kinesisanalyticsv2/model/ApplicationVersionChangeDetails.h>
#include <aws/kinesisanalyticsv2/model/OperationFailureDetails.h>
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
   * <p>A description of the application operation that provides information about
   * the updates that were made to the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationOperationInfoDetails">AWS
   * API Reference</a></p>
   */
  class ApplicationOperationInfoDetails
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationOperationInfoDetails() = default;
    AWS_KINESISANALYTICSV2_API ApplicationOperationInfoDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationOperationInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    ApplicationOperationInfoDetails& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the operation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ApplicationOperationInfoDetails& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the operation finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ApplicationOperationInfoDetails& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline OperationStatus GetOperationStatus() const { return m_operationStatus; }
    inline bool OperationStatusHasBeenSet() const { return m_operationStatusHasBeenSet; }
    inline void SetOperationStatus(OperationStatus value) { m_operationStatusHasBeenSet = true; m_operationStatus = value; }
    inline ApplicationOperationInfoDetails& WithOperationStatus(OperationStatus value) { SetOperationStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const ApplicationVersionChangeDetails& GetApplicationVersionChangeDetails() const { return m_applicationVersionChangeDetails; }
    inline bool ApplicationVersionChangeDetailsHasBeenSet() const { return m_applicationVersionChangeDetailsHasBeenSet; }
    template<typename ApplicationVersionChangeDetailsT = ApplicationVersionChangeDetails>
    void SetApplicationVersionChangeDetails(ApplicationVersionChangeDetailsT&& value) { m_applicationVersionChangeDetailsHasBeenSet = true; m_applicationVersionChangeDetails = std::forward<ApplicationVersionChangeDetailsT>(value); }
    template<typename ApplicationVersionChangeDetailsT = ApplicationVersionChangeDetails>
    ApplicationOperationInfoDetails& WithApplicationVersionChangeDetails(ApplicationVersionChangeDetailsT&& value) { SetApplicationVersionChangeDetails(std::forward<ApplicationVersionChangeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OperationFailureDetails& GetOperationFailureDetails() const { return m_operationFailureDetails; }
    inline bool OperationFailureDetailsHasBeenSet() const { return m_operationFailureDetailsHasBeenSet; }
    template<typename OperationFailureDetailsT = OperationFailureDetails>
    void SetOperationFailureDetails(OperationFailureDetailsT&& value) { m_operationFailureDetailsHasBeenSet = true; m_operationFailureDetails = std::forward<OperationFailureDetailsT>(value); }
    template<typename OperationFailureDetailsT = OperationFailureDetails>
    ApplicationOperationInfoDetails& WithOperationFailureDetails(OperationFailureDetailsT&& value) { SetOperationFailureDetails(std::forward<OperationFailureDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    OperationStatus m_operationStatus{OperationStatus::NOT_SET};
    bool m_operationStatusHasBeenSet = false;

    ApplicationVersionChangeDetails m_applicationVersionChangeDetails;
    bool m_applicationVersionChangeDetailsHasBeenSet = false;

    OperationFailureDetails m_operationFailureDetails;
    bool m_operationFailureDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
