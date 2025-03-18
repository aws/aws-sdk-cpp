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
    AWS_COMPREHEND_API DocumentMetadata() = default;
    AWS_COMPREHEND_API DocumentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Number of pages in the document.</p>
     */
    inline int GetPages() const { return m_pages; }
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }
    inline void SetPages(int value) { m_pagesHasBeenSet = true; m_pages = value; }
    inline DocumentMetadata& WithPages(int value) { SetPages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of pages in the document, with the number of characters extracted from
     * each page.</p>
     */
    inline const Aws::Vector<ExtractedCharactersListItem>& GetExtractedCharacters() const { return m_extractedCharacters; }
    inline bool ExtractedCharactersHasBeenSet() const { return m_extractedCharactersHasBeenSet; }
    template<typename ExtractedCharactersT = Aws::Vector<ExtractedCharactersListItem>>
    void SetExtractedCharacters(ExtractedCharactersT&& value) { m_extractedCharactersHasBeenSet = true; m_extractedCharacters = std::forward<ExtractedCharactersT>(value); }
    template<typename ExtractedCharactersT = Aws::Vector<ExtractedCharactersListItem>>
    DocumentMetadata& WithExtractedCharacters(ExtractedCharactersT&& value) { SetExtractedCharacters(std::forward<ExtractedCharactersT>(value)); return *this;}
    template<typename ExtractedCharactersT = ExtractedCharactersListItem>
    DocumentMetadata& AddExtractedCharacters(ExtractedCharactersT&& value) { m_extractedCharactersHasBeenSet = true; m_extractedCharacters.emplace_back(std::forward<ExtractedCharactersT>(value)); return *this; }
    ///@}
  private:

    int m_pages{0};
    bool m_pagesHasBeenSet = false;

    Aws::Vector<ExtractedCharactersListItem> m_extractedCharacters;
    bool m_extractedCharactersHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
