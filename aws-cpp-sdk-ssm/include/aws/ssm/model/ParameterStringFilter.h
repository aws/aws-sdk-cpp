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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>One or more filters. Use a filter to return a more specific list of
   * results.</p> <note> <p>The <code>Name</code> and <code>Tier</code> filter keys
   * can't be used with the <a>GetParametersByPath</a> API action. Also, the
   * <code>Label</code> filter key can't be used with the <a>DescribeParameters</a>
   * API action.</p> </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ParameterStringFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ParameterStringFilter
  {
  public:
    ParameterStringFilter();
    ParameterStringFilter(Aws::Utils::Json::JsonView jsonValue);
    ParameterStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline ParameterStringFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline ParameterStringFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline ParameterStringFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Valid options are Equals and BeginsWith. For Path filter, valid options are
     * Recursive and OneLevel.</p>
     */
    inline const Aws::String& GetOption() const{ return m_option; }

    /**
     * <p>Valid options are Equals and BeginsWith. For Path filter, valid options are
     * Recursive and OneLevel.</p>
     */
    inline bool OptionHasBeenSet() const { return m_optionHasBeenSet; }

    /**
     * <p>Valid options are Equals and BeginsWith. For Path filter, valid options are
     * Recursive and OneLevel.</p>
     */
    inline void SetOption(const Aws::String& value) { m_optionHasBeenSet = true; m_option = value; }

    /**
     * <p>Valid options are Equals and BeginsWith. For Path filter, valid options are
     * Recursive and OneLevel.</p>
     */
    inline void SetOption(Aws::String&& value) { m_optionHasBeenSet = true; m_option = std::move(value); }

    /**
     * <p>Valid options are Equals and BeginsWith. For Path filter, valid options are
     * Recursive and OneLevel.</p>
     */
    inline void SetOption(const char* value) { m_optionHasBeenSet = true; m_option.assign(value); }

    /**
     * <p>Valid options are Equals and BeginsWith. For Path filter, valid options are
     * Recursive and OneLevel.</p>
     */
    inline ParameterStringFilter& WithOption(const Aws::String& value) { SetOption(value); return *this;}

    /**
     * <p>Valid options are Equals and BeginsWith. For Path filter, valid options are
     * Recursive and OneLevel.</p>
     */
    inline ParameterStringFilter& WithOption(Aws::String&& value) { SetOption(std::move(value)); return *this;}

    /**
     * <p>Valid options are Equals and BeginsWith. For Path filter, valid options are
     * Recursive and OneLevel.</p>
     */
    inline ParameterStringFilter& WithOption(const char* value) { SetOption(value); return *this;}


    /**
     * <p>The value you want to search for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value you want to search for.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value you want to search for.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value you want to search for.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value you want to search for.</p>
     */
    inline ParameterStringFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value you want to search for.</p>
     */
    inline ParameterStringFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value you want to search for.</p>
     */
    inline ParameterStringFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value you want to search for.</p>
     */
    inline ParameterStringFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value you want to search for.</p>
     */
    inline ParameterStringFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_option;
    bool m_optionHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
