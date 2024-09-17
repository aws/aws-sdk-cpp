/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/TrainingDatasetStatus.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides information about the training dataset.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/TrainingDatasetSummary">AWS
   * API Reference</a></p>
   */
  class TrainingDatasetSummary
  {
  public:
    AWS_CLEANROOMSML_API TrainingDatasetSummary();
    AWS_CLEANROOMSML_API TrainingDatasetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API TrainingDatasetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the training dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline TrainingDatasetSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline TrainingDatasetSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the training dataset was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline TrainingDatasetSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline TrainingDatasetSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset.</p>
     */
    inline const Aws::String& GetTrainingDatasetArn() const{ return m_trainingDatasetArn; }
    inline bool TrainingDatasetArnHasBeenSet() const { return m_trainingDatasetArnHasBeenSet; }
    inline void SetTrainingDatasetArn(const Aws::String& value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn = value; }
    inline void SetTrainingDatasetArn(Aws::String&& value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn = std::move(value); }
    inline void SetTrainingDatasetArn(const char* value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn.assign(value); }
    inline TrainingDatasetSummary& WithTrainingDatasetArn(const Aws::String& value) { SetTrainingDatasetArn(value); return *this;}
    inline TrainingDatasetSummary& WithTrainingDatasetArn(Aws::String&& value) { SetTrainingDatasetArn(std::move(value)); return *this;}
    inline TrainingDatasetSummary& WithTrainingDatasetArn(const char* value) { SetTrainingDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the training dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TrainingDatasetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TrainingDatasetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TrainingDatasetSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the training dataset.</p>
     */
    inline const TrainingDatasetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TrainingDatasetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TrainingDatasetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TrainingDatasetSummary& WithStatus(const TrainingDatasetStatus& value) { SetStatus(value); return *this;}
    inline TrainingDatasetSummary& WithStatus(TrainingDatasetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the training dataset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TrainingDatasetSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TrainingDatasetSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TrainingDatasetSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_trainingDatasetArn;
    bool m_trainingDatasetArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TrainingDatasetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
