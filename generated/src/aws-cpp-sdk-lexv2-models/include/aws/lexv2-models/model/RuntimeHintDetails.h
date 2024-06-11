﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/RuntimeHintValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides an array of phrases that should be given preference when resolving
   * values for a slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/RuntimeHintDetails">AWS
   * API Reference</a></p>
   */
  class RuntimeHintDetails
  {
  public:
    AWS_LEXMODELSV2_API RuntimeHintDetails();
    AWS_LEXMODELSV2_API RuntimeHintDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API RuntimeHintDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more strings that Amazon Lex should look for in the input to the bot.
     * Each phrase is given preference when deciding on slot values.</p>
     */
    inline const Aws::Vector<RuntimeHintValue>& GetRuntimeHintValues() const{ return m_runtimeHintValues; }
    inline bool RuntimeHintValuesHasBeenSet() const { return m_runtimeHintValuesHasBeenSet; }
    inline void SetRuntimeHintValues(const Aws::Vector<RuntimeHintValue>& value) { m_runtimeHintValuesHasBeenSet = true; m_runtimeHintValues = value; }
    inline void SetRuntimeHintValues(Aws::Vector<RuntimeHintValue>&& value) { m_runtimeHintValuesHasBeenSet = true; m_runtimeHintValues = std::move(value); }
    inline RuntimeHintDetails& WithRuntimeHintValues(const Aws::Vector<RuntimeHintValue>& value) { SetRuntimeHintValues(value); return *this;}
    inline RuntimeHintDetails& WithRuntimeHintValues(Aws::Vector<RuntimeHintValue>&& value) { SetRuntimeHintValues(std::move(value)); return *this;}
    inline RuntimeHintDetails& AddRuntimeHintValues(const RuntimeHintValue& value) { m_runtimeHintValuesHasBeenSet = true; m_runtimeHintValues.push_back(value); return *this; }
    inline RuntimeHintDetails& AddRuntimeHintValues(RuntimeHintValue&& value) { m_runtimeHintValuesHasBeenSet = true; m_runtimeHintValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of constituent sub slot names inside a composite slot in the intent and
     * the phrases that should be added for each sub slot. Inside each composite slot
     * hints, this structure provides a mechanism to add granular sub slot phrases.
     * Only sub slot hints are supported for composite slots. The intent name,
     * composite slot name and the constituent sub slot names must exist.</p>
     */
    inline const Aws::Map<Aws::String, RuntimeHintDetails>& GetSubSlotHints() const{ return m_subSlotHints; }
    inline bool SubSlotHintsHasBeenSet() const { return m_subSlotHintsHasBeenSet; }
    inline void SetSubSlotHints(const Aws::Map<Aws::String, RuntimeHintDetails>& value) { m_subSlotHintsHasBeenSet = true; m_subSlotHints = value; }
    inline void SetSubSlotHints(Aws::Map<Aws::String, RuntimeHintDetails>&& value) { m_subSlotHintsHasBeenSet = true; m_subSlotHints = std::move(value); }
    inline RuntimeHintDetails& WithSubSlotHints(const Aws::Map<Aws::String, RuntimeHintDetails>& value) { SetSubSlotHints(value); return *this;}
    inline RuntimeHintDetails& WithSubSlotHints(Aws::Map<Aws::String, RuntimeHintDetails>&& value) { SetSubSlotHints(std::move(value)); return *this;}
    inline RuntimeHintDetails& AddSubSlotHints(const Aws::String& key, const RuntimeHintDetails& value) { m_subSlotHintsHasBeenSet = true; m_subSlotHints.emplace(key, value); return *this; }
    inline RuntimeHintDetails& AddSubSlotHints(Aws::String&& key, const RuntimeHintDetails& value) { m_subSlotHintsHasBeenSet = true; m_subSlotHints.emplace(std::move(key), value); return *this; }
    inline RuntimeHintDetails& AddSubSlotHints(const Aws::String& key, RuntimeHintDetails&& value) { m_subSlotHintsHasBeenSet = true; m_subSlotHints.emplace(key, std::move(value)); return *this; }
    inline RuntimeHintDetails& AddSubSlotHints(Aws::String&& key, RuntimeHintDetails&& value) { m_subSlotHintsHasBeenSet = true; m_subSlotHints.emplace(std::move(key), std::move(value)); return *this; }
    inline RuntimeHintDetails& AddSubSlotHints(const char* key, RuntimeHintDetails&& value) { m_subSlotHintsHasBeenSet = true; m_subSlotHints.emplace(key, std::move(value)); return *this; }
    inline RuntimeHintDetails& AddSubSlotHints(const char* key, const RuntimeHintDetails& value) { m_subSlotHintsHasBeenSet = true; m_subSlotHints.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Vector<RuntimeHintValue> m_runtimeHintValues;
    bool m_runtimeHintValuesHasBeenSet = false;

    Aws::Map<Aws::String, RuntimeHintDetails> m_subSlotHints;
    bool m_subSlotHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
