/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/FieldName.h>
#include <aws/glue/model/FilterOperator.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A list of fields, comparators and value that you can use to filter the
   * crawler runs for a specified crawler.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CrawlsFilter">AWS
   * API Reference</a></p>
   */
  class CrawlsFilter
  {
  public:
    AWS_GLUE_API CrawlsFilter() = default;
    AWS_GLUE_API CrawlsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CrawlsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A key used to filter the crawler runs for a specified crawler. Valid values
     * for each of the field names are:</p> <ul> <li> <p> <code>CRAWL_ID</code>: A
     * string representing the UUID identifier for a crawl.</p> </li> <li> <p>
     * <code>STATE</code>: A string representing the state of the crawl.</p> </li> <li>
     * <p> <code>START_TIME</code> and <code>END_TIME</code>: The epoch timestamp in
     * milliseconds.</p> </li> <li> <p> <code>DPU_HOUR</code>: The number of data
     * processing unit (DPU) hours used for the crawl.</p> </li> </ul>
     */
    inline FieldName GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(FieldName value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline CrawlsFilter& WithFieldName(FieldName value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A defined comparator that operates on the value. The available operators
     * are:</p> <ul> <li> <p> <code>GT</code>: Greater than.</p> </li> <li> <p>
     * <code>GE</code>: Greater than or equal to.</p> </li> <li> <p> <code>LT</code>:
     * Less than.</p> </li> <li> <p> <code>LE</code>: Less than or equal to.</p> </li>
     * <li> <p> <code>EQ</code>: Equal to.</p> </li> <li> <p> <code>NE</code>: Not
     * equal to.</p> </li> </ul>
     */
    inline FilterOperator GetFilterOperator() const { return m_filterOperator; }
    inline bool FilterOperatorHasBeenSet() const { return m_filterOperatorHasBeenSet; }
    inline void SetFilterOperator(FilterOperator value) { m_filterOperatorHasBeenSet = true; m_filterOperator = value; }
    inline CrawlsFilter& WithFilterOperator(FilterOperator value) { SetFilterOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value provided for comparison on the crawl field. </p>
     */
    inline const Aws::String& GetFieldValue() const { return m_fieldValue; }
    inline bool FieldValueHasBeenSet() const { return m_fieldValueHasBeenSet; }
    template<typename FieldValueT = Aws::String>
    void SetFieldValue(FieldValueT&& value) { m_fieldValueHasBeenSet = true; m_fieldValue = std::forward<FieldValueT>(value); }
    template<typename FieldValueT = Aws::String>
    CrawlsFilter& WithFieldValue(FieldValueT&& value) { SetFieldValue(std::forward<FieldValueT>(value)); return *this;}
    ///@}
  private:

    FieldName m_fieldName{FieldName::NOT_SET};
    bool m_fieldNameHasBeenSet = false;

    FilterOperator m_filterOperator{FilterOperator::NOT_SET};
    bool m_filterOperatorHasBeenSet = false;

    Aws::String m_fieldValue;
    bool m_fieldValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
