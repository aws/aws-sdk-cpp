/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>A default value for a slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/SlotDefaultValue">AWS
   * API Reference</a></p>
   */
  class SlotDefaultValue
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API SlotDefaultValue();
    AWS_LEXMODELBUILDINGSERVICE_API SlotDefaultValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API SlotDefaultValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default value for the slot. You can specify one of the following:</p>
     * <ul> <li> <p> <code>#context-name.slot-name</code> - The slot value "slot-name"
     * in the context "context-name."</p> </li> <li> <p> <code>{attribute}</code> - The
     * slot value of the session attribute "attribute."</p> </li> <li> <p>
     * <code>'value'</code> - The discrete value "value."</p> </li> </ul>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value for the slot. You can specify one of the following:</p>
     * <ul> <li> <p> <code>#context-name.slot-name</code> - The slot value "slot-name"
     * in the context "context-name."</p> </li> <li> <p> <code>{attribute}</code> - The
     * slot value of the session attribute "attribute."</p> </li> <li> <p>
     * <code>'value'</code> - The discrete value "value."</p> </li> </ul>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value for the slot. You can specify one of the following:</p>
     * <ul> <li> <p> <code>#context-name.slot-name</code> - The slot value "slot-name"
     * in the context "context-name."</p> </li> <li> <p> <code>{attribute}</code> - The
     * slot value of the session attribute "attribute."</p> </li> <li> <p>
     * <code>'value'</code> - The discrete value "value."</p> </li> </ul>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value for the slot. You can specify one of the following:</p>
     * <ul> <li> <p> <code>#context-name.slot-name</code> - The slot value "slot-name"
     * in the context "context-name."</p> </li> <li> <p> <code>{attribute}</code> - The
     * slot value of the session attribute "attribute."</p> </li> <li> <p>
     * <code>'value'</code> - The discrete value "value."</p> </li> </ul>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value for the slot. You can specify one of the following:</p>
     * <ul> <li> <p> <code>#context-name.slot-name</code> - The slot value "slot-name"
     * in the context "context-name."</p> </li> <li> <p> <code>{attribute}</code> - The
     * slot value of the session attribute "attribute."</p> </li> <li> <p>
     * <code>'value'</code> - The discrete value "value."</p> </li> </ul>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value for the slot. You can specify one of the following:</p>
     * <ul> <li> <p> <code>#context-name.slot-name</code> - The slot value "slot-name"
     * in the context "context-name."</p> </li> <li> <p> <code>{attribute}</code> - The
     * slot value of the session attribute "attribute."</p> </li> <li> <p>
     * <code>'value'</code> - The discrete value "value."</p> </li> </ul>
     */
    inline SlotDefaultValue& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value for the slot. You can specify one of the following:</p>
     * <ul> <li> <p> <code>#context-name.slot-name</code> - The slot value "slot-name"
     * in the context "context-name."</p> </li> <li> <p> <code>{attribute}</code> - The
     * slot value of the session attribute "attribute."</p> </li> <li> <p>
     * <code>'value'</code> - The discrete value "value."</p> </li> </ul>
     */
    inline SlotDefaultValue& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value for the slot. You can specify one of the following:</p>
     * <ul> <li> <p> <code>#context-name.slot-name</code> - The slot value "slot-name"
     * in the context "context-name."</p> </li> <li> <p> <code>{attribute}</code> - The
     * slot value of the session attribute "attribute."</p> </li> <li> <p>
     * <code>'value'</code> - The discrete value "value."</p> </li> </ul>
     */
    inline SlotDefaultValue& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}

  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
