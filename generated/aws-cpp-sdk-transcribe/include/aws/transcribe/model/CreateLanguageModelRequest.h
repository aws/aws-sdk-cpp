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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/Tag.h>
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
     * <p>The language of your custom language model; note that the language code you
     * select must match the language of your training and tuning data.</p>
     */
    inline const CLMLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of your custom language model; note that the language code you
     * select must match the language of your training and tuning data.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of your custom language model; note that the language code you
     * select must match the language of your training and tuning data.</p>
     */
    inline void SetLanguageCode(const CLMLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of your custom language model; note that the language code you
     * select must match the language of your training and tuning data.</p>
     */
    inline void SetLanguageCode(CLMLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of your custom language model; note that the language code you
     * select must match the language of your training and tuning data.</p>
     */
    inline CreateLanguageModelRequest& WithLanguageCode(const CLMLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of your custom language model; note that the language code you
     * select must match the language of your training and tuning data.</p>
     */
    inline CreateLanguageModelRequest& WithLanguageCode(CLMLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model. Amazon Transcribe offers two options for base
     * models: Wideband and Narrowband.</p> <p>If the audio you want to transcribe has
     * a sample rate of 16,000 Hz or greater, choose <code>WideBand</code>. To
     * transcribe audio with a sample rate less than 16,000 Hz, choose
     * <code>NarrowBand</code>.</p>
     */
    inline const BaseModelName& GetBaseModelName() const{ return m_baseModelName; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model. Amazon Transcribe offers two options for base
     * models: Wideband and Narrowband.</p> <p>If the audio you want to transcribe has
     * a sample rate of 16,000 Hz or greater, choose <code>WideBand</code>. To
     * transcribe audio with a sample rate less than 16,000 Hz, choose
     * <code>NarrowBand</code>.</p>
     */
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model. Amazon Transcribe offers two options for base
     * models: Wideband and Narrowband.</p> <p>If the audio you want to transcribe has
     * a sample rate of 16,000 Hz or greater, choose <code>WideBand</code>. To
     * transcribe audio with a sample rate less than 16,000 Hz, choose
     * <code>NarrowBand</code>.</p>
     */
    inline void SetBaseModelName(const BaseModelName& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = value; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model. Amazon Transcribe offers two options for base
     * models: Wideband and Narrowband.</p> <p>If the audio you want to transcribe has
     * a sample rate of 16,000 Hz or greater, choose <code>WideBand</code>. To
     * transcribe audio with a sample rate less than 16,000 Hz, choose
     * <code>NarrowBand</code>.</p>
     */
    inline void SetBaseModelName(BaseModelName&& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = std::move(value); }

    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model. Amazon Transcribe offers two options for base
     * models: Wideband and Narrowband.</p> <p>If the audio you want to transcribe has
     * a sample rate of 16,000 Hz or greater, choose <code>WideBand</code>. To
     * transcribe audio with a sample rate less than 16,000 Hz, choose
     * <code>NarrowBand</code>.</p>
     */
    inline CreateLanguageModelRequest& WithBaseModelName(const BaseModelName& value) { SetBaseModelName(value); return *this;}

    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model. Amazon Transcribe offers two options for base
     * models: Wideband and Narrowband.</p> <p>If the audio you want to transcribe has
     * a sample rate of 16,000 Hz or greater, choose <code>WideBand</code>. To
     * transcribe audio with a sample rate less than 16,000 Hz, choose
     * <code>NarrowBand</code>.</p>
     */
    inline CreateLanguageModelRequest& WithBaseModelName(BaseModelName&& value) { SetBaseModelName(std::move(value)); return *this;}


    /**
     * <p>The name of your new custom language model.</p> <p>This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account. If you try to create a language model with the same name as a
     * previous language model, you get a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of your new custom language model.</p> <p>This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account. If you try to create a language model with the same name as a
     * previous language model, you get a <code>ConflictException</code> error.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of your new custom language model.</p> <p>This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account. If you try to create a language model with the same name as a
     * previous language model, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of your new custom language model.</p> <p>This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account. If you try to create a language model with the same name as a
     * previous language model, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of your new custom language model.</p> <p>This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account. If you try to create a language model with the same name as a
     * previous language model, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of your new custom language model.</p> <p>This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account. If you try to create a language model with the same name as a
     * previous language model, you get a <code>ConflictException</code> error.</p>
     */
    inline CreateLanguageModelRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of your new custom language model.</p> <p>This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account. If you try to create a language model with the same name as a
     * previous language model, you get a <code>ConflictException</code> error.</p>
     */
    inline CreateLanguageModelRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of your new custom language model.</p> <p>This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account. If you try to create a language model with the same name as a
     * previous language model, you get a <code>ConflictException</code> error.</p>
     */
    inline CreateLanguageModelRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>Contains your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations of your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>Contains your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations of your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>Contains your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations of your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>Contains your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations of your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>Contains your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations of your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline CreateLanguageModelRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>Contains your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations of your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline CreateLanguageModelRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Optionally add tags, each in the form of a key:value pair, to your new
     * language model. See also: .</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Optionally add tags, each in the form of a key:value pair, to your new
     * language model. See also: .</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optionally add tags, each in the form of a key:value pair, to your new
     * language model. See also: .</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optionally add tags, each in the form of a key:value pair, to your new
     * language model. See also: .</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optionally add tags, each in the form of a key:value pair, to your new
     * language model. See also: .</p>
     */
    inline CreateLanguageModelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Optionally add tags, each in the form of a key:value pair, to your new
     * language model. See also: .</p>
     */
    inline CreateLanguageModelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optionally add tags, each in the form of a key:value pair, to your new
     * language model. See also: .</p>
     */
    inline CreateLanguageModelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optionally add tags, each in the form of a key:value pair, to your new
     * language model. See also: .</p>
     */
    inline CreateLanguageModelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    CLMLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    BaseModelName m_baseModelName;
    bool m_baseModelNameHasBeenSet;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
