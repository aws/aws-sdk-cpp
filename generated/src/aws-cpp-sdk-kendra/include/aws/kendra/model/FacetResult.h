/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DocumentAttributeValueType.h>
#include <aws/kendra/model/DocumentAttributeValueCountPair.h>
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
namespace kendra
{
namespace Model
{
  class DocumentAttributeValueCountPair;

  /**
   * <p>The facet values for the documents in the response.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FacetResult">AWS
   * API Reference</a></p>
   */
  class FacetResult
  {
  public:
    AWS_KENDRA_API FacetResult() = default;
    AWS_KENDRA_API FacetResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FacetResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key for the facet values. This is the same as the
     * <code>DocumentAttributeKey</code> provided in the query.</p>
     */
    inline const Aws::String& GetDocumentAttributeKey() const { return m_documentAttributeKey; }
    inline bool DocumentAttributeKeyHasBeenSet() const { return m_documentAttributeKeyHasBeenSet; }
    template<typename DocumentAttributeKeyT = Aws::String>
    void SetDocumentAttributeKey(DocumentAttributeKeyT&& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = std::forward<DocumentAttributeKeyT>(value); }
    template<typename DocumentAttributeKeyT = Aws::String>
    FacetResult& WithDocumentAttributeKey(DocumentAttributeKeyT&& value) { SetDocumentAttributeKey(std::forward<DocumentAttributeKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the facet value. This is the same as the type defined for
     * the index field when it was created.</p>
     */
    inline DocumentAttributeValueType GetDocumentAttributeValueType() const { return m_documentAttributeValueType; }
    inline bool DocumentAttributeValueTypeHasBeenSet() const { return m_documentAttributeValueTypeHasBeenSet; }
    inline void SetDocumentAttributeValueType(DocumentAttributeValueType value) { m_documentAttributeValueTypeHasBeenSet = true; m_documentAttributeValueType = value; }
    inline FacetResult& WithDocumentAttributeValueType(DocumentAttributeValueType value) { SetDocumentAttributeValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key/value pairs, where the key is the value of the attribute and
     * the count is the number of documents that share the key value.</p>
     */
    inline const Aws::Vector<DocumentAttributeValueCountPair>& GetDocumentAttributeValueCountPairs() const { return m_documentAttributeValueCountPairs; }
    inline bool DocumentAttributeValueCountPairsHasBeenSet() const { return m_documentAttributeValueCountPairsHasBeenSet; }
    template<typename DocumentAttributeValueCountPairsT = Aws::Vector<DocumentAttributeValueCountPair>>
    void SetDocumentAttributeValueCountPairs(DocumentAttributeValueCountPairsT&& value) { m_documentAttributeValueCountPairsHasBeenSet = true; m_documentAttributeValueCountPairs = std::forward<DocumentAttributeValueCountPairsT>(value); }
    template<typename DocumentAttributeValueCountPairsT = Aws::Vector<DocumentAttributeValueCountPair>>
    FacetResult& WithDocumentAttributeValueCountPairs(DocumentAttributeValueCountPairsT&& value) { SetDocumentAttributeValueCountPairs(std::forward<DocumentAttributeValueCountPairsT>(value)); return *this;}
    template<typename DocumentAttributeValueCountPairsT = DocumentAttributeValueCountPair>
    FacetResult& AddDocumentAttributeValueCountPairs(DocumentAttributeValueCountPairsT&& value) { m_documentAttributeValueCountPairsHasBeenSet = true; m_documentAttributeValueCountPairs.emplace_back(std::forward<DocumentAttributeValueCountPairsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_documentAttributeKey;
    bool m_documentAttributeKeyHasBeenSet = false;

    DocumentAttributeValueType m_documentAttributeValueType{DocumentAttributeValueType::NOT_SET};
    bool m_documentAttributeValueTypeHasBeenSet = false;

    Aws::Vector<DocumentAttributeValueCountPair> m_documentAttributeValueCountPairs;
    bool m_documentAttributeValueCountPairsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
