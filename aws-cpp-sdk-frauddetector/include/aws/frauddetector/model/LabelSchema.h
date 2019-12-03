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
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_FRAUDDETECTOR_API LabelSchema
  {
  public:
    LabelSchema();
    LabelSchema(Aws::Utils::Json::JsonView jsonValue);
    LabelSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The label key.</p>
     */
    inline const Aws::String& GetLabelKey() const{ return m_labelKey; }

    /**
     * <p>The label key.</p>
     */
    inline bool LabelKeyHasBeenSet() const { return m_labelKeyHasBeenSet; }

    /**
     * <p>The label key.</p>
     */
    inline void SetLabelKey(const Aws::String& value) { m_labelKeyHasBeenSet = true; m_labelKey = value; }

    /**
     * <p>The label key.</p>
     */
    inline void SetLabelKey(Aws::String&& value) { m_labelKeyHasBeenSet = true; m_labelKey = std::move(value); }

    /**
     * <p>The label key.</p>
     */
    inline void SetLabelKey(const char* value) { m_labelKeyHasBeenSet = true; m_labelKey.assign(value); }

    /**
     * <p>The label key.</p>
     */
    inline LabelSchema& WithLabelKey(const Aws::String& value) { SetLabelKey(value); return *this;}

    /**
     * <p>The label key.</p>
     */
    inline LabelSchema& WithLabelKey(Aws::String&& value) { SetLabelKey(std::move(value)); return *this;}

    /**
     * <p>The label key.</p>
     */
    inline LabelSchema& WithLabelKey(const char* value) { SetLabelKey(value); return *this;}


    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetLabelMapper() const{ return m_labelMapper; }

    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline bool LabelMapperHasBeenSet() const { return m_labelMapperHasBeenSet; }

    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline void SetLabelMapper(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_labelMapperHasBeenSet = true; m_labelMapper = value; }

    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline void SetLabelMapper(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_labelMapperHasBeenSet = true; m_labelMapper = std::move(value); }

    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline LabelSchema& WithLabelMapper(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetLabelMapper(value); return *this;}

    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline LabelSchema& WithLabelMapper(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetLabelMapper(std::move(value)); return *this;}

    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline LabelSchema& AddLabelMapper(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(key, value); return *this; }

    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline LabelSchema& AddLabelMapper(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(std::move(key), value); return *this; }

    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline LabelSchema& AddLabelMapper(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline LabelSchema& AddLabelMapper(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline LabelSchema& AddLabelMapper(const char* key, Aws::Vector<Aws::String>&& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The label mapper maps the Amazon Fraud Detector supported label to the
     * appropriate source labels. For example, if <code>"FRAUD"</code> and
     * <code>"LEGIT"</code> are Amazon Fraud Detector supported labels, this mapper
     * could be: <code>{"FRAUD" =&gt; ["0"]</code>, "LEGIT" =&gt; ["1"]} or
     * <code>{"FRAUD" =&gt; ["false"], "LEGIT" =&gt; ["true"]}</code> or <code>{"FRAUD"
     * =&gt; ["fraud", "abuse"], "LEGIT" =&gt; ["legit", "safe"]}</code>. The value
     * part of the mapper is a list, because you may have multiple variants for a
     * single Amazon Fraud Detector label. </p>
     */
    inline LabelSchema& AddLabelMapper(const char* key, const Aws::Vector<Aws::String>& value) { m_labelMapperHasBeenSet = true; m_labelMapper.emplace(key, value); return *this; }

  private:

    Aws::String m_labelKey;
    bool m_labelKeyHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_labelMapper;
    bool m_labelMapperHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
