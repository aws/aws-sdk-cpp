/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CompressionType.h>
#include <aws/sagemaker/model/TrainingInputMode.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines a named input source, called a channel, to be used by an
   * algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ChannelSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ChannelSpecification
  {
  public:
    ChannelSpecification();
    ChannelSpecification(Aws::Utils::Json::JsonView jsonValue);
    ChannelSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline ChannelSpecification& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline ChannelSpecification& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline ChannelSpecification& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A brief description of the channel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the channel.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the channel.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the channel.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the channel.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the channel.</p>
     */
    inline ChannelSpecification& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the channel.</p>
     */
    inline ChannelSpecification& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the channel.</p>
     */
    inline ChannelSpecification& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the channel is required by the algorithm.</p>
     */
    inline bool GetIsRequired() const{ return m_isRequired; }

    /**
     * <p>Indicates whether the channel is required by the algorithm.</p>
     */
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }

    /**
     * <p>Indicates whether the channel is required by the algorithm.</p>
     */
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }

    /**
     * <p>Indicates whether the channel is required by the algorithm.</p>
     */
    inline ChannelSpecification& WithIsRequired(bool value) { SetIsRequired(value); return *this;}


    /**
     * <p>The supported MIME types for the data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedContentTypes() const{ return m_supportedContentTypes; }

    /**
     * <p>The supported MIME types for the data.</p>
     */
    inline bool SupportedContentTypesHasBeenSet() const { return m_supportedContentTypesHasBeenSet; }

    /**
     * <p>The supported MIME types for the data.</p>
     */
    inline void SetSupportedContentTypes(const Aws::Vector<Aws::String>& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = value; }

    /**
     * <p>The supported MIME types for the data.</p>
     */
    inline void SetSupportedContentTypes(Aws::Vector<Aws::String>&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = std::move(value); }

    /**
     * <p>The supported MIME types for the data.</p>
     */
    inline ChannelSpecification& WithSupportedContentTypes(const Aws::Vector<Aws::String>& value) { SetSupportedContentTypes(value); return *this;}

    /**
     * <p>The supported MIME types for the data.</p>
     */
    inline ChannelSpecification& WithSupportedContentTypes(Aws::Vector<Aws::String>&& value) { SetSupportedContentTypes(std::move(value)); return *this;}

    /**
     * <p>The supported MIME types for the data.</p>
     */
    inline ChannelSpecification& AddSupportedContentTypes(const Aws::String& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(value); return *this; }

    /**
     * <p>The supported MIME types for the data.</p>
     */
    inline ChannelSpecification& AddSupportedContentTypes(Aws::String&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The supported MIME types for the data.</p>
     */
    inline ChannelSpecification& AddSupportedContentTypes(const char* value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(value); return *this; }


    /**
     * <p>The allowed compression types, if data compression is used.</p>
     */
    inline const Aws::Vector<CompressionType>& GetSupportedCompressionTypes() const{ return m_supportedCompressionTypes; }

    /**
     * <p>The allowed compression types, if data compression is used.</p>
     */
    inline bool SupportedCompressionTypesHasBeenSet() const { return m_supportedCompressionTypesHasBeenSet; }

    /**
     * <p>The allowed compression types, if data compression is used.</p>
     */
    inline void SetSupportedCompressionTypes(const Aws::Vector<CompressionType>& value) { m_supportedCompressionTypesHasBeenSet = true; m_supportedCompressionTypes = value; }

    /**
     * <p>The allowed compression types, if data compression is used.</p>
     */
    inline void SetSupportedCompressionTypes(Aws::Vector<CompressionType>&& value) { m_supportedCompressionTypesHasBeenSet = true; m_supportedCompressionTypes = std::move(value); }

    /**
     * <p>The allowed compression types, if data compression is used.</p>
     */
    inline ChannelSpecification& WithSupportedCompressionTypes(const Aws::Vector<CompressionType>& value) { SetSupportedCompressionTypes(value); return *this;}

    /**
     * <p>The allowed compression types, if data compression is used.</p>
     */
    inline ChannelSpecification& WithSupportedCompressionTypes(Aws::Vector<CompressionType>&& value) { SetSupportedCompressionTypes(std::move(value)); return *this;}

    /**
     * <p>The allowed compression types, if data compression is used.</p>
     */
    inline ChannelSpecification& AddSupportedCompressionTypes(const CompressionType& value) { m_supportedCompressionTypesHasBeenSet = true; m_supportedCompressionTypes.push_back(value); return *this; }

    /**
     * <p>The allowed compression types, if data compression is used.</p>
     */
    inline ChannelSpecification& AddSupportedCompressionTypes(CompressionType&& value) { m_supportedCompressionTypesHasBeenSet = true; m_supportedCompressionTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The allowed input mode, either FILE or PIPE.</p> <p>In FILE mode, Amazon
     * SageMaker copies the data from the input source onto the local Amazon Elastic
     * Block Store (Amazon EBS) volumes before starting your training algorithm. This
     * is the most commonly used input mode.</p> <p>In PIPE mode, Amazon SageMaker
     * streams input data from the source directly to your algorithm without using the
     * EBS volume.</p>
     */
    inline const Aws::Vector<TrainingInputMode>& GetSupportedInputModes() const{ return m_supportedInputModes; }

    /**
     * <p>The allowed input mode, either FILE or PIPE.</p> <p>In FILE mode, Amazon
     * SageMaker copies the data from the input source onto the local Amazon Elastic
     * Block Store (Amazon EBS) volumes before starting your training algorithm. This
     * is the most commonly used input mode.</p> <p>In PIPE mode, Amazon SageMaker
     * streams input data from the source directly to your algorithm without using the
     * EBS volume.</p>
     */
    inline bool SupportedInputModesHasBeenSet() const { return m_supportedInputModesHasBeenSet; }

    /**
     * <p>The allowed input mode, either FILE or PIPE.</p> <p>In FILE mode, Amazon
     * SageMaker copies the data from the input source onto the local Amazon Elastic
     * Block Store (Amazon EBS) volumes before starting your training algorithm. This
     * is the most commonly used input mode.</p> <p>In PIPE mode, Amazon SageMaker
     * streams input data from the source directly to your algorithm without using the
     * EBS volume.</p>
     */
    inline void SetSupportedInputModes(const Aws::Vector<TrainingInputMode>& value) { m_supportedInputModesHasBeenSet = true; m_supportedInputModes = value; }

    /**
     * <p>The allowed input mode, either FILE or PIPE.</p> <p>In FILE mode, Amazon
     * SageMaker copies the data from the input source onto the local Amazon Elastic
     * Block Store (Amazon EBS) volumes before starting your training algorithm. This
     * is the most commonly used input mode.</p> <p>In PIPE mode, Amazon SageMaker
     * streams input data from the source directly to your algorithm without using the
     * EBS volume.</p>
     */
    inline void SetSupportedInputModes(Aws::Vector<TrainingInputMode>&& value) { m_supportedInputModesHasBeenSet = true; m_supportedInputModes = std::move(value); }

    /**
     * <p>The allowed input mode, either FILE or PIPE.</p> <p>In FILE mode, Amazon
     * SageMaker copies the data from the input source onto the local Amazon Elastic
     * Block Store (Amazon EBS) volumes before starting your training algorithm. This
     * is the most commonly used input mode.</p> <p>In PIPE mode, Amazon SageMaker
     * streams input data from the source directly to your algorithm without using the
     * EBS volume.</p>
     */
    inline ChannelSpecification& WithSupportedInputModes(const Aws::Vector<TrainingInputMode>& value) { SetSupportedInputModes(value); return *this;}

    /**
     * <p>The allowed input mode, either FILE or PIPE.</p> <p>In FILE mode, Amazon
     * SageMaker copies the data from the input source onto the local Amazon Elastic
     * Block Store (Amazon EBS) volumes before starting your training algorithm. This
     * is the most commonly used input mode.</p> <p>In PIPE mode, Amazon SageMaker
     * streams input data from the source directly to your algorithm without using the
     * EBS volume.</p>
     */
    inline ChannelSpecification& WithSupportedInputModes(Aws::Vector<TrainingInputMode>&& value) { SetSupportedInputModes(std::move(value)); return *this;}

    /**
     * <p>The allowed input mode, either FILE or PIPE.</p> <p>In FILE mode, Amazon
     * SageMaker copies the data from the input source onto the local Amazon Elastic
     * Block Store (Amazon EBS) volumes before starting your training algorithm. This
     * is the most commonly used input mode.</p> <p>In PIPE mode, Amazon SageMaker
     * streams input data from the source directly to your algorithm without using the
     * EBS volume.</p>
     */
    inline ChannelSpecification& AddSupportedInputModes(const TrainingInputMode& value) { m_supportedInputModesHasBeenSet = true; m_supportedInputModes.push_back(value); return *this; }

    /**
     * <p>The allowed input mode, either FILE or PIPE.</p> <p>In FILE mode, Amazon
     * SageMaker copies the data from the input source onto the local Amazon Elastic
     * Block Store (Amazon EBS) volumes before starting your training algorithm. This
     * is the most commonly used input mode.</p> <p>In PIPE mode, Amazon SageMaker
     * streams input data from the source directly to your algorithm without using the
     * EBS volume.</p>
     */
    inline ChannelSpecification& AddSupportedInputModes(TrainingInputMode&& value) { m_supportedInputModesHasBeenSet = true; m_supportedInputModes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_isRequired;
    bool m_isRequiredHasBeenSet;

    Aws::Vector<Aws::String> m_supportedContentTypes;
    bool m_supportedContentTypesHasBeenSet;

    Aws::Vector<CompressionType> m_supportedCompressionTypes;
    bool m_supportedCompressionTypesHasBeenSet;

    Aws::Vector<TrainingInputMode> m_supportedInputModes;
    bool m_supportedInputModesHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
