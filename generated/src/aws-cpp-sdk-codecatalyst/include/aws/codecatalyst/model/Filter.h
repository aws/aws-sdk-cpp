/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a filter used to limit results of a query.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_CODECATALYST_API Filter();
    AWS_CODECATALYST_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A key that can be used to sort results.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline Filter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline Filter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline Filter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of the key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator used to compare the fields.</p>
     */
    inline const Aws::String& GetComparisonOperator() const{ return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(const Aws::String& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline void SetComparisonOperator(Aws::String&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }
    inline void SetComparisonOperator(const char* value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator.assign(value); }
    inline Filter& WithComparisonOperator(const Aws::String& value) { SetComparisonOperator(value); return *this;}
    inline Filter& WithComparisonOperator(Aws::String&& value) { SetComparisonOperator(std::move(value)); return *this;}
    inline Filter& WithComparisonOperator(const char* value) { SetComparisonOperator(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::String m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
