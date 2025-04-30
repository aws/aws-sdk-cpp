/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ValidationDetails.h>
#include <aws/bedrock/model/DataProcessingDetails.h>
#include <aws/bedrock/model/TrainingDetails.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>For a Distillation job, the status details for sub-tasks of the job. Possible
   * statuses for each sub-task include the following:</p> <ul> <li>
   * <p>NotStarted</p> </li> <li> <p>InProgress</p> </li> <li> <p>Completed</p> </li>
   * <li> <p>Stopping</p> </li> <li> <p>Stopped</p> </li> <li> <p>Failed</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/StatusDetails">AWS
   * API Reference</a></p>
   */
  class StatusDetails
  {
  public:
    AWS_BEDROCK_API StatusDetails() = default;
    AWS_BEDROCK_API StatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API StatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status details for the validation sub-task of the job.</p>
     */
    inline const ValidationDetails& GetValidationDetails() const { return m_validationDetails; }
    inline bool ValidationDetailsHasBeenSet() const { return m_validationDetailsHasBeenSet; }
    template<typename ValidationDetailsT = ValidationDetails>
    void SetValidationDetails(ValidationDetailsT&& value) { m_validationDetailsHasBeenSet = true; m_validationDetails = std::forward<ValidationDetailsT>(value); }
    template<typename ValidationDetailsT = ValidationDetails>
    StatusDetails& WithValidationDetails(ValidationDetailsT&& value) { SetValidationDetails(std::forward<ValidationDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status details for the data processing sub-task of the job.</p>
     */
    inline const DataProcessingDetails& GetDataProcessingDetails() const { return m_dataProcessingDetails; }
    inline bool DataProcessingDetailsHasBeenSet() const { return m_dataProcessingDetailsHasBeenSet; }
    template<typename DataProcessingDetailsT = DataProcessingDetails>
    void SetDataProcessingDetails(DataProcessingDetailsT&& value) { m_dataProcessingDetailsHasBeenSet = true; m_dataProcessingDetails = std::forward<DataProcessingDetailsT>(value); }
    template<typename DataProcessingDetailsT = DataProcessingDetails>
    StatusDetails& WithDataProcessingDetails(DataProcessingDetailsT&& value) { SetDataProcessingDetails(std::forward<DataProcessingDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status details for the training sub-task of the job.</p>
     */
    inline const TrainingDetails& GetTrainingDetails() const { return m_trainingDetails; }
    inline bool TrainingDetailsHasBeenSet() const { return m_trainingDetailsHasBeenSet; }
    template<typename TrainingDetailsT = TrainingDetails>
    void SetTrainingDetails(TrainingDetailsT&& value) { m_trainingDetailsHasBeenSet = true; m_trainingDetails = std::forward<TrainingDetailsT>(value); }
    template<typename TrainingDetailsT = TrainingDetails>
    StatusDetails& WithTrainingDetails(TrainingDetailsT&& value) { SetTrainingDetails(std::forward<TrainingDetailsT>(value)); return *this;}
    ///@}
  private:

    ValidationDetails m_validationDetails;
    bool m_validationDetailsHasBeenSet = false;

    DataProcessingDetails m_dataProcessingDetails;
    bool m_dataProcessingDetailsHasBeenSet = false;

    TrainingDetails m_trainingDetails;
    bool m_trainingDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
