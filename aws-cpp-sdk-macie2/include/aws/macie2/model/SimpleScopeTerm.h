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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/JobComparator.h>
#include <aws/macie2/model/ScopeFilterKey.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a property-based condition that determines whether an object is
   * included or excluded from a classification job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/SimpleScopeTerm">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API SimpleScopeTerm
  {
  public:
    SimpleScopeTerm();
    SimpleScopeTerm(Aws::Utils::Json::JsonView jsonValue);
    SimpleScopeTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator to use in the condition.</p>
     */
    inline const JobComparator& GetComparator() const{ return m_comparator; }

    /**
     * <p>The operator to use in the condition.</p>
     */
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }

    /**
     * <p>The operator to use in the condition.</p>
     */
    inline void SetComparator(const JobComparator& value) { m_comparatorHasBeenSet = true; m_comparator = value; }

    /**
     * <p>The operator to use in the condition.</p>
     */
    inline void SetComparator(JobComparator&& value) { m_comparatorHasBeenSet = true; m_comparator = std::move(value); }

    /**
     * <p>The operator to use in the condition.</p>
     */
    inline SimpleScopeTerm& WithComparator(const JobComparator& value) { SetComparator(value); return *this;}

    /**
     * <p>The operator to use in the condition.</p>
     */
    inline SimpleScopeTerm& WithComparator(JobComparator&& value) { SetComparator(std::move(value)); return *this;}


    /**
     * <p>The property to use in the condition.</p>
     */
    inline const ScopeFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The property to use in the condition.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The property to use in the condition.</p>
     */
    inline void SetKey(const ScopeFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The property to use in the condition.</p>
     */
    inline void SetKey(ScopeFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The property to use in the condition.</p>
     */
    inline SimpleScopeTerm& WithKey(const ScopeFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The property to use in the condition.</p>
     */
    inline SimpleScopeTerm& WithKey(ScopeFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>An array that lists one or more values to use in the condition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>An array that lists one or more values to use in the condition.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array that lists one or more values to use in the condition.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array that lists one or more values to use in the condition.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array that lists one or more values to use in the condition.</p>
     */
    inline SimpleScopeTerm& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>An array that lists one or more values to use in the condition.</p>
     */
    inline SimpleScopeTerm& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array that lists one or more values to use in the condition.</p>
     */
    inline SimpleScopeTerm& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array that lists one or more values to use in the condition.</p>
     */
    inline SimpleScopeTerm& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists one or more values to use in the condition.</p>
     */
    inline SimpleScopeTerm& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    JobComparator m_comparator;
    bool m_comparatorHasBeenSet;

    ScopeFilterKey m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
