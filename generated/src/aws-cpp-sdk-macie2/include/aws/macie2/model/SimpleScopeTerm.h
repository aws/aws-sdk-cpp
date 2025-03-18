/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Specifies a property-based condition that determines whether an S3 object is
   * included or excluded from a classification job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SimpleScopeTerm">AWS
   * API Reference</a></p>
   */
  class SimpleScopeTerm
  {
  public:
    AWS_MACIE2_API SimpleScopeTerm() = default;
    AWS_MACIE2_API SimpleScopeTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SimpleScopeTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator to use in the condition. Valid values for each supported
     * property (key) are:</p> <ul><li><p>OBJECT_EXTENSION - EQ (equals) or NE (not
     * equals)</p></li> <li><p>OBJECT_KEY - STARTS_WITH</p></li>
     * <li><p>OBJECT_LAST_MODIFIED_DATE - EQ (equals), GT (greater than), GTE (greater
     * than or equals), LT (less than), LTE (less than or equals), or NE (not
     * equals)</p></li> <li><p>OBJECT_SIZE - EQ (equals), GT (greater than), GTE
     * (greater than or equals), LT (less than), LTE (less than or equals), or NE (not
     * equals)</p></li></ul>
     */
    inline JobComparator GetComparator() const { return m_comparator; }
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
    inline void SetComparator(JobComparator value) { m_comparatorHasBeenSet = true; m_comparator = value; }
    inline SimpleScopeTerm& WithComparator(JobComparator value) { SetComparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object property to use in the condition.</p>
     */
    inline ScopeFilterKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(ScopeFilterKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline SimpleScopeTerm& WithKey(ScopeFilterKey value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that lists the values to use in the condition. If the value for the
     * key property is OBJECT_EXTENSION or OBJECT_KEY, this array can specify multiple
     * values and Amazon Macie uses OR logic to join the values. Otherwise, this array
     * can specify only one value.</p> <p>Valid values for each supported property
     * (key) are:</p> <ul><li><p>OBJECT_EXTENSION - A string that represents the file
     * name extension of an object. For example: docx or pdf</p></li> <li><p>OBJECT_KEY
     * - A string that represents the key prefix (folder name or path) of an object.
     * For example: logs or awslogs/eventlogs. This value applies a condition to
     * objects whose keys (names) begin with the specified value.</p></li>
     * <li><p>OBJECT_LAST_MODIFIED_DATE - The date and time (in UTC and extended ISO
     * 8601 format) when an object was created or last changed, whichever is latest.
     * For example: 2023-09-24T14:31:13Z</p></li> <li><p>OBJECT_SIZE - An integer that
     * represents the storage size (in bytes) of an object.</p></li></ul> <p>Macie
     * doesn't support use of wildcard characters in these values. Also, string values
     * are case sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    SimpleScopeTerm& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    SimpleScopeTerm& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    JobComparator m_comparator{JobComparator::NOT_SET};
    bool m_comparatorHasBeenSet = false;

    ScopeFilterKey m_key{ScopeFilterKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
