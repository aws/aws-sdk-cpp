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
    AWS_LEXMODELSV2_API SlotTypeValue();
    AWS_LEXMODELSV2_API SlotTypeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotTypeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the slot type entry.</p>
     */
    inline const SampleValue& GetSampleValue() const{ return m_sampleValue; }

    /**
     * <p>The value of the slot type entry.</p>
     */
    inline bool SampleValueHasBeenSet() const { return m_sampleValueHasBeenSet; }

    /**
     * <p>The value of the slot type entry.</p>
     */
    inline void SetSampleValue(const SampleValue& value) { m_sampleValueHasBeenSet = true; m_sampleValue = value; }

    /**
     * <p>The value of the slot type entry.</p>
     */
    inline void SetSampleValue(SampleValue&& value) { m_sampleValueHasBeenSet = true; m_sampleValue = std::move(value); }

    /**
     * <p>The value of the slot type entry.</p>
     */
    inline SlotTypeValue& WithSampleValue(const SampleValue& value) { SetSampleValue(value); return *this;}

    /**
     * <p>The value of the slot type entry.</p>
     */
    inline SlotTypeValue& WithSampleValue(SampleValue&& value) { SetSampleValue(std::move(value)); return *this;}


    /**
     * <p>Additional values related to the slot type entry.</p>
     */
    inline const Aws::Vector<SampleValue>& GetSynonyms() const{ return m_synonyms; }

    /**
     * <p>Additional values related to the slot type entry.</p>
     */
    inline bool SynonymsHasBeenSet() const { return m_synonymsHasBeenSet; }

    /**
     * <p>Additional values related to the slot type entry.</p>
     */
    inline void SetSynonyms(const Aws::Vector<SampleValue>& value) { m_synonymsHasBeenSet = true; m_synonyms = value; }

    /**
     * <p>Additional values related to the slot type entry.</p>
     */
    inline void SetSynonyms(Aws::Vector<SampleValue>&& value) { m_synonymsHasBeenSet = true; m_synonyms = std::move(value); }

    /**
     * <p>Additional values related to the slot type entry.</p>
     */
    inline SlotTypeValue& WithSynonyms(const Aws::Vector<SampleValue>& value) { SetSynonyms(value); return *this;}

    /**
     * <p>Additional values related to the slot type entry.</p>
     */
    inline SlotTypeValue& WithSynonyms(Aws::Vector<SampleValue>&& value) { SetSynonyms(std::move(value)); return *this;}

    /**
     * <p>Additional values related to the slot type entry.</p>
     */
    inline SlotTypeValue& AddSynonyms(const SampleValue& value) { m_synonymsHasBeenSet = true; m_synonyms.push_back(value); return *this; }

    /**
     * <p>Additional values related to the slot type entry.</p>
     */
    inline SlotTypeValue& AddSynonyms(SampleValue&& value) { m_synonymsHasBeenSet = true; m_synonyms.push_back(std::move(value)); return *this; }

  private:

    SampleValue m_sampleValue;
    bool m_sampleValueHasBeenSet = false;

    Aws::Vector<SampleValue> m_synonyms;
    bool m_synonymsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
