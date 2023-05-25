/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Specifies the default value to use when a user doesn't provide a value for a
   * slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotDefaultValue">AWS
   * API Reference</a></p>
   */
  class SlotDefaultValue
  {
  public:
    AWS_LEXMODELSV2_API SlotDefaultValue();
    AWS_LEXMODELSV2_API SlotDefaultValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotDefaultValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default value to use when a user doesn't provide a value for a slot.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value to use when a user doesn't provide a value for a slot.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value to use when a user doesn't provide a value for a slot.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value to use when a user doesn't provide a value for a slot.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value to use when a user doesn't provide a value for a slot.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value to use when a user doesn't provide a value for a slot.</p>
     */
    inline SlotDefaultValue& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value to use when a user doesn't provide a value for a slot.</p>
     */
    inline SlotDefaultValue& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value to use when a user doesn't provide a value for a slot.</p>
     */
    inline SlotDefaultValue& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}

  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
