/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/model/FilterNameStringType.h>
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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>Allows you to add filters when you use the search function in Secrets
   * Manager.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/Filter">AWS
   * API Reference</a></p>
   */
  class AWS_SECRETSMANAGER_API Filter
  {
  public:
    Filter();
    Filter(Aws::Utils::Json::JsonView jsonValue);
    Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters your list of secrets by a specific key.</p>
     */
    inline const FilterNameStringType& GetKey() const{ return m_key; }

    /**
     * <p>Filters your list of secrets by a specific key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Filters your list of secrets by a specific key.</p>
     */
    inline void SetKey(const FilterNameStringType& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Filters your list of secrets by a specific key.</p>
     */
    inline void SetKey(FilterNameStringType&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Filters your list of secrets by a specific key.</p>
     */
    inline Filter& WithKey(const FilterNameStringType& value) { SetKey(value); return *this;}

    /**
     * <p>Filters your list of secrets by a specific key.</p>
     */
    inline Filter& WithKey(FilterNameStringType&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>Filters your list of secrets by a specific value.</p> <p>You can prefix your
     * search value with an exclamation mark (<code>!</code>) in order to perform
     * negation filters. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>Filters your list of secrets by a specific value.</p> <p>You can prefix your
     * search value with an exclamation mark (<code>!</code>) in order to perform
     * negation filters. </p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>Filters your list of secrets by a specific value.</p> <p>You can prefix your
     * search value with an exclamation mark (<code>!</code>) in order to perform
     * negation filters. </p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>Filters your list of secrets by a specific value.</p> <p>You can prefix your
     * search value with an exclamation mark (<code>!</code>) in order to perform
     * negation filters. </p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>Filters your list of secrets by a specific value.</p> <p>You can prefix your
     * search value with an exclamation mark (<code>!</code>) in order to perform
     * negation filters. </p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>Filters your list of secrets by a specific value.</p> <p>You can prefix your
     * search value with an exclamation mark (<code>!</code>) in order to perform
     * negation filters. </p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>Filters your list of secrets by a specific value.</p> <p>You can prefix your
     * search value with an exclamation mark (<code>!</code>) in order to perform
     * negation filters. </p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>Filters your list of secrets by a specific value.</p> <p>You can prefix your
     * search value with an exclamation mark (<code>!</code>) in order to perform
     * negation filters. </p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters your list of secrets by a specific value.</p> <p>You can prefix your
     * search value with an exclamation mark (<code>!</code>) in order to perform
     * negation filters. </p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    FilterNameStringType m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
