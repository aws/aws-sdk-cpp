/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DocumentAttributeValueCountPair.h>
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
   * <p>The facet values for the documents in the response.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FacetResult">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API FacetResult
  {
  public:
    FacetResult();
    FacetResult(Aws::Utils::Json::JsonView jsonValue);
    FacetResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_documentAttributeKeyHasBeenSet;

    Aws::Vector<DocumentAttributeValueCountPair> m_documentAttributeValueCountPairs;
    bool m_documentAttributeValueCountPairsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
