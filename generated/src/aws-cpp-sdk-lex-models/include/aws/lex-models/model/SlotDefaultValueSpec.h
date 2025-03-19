/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/SlotDefaultValue.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Contains the default values for a slot. Default values are used when Amazon
   * Lex hasn't determined a value for a slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/SlotDefaultValueSpec">AWS
   * API Reference</a></p>
   */
  class SlotDefaultValueSpec
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API SlotDefaultValueSpec() = default;
    AWS_LEXMODELBUILDINGSERVICE_API SlotDefaultValueSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API SlotDefaultValueSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default values for a slot. You can specify more than one default. For
     * example, you can specify a default value to use from a matching context
     * variable, a session attribute, or a fixed value.</p> <p>The default value chosen
     * is selected based on the order that you specify them in the list. For example,
     * if you specify a context variable and a fixed value in that order, Amazon Lex
     * uses the context variable if it is available, else it uses the fixed value.</p>
     */
    inline const Aws::Vector<SlotDefaultValue>& GetDefaultValueList() const { return m_defaultValueList; }
    inline bool DefaultValueListHasBeenSet() const { return m_defaultValueListHasBeenSet; }
    template<typename DefaultValueListT = Aws::Vector<SlotDefaultValue>>
    void SetDefaultValueList(DefaultValueListT&& value) { m_defaultValueListHasBeenSet = true; m_defaultValueList = std::forward<DefaultValueListT>(value); }
    template<typename DefaultValueListT = Aws::Vector<SlotDefaultValue>>
    SlotDefaultValueSpec& WithDefaultValueList(DefaultValueListT&& value) { SetDefaultValueList(std::forward<DefaultValueListT>(value)); return *this;}
    template<typename DefaultValueListT = SlotDefaultValue>
    SlotDefaultValueSpec& AddDefaultValueList(DefaultValueListT&& value) { m_defaultValueListHasBeenSet = true; m_defaultValueList.emplace_back(std::forward<DefaultValueListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SlotDefaultValue> m_defaultValueList;
    bool m_defaultValueListHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
