/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/ContentClassifier.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Allows you to set attributes of the image. Currently, you can declare an
   * image as free of personally identifiable information.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/HumanLoopDataAttributes">AWS
   * API Reference</a></p>
   */
  class HumanLoopDataAttributes
  {
  public:
    AWS_REKOGNITION_API HumanLoopDataAttributes();
    AWS_REKOGNITION_API HumanLoopDataAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API HumanLoopDataAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets whether the input image is free of personally identifiable
     * information.</p>
     */
    inline const Aws::Vector<ContentClassifier>& GetContentClassifiers() const{ return m_contentClassifiers; }

    /**
     * <p>Sets whether the input image is free of personally identifiable
     * information.</p>
     */
    inline bool ContentClassifiersHasBeenSet() const { return m_contentClassifiersHasBeenSet; }

    /**
     * <p>Sets whether the input image is free of personally identifiable
     * information.</p>
     */
    inline void SetContentClassifiers(const Aws::Vector<ContentClassifier>& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers = value; }

    /**
     * <p>Sets whether the input image is free of personally identifiable
     * information.</p>
     */
    inline void SetContentClassifiers(Aws::Vector<ContentClassifier>&& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers = std::move(value); }

    /**
     * <p>Sets whether the input image is free of personally identifiable
     * information.</p>
     */
    inline HumanLoopDataAttributes& WithContentClassifiers(const Aws::Vector<ContentClassifier>& value) { SetContentClassifiers(value); return *this;}

    /**
     * <p>Sets whether the input image is free of personally identifiable
     * information.</p>
     */
    inline HumanLoopDataAttributes& WithContentClassifiers(Aws::Vector<ContentClassifier>&& value) { SetContentClassifiers(std::move(value)); return *this;}

    /**
     * <p>Sets whether the input image is free of personally identifiable
     * information.</p>
     */
    inline HumanLoopDataAttributes& AddContentClassifiers(const ContentClassifier& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers.push_back(value); return *this; }

    /**
     * <p>Sets whether the input image is free of personally identifiable
     * information.</p>
     */
    inline HumanLoopDataAttributes& AddContentClassifiers(ContentClassifier&& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContentClassifier> m_contentClassifiers;
    bool m_contentClassifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
