/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ContentClassifier.h>
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
   * <p>Attributes of the data specified by the customer. Use these to describe the
   * data to be labeled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobDataAttributes">AWS
   * API Reference</a></p>
   */
  class LabelingJobDataAttributes
  {
  public:
    AWS_SAGEMAKER_API LabelingJobDataAttributes();
    AWS_SAGEMAKER_API LabelingJobDataAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobDataAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. SageMaker may restrict the Amazon Mechanical Turk workers that
     * can view your task based on this information.</p>
     */
    inline const Aws::Vector<ContentClassifier>& GetContentClassifiers() const{ return m_contentClassifiers; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. SageMaker may restrict the Amazon Mechanical Turk workers that
     * can view your task based on this information.</p>
     */
    inline bool ContentClassifiersHasBeenSet() const { return m_contentClassifiersHasBeenSet; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. SageMaker may restrict the Amazon Mechanical Turk workers that
     * can view your task based on this information.</p>
     */
    inline void SetContentClassifiers(const Aws::Vector<ContentClassifier>& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers = value; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. SageMaker may restrict the Amazon Mechanical Turk workers that
     * can view your task based on this information.</p>
     */
    inline void SetContentClassifiers(Aws::Vector<ContentClassifier>&& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers = std::move(value); }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. SageMaker may restrict the Amazon Mechanical Turk workers that
     * can view your task based on this information.</p>
     */
    inline LabelingJobDataAttributes& WithContentClassifiers(const Aws::Vector<ContentClassifier>& value) { SetContentClassifiers(value); return *this;}

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. SageMaker may restrict the Amazon Mechanical Turk workers that
     * can view your task based on this information.</p>
     */
    inline LabelingJobDataAttributes& WithContentClassifiers(Aws::Vector<ContentClassifier>&& value) { SetContentClassifiers(std::move(value)); return *this;}

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. SageMaker may restrict the Amazon Mechanical Turk workers that
     * can view your task based on this information.</p>
     */
    inline LabelingJobDataAttributes& AddContentClassifiers(const ContentClassifier& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers.push_back(value); return *this; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. SageMaker may restrict the Amazon Mechanical Turk workers that
     * can view your task based on this information.</p>
     */
    inline LabelingJobDataAttributes& AddContentClassifiers(ContentClassifier&& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContentClassifier> m_contentClassifiers;
    bool m_contentClassifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
