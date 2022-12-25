/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>An infrastructure as code defined resource output.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_PROTON_API Output();
    AWS_PROTON_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The output key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The output key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The output key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The output key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The output key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The output key.</p>
     */
    inline Output& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The output key.</p>
     */
    inline Output& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The output key.</p>
     */
    inline Output& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The output value.</p>
     */
    inline const Aws::String& GetValueString() const{ return m_valueString; }

    /**
     * <p>The output value.</p>
     */
    inline bool ValueStringHasBeenSet() const { return m_valueStringHasBeenSet; }

    /**
     * <p>The output value.</p>
     */
    inline void SetValueString(const Aws::String& value) { m_valueStringHasBeenSet = true; m_valueString = value; }

    /**
     * <p>The output value.</p>
     */
    inline void SetValueString(Aws::String&& value) { m_valueStringHasBeenSet = true; m_valueString = std::move(value); }

    /**
     * <p>The output value.</p>
     */
    inline void SetValueString(const char* value) { m_valueStringHasBeenSet = true; m_valueString.assign(value); }

    /**
     * <p>The output value.</p>
     */
    inline Output& WithValueString(const Aws::String& value) { SetValueString(value); return *this;}

    /**
     * <p>The output value.</p>
     */
    inline Output& WithValueString(Aws::String&& value) { SetValueString(std::move(value)); return *this;}

    /**
     * <p>The output value.</p>
     */
    inline Output& WithValueString(const char* value) { SetValueString(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_valueString;
    bool m_valueStringHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
