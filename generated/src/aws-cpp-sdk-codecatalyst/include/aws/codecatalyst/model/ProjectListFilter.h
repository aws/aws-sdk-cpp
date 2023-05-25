/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/model/FilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecatalyst/model/ComparisonOperator.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>nformation about the filter used to narrow the results returned in a list of
   * projects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ProjectListFilter">AWS
   * API Reference</a></p>
   */
  class ProjectListFilter
  {
  public:
    AWS_CODECATALYST_API ProjectListFilter();
    AWS_CODECATALYST_API ProjectListFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API ProjectListFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A key that can be used to sort results.</p>
     */
    inline const FilterKey& GetKey() const{ return m_key; }

    /**
     * <p>A key that can be used to sort results.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A key that can be used to sort results.</p>
     */
    inline void SetKey(const FilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A key that can be used to sort results.</p>
     */
    inline void SetKey(FilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A key that can be used to sort results.</p>
     */
    inline ProjectListFilter& WithKey(const FilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>A key that can be used to sort results.</p>
     */
    inline ProjectListFilter& WithKey(FilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The value of the key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value of the key.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value of the key.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value of the key.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value of the key.</p>
     */
    inline ProjectListFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value of the key.</p>
     */
    inline ProjectListFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value of the key.</p>
     */
    inline ProjectListFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value of the key.</p>
     */
    inline ProjectListFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value of the key.</p>
     */
    inline ProjectListFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator used to compare the fields.</p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The operator used to compare the fields.</p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>The operator used to compare the fields.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The operator used to compare the fields.</p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>The operator used to compare the fields.</p>
     */
    inline ProjectListFilter& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The operator used to compare the fields.</p>
     */
    inline ProjectListFilter& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}

  private:

    FilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
