/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/FilterAttribute.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Specifies the filters to use on the metadata attributes/fields in the
   * knowledge base data sources before returning results.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RetrievalFilter">AWS
   * API Reference</a></p>
   */
  class RetrievalFilter
  {
  public:
    AWS_BEDROCK_API RetrievalFilter();
    AWS_BEDROCK_API RetrievalFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RetrievalFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the key and whose value matches the value in this object.</p>
     * <p>The following example would return data sources with an animal attribute
     * whose value is 'cat': <code>"equals": { "key": "animal", "value": "cat" }</code>
     * </p>
     */
    inline const FilterAttribute& GetEquals() const{ return m_equals; }
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
    inline void SetEquals(const FilterAttribute& value) { m_equalsHasBeenSet = true; m_equals = value; }
    inline void SetEquals(FilterAttribute&& value) { m_equalsHasBeenSet = true; m_equals = std::move(value); }
    inline RetrievalFilter& WithEquals(const FilterAttribute& value) { SetEquals(value); return *this;}
    inline RetrievalFilter& WithEquals(FilterAttribute&& value) { SetEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the key and whose value doesn't match the value in this object are
     * returned.</p> <p>The following example would return data sources that don't
     * contain an animal attribute whose value is 'cat': <code>"notEquals": { "key":
     * "animal", "value": "cat" }</code> </p>
     */
    inline const FilterAttribute& GetNotEquals() const{ return m_notEquals; }
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
    inline void SetNotEquals(const FilterAttribute& value) { m_notEqualsHasBeenSet = true; m_notEquals = value; }
    inline void SetNotEquals(FilterAttribute&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::move(value); }
    inline RetrievalFilter& WithNotEquals(const FilterAttribute& value) { SetNotEquals(value); return *this;}
    inline RetrievalFilter& WithNotEquals(FilterAttribute&& value) { SetNotEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the key and whose value is greater than the value in this
     * object.</p> <p>The following example would return data sources with an year
     * attribute whose value is greater than '1989': <code>"greaterThan": { "key":
     * "year", "value": 1989 }</code> </p>
     */
    inline const FilterAttribute& GetGreaterThan() const{ return m_greaterThan; }
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
    inline void SetGreaterThan(const FilterAttribute& value) { m_greaterThanHasBeenSet = true; m_greaterThan = value; }
    inline void SetGreaterThan(FilterAttribute&& value) { m_greaterThanHasBeenSet = true; m_greaterThan = std::move(value); }
    inline RetrievalFilter& WithGreaterThan(const FilterAttribute& value) { SetGreaterThan(value); return *this;}
    inline RetrievalFilter& WithGreaterThan(FilterAttribute&& value) { SetGreaterThan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the key and whose value is greater than or equal to the value
     * in this object.</p> <p>The following example would return data sources with an
     * year attribute whose value is greater than or equal to '1989':
     * <code>"greaterThanOrEquals": { "key": "year", "value": 1989 }</code> </p>
     */
    inline const FilterAttribute& GetGreaterThanOrEquals() const{ return m_greaterThanOrEquals; }
    inline bool GreaterThanOrEqualsHasBeenSet() const { return m_greaterThanOrEqualsHasBeenSet; }
    inline void SetGreaterThanOrEquals(const FilterAttribute& value) { m_greaterThanOrEqualsHasBeenSet = true; m_greaterThanOrEquals = value; }
    inline void SetGreaterThanOrEquals(FilterAttribute&& value) { m_greaterThanOrEqualsHasBeenSet = true; m_greaterThanOrEquals = std::move(value); }
    inline RetrievalFilter& WithGreaterThanOrEquals(const FilterAttribute& value) { SetGreaterThanOrEquals(value); return *this;}
    inline RetrievalFilter& WithGreaterThanOrEquals(FilterAttribute&& value) { SetGreaterThanOrEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the key and whose value is less than the value in this
     * object.</p> <p>The following example would return data sources with an year
     * attribute whose value is less than to '1989': <code>"lessThan": { "key": "year",
     * "value": 1989 }</code> </p>
     */
    inline const FilterAttribute& GetLessThan() const{ return m_lessThan; }
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
    inline void SetLessThan(const FilterAttribute& value) { m_lessThanHasBeenSet = true; m_lessThan = value; }
    inline void SetLessThan(FilterAttribute&& value) { m_lessThanHasBeenSet = true; m_lessThan = std::move(value); }
    inline RetrievalFilter& WithLessThan(const FilterAttribute& value) { SetLessThan(value); return *this;}
    inline RetrievalFilter& WithLessThan(FilterAttribute&& value) { SetLessThan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the key and whose value is less than or equal to the value in
     * this object.</p> <p>The following example would return data sources with an year
     * attribute whose value is less than or equal to '1989': <code>"lessThanOrEquals":
     * { "key": "year", "value": 1989 }</code> </p>
     */
    inline const FilterAttribute& GetLessThanOrEquals() const{ return m_lessThanOrEquals; }
    inline bool LessThanOrEqualsHasBeenSet() const { return m_lessThanOrEqualsHasBeenSet; }
    inline void SetLessThanOrEquals(const FilterAttribute& value) { m_lessThanOrEqualsHasBeenSet = true; m_lessThanOrEquals = value; }
    inline void SetLessThanOrEquals(FilterAttribute&& value) { m_lessThanOrEqualsHasBeenSet = true; m_lessThanOrEquals = std::move(value); }
    inline RetrievalFilter& WithLessThanOrEquals(const FilterAttribute& value) { SetLessThanOrEquals(value); return *this;}
    inline RetrievalFilter& WithLessThanOrEquals(FilterAttribute&& value) { SetLessThanOrEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the key and whose value is in the list specified in the value
     * in this object.</p> <p>The following example would return data sources with an
     * animal attribute that is either 'cat' or 'dog': <code>"in": { "key": "animal",
     * "value": ["cat", "dog"] }</code> </p>
     */
    inline const FilterAttribute& GetIn() const{ return m_in; }
    inline bool InHasBeenSet() const { return m_inHasBeenSet; }
    inline void SetIn(const FilterAttribute& value) { m_inHasBeenSet = true; m_in = value; }
    inline void SetIn(FilterAttribute&& value) { m_inHasBeenSet = true; m_in = std::move(value); }
    inline RetrievalFilter& WithIn(const FilterAttribute& value) { SetIn(value); return *this;}
    inline RetrievalFilter& WithIn(FilterAttribute&& value) { SetIn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the key and whose value isn't in the list specified in the
     * value in this object.</p> <p>The following example would return data sources
     * whose animal attribute is neither 'cat' nor 'dog': <code>"notIn": { "key":
     * "animal", "value": ["cat", "dog"] }</code> </p>
     */
    inline const FilterAttribute& GetNotIn() const{ return m_notIn; }
    inline bool NotInHasBeenSet() const { return m_notInHasBeenSet; }
    inline void SetNotIn(const FilterAttribute& value) { m_notInHasBeenSet = true; m_notIn = value; }
    inline void SetNotIn(FilterAttribute&& value) { m_notInHasBeenSet = true; m_notIn = std::move(value); }
    inline RetrievalFilter& WithNotIn(const FilterAttribute& value) { SetNotIn(value); return *this;}
    inline RetrievalFilter& WithNotIn(FilterAttribute&& value) { SetNotIn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the key and whose value starts with the value in this object.
     * This filter is currently only supported for Amazon OpenSearch Serverless vector
     * stores.</p> <p>The following example would return data sources with an animal
     * attribute starts with 'ca' (for example, 'cat' or 'camel'). <code>"startsWith":
     * { "key": "animal", "value": "ca" }</code> </p>
     */
    inline const FilterAttribute& GetStartsWith() const{ return m_startsWith; }
    inline bool StartsWithHasBeenSet() const { return m_startsWithHasBeenSet; }
    inline void SetStartsWith(const FilterAttribute& value) { m_startsWithHasBeenSet = true; m_startsWith = value; }
    inline void SetStartsWith(FilterAttribute&& value) { m_startsWithHasBeenSet = true; m_startsWith = std::move(value); }
    inline RetrievalFilter& WithStartsWith(const FilterAttribute& value) { SetStartsWith(value); return *this;}
    inline RetrievalFilter& WithStartsWith(FilterAttribute&& value) { SetStartsWith(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the key and whose value is a list that contains the value as
     * one of its members.</p> <p>The following example would return data sources with
     * an animals attribute that is a list containing a cat member (for example,
     * <code>["dog", "cat"]</code>): <code>"listContains": { "key": "animals", "value":
     * "cat" }</code> </p>
     */
    inline const FilterAttribute& GetListContains() const{ return m_listContains; }
    inline bool ListContainsHasBeenSet() const { return m_listContainsHasBeenSet; }
    inline void SetListContains(const FilterAttribute& value) { m_listContainsHasBeenSet = true; m_listContains = value; }
    inline void SetListContains(FilterAttribute&& value) { m_listContainsHasBeenSet = true; m_listContains = std::move(value); }
    inline RetrievalFilter& WithListContains(const FilterAttribute& value) { SetListContains(value); return *this;}
    inline RetrievalFilter& WithListContains(FilterAttribute&& value) { SetListContains(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the key and whose value is one of the following:</p> <p>A
     * string that contains the value as a substring. The following example would
     * return data sources with an animal attribute that contains the substring at (for
     * example, 'cat'): <code>"stringContains": { "key": "animal", "value": "at"
     * }</code> </p> <p>A list with a member that contains the value as a substring.
     * The following example would return data sources with an animals attribute that
     * is a list containing a member that contains the substring at (for example,
     * <code>["dog", "cat"]</code>): <code>"stringContains": { "key": "animals",
     * "value": "at" }</code> </p>
     */
    inline const FilterAttribute& GetStringContains() const{ return m_stringContains; }
    inline bool StringContainsHasBeenSet() const { return m_stringContainsHasBeenSet; }
    inline void SetStringContains(const FilterAttribute& value) { m_stringContainsHasBeenSet = true; m_stringContains = value; }
    inline void SetStringContains(FilterAttribute&& value) { m_stringContainsHasBeenSet = true; m_stringContains = std::move(value); }
    inline RetrievalFilter& WithStringContains(const FilterAttribute& value) { SetStringContains(value); return *this;}
    inline RetrievalFilter& WithStringContains(FilterAttribute&& value) { SetStringContains(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if their metadata attributes fulfill
     * all the filter conditions inside this list.</p>
     */
    inline const Aws::Vector<RetrievalFilter>& GetAndAll() const{ return m_andAll; }
    inline bool AndAllHasBeenSet() const { return m_andAllHasBeenSet; }
    inline void SetAndAll(const Aws::Vector<RetrievalFilter>& value) { m_andAllHasBeenSet = true; m_andAll = value; }
    inline void SetAndAll(Aws::Vector<RetrievalFilter>&& value) { m_andAllHasBeenSet = true; m_andAll = std::move(value); }
    inline RetrievalFilter& WithAndAll(const Aws::Vector<RetrievalFilter>& value) { SetAndAll(value); return *this;}
    inline RetrievalFilter& WithAndAll(Aws::Vector<RetrievalFilter>&& value) { SetAndAll(std::move(value)); return *this;}
    inline RetrievalFilter& AddAndAll(const RetrievalFilter& value) { m_andAllHasBeenSet = true; m_andAll.push_back(value); return *this; }
    inline RetrievalFilter& AddAndAll(RetrievalFilter&& value) { m_andAllHasBeenSet = true; m_andAll.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if their metadata attributes fulfill
     * at least one of the filter conditions inside this list.</p>
     */
    inline const Aws::Vector<RetrievalFilter>& GetOrAll() const{ return m_orAll; }
    inline bool OrAllHasBeenSet() const { return m_orAllHasBeenSet; }
    inline void SetOrAll(const Aws::Vector<RetrievalFilter>& value) { m_orAllHasBeenSet = true; m_orAll = value; }
    inline void SetOrAll(Aws::Vector<RetrievalFilter>&& value) { m_orAllHasBeenSet = true; m_orAll = std::move(value); }
    inline RetrievalFilter& WithOrAll(const Aws::Vector<RetrievalFilter>& value) { SetOrAll(value); return *this;}
    inline RetrievalFilter& WithOrAll(Aws::Vector<RetrievalFilter>&& value) { SetOrAll(std::move(value)); return *this;}
    inline RetrievalFilter& AddOrAll(const RetrievalFilter& value) { m_orAllHasBeenSet = true; m_orAll.push_back(value); return *this; }
    inline RetrievalFilter& AddOrAll(RetrievalFilter&& value) { m_orAllHasBeenSet = true; m_orAll.push_back(std::move(value)); return *this; }
    ///@}
  private:

    FilterAttribute m_equals;
    bool m_equalsHasBeenSet = false;

    FilterAttribute m_notEquals;
    bool m_notEqualsHasBeenSet = false;

    FilterAttribute m_greaterThan;
    bool m_greaterThanHasBeenSet = false;

    FilterAttribute m_greaterThanOrEquals;
    bool m_greaterThanOrEqualsHasBeenSet = false;

    FilterAttribute m_lessThan;
    bool m_lessThanHasBeenSet = false;

    FilterAttribute m_lessThanOrEquals;
    bool m_lessThanOrEqualsHasBeenSet = false;

    FilterAttribute m_in;
    bool m_inHasBeenSet = false;

    FilterAttribute m_notIn;
    bool m_notInHasBeenSet = false;

    FilterAttribute m_startsWith;
    bool m_startsWithHasBeenSet = false;

    FilterAttribute m_listContains;
    bool m_listContainsHasBeenSet = false;

    FilterAttribute m_stringContains;
    bool m_stringContainsHasBeenSet = false;

    Aws::Vector<RetrievalFilter> m_andAll;
    bool m_andAllHasBeenSet = false;

    Aws::Vector<RetrievalFilter> m_orAll;
    bool m_orAllHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
