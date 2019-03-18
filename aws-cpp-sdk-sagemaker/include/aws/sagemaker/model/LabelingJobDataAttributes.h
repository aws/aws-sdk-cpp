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
  class AWS_SAGEMAKER_API LabelingJobDataAttributes
  {
  public:
    LabelingJobDataAttributes();
    LabelingJobDataAttributes(Aws::Utils::Json::JsonView jsonValue);
    LabelingJobDataAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. Amazon SageMaker may restrict the Amazon Mechanical Turk workers
     * that can view your task based on this information.</p>
     */
    inline const Aws::Vector<ContentClassifier>& GetContentClassifiers() const{ return m_contentClassifiers; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. Amazon SageMaker may restrict the Amazon Mechanical Turk workers
     * that can view your task based on this information.</p>
     */
    inline bool ContentClassifiersHasBeenSet() const { return m_contentClassifiersHasBeenSet; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. Amazon SageMaker may restrict the Amazon Mechanical Turk workers
     * that can view your task based on this information.</p>
     */
    inline void SetContentClassifiers(const Aws::Vector<ContentClassifier>& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers = value; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. Amazon SageMaker may restrict the Amazon Mechanical Turk workers
     * that can view your task based on this information.</p>
     */
    inline void SetContentClassifiers(Aws::Vector<ContentClassifier>&& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers = std::move(value); }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. Amazon SageMaker may restrict the Amazon Mechanical Turk workers
     * that can view your task based on this information.</p>
     */
    inline LabelingJobDataAttributes& WithContentClassifiers(const Aws::Vector<ContentClassifier>& value) { SetContentClassifiers(value); return *this;}

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. Amazon SageMaker may restrict the Amazon Mechanical Turk workers
     * that can view your task based on this information.</p>
     */
    inline LabelingJobDataAttributes& WithContentClassifiers(Aws::Vector<ContentClassifier>&& value) { SetContentClassifiers(std::move(value)); return *this;}

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. Amazon SageMaker may restrict the Amazon Mechanical Turk workers
     * that can view your task based on this information.</p>
     */
    inline LabelingJobDataAttributes& AddContentClassifiers(const ContentClassifier& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers.push_back(value); return *this; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content. Amazon SageMaker may restrict the Amazon Mechanical Turk workers
     * that can view your task based on this information.</p>
     */
    inline LabelingJobDataAttributes& AddContentClassifiers(ContentClassifier&& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContentClassifier> m_contentClassifiers;
    bool m_contentClassifiersHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
