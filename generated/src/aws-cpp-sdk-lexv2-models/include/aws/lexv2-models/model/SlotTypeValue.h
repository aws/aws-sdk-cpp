/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SampleValue.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Each slot type can have a set of values. Each <code>SlotTypeValue</code>
   * represents a value that the slot type can take.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotTypeValue">AWS
   * API Reference</a></p>
   */
  class SlotTypeValue
  {
  public:
    AWS_LEXMODELSV2_API SlotTypeValue() = default;
    AWS_LEXMODELSV2_API SlotTypeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotTypeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the slot type entry.</p>
     */
    inline const SampleValue& GetSampleValue() const { return m_sampleValue; }
    inline bool SampleValueHasBeenSet() const { return m_sampleValueHasBeenSet; }
    template<typename SampleValueT = SampleValue>
    void SetSampleValue(SampleValueT&& value) { m_sampleValueHasBeenSet = true; m_sampleValue = std::forward<SampleValueT>(value); }
    template<typename SampleValueT = SampleValue>
    SlotTypeValue& WithSampleValue(SampleValueT&& value) { SetSampleValue(std::forward<SampleValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional values related to the slot type entry.</p>
     */
    inline const Aws::Vector<SampleValue>& GetSynonyms() const { return m_synonyms; }
    inline bool SynonymsHasBeenSet() const { return m_synonymsHasBeenSet; }
    template<typename SynonymsT = Aws::Vector<SampleValue>>
    void SetSynonyms(SynonymsT&& value) { m_synonymsHasBeenSet = true; m_synonyms = std::forward<SynonymsT>(value); }
    template<typename SynonymsT = Aws::Vector<SampleValue>>
    SlotTypeValue& WithSynonyms(SynonymsT&& value) { SetSynonyms(std::forward<SynonymsT>(value)); return *this;}
    template<typename SynonymsT = SampleValue>
    SlotTypeValue& AddSynonyms(SynonymsT&& value) { m_synonymsHasBeenSet = true; m_synonyms.emplace_back(std::forward<SynonymsT>(value)); return *this; }
    ///@}
  private:

    SampleValue m_sampleValue;
    bool m_sampleValueHasBeenSet = false;

    Aws::Vector<SampleValue> m_synonyms;
    bool m_synonymsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
