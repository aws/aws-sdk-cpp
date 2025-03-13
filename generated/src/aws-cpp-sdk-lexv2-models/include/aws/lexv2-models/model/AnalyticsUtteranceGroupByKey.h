/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceField.h>
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
   * <p>Contains the category by which the utterance analytics were grouped and the
   * values for that category.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsUtteranceGroupByKey">AWS
   * API Reference</a></p>
   */
  class AnalyticsUtteranceGroupByKey
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsUtteranceGroupByKey() = default;
    AWS_LEXMODELSV2_API AnalyticsUtteranceGroupByKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsUtteranceGroupByKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category by which the utterance analytics were grouped.</p>
     */
    inline AnalyticsUtteranceField GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(AnalyticsUtteranceField value) { m_nameHasBeenSet = true; m_name = value; }
    inline AnalyticsUtteranceGroupByKey& WithName(AnalyticsUtteranceField value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A member of the category by which the utterance analytics were grouped.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    AnalyticsUtteranceGroupByKey& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    AnalyticsUtteranceField m_name{AnalyticsUtteranceField::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
