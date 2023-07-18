/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceAttributeName.h>
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
   * <p>An object that specifies the last used intent at the time of the utterance as
   * an attribute to return.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsUtteranceAttribute">AWS
   * API Reference</a></p>
   */
  class AnalyticsUtteranceAttribute
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsUtteranceAttribute();
    AWS_LEXMODELSV2_API AnalyticsUtteranceAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsUtteranceAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An attribute to return. The only available attribute is the intent that the
     * bot mapped the utterance to.</p>
     */
    inline const AnalyticsUtteranceAttributeName& GetName() const{ return m_name; }

    /**
     * <p>An attribute to return. The only available attribute is the intent that the
     * bot mapped the utterance to.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An attribute to return. The only available attribute is the intent that the
     * bot mapped the utterance to.</p>
     */
    inline void SetName(const AnalyticsUtteranceAttributeName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An attribute to return. The only available attribute is the intent that the
     * bot mapped the utterance to.</p>
     */
    inline void SetName(AnalyticsUtteranceAttributeName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An attribute to return. The only available attribute is the intent that the
     * bot mapped the utterance to.</p>
     */
    inline AnalyticsUtteranceAttribute& WithName(const AnalyticsUtteranceAttributeName& value) { SetName(value); return *this;}

    /**
     * <p>An attribute to return. The only available attribute is the intent that the
     * bot mapped the utterance to.</p>
     */
    inline AnalyticsUtteranceAttribute& WithName(AnalyticsUtteranceAttributeName&& value) { SetName(std::move(value)); return *this;}

  private:

    AnalyticsUtteranceAttributeName m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
