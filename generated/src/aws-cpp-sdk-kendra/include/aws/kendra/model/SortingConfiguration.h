﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/SortOrder.h>
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
   * <p>Specifies the document attribute to use to sort the response to a Amazon
   * Kendra query. You can specify a single attribute for sorting. The attribute must
   * have the <code>Sortable</code> flag set to <code>true</code>, otherwise Amazon
   * Kendra returns an exception.</p> <p>You can sort attributes of the following
   * types.</p> <ul> <li> <p>Date value</p> </li> <li> <p>Long value</p> </li> <li>
   * <p>String value</p> </li> </ul> <p>You can't sort attributes of the following
   * type.</p> <ul> <li> <p>String list value</p> </li> </ul><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SortingConfiguration">AWS
   * API Reference</a></p>
   */
  class SortingConfiguration
  {
  public:
    AWS_KENDRA_API SortingConfiguration() = default;
    AWS_KENDRA_API SortingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SortingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the document attribute used to sort the response. You can use any
     * field that has the <code>Sortable</code> flag set to true.</p> <p>You can also
     * sort by any of the following built-in attributes:</p> <ul> <li> <p>_category</p>
     * </li> <li> <p>_created_at</p> </li> <li> <p>_last_updated_at</p> </li> <li>
     * <p>_version</p> </li> <li> <p>_view_count</p> </li> </ul>
     */
    inline const Aws::String& GetDocumentAttributeKey() const { return m_documentAttributeKey; }
    inline bool DocumentAttributeKeyHasBeenSet() const { return m_documentAttributeKeyHasBeenSet; }
    template<typename DocumentAttributeKeyT = Aws::String>
    void SetDocumentAttributeKey(DocumentAttributeKeyT&& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = std::forward<DocumentAttributeKeyT>(value); }
    template<typename DocumentAttributeKeyT = Aws::String>
    SortingConfiguration& WithDocumentAttributeKey(DocumentAttributeKeyT&& value) { SetDocumentAttributeKey(std::forward<DocumentAttributeKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order that the results should be returned in. In case of ties, the
     * relevance assigned to the result by Amazon Kendra is used as the
     * tie-breaker.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline SortingConfiguration& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_documentAttributeKey;
    bool m_documentAttributeKeyHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
