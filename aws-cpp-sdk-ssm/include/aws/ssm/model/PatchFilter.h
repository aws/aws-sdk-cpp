/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/PatchFilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p> Defines which patches should be included in a patch baseline.</p> <p>A patch
   * filter consists of a key and a set of values. The filter key is a patch
   * property. For example, the available filter keys for <code>WINDOWS</code> are
   * <code>PATCH_SET</code>, <code>PRODUCT</code>, <code>PRODUCT_FAMILY</code>,
   * <code>CLASSIFICATION</code>, and <code>MSRC_SEVERITY</code>.</p> <p>The filter
   * values define a matching criterion for the patch property indicated by the key.
   * For example, if the filter key is <code>PRODUCT</code> and the filter values are
   * <code>["Office 2013", "Office 2016"]</code>, then the filter accepts all patches
   * where product name is either "Office 2013" or "Office 2016". The filter values
   * can be exact values for the patch property given as a key, or a wildcard (*),
   * which matches all values.</p> <p>You can view lists of valid values for the
   * patch properties by running the <code>DescribePatchProperties</code> command.
   * For information about which patch properties can be used with each major
   * operating system, see <a>DescribePatchProperties</a>.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchFilter">AWS
   * API Reference</a></p>
   */
  class PatchFilter
  {
  public:
    AWS_SSM_API PatchFilter();
    AWS_SSM_API PatchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for the filter.</p> <p>Run the <a>DescribePatchProperties</a> command
     * to view lists of valid keys for each operating system type.</p>
     */
    inline const PatchFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The key for the filter.</p> <p>Run the <a>DescribePatchProperties</a> command
     * to view lists of valid keys for each operating system type.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for the filter.</p> <p>Run the <a>DescribePatchProperties</a> command
     * to view lists of valid keys for each operating system type.</p>
     */
    inline void SetKey(const PatchFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for the filter.</p> <p>Run the <a>DescribePatchProperties</a> command
     * to view lists of valid keys for each operating system type.</p>
     */
    inline void SetKey(PatchFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for the filter.</p> <p>Run the <a>DescribePatchProperties</a> command
     * to view lists of valid keys for each operating system type.</p>
     */
    inline PatchFilter& WithKey(const PatchFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The key for the filter.</p> <p>Run the <a>DescribePatchProperties</a> command
     * to view lists of valid keys for each operating system type.</p>
     */
    inline PatchFilter& WithKey(PatchFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The value for the filter key.</p> <p>Run the <a>DescribePatchProperties</a>
     * command to view lists of valid values for each key based on operating system
     * type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value for the filter key.</p> <p>Run the <a>DescribePatchProperties</a>
     * command to view lists of valid values for each key based on operating system
     * type.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value for the filter key.</p> <p>Run the <a>DescribePatchProperties</a>
     * command to view lists of valid values for each key based on operating system
     * type.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value for the filter key.</p> <p>Run the <a>DescribePatchProperties</a>
     * command to view lists of valid values for each key based on operating system
     * type.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value for the filter key.</p> <p>Run the <a>DescribePatchProperties</a>
     * command to view lists of valid values for each key based on operating system
     * type.</p>
     */
    inline PatchFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value for the filter key.</p> <p>Run the <a>DescribePatchProperties</a>
     * command to view lists of valid values for each key based on operating system
     * type.</p>
     */
    inline PatchFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value for the filter key.</p> <p>Run the <a>DescribePatchProperties</a>
     * command to view lists of valid values for each key based on operating system
     * type.</p>
     */
    inline PatchFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value for the filter key.</p> <p>Run the <a>DescribePatchProperties</a>
     * command to view lists of valid values for each key based on operating system
     * type.</p>
     */
    inline PatchFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value for the filter key.</p> <p>Run the <a>DescribePatchProperties</a>
     * command to view lists of valid values for each key based on operating system
     * type.</p>
     */
    inline PatchFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    PatchFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
