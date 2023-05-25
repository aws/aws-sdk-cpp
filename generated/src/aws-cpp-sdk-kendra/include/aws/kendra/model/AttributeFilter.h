/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DocumentAttribute.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides filtering the query results based on document attributes or metadata
   * fields.</p> <p>When you use the <code>AndAllFilters</code> or
   * <code>OrAllFilters</code>, filters you can use 2 layers under the first
   * attribute filter. For example, you can use:</p> <p>
   * <code>&lt;AndAllFilters&gt;</code> </p> <ol> <li> <p> <code>
   * &lt;OrAllFilters&gt;</code> </p> </li> <li> <p> <code> &lt;EqualsTo&gt;</code>
   * </p> </li> </ol> <p>If you use more than 2 layers, you receive a
   * <code>ValidationException</code> exception with the message
   * "<code>AttributeFilter</code> cannot have a depth of more than 2."</p> <p>If you
   * use more than 10 attribute filters in a given list for
   * <code>AndAllFilters</code> or <code>OrAllFilters</code>, you receive a
   * <code>ValidationException</code> with the message "<code>AttributeFilter</code>
   * cannot have a length of more than 10".</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AttributeFilter">AWS
   * API Reference</a></p>
   */
  class AttributeFilter
  {
  public:
    AWS_KENDRA_API AttributeFilter();
    AWS_KENDRA_API AttributeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Performs a logical <code>AND</code> operation on all supplied filters.</p>
     */
    inline const Aws::Vector<AttributeFilter>& GetAndAllFilters() const{ return m_andAllFilters; }

    /**
     * <p>Performs a logical <code>AND</code> operation on all supplied filters.</p>
     */
    inline bool AndAllFiltersHasBeenSet() const { return m_andAllFiltersHasBeenSet; }

    /**
     * <p>Performs a logical <code>AND</code> operation on all supplied filters.</p>
     */
    inline void SetAndAllFilters(const Aws::Vector<AttributeFilter>& value) { m_andAllFiltersHasBeenSet = true; m_andAllFilters = value; }

    /**
     * <p>Performs a logical <code>AND</code> operation on all supplied filters.</p>
     */
    inline void SetAndAllFilters(Aws::Vector<AttributeFilter>&& value) { m_andAllFiltersHasBeenSet = true; m_andAllFilters = std::move(value); }

    /**
     * <p>Performs a logical <code>AND</code> operation on all supplied filters.</p>
     */
    inline AttributeFilter& WithAndAllFilters(const Aws::Vector<AttributeFilter>& value) { SetAndAllFilters(value); return *this;}

    /**
     * <p>Performs a logical <code>AND</code> operation on all supplied filters.</p>
     */
    inline AttributeFilter& WithAndAllFilters(Aws::Vector<AttributeFilter>&& value) { SetAndAllFilters(std::move(value)); return *this;}

    /**
     * <p>Performs a logical <code>AND</code> operation on all supplied filters.</p>
     */
    inline AttributeFilter& AddAndAllFilters(const AttributeFilter& value) { m_andAllFiltersHasBeenSet = true; m_andAllFilters.push_back(value); return *this; }

    /**
     * <p>Performs a logical <code>AND</code> operation on all supplied filters.</p>
     */
    inline AttributeFilter& AddAndAllFilters(AttributeFilter&& value) { m_andAllFiltersHasBeenSet = true; m_andAllFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>Performs a logical <code>OR</code> operation on all supplied filters.</p>
     */
    inline const Aws::Vector<AttributeFilter>& GetOrAllFilters() const{ return m_orAllFilters; }

    /**
     * <p>Performs a logical <code>OR</code> operation on all supplied filters.</p>
     */
    inline bool OrAllFiltersHasBeenSet() const { return m_orAllFiltersHasBeenSet; }

    /**
     * <p>Performs a logical <code>OR</code> operation on all supplied filters.</p>
     */
    inline void SetOrAllFilters(const Aws::Vector<AttributeFilter>& value) { m_orAllFiltersHasBeenSet = true; m_orAllFilters = value; }

    /**
     * <p>Performs a logical <code>OR</code> operation on all supplied filters.</p>
     */
    inline void SetOrAllFilters(Aws::Vector<AttributeFilter>&& value) { m_orAllFiltersHasBeenSet = true; m_orAllFilters = std::move(value); }

    /**
     * <p>Performs a logical <code>OR</code> operation on all supplied filters.</p>
     */
    inline AttributeFilter& WithOrAllFilters(const Aws::Vector<AttributeFilter>& value) { SetOrAllFilters(value); return *this;}

    /**
     * <p>Performs a logical <code>OR</code> operation on all supplied filters.</p>
     */
    inline AttributeFilter& WithOrAllFilters(Aws::Vector<AttributeFilter>&& value) { SetOrAllFilters(std::move(value)); return *this;}

    /**
     * <p>Performs a logical <code>OR</code> operation on all supplied filters.</p>
     */
    inline AttributeFilter& AddOrAllFilters(const AttributeFilter& value) { m_orAllFiltersHasBeenSet = true; m_orAllFilters.push_back(value); return *this; }

    /**
     * <p>Performs a logical <code>OR</code> operation on all supplied filters.</p>
     */
    inline AttributeFilter& AddOrAllFilters(AttributeFilter&& value) { m_orAllFiltersHasBeenSet = true; m_orAllFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>Performs a logical <code>NOT</code> operation on all supplied filters.</p>
     */
    AWS_KENDRA_API const AttributeFilter& GetNotFilter() const;

    /**
     * <p>Performs a logical <code>NOT</code> operation on all supplied filters.</p>
     */
    AWS_KENDRA_API bool NotFilterHasBeenSet() const;

    /**
     * <p>Performs a logical <code>NOT</code> operation on all supplied filters.</p>
     */
    AWS_KENDRA_API void SetNotFilter(const AttributeFilter& value);

    /**
     * <p>Performs a logical <code>NOT</code> operation on all supplied filters.</p>
     */
    AWS_KENDRA_API void SetNotFilter(AttributeFilter&& value);

    /**
     * <p>Performs a logical <code>NOT</code> operation on all supplied filters.</p>
     */
    AWS_KENDRA_API AttributeFilter& WithNotFilter(const AttributeFilter& value);

    /**
     * <p>Performs a logical <code>NOT</code> operation on all supplied filters.</p>
     */
    AWS_KENDRA_API AttributeFilter& WithNotFilter(AttributeFilter&& value);


    /**
     * <p>Performs an equals operation on two document attributes or metadata
     * fields.</p>
     */
    inline const DocumentAttribute& GetEqualsTo() const{ return m_equalsTo; }

    /**
     * <p>Performs an equals operation on two document attributes or metadata
     * fields.</p>
     */
    inline bool EqualsToHasBeenSet() const { return m_equalsToHasBeenSet; }

    /**
     * <p>Performs an equals operation on two document attributes or metadata
     * fields.</p>
     */
    inline void SetEqualsTo(const DocumentAttribute& value) { m_equalsToHasBeenSet = true; m_equalsTo = value; }

    /**
     * <p>Performs an equals operation on two document attributes or metadata
     * fields.</p>
     */
    inline void SetEqualsTo(DocumentAttribute&& value) { m_equalsToHasBeenSet = true; m_equalsTo = std::move(value); }

    /**
     * <p>Performs an equals operation on two document attributes or metadata
     * fields.</p>
     */
    inline AttributeFilter& WithEqualsTo(const DocumentAttribute& value) { SetEqualsTo(value); return *this;}

    /**
     * <p>Performs an equals operation on two document attributes or metadata
     * fields.</p>
     */
    inline AttributeFilter& WithEqualsTo(DocumentAttribute&& value) { SetEqualsTo(std::move(value)); return *this;}


    /**
     * <p>Returns true when a document contains all of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline const DocumentAttribute& GetContainsAll() const{ return m_containsAll; }

    /**
     * <p>Returns true when a document contains all of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline bool ContainsAllHasBeenSet() const { return m_containsAllHasBeenSet; }

    /**
     * <p>Returns true when a document contains all of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline void SetContainsAll(const DocumentAttribute& value) { m_containsAllHasBeenSet = true; m_containsAll = value; }

    /**
     * <p>Returns true when a document contains all of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline void SetContainsAll(DocumentAttribute&& value) { m_containsAllHasBeenSet = true; m_containsAll = std::move(value); }

    /**
     * <p>Returns true when a document contains all of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline AttributeFilter& WithContainsAll(const DocumentAttribute& value) { SetContainsAll(value); return *this;}

    /**
     * <p>Returns true when a document contains all of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline AttributeFilter& WithContainsAll(DocumentAttribute&& value) { SetContainsAll(std::move(value)); return *this;}


    /**
     * <p>Returns true when a document contains any of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline const DocumentAttribute& GetContainsAny() const{ return m_containsAny; }

    /**
     * <p>Returns true when a document contains any of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline bool ContainsAnyHasBeenSet() const { return m_containsAnyHasBeenSet; }

    /**
     * <p>Returns true when a document contains any of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline void SetContainsAny(const DocumentAttribute& value) { m_containsAnyHasBeenSet = true; m_containsAny = value; }

    /**
     * <p>Returns true when a document contains any of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline void SetContainsAny(DocumentAttribute&& value) { m_containsAnyHasBeenSet = true; m_containsAny = std::move(value); }

    /**
     * <p>Returns true when a document contains any of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline AttributeFilter& WithContainsAny(const DocumentAttribute& value) { SetContainsAny(value); return *this;}

    /**
     * <p>Returns true when a document contains any of the specified document
     * attributes or metadata fields. This filter is only applicable to
     * <code>StringListValue</code> metadata.</p>
     */
    inline AttributeFilter& WithContainsAny(DocumentAttribute&& value) { SetContainsAny(std::move(value)); return *this;}


    /**
     * <p>Performs a greater than operation on two document attributes or metadata
     * fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline const DocumentAttribute& GetGreaterThan() const{ return m_greaterThan; }

    /**
     * <p>Performs a greater than operation on two document attributes or metadata
     * fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }

    /**
     * <p>Performs a greater than operation on two document attributes or metadata
     * fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline void SetGreaterThan(const DocumentAttribute& value) { m_greaterThanHasBeenSet = true; m_greaterThan = value; }

    /**
     * <p>Performs a greater than operation on two document attributes or metadata
     * fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline void SetGreaterThan(DocumentAttribute&& value) { m_greaterThanHasBeenSet = true; m_greaterThan = std::move(value); }

    /**
     * <p>Performs a greater than operation on two document attributes or metadata
     * fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline AttributeFilter& WithGreaterThan(const DocumentAttribute& value) { SetGreaterThan(value); return *this;}

    /**
     * <p>Performs a greater than operation on two document attributes or metadata
     * fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline AttributeFilter& WithGreaterThan(DocumentAttribute&& value) { SetGreaterThan(std::move(value)); return *this;}


    /**
     * <p>Performs a greater or equals than operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline const DocumentAttribute& GetGreaterThanOrEquals() const{ return m_greaterThanOrEquals; }

    /**
     * <p>Performs a greater or equals than operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline bool GreaterThanOrEqualsHasBeenSet() const { return m_greaterThanOrEqualsHasBeenSet; }

    /**
     * <p>Performs a greater or equals than operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline void SetGreaterThanOrEquals(const DocumentAttribute& value) { m_greaterThanOrEqualsHasBeenSet = true; m_greaterThanOrEquals = value; }

    /**
     * <p>Performs a greater or equals than operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline void SetGreaterThanOrEquals(DocumentAttribute&& value) { m_greaterThanOrEqualsHasBeenSet = true; m_greaterThanOrEquals = std::move(value); }

    /**
     * <p>Performs a greater or equals than operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline AttributeFilter& WithGreaterThanOrEquals(const DocumentAttribute& value) { SetGreaterThanOrEquals(value); return *this;}

    /**
     * <p>Performs a greater or equals than operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline AttributeFilter& WithGreaterThanOrEquals(DocumentAttribute&& value) { SetGreaterThanOrEquals(std::move(value)); return *this;}


    /**
     * <p>Performs a less than operation on two document attributes or metadata fields.
     * Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline const DocumentAttribute& GetLessThan() const{ return m_lessThan; }

    /**
     * <p>Performs a less than operation on two document attributes or metadata fields.
     * Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }

    /**
     * <p>Performs a less than operation on two document attributes or metadata fields.
     * Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline void SetLessThan(const DocumentAttribute& value) { m_lessThanHasBeenSet = true; m_lessThan = value; }

    /**
     * <p>Performs a less than operation on two document attributes or metadata fields.
     * Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline void SetLessThan(DocumentAttribute&& value) { m_lessThanHasBeenSet = true; m_lessThan = std::move(value); }

    /**
     * <p>Performs a less than operation on two document attributes or metadata fields.
     * Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline AttributeFilter& WithLessThan(const DocumentAttribute& value) { SetLessThan(value); return *this;}

    /**
     * <p>Performs a less than operation on two document attributes or metadata fields.
     * Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline AttributeFilter& WithLessThan(DocumentAttribute&& value) { SetLessThan(std::move(value)); return *this;}


    /**
     * <p>Performs a less than or equals operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline const DocumentAttribute& GetLessThanOrEquals() const{ return m_lessThanOrEquals; }

    /**
     * <p>Performs a less than or equals operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline bool LessThanOrEqualsHasBeenSet() const { return m_lessThanOrEqualsHasBeenSet; }

    /**
     * <p>Performs a less than or equals operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline void SetLessThanOrEquals(const DocumentAttribute& value) { m_lessThanOrEqualsHasBeenSet = true; m_lessThanOrEquals = value; }

    /**
     * <p>Performs a less than or equals operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline void SetLessThanOrEquals(DocumentAttribute&& value) { m_lessThanOrEqualsHasBeenSet = true; m_lessThanOrEquals = std::move(value); }

    /**
     * <p>Performs a less than or equals operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline AttributeFilter& WithLessThanOrEquals(const DocumentAttribute& value) { SetLessThanOrEquals(value); return *this;}

    /**
     * <p>Performs a less than or equals operation on two document attributes or
     * metadata fields. Use with a document attribute of type <code>Date</code> or
     * <code>Long</code>.</p>
     */
    inline AttributeFilter& WithLessThanOrEquals(DocumentAttribute&& value) { SetLessThanOrEquals(std::move(value)); return *this;}

  private:

    Aws::Vector<AttributeFilter> m_andAllFilters;
    bool m_andAllFiltersHasBeenSet = false;

    Aws::Vector<AttributeFilter> m_orAllFilters;
    bool m_orAllFiltersHasBeenSet = false;

    std::shared_ptr<AttributeFilter> m_notFilter;
    bool m_notFilterHasBeenSet = false;

    DocumentAttribute m_equalsTo;
    bool m_equalsToHasBeenSet = false;

    DocumentAttribute m_containsAll;
    bool m_containsAllHasBeenSet = false;

    DocumentAttribute m_containsAny;
    bool m_containsAnyHasBeenSet = false;

    DocumentAttribute m_greaterThan;
    bool m_greaterThanHasBeenSet = false;

    DocumentAttribute m_greaterThanOrEquals;
    bool m_greaterThanOrEqualsHasBeenSet = false;

    DocumentAttribute m_lessThan;
    bool m_lessThanHasBeenSet = false;

    DocumentAttribute m_lessThanOrEquals;
    bool m_lessThanOrEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
