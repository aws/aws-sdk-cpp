/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

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
   * <p>The object that contains the statistical summary of recommended intents
   * associated with the bot recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentStatistics">AWS
   * API Reference</a></p>
   */
  class IntentStatistics
  {
  public:
    AWS_LEXMODELSV2_API IntentStatistics();
    AWS_LEXMODELSV2_API IntentStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of recommended intents associated with the bot recommendation.</p>
     */
    inline int GetDiscoveredIntentCount() const{ return m_discoveredIntentCount; }

    /**
     * <p>The number of recommended intents associated with the bot recommendation.</p>
     */
    inline bool DiscoveredIntentCountHasBeenSet() const { return m_discoveredIntentCountHasBeenSet; }

    /**
     * <p>The number of recommended intents associated with the bot recommendation.</p>
     */
    inline void SetDiscoveredIntentCount(int value) { m_discoveredIntentCountHasBeenSet = true; m_discoveredIntentCount = value; }

    /**
     * <p>The number of recommended intents associated with the bot recommendation.</p>
     */
    inline IntentStatistics& WithDiscoveredIntentCount(int value) { SetDiscoveredIntentCount(value); return *this;}

  private:

    int m_discoveredIntentCount;
    bool m_discoveredIntentCountHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
