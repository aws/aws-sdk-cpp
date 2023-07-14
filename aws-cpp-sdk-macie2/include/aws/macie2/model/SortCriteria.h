﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/OrderBy.h>
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
   * <p>Specifies criteria for sorting the results of a request for
   * findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SortCriteria">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API SortCriteria
  {
  public:
    SortCriteria();
    SortCriteria(Aws::Utils::Json::JsonView jsonValue);
    SortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the property to sort the results by. This value can be the name
     * of any property that Amazon Macie defines for a finding.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the property to sort the results by. This value can be the name
     * of any property that Amazon Macie defines for a finding.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the property to sort the results by. This value can be the name
     * of any property that Amazon Macie defines for a finding.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the property to sort the results by. This value can be the name
     * of any property that Amazon Macie defines for a finding.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the property to sort the results by. This value can be the name
     * of any property that Amazon Macie defines for a finding.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the property to sort the results by. This value can be the name
     * of any property that Amazon Macie defines for a finding.</p>
     */
    inline SortCriteria& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the property to sort the results by. This value can be the name
     * of any property that Amazon Macie defines for a finding.</p>
     */
    inline SortCriteria& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the property to sort the results by. This value can be the name
     * of any property that Amazon Macie defines for a finding.</p>
     */
    inline SortCriteria& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline SortCriteria& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}

    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline SortCriteria& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
