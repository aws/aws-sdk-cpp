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
    AWS_MACIE2_API ListJobsFilterTerm();
    AWS_MACIE2_API ListJobsFilterTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ListJobsFilterTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator to use to filter the results.</p>
     */
    inline const JobComparator& GetComparator() const{ return m_comparator; }

    /**
     * <p>The operator to use to filter the results.</p>
     */
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }

    /**
     * <p>The operator to use to filter the results.</p>
     */
    inline void SetComparator(const JobComparator& value) { m_comparatorHasBeenSet = true; m_comparator = value; }

    /**
     * <p>The operator to use to filter the results.</p>
     */
    inline void SetComparator(JobComparator&& value) { m_comparatorHasBeenSet = true; m_comparator = std::move(value); }

    /**
     * <p>The operator to use to filter the results.</p>
     */
    inline ListJobsFilterTerm& WithComparator(const JobComparator& value) { SetComparator(value); return *this;}

    /**
     * <p>The operator to use to filter the results.</p>
     */
    inline ListJobsFilterTerm& WithComparator(JobComparator&& value) { SetComparator(std::move(value)); return *this;}


    /**
     * <p>The property to use to filter the results.</p>
     */
    inline const ListJobsFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The property to use to filter the results.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The property to use to filter the results.</p>
     */
    inline void SetKey(const ListJobsFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The property to use to filter the results.</p>
     */
    inline void SetKey(ListJobsFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The property to use to filter the results.</p>
     */
    inline ListJobsFilterTerm& WithKey(const ListJobsFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The property to use to filter the results.</p>
     */
    inline ListJobsFilterTerm& WithKey(ListJobsFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>An array that lists one or more values to use to filter the results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>An array that lists one or more values to use to filter the results.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array that lists one or more values to use to filter the results.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array that lists one or more values to use to filter the results.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array that lists one or more values to use to filter the results.</p>
     */
    inline ListJobsFilterTerm& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>An array that lists one or more values to use to filter the results.</p>
     */
    inline ListJobsFilterTerm& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array that lists one or more values to use to filter the results.</p>
     */
    inline ListJobsFilterTerm& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array that lists one or more values to use to filter the results.</p>
     */
    inline ListJobsFilterTerm& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists one or more values to use to filter the results.</p>
     */
    inline ListJobsFilterTerm& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    JobComparator m_comparator;
    bool m_comparatorHasBeenSet = false;

    ListJobsFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
