/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanroomsml/model/AudienceModelStatus.h>
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
   * <p>Information about the audience model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/AudienceModelSummary">AWS
   * API Reference</a></p>
   */
  class AudienceModelSummary
  {
  public:
    AWS_CLEANROOMSML_API AudienceModelSummary();
    AWS_CLEANROOMSML_API AudienceModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API AudienceModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const{ return m_audienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline bool AudienceModelArnHasBeenSet() const { return m_audienceModelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline void SetAudienceModelArn(const Aws::String& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline void SetAudienceModelArn(Aws::String&& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline void SetAudienceModelArn(const char* value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline AudienceModelSummary& WithAudienceModelArn(const Aws::String& value) { SetAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline AudienceModelSummary& WithAudienceModelArn(Aws::String&& value) { SetAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline AudienceModelSummary& WithAudienceModelArn(const char* value) { SetAudienceModelArn(value); return *this;}


    /**
     * <p>The time at which the audience model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the audience model was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time at which the audience model was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the audience model was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time at which the audience model was created.</p>
     */
    inline AudienceModelSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the audience model was created.</p>
     */
    inline AudienceModelSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The description of the audience model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the audience model.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the audience model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the audience model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the audience model.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the audience model.</p>
     */
    inline AudienceModelSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the audience model.</p>
     */
    inline AudienceModelSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the audience model.</p>
     */
    inline AudienceModelSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the audience model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the audience model.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the audience model.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the audience model.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the audience model.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the audience model.</p>
     */
    inline AudienceModelSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the audience model.</p>
     */
    inline AudienceModelSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the audience model.</p>
     */
    inline AudienceModelSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the audience model.</p>
     */
    inline const AudienceModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the audience model.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the audience model.</p>
     */
    inline void SetStatus(const AudienceModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the audience model.</p>
     */
    inline void SetStatus(AudienceModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the audience model.</p>
     */
    inline AudienceModelSummary& WithStatus(const AudienceModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the audience model.</p>
     */
    inline AudienceModelSummary& WithStatus(AudienceModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset that was used for the
     * audience model.</p>
     */
    inline const Aws::String& GetTrainingDatasetArn() const{ return m_trainingDatasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset that was used for the
     * audience model.</p>
     */
    inline bool TrainingDatasetArnHasBeenSet() const { return m_trainingDatasetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset that was used for the
     * audience model.</p>
     */
    inline void SetTrainingDatasetArn(const Aws::String& value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset that was used for the
     * audience model.</p>
     */
    inline void SetTrainingDatasetArn(Aws::String&& value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset that was used for the
     * audience model.</p>
     */
    inline void SetTrainingDatasetArn(const char* value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset that was used for the
     * audience model.</p>
     */
    inline AudienceModelSummary& WithTrainingDatasetArn(const Aws::String& value) { SetTrainingDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset that was used for the
     * audience model.</p>
     */
    inline AudienceModelSummary& WithTrainingDatasetArn(Aws::String&& value) { SetTrainingDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset that was used for the
     * audience model.</p>
     */
    inline AudienceModelSummary& WithTrainingDatasetArn(const char* value) { SetTrainingDatasetArn(value); return *this;}


    /**
     * <p>The most recent time at which the audience model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The most recent time at which the audience model was updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The most recent time at which the audience model was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The most recent time at which the audience model was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The most recent time at which the audience model was updated.</p>
     */
    inline AudienceModelSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The most recent time at which the audience model was updated.</p>
     */
    inline AudienceModelSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_audienceModelArn;
    bool m_audienceModelArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AudienceModelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_trainingDatasetArn;
    bool m_trainingDatasetArnHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
