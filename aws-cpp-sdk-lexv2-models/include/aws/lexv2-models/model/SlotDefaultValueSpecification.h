/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SlotDefaultValue.h>
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
   * <p>Defines a list of values that Amazon Lex should use as the default value for
   * a slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotDefaultValueSpecification">AWS
   * API Reference</a></p>
   */
  class SlotDefaultValueSpecification
  {
  public:
    AWS_LEXMODELSV2_API SlotDefaultValueSpecification();
    AWS_LEXMODELSV2_API SlotDefaultValueSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotDefaultValueSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of default values. Amazon Lex chooses the default value to use in the
     * order that they are presented in the list.</p>
     */
    inline const Aws::Vector<SlotDefaultValue>& GetDefaultValueList() const{ return m_defaultValueList; }

    /**
     * <p>A list of default values. Amazon Lex chooses the default value to use in the
     * order that they are presented in the list.</p>
     */
    inline bool DefaultValueListHasBeenSet() const { return m_defaultValueListHasBeenSet; }

    /**
     * <p>A list of default values. Amazon Lex chooses the default value to use in the
     * order that they are presented in the list.</p>
     */
    inline void SetDefaultValueList(const Aws::Vector<SlotDefaultValue>& value) { m_defaultValueListHasBeenSet = true; m_defaultValueList = value; }

    /**
     * <p>A list of default values. Amazon Lex chooses the default value to use in the
     * order that they are presented in the list.</p>
     */
    inline void SetDefaultValueList(Aws::Vector<SlotDefaultValue>&& value) { m_defaultValueListHasBeenSet = true; m_defaultValueList = std::move(value); }

    /**
     * <p>A list of default values. Amazon Lex chooses the default value to use in the
     * order that they are presented in the list.</p>
     */
    inline SlotDefaultValueSpecification& WithDefaultValueList(const Aws::Vector<SlotDefaultValue>& value) { SetDefaultValueList(value); return *this;}

    /**
     * <p>A list of default values. Amazon Lex chooses the default value to use in the
     * order that they are presented in the list.</p>
     */
    inline SlotDefaultValueSpecification& WithDefaultValueList(Aws::Vector<SlotDefaultValue>&& value) { SetDefaultValueList(std::move(value)); return *this;}

    /**
     * <p>A list of default values. Amazon Lex chooses the default value to use in the
     * order that they are presented in the list.</p>
     */
    inline SlotDefaultValueSpecification& AddDefaultValueList(const SlotDefaultValue& value) { m_defaultValueListHasBeenSet = true; m_defaultValueList.push_back(value); return *this; }

    /**
     * <p>A list of default values. Amazon Lex chooses the default value to use in the
     * order that they are presented in the list.</p>
     */
    inline SlotDefaultValueSpecification& AddDefaultValueList(SlotDefaultValue&& value) { m_defaultValueListHasBeenSet = true; m_defaultValueList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SlotDefaultValue> m_defaultValueList;
    bool m_defaultValueListHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
