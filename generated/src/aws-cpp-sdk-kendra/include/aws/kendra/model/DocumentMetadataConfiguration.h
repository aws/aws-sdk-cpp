/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DocumentAttributeValueType.h>
#include <aws/kendra/model/Relevance.h>
#include <aws/kendra/model/Search.h>
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
   * <p>Specifies the properties, such as relevance tuning and searchability, of an
   * index field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentMetadataConfiguration">AWS
   * API Reference</a></p>
   */
  class DocumentMetadataConfiguration
  {
  public:
    AWS_KENDRA_API DocumentMetadataConfiguration();
    AWS_KENDRA_API DocumentMetadataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentMetadataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the index field.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the index field.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the index field.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the index field.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the index field.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the index field.</p>
     */
    inline DocumentMetadataConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the index field.</p>
     */
    inline DocumentMetadataConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the index field.</p>
     */
    inline DocumentMetadataConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type of the index field. </p>
     */
    inline const DocumentAttributeValueType& GetType() const{ return m_type; }

    /**
     * <p>The data type of the index field. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The data type of the index field. </p>
     */
    inline void SetType(const DocumentAttributeValueType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data type of the index field. </p>
     */
    inline void SetType(DocumentAttributeValueType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data type of the index field. </p>
     */
    inline DocumentMetadataConfiguration& WithType(const DocumentAttributeValueType& value) { SetType(value); return *this;}

    /**
     * <p>The data type of the index field. </p>
     */
    inline DocumentMetadataConfiguration& WithType(DocumentAttributeValueType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Provides tuning parameters to determine how the field affects the search
     * results.</p>
     */
    inline const Relevance& GetRelevance() const{ return m_relevance; }

    /**
     * <p>Provides tuning parameters to determine how the field affects the search
     * results.</p>
     */
    inline bool RelevanceHasBeenSet() const { return m_relevanceHasBeenSet; }

    /**
     * <p>Provides tuning parameters to determine how the field affects the search
     * results.</p>
     */
    inline void SetRelevance(const Relevance& value) { m_relevanceHasBeenSet = true; m_relevance = value; }

    /**
     * <p>Provides tuning parameters to determine how the field affects the search
     * results.</p>
     */
    inline void SetRelevance(Relevance&& value) { m_relevanceHasBeenSet = true; m_relevance = std::move(value); }

    /**
     * <p>Provides tuning parameters to determine how the field affects the search
     * results.</p>
     */
    inline DocumentMetadataConfiguration& WithRelevance(const Relevance& value) { SetRelevance(value); return *this;}

    /**
     * <p>Provides tuning parameters to determine how the field affects the search
     * results.</p>
     */
    inline DocumentMetadataConfiguration& WithRelevance(Relevance&& value) { SetRelevance(std::move(value)); return *this;}


    /**
     * <p>Provides information about how the field is used during a search.</p>
     */
    inline const Search& GetSearch() const{ return m_search; }

    /**
     * <p>Provides information about how the field is used during a search.</p>
     */
    inline bool SearchHasBeenSet() const { return m_searchHasBeenSet; }

    /**
     * <p>Provides information about how the field is used during a search.</p>
     */
    inline void SetSearch(const Search& value) { m_searchHasBeenSet = true; m_search = value; }

    /**
     * <p>Provides information about how the field is used during a search.</p>
     */
    inline void SetSearch(Search&& value) { m_searchHasBeenSet = true; m_search = std::move(value); }

    /**
     * <p>Provides information about how the field is used during a search.</p>
     */
    inline DocumentMetadataConfiguration& WithSearch(const Search& value) { SetSearch(value); return *this;}

    /**
     * <p>Provides information about how the field is used during a search.</p>
     */
    inline DocumentMetadataConfiguration& WithSearch(Search&& value) { SetSearch(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DocumentAttributeValueType m_type;
    bool m_typeHasBeenSet = false;

    Relevance m_relevance;
    bool m_relevanceHasBeenSet = false;

    Search m_search;
    bool m_searchHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
