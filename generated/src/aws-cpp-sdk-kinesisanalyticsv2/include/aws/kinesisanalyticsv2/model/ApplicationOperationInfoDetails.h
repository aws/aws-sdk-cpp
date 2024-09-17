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
   * Provides a description of the operation, such as the operation-type and
   * status<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationOperationInfoDetails">AWS
   * API Reference</a></p>
   */
  class ApplicationOperationInfoDetails
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationOperationInfoDetails();
    AWS_KINESISANALYTICSV2_API ApplicationOperationInfoDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationOperationInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline ApplicationOperationInfoDetails& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline ApplicationOperationInfoDetails& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline ApplicationOperationInfoDetails& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * The timestamp at which the operation was created
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ApplicationOperationInfoDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ApplicationOperationInfoDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The timestamp at which the operation finished for the application
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ApplicationOperationInfoDetails& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ApplicationOperationInfoDetails& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OperationStatus& GetOperationStatus() const{ return m_operationStatus; }
    inline bool OperationStatusHasBeenSet() const { return m_operationStatusHasBeenSet; }
    inline void SetOperationStatus(const OperationStatus& value) { m_operationStatusHasBeenSet = true; m_operationStatus = value; }
    inline void SetOperationStatus(OperationStatus&& value) { m_operationStatusHasBeenSet = true; m_operationStatus = std::move(value); }
    inline ApplicationOperationInfoDetails& WithOperationStatus(const OperationStatus& value) { SetOperationStatus(value); return *this;}
    inline ApplicationOperationInfoDetails& WithOperationStatus(OperationStatus&& value) { SetOperationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ApplicationVersionChangeDetails& GetApplicationVersionChangeDetails() const{ return m_applicationVersionChangeDetails; }
    inline bool ApplicationVersionChangeDetailsHasBeenSet() const { return m_applicationVersionChangeDetailsHasBeenSet; }
    inline void SetApplicationVersionChangeDetails(const ApplicationVersionChangeDetails& value) { m_applicationVersionChangeDetailsHasBeenSet = true; m_applicationVersionChangeDetails = value; }
    inline void SetApplicationVersionChangeDetails(ApplicationVersionChangeDetails&& value) { m_applicationVersionChangeDetailsHasBeenSet = true; m_applicationVersionChangeDetails = std::move(value); }
    inline ApplicationOperationInfoDetails& WithApplicationVersionChangeDetails(const ApplicationVersionChangeDetails& value) { SetApplicationVersionChangeDetails(value); return *this;}
    inline ApplicationOperationInfoDetails& WithApplicationVersionChangeDetails(ApplicationVersionChangeDetails&& value) { SetApplicationVersionChangeDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OperationFailureDetails& GetOperationFailureDetails() const{ return m_operationFailureDetails; }
    inline bool OperationFailureDetailsHasBeenSet() const { return m_operationFailureDetailsHasBeenSet; }
    inline void SetOperationFailureDetails(const OperationFailureDetails& value) { m_operationFailureDetailsHasBeenSet = true; m_operationFailureDetails = value; }
    inline void SetOperationFailureDetails(OperationFailureDetails&& value) { m_operationFailureDetailsHasBeenSet = true; m_operationFailureDetails = std::move(value); }
    inline ApplicationOperationInfoDetails& WithOperationFailureDetails(const OperationFailureDetails& value) { SetOperationFailureDetails(value); return *this;}
    inline ApplicationOperationInfoDetails& WithOperationFailureDetails(OperationFailureDetails&& value) { SetOperationFailureDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    OperationStatus m_operationStatus;
    bool m_operationStatusHasBeenSet = false;

    ApplicationVersionChangeDetails m_applicationVersionChangeDetails;
    bool m_applicationVersionChangeDetailsHasBeenSet = false;

    OperationFailureDetails m_operationFailureDetails;
    bool m_operationFailureDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
