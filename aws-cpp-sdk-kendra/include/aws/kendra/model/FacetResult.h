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
    AWS_KENDRA_API FacetResult();
    AWS_KENDRA_API FacetResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FacetResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for the facet values. This is the same as the
     * <code>DocumentAttributeKey</code> provided in the query.</p>
     */
    inline const Aws::String& GetDocumentAttributeKey() const{ return m_documentAttributeKey; }

    /**
     * <p>The key for the facet values. This is the same as the
     * <code>DocumentAttributeKey</code> provided in the query.</p>
     */
    inline bool DocumentAttributeKeyHasBeenSet() const { return m_documentAttributeKeyHasBeenSet; }

    /**
     * <p>The key for the facet values. This is the same as the
     * <code>DocumentAttributeKey</code> provided in the query.</p>
     */
    inline void SetDocumentAttributeKey(const Aws::String& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = value; }

    /**
     * <p>The key for the facet values. This is the same as the
     * <code>DocumentAttributeKey</code> provided in the query.</p>
     */
    inline void SetDocumentAttributeKey(Aws::String&& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = std::move(value); }

    /**
     * <p>The key for the facet values. This is the same as the
     * <code>DocumentAttributeKey</code> provided in the query.</p>
     */
    inline void SetDocumentAttributeKey(const char* value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey.assign(value); }

    /**
     * <p>The key for the facet values. This is the same as the
     * <code>DocumentAttributeKey</code> provided in the query.</p>
     */
    inline FacetResult& WithDocumentAttributeKey(const Aws::String& value) { SetDocumentAttributeKey(value); return *this;}

    /**
     * <p>The key for the facet values. This is the same as the
     * <code>DocumentAttributeKey</code> provided in the query.</p>
     */
    inline FacetResult& WithDocumentAttributeKey(Aws::String&& value) { SetDocumentAttributeKey(std::move(value)); return *this;}

    /**
     * <p>The key for the facet values. This is the same as the
     * <code>DocumentAttributeKey</code> provided in the query.</p>
     */
    inline FacetResult& WithDocumentAttributeKey(const char* value) { SetDocumentAttributeKey(value); return *this;}


    /**
     * <p>The data type of the facet value. This is the same as the type defined for
     * the index field when it was created.</p>
     */
    inline const DocumentAttributeValueType& GetDocumentAttributeValueType() const{ return m_documentAttributeValueType; }

    /**
     * <p>The data type of the facet value. This is the same as the type defined for
     * the index field when it was created.</p>
     */
    inline bool DocumentAttributeValueTypeHasBeenSet() const { return m_documentAttributeValueTypeHasBeenSet; }

    /**
     * <p>The data type of the facet value. This is the same as the type defined for
     * the index field when it was created.</p>
     */
    inline void SetDocumentAttributeValueType(const DocumentAttributeValueType& value) { m_documentAttributeValueTypeHasBeenSet = true; m_documentAttributeValueType = value; }

    /**
     * <p>The data type of the facet value. This is the same as the type defined for
     * the index field when it was created.</p>
     */
    inline void SetDocumentAttributeValueType(DocumentAttributeValueType&& value) { m_documentAttributeValueTypeHasBeenSet = true; m_documentAttributeValueType = std::move(value); }

    /**
     * <p>The data type of the facet value. This is the same as the type defined for
     * the index field when it was created.</p>
     */
    inline FacetResult& WithDocumentAttributeValueType(const DocumentAttributeValueType& value) { SetDocumentAttributeValueType(value); return *this;}

    /**
     * <p>The data type of the facet value. This is the same as the type defined for
     * the index field when it was created.</p>
     */
    inline FacetResult& WithDocumentAttributeValueType(DocumentAttributeValueType&& value) { SetDocumentAttributeValueType(std::move(value)); return *this;}


    /**
     * <p>An array of key/value pairs, where the key is the value of the attribute and
     * the count is the number of documents that share the key value.</p>
     */
    inline const Aws::Vector<DocumentAttributeValueCountPair>& GetDocumentAttributeValueCountPairs() const{ return m_documentAttributeValueCountPairs; }

    /**
     * <p>An array of key/value pairs, where the key is the value of the attribute and
     * the count is the number of documents that share the key value.</p>
     */
    inline bool DocumentAttributeValueCountPairsHasBeenSet() const { return m_documentAttributeValueCountPairsHasBeenSet; }

    /**
     * <p>An array of key/value pairs, where the key is the value of the attribute and
     * the count is the number of documents that share the key value.</p>
     */
    inline void SetDocumentAttributeValueCountPairs(const Aws::Vector<DocumentAttributeValueCountPair>& value) { m_documentAttributeValueCountPairsHasBeenSet = true; m_documentAttributeValueCountPairs = value; }

    /**
     * <p>An array of key/value pairs, where the key is the value of the attribute and
     * the count is the number of documents that share the key value.</p>
     */
    inline void SetDocumentAttributeValueCountPairs(Aws::Vector<DocumentAttributeValueCountPair>&& value) { m_documentAttributeValueCountPairsHasBeenSet = true; m_documentAttributeValueCountPairs = std::move(value); }

    /**
     * <p>An array of key/value pairs, where the key is the value of the attribute and
     * the count is the number of documents that share the key value.</p>
     */
    inline FacetResult& WithDocumentAttributeValueCountPairs(const Aws::Vector<DocumentAttributeValueCountPair>& value) { SetDocumentAttributeValueCountPairs(value); return *this;}

    /**
     * <p>An array of key/value pairs, where the key is the value of the attribute and
     * the count is the number of documents that share the key value.</p>
     */
    inline FacetResult& WithDocumentAttributeValueCountPairs(Aws::Vector<DocumentAttributeValueCountPair>&& value) { SetDocumentAttributeValueCountPairs(std::move(value)); return *this;}

    /**
     * <p>An array of key/value pairs, where the key is the value of the attribute and
     * the count is the number of documents that share the key value.</p>
     */
    inline FacetResult& AddDocumentAttributeValueCountPairs(const DocumentAttributeValueCountPair& value) { m_documentAttributeValueCountPairsHasBeenSet = true; m_documentAttributeValueCountPairs.push_back(value); return *this; }

    /**
     * <p>An array of key/value pairs, where the key is the value of the attribute and
     * the count is the number of documents that share the key value.</p>
     */
    inline FacetResult& AddDocumentAttributeValueCountPairs(DocumentAttributeValueCountPair&& value) { m_documentAttributeValueCountPairsHasBeenSet = true; m_documentAttributeValueCountPairs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_documentAttributeKey;
    bool m_documentAttributeKeyHasBeenSet = false;

    DocumentAttributeValueType m_documentAttributeValueType;
    bool m_documentAttributeValueTypeHasBeenSet = false;

    Aws::Vector<DocumentAttributeValueCountPair> m_documentAttributeValueCountPairs;
    bool m_documentAttributeValueCountPairsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
