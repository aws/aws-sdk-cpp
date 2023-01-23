/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/MatchOption.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The Cost Categories values used for filtering the costs.</p> <p>If
   * <code>Values</code> and <code>Key</code> are not specified, the
   * <code>ABSENT</code> <code>MatchOption</code> is applied to all Cost Categories.
   * That is, it filters on resources that aren't mapped to any Cost Categories.</p>
   * <p>If <code>Values</code> is provided and <code>Key</code> isn't specified, the
   * <code>ABSENT</code> <code>MatchOption</code> is applied to the Cost Categories
   * <code>Key</code> only. That is, it filters on resources without the given Cost
   * Categories key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostCategoryValues">AWS
   * API Reference</a></p>
   */
  class CostCategoryValues
  {
  public:
    AWS_COSTEXPLORER_API CostCategoryValues();
    AWS_COSTEXPLORER_API CostCategoryValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategoryValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetKey() const{ return m_key; }

    
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    
    inline CostCategoryValues& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    
    inline CostCategoryValues& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    
    inline CostCategoryValues& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline CostCategoryValues& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline CostCategoryValues& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline CostCategoryValues& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline CostCategoryValues& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline CostCategoryValues& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The match options that you can use to filter your results. MatchOptions is
     * only applicable for actions related to cost category. The default values for
     * <code>MatchOptions</code> is <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>. </p>
     */
    inline const Aws::Vector<MatchOption>& GetMatchOptions() const{ return m_matchOptions; }

    /**
     * <p>The match options that you can use to filter your results. MatchOptions is
     * only applicable for actions related to cost category. The default values for
     * <code>MatchOptions</code> is <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>. </p>
     */
    inline bool MatchOptionsHasBeenSet() const { return m_matchOptionsHasBeenSet; }

    /**
     * <p>The match options that you can use to filter your results. MatchOptions is
     * only applicable for actions related to cost category. The default values for
     * <code>MatchOptions</code> is <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>. </p>
     */
    inline void SetMatchOptions(const Aws::Vector<MatchOption>& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = value; }

    /**
     * <p>The match options that you can use to filter your results. MatchOptions is
     * only applicable for actions related to cost category. The default values for
     * <code>MatchOptions</code> is <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>. </p>
     */
    inline void SetMatchOptions(Aws::Vector<MatchOption>&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = std::move(value); }

    /**
     * <p>The match options that you can use to filter your results. MatchOptions is
     * only applicable for actions related to cost category. The default values for
     * <code>MatchOptions</code> is <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>. </p>
     */
    inline CostCategoryValues& WithMatchOptions(const Aws::Vector<MatchOption>& value) { SetMatchOptions(value); return *this;}

    /**
     * <p>The match options that you can use to filter your results. MatchOptions is
     * only applicable for actions related to cost category. The default values for
     * <code>MatchOptions</code> is <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>. </p>
     */
    inline CostCategoryValues& WithMatchOptions(Aws::Vector<MatchOption>&& value) { SetMatchOptions(std::move(value)); return *this;}

    /**
     * <p>The match options that you can use to filter your results. MatchOptions is
     * only applicable for actions related to cost category. The default values for
     * <code>MatchOptions</code> is <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>. </p>
     */
    inline CostCategoryValues& AddMatchOptions(const MatchOption& value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(value); return *this; }

    /**
     * <p>The match options that you can use to filter your results. MatchOptions is
     * only applicable for actions related to cost category. The default values for
     * <code>MatchOptions</code> is <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>. </p>
     */
    inline CostCategoryValues& AddMatchOptions(MatchOption&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<MatchOption> m_matchOptions;
    bool m_matchOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
