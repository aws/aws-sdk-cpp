/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/transcribe/model/CLMLanguageCode.h>
#include <aws/transcribe/model/BaseModelName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/InputDataConfig.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API CreateLanguageModelRequest : public TranscribeServiceRequest
  {
  public:
    CreateLanguageModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLanguageModel"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language of the input text you're using to train your custom language
     * model.</p>
     */
    inline const CLMLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the input text you're using to train your custom language
     * model.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of the input text you're using to train your custom language
     * model.</p>
     */
    inline void SetLanguageCode(const CLMLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the input text you're using to train your custom language
     * model.</p>
     */
    inline void SetLanguageCode(CLMLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the input text you're using to train your custom language
     * model.</p>
     */
    inline CreateLanguageModelRequest& WithLanguageCode(const CLMLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input text you're using to train your custom language
     * model.</p>
     */
    inline CreateLanguageModelRequest& WithLanguageCode(CLMLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * your custom language model.</p> <p>If you want to use your custom language model
     * to transcribe audio with a sample rate of 16 kHz or greater, choose
     * <code>Wideband</code>.</p> <p>If you want to use your custom language model to
     * transcribe audio with a sample rate that is less than 16 kHz, choose
     * <code>Narrowband</code>.</p>
     */
    inline const BaseModelName& GetBaseModelName() const{ return m_baseModelName; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * your custom language model.</p> <p>If you want to use your custom language model
     * to transcribe audio with a sample rate of 16 kHz or greater, choose
     * <code>Wideband</code>.</p> <p>If you want to use your custom language model to
     * transcribe audio with a sample rate that is less than 16 kHz, choose
     * <code>Narrowband</code>.</p>
     */
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * your custom language model.</p> <p>If you want to use your custom language model
     * to transcribe audio with a sample rate of 16 kHz or greater, choose
     * <code>Wideband</code>.</p> <p>If you want to use your custom language model to
     * transcribe audio with a sample rate that is less than 16 kHz, choose
     * <code>Narrowband</code>.</p>
     */
    inline void SetBaseModelName(const BaseModelName& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = value; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * your custom language model.</p> <p>If you want to use your custom language model
     * to transcribe audio with a sample rate of 16 kHz or greater, choose
     * <code>Wideband</code>.</p> <p>If you want to use your custom language model to
     * transcribe audio with a sample rate that is less than 16 kHz, choose
     * <code>Narrowband</code>.</p>
     */
    inline void SetBaseModelName(BaseModelName&& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = std::move(value); }

    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * your custom language model.</p> <p>If you want to use your custom language model
     * to transcribe audio with a sample rate of 16 kHz or greater, choose
     * <code>Wideband</code>.</p> <p>If you want to use your custom language model to
     * transcribe audio with a sample rate that is less than 16 kHz, choose
     * <code>Narrowband</code>.</p>
     */
    inline CreateLanguageModelRequest& WithBaseModelName(const BaseModelName& value) { SetBaseModelName(value); return *this;}

    /**
     * <p>The Amazon Transcribe standard language model, or base model used to create
     * your custom language model.</p> <p>If you want to use your custom language model
     * to transcribe audio with a sample rate of 16 kHz or greater, choose
     * <code>Wideband</code>.</p> <p>If you want to use your custom language model to
     * transcribe audio with a sample rate that is less than 16 kHz, choose
     * <code>Narrowband</code>.</p>
     */
    inline CreateLanguageModelRequest& WithBaseModelName(BaseModelName&& value) { SetBaseModelName(std::move(value)); return *this;}


    /**
     * <p>The name you choose for your custom language model when you create it.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name you choose for your custom language model when you create it.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name you choose for your custom language model when you create it.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name you choose for your custom language model when you create it.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name you choose for your custom language model when you create it.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name you choose for your custom language model when you create it.</p>
     */
    inline CreateLanguageModelRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name you choose for your custom language model when you create it.</p>
     */
    inline CreateLanguageModelRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name you choose for your custom language model when you create it.</p>
     */
    inline CreateLanguageModelRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>Contains the data access role and the Amazon S3 prefixes to read the required
     * input files to create a custom language model.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>Contains the data access role and the Amazon S3 prefixes to read the required
     * input files to create a custom language model.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>Contains the data access role and the Amazon S3 prefixes to read the required
     * input files to create a custom language model.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>Contains the data access role and the Amazon S3 prefixes to read the required
     * input files to create a custom language model.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>Contains the data access role and the Amazon S3 prefixes to read the required
     * input files to create a custom language model.</p>
     */
    inline CreateLanguageModelRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>Contains the data access role and the Amazon S3 prefixes to read the required
     * input files to create a custom language model.</p>
     */
    inline CreateLanguageModelRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}

  private:

    CLMLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    BaseModelName m_baseModelName;
    bool m_baseModelNameHasBeenSet;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
