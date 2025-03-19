/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/frauddetector/model/UnlabeledEventsTreatment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The label schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/LabelSchema">AWS
   * API Reference</a></p>
   */
  class LabelSchema
  {
  public:
    AWS_FRAUDDETECTOR_API LabelSchema() = default;
    AWS_FRAUDDETECTOR_API LabelSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API LabelSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported model
     * classification labels (<code>FRAUD</code>, <code>LEGIT</code>) to the
     * appropriate event type labels. For example, if "<code>FRAUD</code>" and
     * "<code>LEGIT</code>" are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, <code>"LEGIT" =&gt; ["1"]}</code>
     * or <code>{"FRAUD" =&gt; ["false"]</code>, <code>"LEGIT" =&gt; ["true"]}</code>
     * or <code>{"FRAUD" =&gt; ["fraud", "abuse"]</code>, <code>"LEGIT" =&gt; ["legit",
     * "safe"]}</code>. The value part of the mapper is a list, because you may have
     * multiple label variants from your event type for a single Amazon Fraud Detector
     * label. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetLabelMapper() const { return m_labelMapper; }
    inline bool LabelMapperHasBeenSet() const { return m_labelMapperHasBeenSet; }
    template<typename LabelMapperT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetLabelMapper(LabelMapperT&& value) { m_labelMapperHasBeenSet = true; m_labelMapper = std::forward<LabelMapperT>(value); }
    template<typename LabelMapperT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    LabelSchema& WithLabelMapper(LabelMapperT&& value) { SetLabelMapper(std::forward<LabelMapperT>(value)); return *this;}
    template<typename LabelMapperKeyT = Aws::String, typename LabelMapperValueT = Aws::Vector<Aws::String>>
    LabelSchema& AddLabelMapper(LabelMapperKeyT&& key, LabelMapperValueT&& value) {
      m_labelMapperHasBeenSet = true; m_labelMapper.emplace(std::forward<LabelMapperKeyT>(key), std::forward<LabelMapperValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The action to take for unlabeled events.</p> <ul> <li> <p>Use
     * <code>IGNORE</code> if you want the unlabeled events to be ignored. This is
     * recommended when the majority of the events in the dataset are labeled.</p>
     * </li> <li> <p>Use <code>FRAUD</code> if you want to categorize all unlabeled
     * events as “Fraud”. This is recommended when most of the events in your dataset
     * are fraudulent.</p> </li> <li> <p>Use <code>LEGIT</code> if you want to
     * categorize all unlabeled events as “Legit”. This is recommended when most of the
     * events in your dataset are legitimate.</p> </li> <li> <p>Use <code>AUTO</code>
     * if you want Amazon Fraud Detector to decide how to use the unlabeled data. This
     * is recommended when there is significant unlabeled events in the dataset.</p>
     * </li> </ul> <p>By default, Amazon Fraud Detector ignores the unlabeled data.</p>
     */
    inline UnlabeledEventsTreatment GetUnlabeledEventsTreatment() const { return m_unlabeledEventsTreatment; }
    inline bool UnlabeledEventsTreatmentHasBeenSet() const { return m_unlabeledEventsTreatmentHasBeenSet; }
    inline void SetUnlabeledEventsTreatment(UnlabeledEventsTreatment value) { m_unlabeledEventsTreatmentHasBeenSet = true; m_unlabeledEventsTreatment = value; }
    inline LabelSchema& WithUnlabeledEventsTreatment(UnlabeledEventsTreatment value) { SetUnlabeledEventsTreatment(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_labelMapper;
    bool m_labelMapperHasBeenSet = false;

    UnlabeledEventsTreatment m_unlabeledEventsTreatment{UnlabeledEventsTreatment::NOT_SET};
    bool m_unlabeledEventsTreatmentHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
