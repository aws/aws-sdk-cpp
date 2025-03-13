/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/JobComparator.h>
#include <aws/macie2/model/ListJobsFilterKey.h>
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
   * <p>Specifies a condition that filters the results of a request for information
   * about classification jobs. Each condition consists of a property, an operator,
   * and one or more values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListJobsFilterTerm">AWS
   * API Reference</a></p>
   */
  class ListJobsFilterTerm
  {
  public:
    AWS_MACIE2_API ListJobsFilterTerm() = default;
    AWS_MACIE2_API ListJobsFilterTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ListJobsFilterTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator to use to filter the results.</p>
     */
    inline JobComparator GetComparator() const { return m_comparator; }
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
    inline void SetComparator(JobComparator value) { m_comparatorHasBeenSet = true; m_comparator = value; }
    inline ListJobsFilterTerm& WithComparator(JobComparator value) { SetComparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property to use to filter the results.</p>
     */
    inline ListJobsFilterKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(ListJobsFilterKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline ListJobsFilterTerm& WithKey(ListJobsFilterKey value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that lists one or more values to use to filter the results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ListJobsFilterTerm& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ListJobsFilterTerm& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    JobComparator m_comparator{JobComparator::NOT_SET};
    bool m_comparatorHasBeenSet = false;

    ListJobsFilterKey m_key{ListJobsFilterKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
