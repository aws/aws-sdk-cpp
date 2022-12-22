/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ParameterStringFilter">AWS
   * API Reference</a></p>
   */
  class ParameterStringFilter
  {
  public:
    AWS_SSM_API ParameterStringFilter();
    AWS_SSM_API ParameterStringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ParameterStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p> <p>The <code>ParameterStringFilter</code> object
     * is used by the <a>DescribeParameters</a> and <a>GetParametersByPath</a> API
     * operations. However, not all of the pattern values listed for <code>Key</code>
     * can be used with both operations.</p> <p>For <code>DescribeParameters</code>,
     * all of the listed patterns are valid except <code>Label</code>.</p> <p>For
     * <code>GetParametersByPath</code>, the following patterns listed for
     * <code>Key</code> aren't valid: <code>tag</code>, <code>DataType</code>,
     * <code>Name</code>, <code>Path</code>, and <code>Tier</code>.</p> <p>For examples
     * of Amazon Web Services CLI commands demonstrating valid parameter filter
     * constructions, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-search.html">Searching
     * for Systems Manager parameters</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter.</p> <p>The <code>ParameterStringFilter</code> object
     * is used by the <a>DescribeParameters</a> and <a>GetParametersByPath</a> API
     * operations. However, not all of the pattern values listed for <code>Key</code>
     * can be used with both operations.</p> <p>For <code>DescribeParameters</code>,
     * all of the listed patterns are valid except <code>Label</code>.</p> <p>For
     * <code>GetParametersByPath</code>, the following patterns listed for
     * <code>Key</code> aren't valid: <code>tag</code>, <code>DataType</code>,
     * <code>Name</code>, <code>Path</code>, and <code>Tier</code>.</p> <p>For examples
     * of Amazon Web Services CLI commands demonstrating valid parameter filter
     * constructions, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-search.html">Searching
     * for Systems Manager parameters</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter.</p> <p>The <code>ParameterStringFilter</code> object
     * is used by the <a>DescribeParameters</a> and <a>GetParametersByPath</a> API
     * operations. However, not all of the pattern values listed for <code>Key</code>
     * can be used with both operations.</p> <p>For <code>DescribeParameters</code>,
     * all of the listed patterns are valid except <code>Label</code>.</p> <p>For
     * <code>GetParametersByPath</code>, the following patterns listed for
     * <code>Key</code> aren't valid: <code>tag</code>, <code>DataType</code>,
     * <code>Name</code>, <code>Path</code>, and <code>Tier</code>.</p> <p>For examples
     * of Amazon Web Services CLI commands demonstrating valid parameter filter
     * constructions, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-search.html">Searching
     * for Systems Manager parameters</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter.</p> <p>The <code>ParameterStringFilter</code> object
     * is used by the <a>DescribeParameters</a> and <a>GetParametersByPath</a> API
     * operations. However, not all of the pattern values listed for <code>Key</code>
     * can be used with both operations.</p> <p>For <code>DescribeParameters</code>,
     * all of the listed patterns are valid except <code>Label</code>.</p> <p>For
     * <code>GetParametersByPath</code>, the following patterns listed for
     * <code>Key</code> aren't valid: <code>tag</code>, <code>DataType</code>,
     * <code>Name</code>, <code>Path</code>, and <code>Tier</code>.</p> <p>For examples
     * of Amazon Web Services CLI commands demonstrating valid parameter filter
     * constructions, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-search.html">Searching
     * for Systems Manager parameters</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter.</p> <p>The <code>ParameterStringFilter</code> object
     * is used by the <a>DescribeParameters</a> and <a>GetParametersByPath</a> API
     * operations. However, not all of the pattern values listed for <code>Key</code>
     * can be used with both operations.</p> <p>For <code>DescribeParameters</code>,
     * all of the listed patterns are valid except <code>Label</code>.</p> <p>For
     * <code>GetParametersByPath</code>, the following patterns listed for
     * <code>Key</code> aren't valid: <code>tag</code>, <code>DataType</code>,
     * <code>Name</code>, <code>Path</code>, and <code>Tier</code>.</p> <p>For examples
     * of Amazon Web Services CLI commands demonstrating valid parameter filter
     * constructions, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-search.html">Searching
     * for Systems Manager parameters</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the filter.</p> <p>The <code>ParameterStringFilter</code> object
     * is used by the <a>DescribeParameters</a> and <a>GetParametersByPath</a> API
     * operations. However, not all of the pattern values listed for <code>Key</code>
     * can be used with both operations.</p> <p>For <code>DescribeParameters</code>,
     * all of the listed patterns are valid except <code>Label</code>.</p> <p>For
     * <code>GetParametersByPath</code>, the following patterns listed for
     * <code>Key</code> aren't valid: <code>tag</code>, <code>DataType</code>,
     * <code>Name</code>, <code>Path</code>, and <code>Tier</code>.</p> <p>For examples
     * of Amazon Web Services CLI commands demonstrating valid parameter filter
     * constructions, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-search.html">Searching
     * for Systems Manager parameters</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline ParameterStringFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter.</p> <p>The <code>ParameterStringFilter</code> object
     * is used by the <a>DescribeParameters</a> and <a>GetParametersByPath</a> API
     * operations. However, not all of the pattern values listed for <code>Key</code>
     * can be used with both operations.</p> <p>For <code>DescribeParameters</code>,
     * all of the listed patterns are valid except <code>Label</code>.</p> <p>For
     * <code>GetParametersByPath</code>, the following patterns listed for
     * <code>Key</code> aren't valid: <code>tag</code>, <code>DataType</code>,
     * <code>Name</code>, <code>Path</code>, and <code>Tier</code>.</p> <p>For examples
     * of Amazon Web Services CLI commands demonstrating valid parameter filter
     * constructions, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-search.html">Searching
     * for Systems Manager parameters</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline ParameterStringFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the filter.</p> <p>The <code>ParameterStringFilter</code> object
     * is used by the <a>DescribeParameters</a> and <a>GetParametersByPath</a> API
     * operations. However, not all of the pattern values listed for <code>Key</code>
     * can be used with both operations.</p> <p>For <code>DescribeParameters</code>,
     * all of the listed patterns are valid except <code>Label</code>.</p> <p>For
     * <code>GetParametersByPath</code>, the following patterns listed for
     * <code>Key</code> aren't valid: <code>tag</code>, <code>DataType</code>,
     * <code>Name</code>, <code>Path</code>, and <code>Tier</code>.</p> <p>For examples
     * of Amazon Web Services CLI commands demonstrating valid parameter filter
     * constructions, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-search.html">Searching
     * for Systems Manager parameters</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline ParameterStringFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>For all filters used with <a>DescribeParameters</a>, valid options include
     * <code>Equals</code> and <code>BeginsWith</code>. The <code>Name</code> filter
     * additionally supports the <code>Contains</code> option. (Exception: For filters
     * using the key <code>Path</code>, valid options include <code>Recursive</code>
     * and <code>OneLevel</code>.)</p> <p>For filters used with
     * <a>GetParametersByPath</a>, valid options include <code>Equals</code> and
     * <code>BeginsWith</code>. (Exception: For filters using <code>Label</code> as the
     * Key name, the only valid option is <code>Equals</code>.)</p>
     */
    inline const Aws::String& GetOption() const{ return m_option; }

    /**
     * <p>For all filters used with <a>DescribeParameters</a>, valid options include
     * <code>Equals</code> and <code>BeginsWith</code>. The <code>Name</code> filter
     * additionally supports the <code>Contains</code> option. (Exception: For filters
     * using the key <code>Path</code>, valid options include <code>Recursive</code>
     * and <code>OneLevel</code>.)</p> <p>For filters used with
     * <a>GetParametersByPath</a>, valid options include <code>Equals</code> and
     * <code>BeginsWith</code>. (Exception: For filters using <code>Label</code> as the
     * Key name, the only valid option is <code>Equals</code>.)</p>
     */
    inline bool OptionHasBeenSet() const { return m_optionHasBeenSet; }

    /**
     * <p>For all filters used with <a>DescribeParameters</a>, valid options include
     * <code>Equals</code> and <code>BeginsWith</code>. The <code>Name</code> filter
     * additionally supports the <code>Contains</code> option. (Exception: For filters
     * using the key <code>Path</code>, valid options include <code>Recursive</code>
     * and <code>OneLevel</code>.)</p> <p>For filters used with
     * <a>GetParametersByPath</a>, valid options include <code>Equals</code> and
     * <code>BeginsWith</code>. (Exception: For filters using <code>Label</code> as the
     * Key name, the only valid option is <code>Equals</code>.)</p>
     */
    inline void SetOption(const Aws::String& value) { m_optionHasBeenSet = true; m_option = value; }

    /**
     * <p>For all filters used with <a>DescribeParameters</a>, valid options include
     * <code>Equals</code> and <code>BeginsWith</code>. The <code>Name</code> filter
     * additionally supports the <code>Contains</code> option. (Exception: For filters
     * using the key <code>Path</code>, valid options include <code>Recursive</code>
     * and <code>OneLevel</code>.)</p> <p>For filters used with
     * <a>GetParametersByPath</a>, valid options include <code>Equals</code> and
     * <code>BeginsWith</code>. (Exception: For filters using <code>Label</code> as the
     * Key name, the only valid option is <code>Equals</code>.)</p>
     */
    inline void SetOption(Aws::String&& value) { m_optionHasBeenSet = true; m_option = std::move(value); }

    /**
     * <p>For all filters used with <a>DescribeParameters</a>, valid options include
     * <code>Equals</code> and <code>BeginsWith</code>. The <code>Name</code> filter
     * additionally supports the <code>Contains</code> option. (Exception: For filters
     * using the key <code>Path</code>, valid options include <code>Recursive</code>
     * and <code>OneLevel</code>.)</p> <p>For filters used with
     * <a>GetParametersByPath</a>, valid options include <code>Equals</code> and
     * <code>BeginsWith</code>. (Exception: For filters using <code>Label</code> as the
     * Key name, the only valid option is <code>Equals</code>.)</p>
     */
    inline void SetOption(const char* value) { m_optionHasBeenSet = true; m_option.assign(value); }

    /**
     * <p>For all filters used with <a>DescribeParameters</a>, valid options include
     * <code>Equals</code> and <code>BeginsWith</code>. The <code>Name</code> filter
     * additionally supports the <code>Contains</code> option. (Exception: For filters
     * using the key <code>Path</code>, valid options include <code>Recursive</code>
     * and <code>OneLevel</code>.)</p> <p>For filters used with
     * <a>GetParametersByPath</a>, valid options include <code>Equals</code> and
     * <code>BeginsWith</code>. (Exception: For filters using <code>Label</code> as the
     * Key name, the only valid option is <code>Equals</code>.)</p>
     */
    inline ParameterStringFilter& WithOption(const Aws::String& value) { SetOption(value); return *this;}

    /**
     * <p>For all filters used with <a>DescribeParameters</a>, valid options include
     * <code>Equals</code> and <code>BeginsWith</code>. The <code>Name</code> filter
     * additionally supports the <code>Contains</code> option. (Exception: For filters
     * using the key <code>Path</code>, valid options include <code>Recursive</code>
     * and <code>OneLevel</code>.)</p> <p>For filters used with
     * <a>GetParametersByPath</a>, valid options include <code>Equals</code> and
     * <code>BeginsWith</code>. (Exception: For filters using <code>Label</code> as the
     * Key name, the only valid option is <code>Equals</code>.)</p>
     */
    inline ParameterStringFilter& WithOption(Aws::String&& value) { SetOption(std::move(value)); return *this;}

    /**
     * <p>For all filters used with <a>DescribeParameters</a>, valid options include
     * <code>Equals</code> and <code>BeginsWith</code>. The <code>Name</code> filter
     * additionally supports the <code>Contains</code> option. (Exception: For filters
     * using the key <code>Path</code>, valid options include <code>Recursive</code>
     * and <code>OneLevel</code>.)</p> <p>For filters used with
     * <a>GetParametersByPath</a>, valid options include <code>Equals</code> and
     * <code>BeginsWith</code>. (Exception: For filters using <code>Label</code> as the
     * Key name, the only valid option is <code>Equals</code>.)</p>
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
    bool m_keyHasBeenSet = false;

    Aws::String m_option;
    bool m_optionHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
