/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used as a request parameter in the
   * <a>AddAttributesToFindings</a> and <a>CreateAssessmentTemplate</a>
   * actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/Attribute">AWS
   * API Reference</a></p>
   */
  class Attribute
  {
  public:
    AWS_INSPECTOR_API Attribute();
    AWS_INSPECTOR_API Attribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Attribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The attribute key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The attribute key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The attribute key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The attribute key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The attribute key.</p>
     */
    inline Attribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The attribute key.</p>
     */
    inline Attribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The attribute key.</p>
     */
    inline Attribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value assigned to the attribute key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value assigned to the attribute key.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value assigned to the attribute key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value assigned to the attribute key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value assigned to the attribute key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value assigned to the attribute key.</p>
     */
    inline Attribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value assigned to the attribute key.</p>
     */
    inline Attribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value assigned to the attribute key.</p>
     */
    inline Attribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
