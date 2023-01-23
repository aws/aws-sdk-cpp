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
    AWS_FRAUDDETECTOR_API LabelSchema();
    AWS_FRAUDDETECTOR_API LabelSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API LabelSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetLabelMapper() const{ return m_labelMapper; }

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
    inline bool LabelMapperHasBeenSet() const { return m_labelMapperHasBeenSet; }

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
    inline void SetLabelMapper(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_labelMapperHasBeenSet = true; m_labelMapper = value; }

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
    inline void SetLabelMapper(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_labelMapperHasBeenSet = true; m_labelMapper = std::move(value); }

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
    inline LabelSchema& WithLabelMapper(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetLabelMapper(value); return *this;}

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
    inline LabelSchema& WithLabelMapper(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetLabelMapper(std::move(value)); return *this;}

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
    inline LabelSchema& AddLabelMapper(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(key, value); return *this; }

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
    inline LabelSchema& AddLabelMapper(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(std::move(key), value); return *this; }

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
    inline LabelSchema& AddLabelMapper(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(key, std::move(value)); return *this; }

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
    inline LabelSchema& AddLabelMapper(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(std::move(key), std::move(value)); return *this; }

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
    inline LabelSchema& AddLabelMapper(const char* key, Aws::Vector<Aws::String>&& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(key, std::move(value)); return *this; }

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
    inline LabelSchema& AddLabelMapper(const char* key, const Aws::Vector<Aws::String>& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(key, value); return *this; }


    /**
     * <p>The action to take for unlabeled events.</p>
     */
    inline const UnlabeledEventsTreatment& GetUnlabeledEventsTreatment() const{ return m_unlabeledEventsTreatment; }

    /**
     * <p>The action to take for unlabeled events.</p>
     */
    inline bool UnlabeledEventsTreatmentHasBeenSet() const { return m_unlabeledEventsTreatmentHasBeenSet; }

    /**
     * <p>The action to take for unlabeled events.</p>
     */
    inline void SetUnlabeledEventsTreatment(const UnlabeledEventsTreatment& value) { m_unlabeledEventsTreatmentHasBeenSet = true; m_unlabeledEventsTreatment = value; }

    /**
     * <p>The action to take for unlabeled events.</p>
     */
    inline void SetUnlabeledEventsTreatment(UnlabeledEventsTreatment&& value) { m_unlabeledEventsTreatmentHasBeenSet = true; m_unlabeledEventsTreatment = std::move(value); }

    /**
     * <p>The action to take for unlabeled events.</p>
     */
    inline LabelSchema& WithUnlabeledEventsTreatment(const UnlabeledEventsTreatment& value) { SetUnlabeledEventsTreatment(value); return *this;}

    /**
     * <p>The action to take for unlabeled events.</p>
     */
    inline LabelSchema& WithUnlabeledEventsTreatment(UnlabeledEventsTreatment&& value) { SetUnlabeledEventsTreatment(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_labelMapper;
    bool m_labelMapperHasBeenSet = false;

    UnlabeledEventsTreatment m_unlabeledEventsTreatment;
    bool m_unlabeledEventsTreatmentHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
