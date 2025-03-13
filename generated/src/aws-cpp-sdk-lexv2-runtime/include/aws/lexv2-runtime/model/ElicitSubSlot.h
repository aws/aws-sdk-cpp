/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>The specific constituent sub slot of the composite slot to elicit in dialog
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/ElicitSubSlot">AWS
   * API Reference</a></p>
   */
  class ElicitSubSlot
  {
  public:
    AWS_LEXRUNTIMEV2_API ElicitSubSlot() = default;
    AWS_LEXRUNTIMEV2_API ElicitSubSlot(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API ElicitSubSlot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ElicitSubSlot& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field is not supported.</p>
     */
    inline const ElicitSubSlot& GetSubSlotToElicit() const{
      return *m_subSlotToElicit;
    }
    inline bool SubSlotToElicitHasBeenSet() const { return m_subSlotToElicitHasBeenSet; }
    template<typename SubSlotToElicitT = ElicitSubSlot>
    void SetSubSlotToElicit(SubSlotToElicitT&& value) {
      m_subSlotToElicitHasBeenSet = true; 
      m_subSlotToElicit = Aws::MakeShared<ElicitSubSlot>("ElicitSubSlot", std::forward<SubSlotToElicitT>(value));
    }
    template<typename SubSlotToElicitT = ElicitSubSlot>
    ElicitSubSlot& WithSubSlotToElicit(SubSlotToElicitT&& value) { SetSubSlotToElicit(std::forward<SubSlotToElicitT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    std::shared_ptr<ElicitSubSlot> m_subSlotToElicit;
    bool m_subSlotToElicitHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
