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
   * <p>A featured document with its metadata information. This document is displayed
   * at the top of the search results page, placed above all other results for
   * certain queries. If there's an exact match of a query, then the document is
   * featured in the search results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FeaturedDocumentWithMetadata">AWS
   * API Reference</a></p>
   */
  class FeaturedDocumentWithMetadata
  {
  public:
    AWS_KENDRA_API FeaturedDocumentWithMetadata() = default;
    AWS_KENDRA_API FeaturedDocumentWithMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FeaturedDocumentWithMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the featured document with its metadata. You can use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Query.html">Query</a> API
     * to search for specific documents with their document IDs included in the result
     * items, or you can use the console.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FeaturedDocumentWithMetadata& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The main title of the featured document.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    FeaturedDocumentWithMetadata& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline const Aws::String& GetURI() const { return m_uRI; }
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }
    template<typename URIT = Aws::String>
    void SetURI(URIT&& value) { m_uRIHasBeenSet = true; m_uRI = std::forward<URIT>(value); }
    template<typename URIT = Aws::String>
    FeaturedDocumentWithMetadata& WithURI(URIT&& value) { SetURI(std::forward<URIT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_uRI;
    bool m_uRIHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
