/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/ExtractedCharactersListItem.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Information about the document, discovered during text
   * extraction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentMetadata">AWS
   * API Reference</a></p>
   */
  class DocumentMetadata
  {
  public:
    AWS_COMPREHEND_API DocumentMetadata();
    AWS_COMPREHEND_API DocumentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of pages in the document.</p>
     */
    inline int GetPages() const{ return m_pages; }

    /**
     * <p>Number of pages in the document.</p>
     */
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }

    /**
     * <p>Number of pages in the document.</p>
     */
    inline void SetPages(int value) { m_pagesHasBeenSet = true; m_pages = value; }

    /**
     * <p>Number of pages in the document.</p>
     */
    inline DocumentMetadata& WithPages(int value) { SetPages(value); return *this;}


    /**
     * <p>List of pages in the document, with the number of characters extracted from
     * each page.</p>
     */
    inline const Aws::Vector<ExtractedCharactersListItem>& GetExtractedCharacters() const{ return m_extractedCharacters; }

    /**
     * <p>List of pages in the document, with the number of characters extracted from
     * each page.</p>
     */
    inline bool ExtractedCharactersHasBeenSet() const { return m_extractedCharactersHasBeenSet; }

    /**
     * <p>List of pages in the document, with the number of characters extracted from
     * each page.</p>
     */
    inline void SetExtractedCharacters(const Aws::Vector<ExtractedCharactersListItem>& value) { m_extractedCharactersHasBeenSet = true; m_extractedCharacters = value; }

    /**
     * <p>List of pages in the document, with the number of characters extracted from
     * each page.</p>
     */
    inline void SetExtractedCharacters(Aws::Vector<ExtractedCharactersListItem>&& value) { m_extractedCharactersHasBeenSet = true; m_extractedCharacters = std::move(value); }

    /**
     * <p>List of pages in the document, with the number of characters extracted from
     * each page.</p>
     */
    inline DocumentMetadata& WithExtractedCharacters(const Aws::Vector<ExtractedCharactersListItem>& value) { SetExtractedCharacters(value); return *this;}

    /**
     * <p>List of pages in the document, with the number of characters extracted from
     * each page.</p>
     */
    inline DocumentMetadata& WithExtractedCharacters(Aws::Vector<ExtractedCharactersListItem>&& value) { SetExtractedCharacters(std::move(value)); return *this;}

    /**
     * <p>List of pages in the document, with the number of characters extracted from
     * each page.</p>
     */
    inline DocumentMetadata& AddExtractedCharacters(const ExtractedCharactersListItem& value) { m_extractedCharactersHasBeenSet = true; m_extractedCharacters.push_back(value); return *this; }

    /**
     * <p>List of pages in the document, with the number of characters extracted from
     * each page.</p>
     */
    inline DocumentMetadata& AddExtractedCharacters(ExtractedCharactersListItem&& value) { m_extractedCharactersHasBeenSet = true; m_extractedCharacters.push_back(std::move(value)); return *this; }

  private:

    int m_pages;
    bool m_pagesHasBeenSet = false;

    Aws::Vector<ExtractedCharactersListItem> m_extractedCharacters;
    bool m_extractedCharactersHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
