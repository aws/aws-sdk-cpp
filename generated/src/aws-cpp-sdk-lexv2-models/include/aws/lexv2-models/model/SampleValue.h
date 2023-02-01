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
   * <p>Defines one of the values for a slot type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SampleValue">AWS
   * API Reference</a></p>
   */
  class SampleValue
  {
  public:
    AWS_LEXMODELSV2_API SampleValue();
    AWS_LEXMODELSV2_API SampleValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SampleValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value that can be used for a slot type.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value that can be used for a slot type.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value that can be used for a slot type.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value that can be used for a slot type.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value that can be used for a slot type.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value that can be used for a slot type.</p>
     */
    inline SampleValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value that can be used for a slot type.</p>
     */
    inline SampleValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value that can be used for a slot type.</p>
     */
    inline SampleValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
