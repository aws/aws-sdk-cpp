/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AssociatedTranscriptFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Filters to search for the associated transcript.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AssociatedTranscriptFilter">AWS
   * API Reference</a></p>
   */
  class AssociatedTranscriptFilter
  {
  public:
    AWS_LEXMODELSV2_API AssociatedTranscriptFilter() = default;
    AWS_LEXMODELSV2_API AssociatedTranscriptFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AssociatedTranscriptFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field to use for filtering. The allowed names are IntentId
     * and SlotTypeId.</p>
     */
    inline AssociatedTranscriptFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(AssociatedTranscriptFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline AssociatedTranscriptFilter& WithName(AssociatedTranscriptFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to use to filter the transcript.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    AssociatedTranscriptFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    AssociatedTranscriptFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    AssociatedTranscriptFilterName m_name{AssociatedTranscriptFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
