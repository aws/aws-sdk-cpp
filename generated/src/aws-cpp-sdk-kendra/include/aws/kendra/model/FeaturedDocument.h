/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>A featured document. This document is displayed at the top of the search
   * results page, placed above all other results for certain queries. If there's an
   * exact match of a query, then the document is featured in the search
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FeaturedDocument">AWS
   * API Reference</a></p>
   */
  class FeaturedDocument
  {
  public:
    AWS_KENDRA_API FeaturedDocument() = default;
    AWS_KENDRA_API FeaturedDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FeaturedDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the document to feature in the search results. You can use
     * the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Query.html">Query</a> API
     * to search for specific documents with their document IDs included in the result
     * items, or you can use the console.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FeaturedDocument& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
