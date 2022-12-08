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
   * <p>Provides information about a custom language model, including the base model
   * name, when the model was created, the location of the files used to train the
   * model, when the model was last modified, the name you chose for the model, its
   * language, its processing state, and if there is an upgrade available for the
   * base model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/LanguageModel">AWS
   * API Reference</a></p>
   */
  class LanguageModel
  {
  public:
    AWS_TRANSCRIBESERVICE_API LanguageModel();
    AWS_TRANSCRIBESERVICE_API LanguageModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API LanguageModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique name, chosen by you, for your custom language model.</p> <p>This
     * name is case sensitive, cannot contain spaces, and must be unique within an
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>A unique name, chosen by you, for your custom language model.</p> <p>This
     * name is case sensitive, cannot contain spaces, and must be unique within an
     * Amazon Web Services account.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>A unique name, chosen by you, for your custom language model.</p> <p>This
     * name is case sensitive, cannot contain spaces, and must be unique within an
     * Amazon Web Services account.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>A unique name, chosen by you, for your custom language model.</p> <p>This
     * name is case sensitive, cannot contain spaces, and must be unique within an
     * Amazon Web Services account.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>A unique name, chosen by you, for your custom language model.</p> <p>This
     * name is case sensitive, cannot contain spaces, and must be unique within an
     * Amazon Web Services account.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>A unique name, chosen by you, for your custom language model.</p> <p>This
     * name is case sensitive, cannot contain spaces, and must be unique within an
     * Amazon Web Services account.</p>
     */
    inline LanguageModel& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>A unique name, chosen by you, for your custom language model.</p> <p>This
     * name is case sensitive, cannot contain spaces, and must be unique within an
     * Amazon Web Services account.</p>
     */
    inline LanguageModel& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>A unique name, chosen by you, for your custom language model.</p> <p>This
     * name is case sensitive, cannot contain spaces, and must be unique within an
     * Amazon Web Services account.</p>
     */
    inline LanguageModel& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The date and time the specified custom language model was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time the specified custom language model was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The date and time the specified custom language model was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The date and time the specified custom language model was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The date and time the specified custom language model was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline LanguageModel& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The date and time the specified custom language model was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline LanguageModel& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified custom language model was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time the specified custom language model was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time the specified custom language model was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time the specified custom language model was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time the specified custom language model was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline LanguageModel& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time the specified custom language model was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline LanguageModel& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The language code used to create your custom language model. Each custom
     * language model must contain terms in only one language, and the language you
     * select for your custom language model must match the language of your training
     * and tuning data.</p> <p>For a list of supported languages and their associated
     * language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table. Note that U.S. English (<code>en-US</code>) is the only
     * language supported with Amazon Transcribe Medical.</p>
     */
    inline const CLMLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code used to create your custom language model. Each custom
     * language model must contain terms in only one language, and the language you
     * select for your custom language model must match the language of your training
     * and tuning data.</p> <p>For a list of supported languages and their associated
     * language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table. Note that U.S. English (<code>en-US</code>) is the only
     * language supported with Amazon Transcribe Medical.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code used to create your custom language model. Each custom
     * language model must contain terms in only one language, and the language you
     * select for your custom language model must match the language of your training
     * and tuning data.</p> <p>For a list of supported languages and their associated
     * language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table. Note that U.S. English (<code>en-US</code>) is the only
     * language supported with Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(const CLMLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code used to create your custom language model. Each custom
     * language model must contain terms in only one language, and the language you
     * select for your custom language model must match the language of your training
     * and tuning data.</p> <p>For a list of supported languages and their associated
     * language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table. Note that U.S. English (<code>en-US</code>) is the only
     * language supported with Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(CLMLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code used to create your custom language model. Each custom
     * language model must contain terms in only one language, and the language you
     * select for your custom language model must match the language of your training
     * and tuning data.</p> <p>For a list of supported languages and their associated
     * language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table. Note that U.S. English (<code>en-US</code>) is the only
     * language supported with Amazon Transcribe Medical.</p>
     */
    inline LanguageModel& WithLanguageCode(const CLMLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code used to create your custom language model. Each custom
     * language model must contain terms in only one language, and the language you
     * select for your custom language model must match the language of your training
     * and tuning data.</p> <p>For a list of supported languages and their associated
     * language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table. Note that U.S. English (<code>en-US</code>) is the only
     * language supported with Amazon Transcribe Medical.</p>
     */
    inline LanguageModel& WithLanguageCode(CLMLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model.</p>
     */
    inline const BaseModelName& GetBaseModelName() const{ return m_baseModelName; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model.</p>
     */
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model.</p>
     */
    inline void SetBaseModelName(const BaseModelName& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = value; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model.</p>
     */
    inline void SetBaseModelName(BaseModelName&& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = std::move(value); }

    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model.</p>
     */
    inline LanguageModel& WithBaseModelName(const BaseModelName& value) { SetBaseModelName(value); return *this;}

    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model.</p>
     */
    inline LanguageModel& WithBaseModelName(BaseModelName&& value) { SetBaseModelName(std::move(value)); return *this;}


    /**
     * <p>The status of the specified custom language model. When the status displays
     * as <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline const ModelStatus& GetModelStatus() const{ return m_modelStatus; }

    /**
     * <p>The status of the specified custom language model. When the status displays
     * as <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline bool ModelStatusHasBeenSet() const { return m_modelStatusHasBeenSet; }

    /**
     * <p>The status of the specified custom language model. When the status displays
     * as <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline void SetModelStatus(const ModelStatus& value) { m_modelStatusHasBeenSet = true; m_modelStatus = value; }

    /**
     * <p>The status of the specified custom language model. When the status displays
     * as <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline void SetModelStatus(ModelStatus&& value) { m_modelStatusHasBeenSet = true; m_modelStatus = std::move(value); }

    /**
     * <p>The status of the specified custom language model. When the status displays
     * as <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline LanguageModel& WithModelStatus(const ModelStatus& value) { SetModelStatus(value); return *this;}

    /**
     * <p>The status of the specified custom language model. When the status displays
     * as <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline LanguageModel& WithModelStatus(ModelStatus&& value) { SetModelStatus(std::move(value)); return *this;}


    /**
     * <p>Shows if a more current base model is available for use with the specified
     * custom language model.</p> <p>If <code>false</code>, your custom language model
     * is using the most up-to-date base model.</p> <p>If <code>true</code>, there is a
     * newer base model available than the one your language model is using.</p>
     * <p>Note that to update a base model, you must recreate the custom language model
     * using the new base model. Base model upgrades for existing custom language
     * models are not supported.</p>
     */
    inline bool GetUpgradeAvailability() const{ return m_upgradeAvailability; }

    /**
     * <p>Shows if a more current base model is available for use with the specified
     * custom language model.</p> <p>If <code>false</code>, your custom language model
     * is using the most up-to-date base model.</p> <p>If <code>true</code>, there is a
     * newer base model available than the one your language model is using.</p>
     * <p>Note that to update a base model, you must recreate the custom language model
     * using the new base model. Base model upgrades for existing custom language
     * models are not supported.</p>
     */
    inline bool UpgradeAvailabilityHasBeenSet() const { return m_upgradeAvailabilityHasBeenSet; }

    /**
     * <p>Shows if a more current base model is available for use with the specified
     * custom language model.</p> <p>If <code>false</code>, your custom language model
     * is using the most up-to-date base model.</p> <p>If <code>true</code>, there is a
     * newer base model available than the one your language model is using.</p>
     * <p>Note that to update a base model, you must recreate the custom language model
     * using the new base model. Base model upgrades for existing custom language
     * models are not supported.</p>
     */
    inline void SetUpgradeAvailability(bool value) { m_upgradeAvailabilityHasBeenSet = true; m_upgradeAvailability = value; }

    /**
     * <p>Shows if a more current base model is available for use with the specified
     * custom language model.</p> <p>If <code>false</code>, your custom language model
     * is using the most up-to-date base model.</p> <p>If <code>true</code>, there is a
     * newer base model available than the one your language model is using.</p>
     * <p>Note that to update a base model, you must recreate the custom language model
     * using the new base model. Base model upgrades for existing custom language
     * models are not supported.</p>
     */
    inline LanguageModel& WithUpgradeAvailability(bool value) { SetUpgradeAvailability(value); return *this;}


    /**
     * <p>If <code>ModelStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom language
     * model request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If <code>ModelStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom language
     * model request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If <code>ModelStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom language
     * model request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If <code>ModelStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom language
     * model request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If <code>ModelStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom language
     * model request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If <code>ModelStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom language
     * model request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline LanguageModel& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>ModelStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom language
     * model request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline LanguageModel& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>ModelStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom language
     * model request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline LanguageModel& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The Amazon S3 location of the input files used to train and tune your custom
     * language model, in addition to the data access role ARN (Amazon Resource Name)
     * that has permissions to access these data.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>The Amazon S3 location of the input files used to train and tune your custom
     * language model, in addition to the data access role ARN (Amazon Resource Name)
     * that has permissions to access these data.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the input files used to train and tune your custom
     * language model, in addition to the data access role ARN (Amazon Resource Name)
     * that has permissions to access these data.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>The Amazon S3 location of the input files used to train and tune your custom
     * language model, in addition to the data access role ARN (Amazon Resource Name)
     * that has permissions to access these data.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>The Amazon S3 location of the input files used to train and tune your custom
     * language model, in addition to the data access role ARN (Amazon Resource Name)
     * that has permissions to access these data.</p>
     */
    inline LanguageModel& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>The Amazon S3 location of the input files used to train and tune your custom
     * language model, in addition to the data access role ARN (Amazon Resource Name)
     * that has permissions to access these data.</p>
     */
    inline LanguageModel& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    CLMLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    BaseModelName m_baseModelName;
    bool m_baseModelNameHasBeenSet = false;

    ModelStatus m_modelStatus;
    bool m_modelStatusHasBeenSet = false;

    bool m_upgradeAvailability;
    bool m_upgradeAvailabilityHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
