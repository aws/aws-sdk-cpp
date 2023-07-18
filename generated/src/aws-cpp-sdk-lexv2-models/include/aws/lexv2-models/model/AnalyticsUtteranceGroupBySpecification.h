/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceField.h>
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
   * <p>Contains the category by which to group the utterances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsUtteranceGroupBySpecification">AWS
   * API Reference</a></p>
   */
  class AnalyticsUtteranceGroupBySpecification
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsUtteranceGroupBySpecification();
    AWS_LEXMODELSV2_API AnalyticsUtteranceGroupBySpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsUtteranceGroupBySpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to group the utterances by their text or their state.</p>
     */
    inline const AnalyticsUtteranceField& GetName() const{ return m_name; }

    /**
     * <p>Specifies whether to group the utterances by their text or their state.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies whether to group the utterances by their text or their state.</p>
     */
    inline void SetName(const AnalyticsUtteranceField& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies whether to group the utterances by their text or their state.</p>
     */
    inline void SetName(AnalyticsUtteranceField&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies whether to group the utterances by their text or their state.</p>
     */
    inline AnalyticsUtteranceGroupBySpecification& WithName(const AnalyticsUtteranceField& value) { SetName(value); return *this;}

    /**
     * <p>Specifies whether to group the utterances by their text or their state.</p>
     */
    inline AnalyticsUtteranceGroupBySpecification& WithName(AnalyticsUtteranceField&& value) { SetName(std::move(value)); return *this;}

  private:

    AnalyticsUtteranceField m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
