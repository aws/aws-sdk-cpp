/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/UserTurnSlotOutput.h>
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
   * <p>Contains information about the intent that is output for the turn by the test
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UserTurnIntentOutput">AWS
   * API Reference</a></p>
   */
  class UserTurnIntentOutput
  {
  public:
    AWS_LEXMODELSV2_API UserTurnIntentOutput() = default;
    AWS_LEXMODELSV2_API UserTurnIntentOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UserTurnIntentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UserTurnIntentOutput& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The slots associated with the intent.</p>
     */
    inline const Aws::Map<Aws::String, UserTurnSlotOutput>& GetSlots() const { return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    template<typename SlotsT = Aws::Map<Aws::String, UserTurnSlotOutput>>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::Map<Aws::String, UserTurnSlotOutput>>
    UserTurnIntentOutput& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    template<typename SlotsKeyT = Aws::String, typename SlotsValueT = UserTurnSlotOutput>
    UserTurnIntentOutput& AddSlots(SlotsKeyT&& key, SlotsValueT&& value) {
      m_slotsHasBeenSet = true; m_slots.emplace(std::forward<SlotsKeyT>(key), std::forward<SlotsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, UserTurnSlotOutput> m_slots;
    bool m_slotsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
