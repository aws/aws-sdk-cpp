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
    AWS_KENDRA_API FeaturedDocumentWithMetadata();
    AWS_KENDRA_API FeaturedDocumentWithMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FeaturedDocumentWithMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the featured document with its metadata. You can use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Query.html">Query</a> API
     * to search for specific documents with their document IDs included in the result
     * items, or you can use the console.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the featured document with its metadata. You can use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Query.html">Query</a> API
     * to search for specific documents with their document IDs included in the result
     * items, or you can use the console.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the featured document with its metadata. You can use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Query.html">Query</a> API
     * to search for specific documents with their document IDs included in the result
     * items, or you can use the console.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the featured document with its metadata. You can use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Query.html">Query</a> API
     * to search for specific documents with their document IDs included in the result
     * items, or you can use the console.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the featured document with its metadata. You can use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Query.html">Query</a> API
     * to search for specific documents with their document IDs included in the result
     * items, or you can use the console.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the featured document with its metadata. You can use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Query.html">Query</a> API
     * to search for specific documents with their document IDs included in the result
     * items, or you can use the console.</p>
     */
    inline FeaturedDocumentWithMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the featured document with its metadata. You can use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Query.html">Query</a> API
     * to search for specific documents with their document IDs included in the result
     * items, or you can use the console.</p>
     */
    inline FeaturedDocumentWithMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the featured document with its metadata. You can use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Query.html">Query</a> API
     * to search for specific documents with their document IDs included in the result
     * items, or you can use the console.</p>
     */
    inline FeaturedDocumentWithMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The main title of the featured document.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The main title of the featured document.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The main title of the featured document.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The main title of the featured document.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The main title of the featured document.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The main title of the featured document.</p>
     */
    inline FeaturedDocumentWithMetadata& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The main title of the featured document.</p>
     */
    inline FeaturedDocumentWithMetadata& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The main title of the featured document.</p>
     */
    inline FeaturedDocumentWithMetadata& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline const Aws::String& GetURI() const{ return m_uRI; }

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline void SetURI(const Aws::String& value) { m_uRIHasBeenSet = true; m_uRI = value; }

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline void SetURI(Aws::String&& value) { m_uRIHasBeenSet = true; m_uRI = std::move(value); }

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline void SetURI(const char* value) { m_uRIHasBeenSet = true; m_uRI.assign(value); }

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline FeaturedDocumentWithMetadata& WithURI(const Aws::String& value) { SetURI(value); return *this;}

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline FeaturedDocumentWithMetadata& WithURI(Aws::String&& value) { SetURI(std::move(value)); return *this;}

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline FeaturedDocumentWithMetadata& WithURI(const char* value) { SetURI(value); return *this;}

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
