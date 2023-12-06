/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/ToxicContent.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Toxicity analysis result for one string. For more information about toxicity
   * detection, see <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/toxicity-detection.html">Toxicity
   * detection</a> in the <i>Amazon Comprehend Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ToxicLabels">AWS
   * API Reference</a></p>
   */
  class ToxicLabels
  {
  public:
    AWS_COMPREHEND_API ToxicLabels();
    AWS_COMPREHEND_API ToxicLabels(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API ToxicLabels& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Array of toxic content types identified in the string.</p>
     */
    inline const Aws::Vector<ToxicContent>& GetLabels() const{ return m_labels; }

    /**
     * <p>Array of toxic content types identified in the string.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>Array of toxic content types identified in the string.</p>
     */
    inline void SetLabels(const Aws::Vector<ToxicContent>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>Array of toxic content types identified in the string.</p>
     */
    inline void SetLabels(Aws::Vector<ToxicContent>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>Array of toxic content types identified in the string.</p>
     */
    inline ToxicLabels& WithLabels(const Aws::Vector<ToxicContent>& value) { SetLabels(value); return *this;}

    /**
     * <p>Array of toxic content types identified in the string.</p>
     */
    inline ToxicLabels& WithLabels(Aws::Vector<ToxicContent>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>Array of toxic content types identified in the string.</p>
     */
    inline ToxicLabels& AddLabels(const ToxicContent& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>Array of toxic content types identified in the string.</p>
     */
    inline ToxicLabels& AddLabels(ToxicContent&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }


    /**
     * <p>Overall toxicity score for the string. Value range is zero to one, where one
     * is the highest confidence.</p>
     */
    inline double GetToxicity() const{ return m_toxicity; }

    /**
     * <p>Overall toxicity score for the string. Value range is zero to one, where one
     * is the highest confidence.</p>
     */
    inline bool ToxicityHasBeenSet() const { return m_toxicityHasBeenSet; }

    /**
     * <p>Overall toxicity score for the string. Value range is zero to one, where one
     * is the highest confidence.</p>
     */
    inline void SetToxicity(double value) { m_toxicityHasBeenSet = true; m_toxicity = value; }

    /**
     * <p>Overall toxicity score for the string. Value range is zero to one, where one
     * is the highest confidence.</p>
     */
    inline ToxicLabels& WithToxicity(double value) { SetToxicity(value); return *this;}

  private:

    Aws::Vector<ToxicContent> m_labels;
    bool m_labelsHasBeenSet = false;

    double m_toxicity;
    bool m_toxicityHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
