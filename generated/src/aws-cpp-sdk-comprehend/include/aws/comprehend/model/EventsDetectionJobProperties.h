/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/comprehend/model/InputDataConfig.h>
#include <aws/comprehend/model/OutputDataConfig.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provides information about an events detection job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EventsDetectionJobProperties">AWS
   * API Reference</a></p>
   */
  class EventsDetectionJobProperties
  {
  public:
    AWS_COMPREHEND_API EventsDetectionJobProperties() = default;
    AWS_COMPREHEND_API EventsDetectionJobProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EventsDetectionJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier assigned to the events detection job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    EventsDetectionJobProperties& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the Amazon Web Services
     * account, Amazon Web Services Region, and the job ID. The format of the ARN is as
     * follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    EventsDetectionJobProperties& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name you assigned the events detection job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    EventsDetectionJobProperties& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the events detection job.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline EventsDetectionJobProperties& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the status of the events detection job.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    EventsDetectionJobProperties& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the events detection job was submitted for processing.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const { return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    void SetSubmitTime(SubmitTimeT&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::forward<SubmitTimeT>(value); }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    EventsDetectionJobProperties& WithSubmitTime(SubmitTimeT&& value) { SetSubmitTime(std::forward<SubmitTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the events detection job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    EventsDetectionJobProperties& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = InputDataConfig>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = InputDataConfig>
    EventsDetectionJobProperties& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    EventsDetectionJobProperties& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the input documents.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline EventsDetectionJobProperties& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    EventsDetectionJobProperties& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of events that are detected by the job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetEventTypes() const { return m_targetEventTypes; }
    inline bool TargetEventTypesHasBeenSet() const { return m_targetEventTypesHasBeenSet; }
    template<typename TargetEventTypesT = Aws::Vector<Aws::String>>
    void SetTargetEventTypes(TargetEventTypesT&& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes = std::forward<TargetEventTypesT>(value); }
    template<typename TargetEventTypesT = Aws::Vector<Aws::String>>
    EventsDetectionJobProperties& WithTargetEventTypes(TargetEventTypesT&& value) { SetTargetEventTypes(std::forward<TargetEventTypesT>(value)); return *this;}
    template<typename TargetEventTypesT = Aws::String>
    EventsDetectionJobProperties& AddTargetEventTypes(TargetEventTypesT&& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes.emplace_back(std::forward<TargetEventTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime{};
    bool m_submitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetEventTypes;
    bool m_targetEventTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
