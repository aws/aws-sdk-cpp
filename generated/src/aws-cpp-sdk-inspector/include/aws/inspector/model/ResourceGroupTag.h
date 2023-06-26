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
   * <p>This data type is used as one of the elements of the <a>ResourceGroup</a>
   * data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ResourceGroupTag">AWS
   * API Reference</a></p>
   */
  class ResourceGroupTag
  {
  public:
    AWS_INSPECTOR_API ResourceGroupTag();
    AWS_INSPECTOR_API ResourceGroupTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API ResourceGroupTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A tag key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A tag key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A tag key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A tag key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A tag key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A tag key.</p>
     */
    inline ResourceGroupTag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A tag key.</p>
     */
    inline ResourceGroupTag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A tag key.</p>
     */
    inline ResourceGroupTag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value assigned to a tag key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value assigned to a tag key.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value assigned to a tag key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value assigned to a tag key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value assigned to a tag key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value assigned to a tag key.</p>
     */
    inline ResourceGroupTag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value assigned to a tag key.</p>
     */
    inline ResourceGroupTag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value assigned to a tag key.</p>
     */
    inline ResourceGroupTag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
