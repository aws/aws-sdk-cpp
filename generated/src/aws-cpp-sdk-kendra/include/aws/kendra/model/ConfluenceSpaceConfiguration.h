/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ConfluenceSpaceToIndexFieldMapping.h>
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
   * <p>Configuration information for indexing Confluence spaces.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluenceSpaceConfiguration">AWS
   * API Reference</a></p>
   */
  class ConfluenceSpaceConfiguration
  {
  public:
    AWS_KENDRA_API ConfluenceSpaceConfiguration() = default;
    AWS_KENDRA_API ConfluenceSpaceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConfluenceSpaceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>TRUE</code> to index personal spaces. You can add restrictions to
     * items in personal spaces. If personal spaces are indexed, queries without user
     * context information may return restricted items from a personal space in their
     * results. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">Filtering
     * on user context</a>.</p>
     */
    inline bool GetCrawlPersonalSpaces() const { return m_crawlPersonalSpaces; }
    inline bool CrawlPersonalSpacesHasBeenSet() const { return m_crawlPersonalSpacesHasBeenSet; }
    inline void SetCrawlPersonalSpaces(bool value) { m_crawlPersonalSpacesHasBeenSet = true; m_crawlPersonalSpaces = value; }
    inline ConfluenceSpaceConfiguration& WithCrawlPersonalSpaces(bool value) { SetCrawlPersonalSpaces(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index archived spaces.</p>
     */
    inline bool GetCrawlArchivedSpaces() const { return m_crawlArchivedSpaces; }
    inline bool CrawlArchivedSpacesHasBeenSet() const { return m_crawlArchivedSpacesHasBeenSet; }
    inline void SetCrawlArchivedSpaces(bool value) { m_crawlArchivedSpacesHasBeenSet = true; m_crawlArchivedSpaces = value; }
    inline ConfluenceSpaceConfiguration& WithCrawlArchivedSpaces(bool value) { SetCrawlArchivedSpaces(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of space keys for Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are indexed. Spaces that aren't in the
     * list aren't indexed. A space in the list must exist. Otherwise, Amazon Kendra
     * logs an error when the data source is synchronized. If a space is in both the
     * <code>IncludeSpaces</code> and the <code>ExcludeSpaces</code> list, the space is
     * excluded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeSpaces() const { return m_includeSpaces; }
    inline bool IncludeSpacesHasBeenSet() const { return m_includeSpacesHasBeenSet; }
    template<typename IncludeSpacesT = Aws::Vector<Aws::String>>
    void SetIncludeSpaces(IncludeSpacesT&& value) { m_includeSpacesHasBeenSet = true; m_includeSpaces = std::forward<IncludeSpacesT>(value); }
    template<typename IncludeSpacesT = Aws::Vector<Aws::String>>
    ConfluenceSpaceConfiguration& WithIncludeSpaces(IncludeSpacesT&& value) { SetIncludeSpaces(std::forward<IncludeSpacesT>(value)); return *this;}
    template<typename IncludeSpacesT = Aws::String>
    ConfluenceSpaceConfiguration& AddIncludeSpaces(IncludeSpacesT&& value) { m_includeSpacesHasBeenSet = true; m_includeSpaces.emplace_back(std::forward<IncludeSpacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of space keys of Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are not indexed. If a space is in both
     * the <code>ExcludeSpaces</code> and the <code>IncludeSpaces</code> list, the
     * space is excluded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeSpaces() const { return m_excludeSpaces; }
    inline bool ExcludeSpacesHasBeenSet() const { return m_excludeSpacesHasBeenSet; }
    template<typename ExcludeSpacesT = Aws::Vector<Aws::String>>
    void SetExcludeSpaces(ExcludeSpacesT&& value) { m_excludeSpacesHasBeenSet = true; m_excludeSpaces = std::forward<ExcludeSpacesT>(value); }
    template<typename ExcludeSpacesT = Aws::Vector<Aws::String>>
    ConfluenceSpaceConfiguration& WithExcludeSpaces(ExcludeSpacesT&& value) { SetExcludeSpaces(std::forward<ExcludeSpacesT>(value)); return *this;}
    template<typename ExcludeSpacesT = Aws::String>
    ConfluenceSpaceConfiguration& AddExcludeSpaces(ExcludeSpacesT&& value) { m_excludeSpacesHasBeenSet = true; m_excludeSpaces.emplace_back(std::forward<ExcludeSpacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maps attributes or field names of Confluence spaces to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>SpaceFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline const Aws::Vector<ConfluenceSpaceToIndexFieldMapping>& GetSpaceFieldMappings() const { return m_spaceFieldMappings; }
    inline bool SpaceFieldMappingsHasBeenSet() const { return m_spaceFieldMappingsHasBeenSet; }
    template<typename SpaceFieldMappingsT = Aws::Vector<ConfluenceSpaceToIndexFieldMapping>>
    void SetSpaceFieldMappings(SpaceFieldMappingsT&& value) { m_spaceFieldMappingsHasBeenSet = true; m_spaceFieldMappings = std::forward<SpaceFieldMappingsT>(value); }
    template<typename SpaceFieldMappingsT = Aws::Vector<ConfluenceSpaceToIndexFieldMapping>>
    ConfluenceSpaceConfiguration& WithSpaceFieldMappings(SpaceFieldMappingsT&& value) { SetSpaceFieldMappings(std::forward<SpaceFieldMappingsT>(value)); return *this;}
    template<typename SpaceFieldMappingsT = ConfluenceSpaceToIndexFieldMapping>
    ConfluenceSpaceConfiguration& AddSpaceFieldMappings(SpaceFieldMappingsT&& value) { m_spaceFieldMappingsHasBeenSet = true; m_spaceFieldMappings.emplace_back(std::forward<SpaceFieldMappingsT>(value)); return *this; }
    ///@}
  private:

    bool m_crawlPersonalSpaces{false};
    bool m_crawlPersonalSpacesHasBeenSet = false;

    bool m_crawlArchivedSpaces{false};
    bool m_crawlArchivedSpacesHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeSpaces;
    bool m_includeSpacesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeSpaces;
    bool m_excludeSpacesHasBeenSet = false;

    Aws::Vector<ConfluenceSpaceToIndexFieldMapping> m_spaceFieldMappings;
    bool m_spaceFieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
