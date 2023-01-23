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
   * <p>The object that contains the statistical summary of the recommended slot type
   * associated with the bot recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotTypeStatistics">AWS
   * API Reference</a></p>
   */
  class SlotTypeStatistics
  {
  public:
    AWS_LEXMODELSV2_API SlotTypeStatistics();
    AWS_LEXMODELSV2_API SlotTypeStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotTypeStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of recommended slot types associated with the bot
     * recommendation.</p>
     */
    inline int GetDiscoveredSlotTypeCount() const{ return m_discoveredSlotTypeCount; }

    /**
     * <p>The number of recommended slot types associated with the bot
     * recommendation.</p>
     */
    inline bool DiscoveredSlotTypeCountHasBeenSet() const { return m_discoveredSlotTypeCountHasBeenSet; }

    /**
     * <p>The number of recommended slot types associated with the bot
     * recommendation.</p>
     */
    inline void SetDiscoveredSlotTypeCount(int value) { m_discoveredSlotTypeCountHasBeenSet = true; m_discoveredSlotTypeCount = value; }

    /**
     * <p>The number of recommended slot types associated with the bot
     * recommendation.</p>
     */
    inline SlotTypeStatistics& WithDiscoveredSlotTypeCount(int value) { SetDiscoveredSlotTypeCount(value); return *this;}

  private:

    int m_discoveredSlotTypeCount;
    bool m_discoveredSlotTypeCountHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
