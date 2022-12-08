/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/EC2TagFilterType.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an EC2 tag filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/EC2TagFilter">AWS
   * API Reference</a></p>
   */
  class EC2TagFilter
  {
  public:
    AWS_CODEDEPLOY_API EC2TagFilter();
    AWS_CODEDEPLOY_API EC2TagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API EC2TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag filter key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The tag filter key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The tag filter key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The tag filter key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The tag filter key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The tag filter key.</p>
     */
    inline EC2TagFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The tag filter key.</p>
     */
    inline EC2TagFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The tag filter key.</p>
     */
    inline EC2TagFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The tag filter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The tag filter value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The tag filter value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The tag filter value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The tag filter value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The tag filter value.</p>
     */
    inline EC2TagFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The tag filter value.</p>
     */
    inline EC2TagFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The tag filter value.</p>
     */
    inline EC2TagFilter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The tag filter type:</p> <ul> <li> <p> <code>KEY_ONLY</code>: Key only.</p>
     * </li> <li> <p> <code>VALUE_ONLY</code>: Value only.</p> </li> <li> <p>
     * <code>KEY_AND_VALUE</code>: Key and value.</p> </li> </ul>
     */
    inline const EC2TagFilterType& GetType() const{ return m_type; }

    /**
     * <p>The tag filter type:</p> <ul> <li> <p> <code>KEY_ONLY</code>: Key only.</p>
     * </li> <li> <p> <code>VALUE_ONLY</code>: Value only.</p> </li> <li> <p>
     * <code>KEY_AND_VALUE</code>: Key and value.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The tag filter type:</p> <ul> <li> <p> <code>KEY_ONLY</code>: Key only.</p>
     * </li> <li> <p> <code>VALUE_ONLY</code>: Value only.</p> </li> <li> <p>
     * <code>KEY_AND_VALUE</code>: Key and value.</p> </li> </ul>
     */
    inline void SetType(const EC2TagFilterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The tag filter type:</p> <ul> <li> <p> <code>KEY_ONLY</code>: Key only.</p>
     * </li> <li> <p> <code>VALUE_ONLY</code>: Value only.</p> </li> <li> <p>
     * <code>KEY_AND_VALUE</code>: Key and value.</p> </li> </ul>
     */
    inline void SetType(EC2TagFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The tag filter type:</p> <ul> <li> <p> <code>KEY_ONLY</code>: Key only.</p>
     * </li> <li> <p> <code>VALUE_ONLY</code>: Value only.</p> </li> <li> <p>
     * <code>KEY_AND_VALUE</code>: Key and value.</p> </li> </ul>
     */
    inline EC2TagFilter& WithType(const EC2TagFilterType& value) { SetType(value); return *this;}

    /**
     * <p>The tag filter type:</p> <ul> <li> <p> <code>KEY_ONLY</code>: Key only.</p>
     * </li> <li> <p> <code>VALUE_ONLY</code>: Value only.</p> </li> <li> <p>
     * <code>KEY_AND_VALUE</code>: Key and value.</p> </li> </ul>
     */
    inline EC2TagFilter& WithType(EC2TagFilterType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    EC2TagFilterType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
