/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Sort.h>
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
   * <p>Specifies a field to sort by and a sort order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SortCriterion">AWS
   * API Reference</a></p>
   */
  class SortCriterion
  {
  public:
    AWS_GLUE_API SortCriterion();
    AWS_GLUE_API SortCriterion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SortCriterion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field on which to sort.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }
    inline SortCriterion& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}
    inline SortCriterion& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}
    inline SortCriterion& WithFieldName(const char* value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ascending or descending sort.</p>
     */
    inline const Sort& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const Sort& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(Sort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline SortCriterion& WithSort(const Sort& value) { SetSort(value); return *this;}
    inline SortCriterion& WithSort(Sort&& value) { SetSort(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Sort m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
