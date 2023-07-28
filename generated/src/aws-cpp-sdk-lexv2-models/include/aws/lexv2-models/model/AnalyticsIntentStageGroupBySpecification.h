/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsIntentStageField.h>
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
   * <p>Contains the category by which to group the intent stages.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsIntentStageGroupBySpecification">AWS
   * API Reference</a></p>
   */
  class AnalyticsIntentStageGroupBySpecification
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsIntentStageGroupBySpecification();
    AWS_LEXMODELSV2_API AnalyticsIntentStageGroupBySpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsIntentStageGroupBySpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to group the intent stages by their name or the intent to
     * which the session was switched.</p>
     */
    inline const AnalyticsIntentStageField& GetName() const{ return m_name; }

    /**
     * <p>Specifies whether to group the intent stages by their name or the intent to
     * which the session was switched.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies whether to group the intent stages by their name or the intent to
     * which the session was switched.</p>
     */
    inline void SetName(const AnalyticsIntentStageField& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies whether to group the intent stages by their name or the intent to
     * which the session was switched.</p>
     */
    inline void SetName(AnalyticsIntentStageField&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies whether to group the intent stages by their name or the intent to
     * which the session was switched.</p>
     */
    inline AnalyticsIntentStageGroupBySpecification& WithName(const AnalyticsIntentStageField& value) { SetName(value); return *this;}

    /**
     * <p>Specifies whether to group the intent stages by their name or the intent to
     * which the session was switched.</p>
     */
    inline AnalyticsIntentStageGroupBySpecification& WithName(AnalyticsIntentStageField&& value) { SetName(std::move(value)); return *this;}

  private:

    AnalyticsIntentStageField m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
