﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-a2i-runtime/model/ContentClassifier.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   * <p>Attributes of the data specified by the customer. Use these to describe the
   * data to be labeled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/HumanLoopDataAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_AUGMENTEDAIRUNTIME_API HumanLoopDataAttributes
  {
  public:
    HumanLoopDataAttributes();
    HumanLoopDataAttributes(Aws::Utils::Json::JsonView jsonValue);
    HumanLoopDataAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content.</p> <p>Amazon SageMaker can restrict the Amazon Mechanical Turk
     * workers who can view your task based on this information.</p>
     */
    inline const Aws::Vector<ContentClassifier>& GetContentClassifiers() const{ return m_contentClassifiers; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content.</p> <p>Amazon SageMaker can restrict the Amazon Mechanical Turk
     * workers who can view your task based on this information.</p>
     */
    inline bool ContentClassifiersHasBeenSet() const { return m_contentClassifiersHasBeenSet; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content.</p> <p>Amazon SageMaker can restrict the Amazon Mechanical Turk
     * workers who can view your task based on this information.</p>
     */
    inline void SetContentClassifiers(const Aws::Vector<ContentClassifier>& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers = value; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content.</p> <p>Amazon SageMaker can restrict the Amazon Mechanical Turk
     * workers who can view your task based on this information.</p>
     */
    inline void SetContentClassifiers(Aws::Vector<ContentClassifier>&& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers = std::move(value); }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content.</p> <p>Amazon SageMaker can restrict the Amazon Mechanical Turk
     * workers who can view your task based on this information.</p>
     */
    inline HumanLoopDataAttributes& WithContentClassifiers(const Aws::Vector<ContentClassifier>& value) { SetContentClassifiers(value); return *this;}

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content.</p> <p>Amazon SageMaker can restrict the Amazon Mechanical Turk
     * workers who can view your task based on this information.</p>
     */
    inline HumanLoopDataAttributes& WithContentClassifiers(Aws::Vector<ContentClassifier>&& value) { SetContentClassifiers(std::move(value)); return *this;}

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content.</p> <p>Amazon SageMaker can restrict the Amazon Mechanical Turk
     * workers who can view your task based on this information.</p>
     */
    inline HumanLoopDataAttributes& AddContentClassifiers(const ContentClassifier& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers.push_back(value); return *this; }

    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content.</p> <p>Amazon SageMaker can restrict the Amazon Mechanical Turk
     * workers who can view your task based on this information.</p>
     */
    inline HumanLoopDataAttributes& AddContentClassifiers(ContentClassifier&& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContentClassifier> m_contentClassifiers;
    bool m_contentClassifiersHasBeenSet;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
