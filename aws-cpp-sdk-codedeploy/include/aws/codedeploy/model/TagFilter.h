/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/TagFilterType.h>
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
   * <p>Information about an on-premises instance tag filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TagFilter">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API TagFilter
  {
  public:
    TagFilter();
    TagFilter(Aws::Utils::Json::JsonView jsonValue);
    TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The on-premises instance tag filter key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The on-premises instance tag filter key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The on-premises instance tag filter key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The on-premises instance tag filter key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The on-premises instance tag filter key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The on-premises instance tag filter key.</p>
     */
    inline TagFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The on-premises instance tag filter key.</p>
     */
    inline TagFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The on-premises instance tag filter key.</p>
     */
    inline TagFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The on-premises instance tag filter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The on-premises instance tag filter value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The on-premises instance tag filter value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The on-premises instance tag filter value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The on-premises instance tag filter value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The on-premises instance tag filter value.</p>
     */
    inline TagFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The on-premises instance tag filter value.</p>
     */
    inline TagFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The on-premises instance tag filter value.</p>
     */
    inline TagFilter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The on-premises instance tag filter type:</p> <ul> <li> <p>KEY_ONLY: Key
     * only.</p> </li> <li> <p>VALUE_ONLY: Value only.</p> </li> <li> <p>KEY_AND_VALUE:
     * Key and value.</p> </li> </ul>
     */
    inline const TagFilterType& GetType() const{ return m_type; }

    /**
     * <p>The on-premises instance tag filter type:</p> <ul> <li> <p>KEY_ONLY: Key
     * only.</p> </li> <li> <p>VALUE_ONLY: Value only.</p> </li> <li> <p>KEY_AND_VALUE:
     * Key and value.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The on-premises instance tag filter type:</p> <ul> <li> <p>KEY_ONLY: Key
     * only.</p> </li> <li> <p>VALUE_ONLY: Value only.</p> </li> <li> <p>KEY_AND_VALUE:
     * Key and value.</p> </li> </ul>
     */
    inline void SetType(const TagFilterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The on-premises instance tag filter type:</p> <ul> <li> <p>KEY_ONLY: Key
     * only.</p> </li> <li> <p>VALUE_ONLY: Value only.</p> </li> <li> <p>KEY_AND_VALUE:
     * Key and value.</p> </li> </ul>
     */
    inline void SetType(TagFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The on-premises instance tag filter type:</p> <ul> <li> <p>KEY_ONLY: Key
     * only.</p> </li> <li> <p>VALUE_ONLY: Value only.</p> </li> <li> <p>KEY_AND_VALUE:
     * Key and value.</p> </li> </ul>
     */
    inline TagFilter& WithType(const TagFilterType& value) { SetType(value); return *this;}

    /**
     * <p>The on-premises instance tag filter type:</p> <ul> <li> <p>KEY_ONLY: Key
     * only.</p> </li> <li> <p>VALUE_ONLY: Value only.</p> </li> <li> <p>KEY_AND_VALUE:
     * Key and value.</p> </li> </ul>
     */
    inline TagFilter& WithType(TagFilterType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    TagFilterType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
