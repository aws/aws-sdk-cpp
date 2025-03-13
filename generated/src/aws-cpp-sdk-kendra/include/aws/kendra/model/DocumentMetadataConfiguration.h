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
    AWS_KENDRA_API DocumentMetadataConfiguration() = default;
    AWS_KENDRA_API DocumentMetadataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentMetadataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the index field.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DocumentMetadataConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the index field. </p>
     */
    inline DocumentAttributeValueType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DocumentAttributeValueType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DocumentMetadataConfiguration& WithType(DocumentAttributeValueType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides tuning parameters to determine how the field affects the search
     * results.</p>
     */
    inline const Relevance& GetRelevance() const { return m_relevance; }
    inline bool RelevanceHasBeenSet() const { return m_relevanceHasBeenSet; }
    template<typename RelevanceT = Relevance>
    void SetRelevance(RelevanceT&& value) { m_relevanceHasBeenSet = true; m_relevance = std::forward<RelevanceT>(value); }
    template<typename RelevanceT = Relevance>
    DocumentMetadataConfiguration& WithRelevance(RelevanceT&& value) { SetRelevance(std::forward<RelevanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about how the field is used during a search.</p>
     */
    inline const Search& GetSearch() const { return m_search; }
    inline bool SearchHasBeenSet() const { return m_searchHasBeenSet; }
    template<typename SearchT = Search>
    void SetSearch(SearchT&& value) { m_searchHasBeenSet = true; m_search = std::forward<SearchT>(value); }
    template<typename SearchT = Search>
    DocumentMetadataConfiguration& WithSearch(SearchT&& value) { SetSearch(std::forward<SearchT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DocumentAttributeValueType m_type{DocumentAttributeValueType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Relevance m_relevance;
    bool m_relevanceHasBeenSet = false;

    Search m_search;
    bool m_searchHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
