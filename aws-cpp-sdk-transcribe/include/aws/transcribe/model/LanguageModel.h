/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/CLMLanguageCode.h>
#include <aws/transcribe/model/BaseModelName.h>
#include <aws/transcribe/model/ModelStatus.h>
#include <aws/transcribe/model/InputDataConfig.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>The structure used to describe a custom language model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/LanguageModel">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API LanguageModel
  {
  public:
    LanguageModel();
    LanguageModel(Aws::Utils::Json::JsonView jsonValue);
    LanguageModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the custom language model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the custom language model.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the custom language model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the custom language model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the custom language model.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the custom language model.</p>
     */
    inline LanguageModel& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the custom language model.</p>
     */
    inline LanguageModel& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom language model.</p>
     */
    inline LanguageModel& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The time the custom language model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time the custom language model was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time the custom language model was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time the custom language model was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time the custom language model was created.</p>
     */
    inline LanguageModel& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time the custom language model was created.</p>
     */
    inline LanguageModel& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The most recent time the custom language model was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The most recent time the custom language model was modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The most recent time the custom language model was modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The most recent time the custom language model was modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The most recent time the custom language model was modified.</p>
     */
    inline LanguageModel& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The most recent time the custom language model was modified.</p>
     */
    inline LanguageModel& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The language code you used to create your custom language model.</p>
     */
    inline const CLMLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code you used to create your custom language model.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code you used to create your custom language model.</p>
     */
    inline void SetLanguageCode(const CLMLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code you used to create your custom language model.</p>
     */
    inline void SetLanguageCode(CLMLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code you used to create your custom language model.</p>
     */
    inline LanguageModel& WithLanguageCode(const CLMLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code you used to create your custom language model.</p>
     */
    inline LanguageModel& WithLanguageCode(CLMLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * the custom language model.</p>
     */
    inline const BaseModelName& GetBaseModelName() const{ return m_baseModelName; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * the custom language model.</p>
     */
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * the custom language model.</p>
     */
    inline void SetBaseModelName(const BaseModelName& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = value; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * the custom language model.</p>
     */
    inline void SetBaseModelName(BaseModelName&& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = std::move(value); }

    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * the custom language model.</p>
     */
    inline LanguageModel& WithBaseModelName(const BaseModelName& value) { SetBaseModelName(value); return *this;}

    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * the custom language model.</p>
     */
    inline LanguageModel& WithBaseModelName(BaseModelName&& value) { SetBaseModelName(std::move(value)); return *this;}


    /**
     * <p>The creation status of a custom language model. When the status is
     * <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline const ModelStatus& GetModelStatus() const{ return m_modelStatus; }

    /**
     * <p>The creation status of a custom language model. When the status is
     * <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline bool ModelStatusHasBeenSet() const { return m_modelStatusHasBeenSet; }

    /**
     * <p>The creation status of a custom language model. When the status is
     * <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline void SetModelStatus(const ModelStatus& value) { m_modelStatusHasBeenSet = true; m_modelStatus = value; }

    /**
     * <p>The creation status of a custom language model. When the status is
     * <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline void SetModelStatus(ModelStatus&& value) { m_modelStatusHasBeenSet = true; m_modelStatus = std::move(value); }

    /**
     * <p>The creation status of a custom language model. When the status is
     * <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline LanguageModel& WithModelStatus(const ModelStatus& value) { SetModelStatus(value); return *this;}

    /**
     * <p>The creation status of a custom language model. When the status is
     * <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline LanguageModel& WithModelStatus(ModelStatus&& value) { SetModelStatus(std::move(value)); return *this;}


    /**
     * <p>Whether the base model used for the custom language model is up to date. If
     * this field is <code>true</code> then you are running the most up-to-date version
     * of the base model in your custom language model.</p>
     */
    inline bool GetUpgradeAvailability() const{ return m_upgradeAvailability; }

    /**
     * <p>Whether the base model used for the custom language model is up to date. If
     * this field is <code>true</code> then you are running the most up-to-date version
     * of the base model in your custom language model.</p>
     */
    inline bool UpgradeAvailabilityHasBeenSet() const { return m_upgradeAvailabilityHasBeenSet; }

    /**
     * <p>Whether the base model used for the custom language model is up to date. If
     * this field is <code>true</code> then you are running the most up-to-date version
     * of the base model in your custom language model.</p>
     */
    inline void SetUpgradeAvailability(bool value) { m_upgradeAvailabilityHasBeenSet = true; m_upgradeAvailability = value; }

    /**
     * <p>Whether the base model used for the custom language model is up to date. If
     * this field is <code>true</code> then you are running the most up-to-date version
     * of the base model in your custom language model.</p>
     */
    inline LanguageModel& WithUpgradeAvailability(bool value) { SetUpgradeAvailability(value); return *this;}


    /**
     * <p>The reason why the custom language model couldn't be created.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason why the custom language model couldn't be created.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason why the custom language model couldn't be created.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason why the custom language model couldn't be created.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason why the custom language model couldn't be created.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason why the custom language model couldn't be created.</p>
     */
    inline LanguageModel& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason why the custom language model couldn't be created.</p>
     */
    inline LanguageModel& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason why the custom language model couldn't be created.</p>
     */
    inline LanguageModel& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The data access role and Amazon S3 prefixes for the input files used to train
     * the custom language model.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>The data access role and Amazon S3 prefixes for the input files used to train
     * the custom language model.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>The data access role and Amazon S3 prefixes for the input files used to train
     * the custom language model.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>The data access role and Amazon S3 prefixes for the input files used to train
     * the custom language model.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>The data access role and Amazon S3 prefixes for the input files used to train
     * the custom language model.</p>
     */
    inline LanguageModel& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>The data access role and Amazon S3 prefixes for the input files used to train
     * the custom language model.</p>
     */
    inline LanguageModel& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    CLMLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    BaseModelName m_baseModelName;
    bool m_baseModelNameHasBeenSet;

    ModelStatus m_modelStatus;
    bool m_modelStatusHasBeenSet;

    bool m_upgradeAvailability;
    bool m_upgradeAvailabilityHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
