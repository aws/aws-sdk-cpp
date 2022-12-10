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
    AWS_LEXMODELSV2_API AssociatedTranscriptFilter();
    AWS_LEXMODELSV2_API AssociatedTranscriptFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AssociatedTranscriptFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field to use for filtering. The allowed names are IntentId
     * and SlotTypeId.</p>
     */
    inline const AssociatedTranscriptFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the field to use for filtering. The allowed names are IntentId
     * and SlotTypeId.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the field to use for filtering. The allowed names are IntentId
     * and SlotTypeId.</p>
     */
    inline void SetName(const AssociatedTranscriptFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the field to use for filtering. The allowed names are IntentId
     * and SlotTypeId.</p>
     */
    inline void SetName(AssociatedTranscriptFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the field to use for filtering. The allowed names are IntentId
     * and SlotTypeId.</p>
     */
    inline AssociatedTranscriptFilter& WithName(const AssociatedTranscriptFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the field to use for filtering. The allowed names are IntentId
     * and SlotTypeId.</p>
     */
    inline AssociatedTranscriptFilter& WithName(AssociatedTranscriptFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The values to use to filter the transcript.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values to use to filter the transcript.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values to use to filter the transcript.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values to use to filter the transcript.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values to use to filter the transcript.</p>
     */
    inline AssociatedTranscriptFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values to use to filter the transcript.</p>
     */
    inline AssociatedTranscriptFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values to use to filter the transcript.</p>
     */
    inline AssociatedTranscriptFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values to use to filter the transcript.</p>
     */
    inline AssociatedTranscriptFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values to use to filter the transcript.</p>
     */
    inline AssociatedTranscriptFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    AssociatedTranscriptFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
