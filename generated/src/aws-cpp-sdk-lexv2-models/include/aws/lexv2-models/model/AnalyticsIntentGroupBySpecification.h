/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsIntentField.h>
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
   * <p>Contains the category by which to group the intents.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsIntentGroupBySpecification">AWS
   * API Reference</a></p>
   */
  class AnalyticsIntentGroupBySpecification
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsIntentGroupBySpecification() = default;
    AWS_LEXMODELSV2_API AnalyticsIntentGroupBySpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsIntentGroupBySpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to group the intent stages by their name or their end
     * state.</p>
     */
    inline AnalyticsIntentField GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(AnalyticsIntentField value) { m_nameHasBeenSet = true; m_name = value; }
    inline AnalyticsIntentGroupBySpecification& WithName(AnalyticsIntentField value) { SetName(value); return *this;}
    ///@}
  private:

    AnalyticsIntentField m_name{AnalyticsIntentField::NOT_SET};
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
